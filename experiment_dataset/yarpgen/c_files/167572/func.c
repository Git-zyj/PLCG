/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167572
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167572 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167572
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        var_11 = ((/* implicit */_Bool) max((((/* implicit */int) arr_1 [i_0] [i_0])), (min((((((/* implicit */int) var_1)) + (((/* implicit */int) arr_1 [(short)7] [i_0])))), (((/* implicit */int) max((var_0), (((/* implicit */signed char) var_9)))))))));
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_12 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((max((((/* implicit */unsigned long long int) (_Bool)1)), (var_8))), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0]))) > (var_6))))))) ? (((/* implicit */unsigned long long int) ((((_Bool) (signed char)-54)) ? (((/* implicit */int) min(((_Bool)0), (var_9)))) : (((/* implicit */int) ((((/* implicit */int) (signed char)65)) != (2147483633))))))) : (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (-1LL)))), (((((/* implicit */_Bool) (signed char)-54)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)31617))) : (6974534433225955954ULL)))))));
            var_13 ^= ((/* implicit */long long int) min(((~(((/* implicit */int) min((((/* implicit */short) var_7)), (arr_2 [i_0])))))), (((/* implicit */int) (!(((/* implicit */_Bool) min((var_6), (((/* implicit */long long int) var_9))))))))));
            /* LoopSeq 1 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                arr_6 [(signed char)6] [(signed char)6] [i_2] |= ((/* implicit */_Bool) (signed char)119);
                var_14 &= ((/* implicit */short) (((!(((/* implicit */_Bool) arr_2 [i_1])))) ? (((long long int) (_Bool)1)) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) max((var_3), (var_0)))) < (((/* implicit */int) ((_Bool) var_8)))))))));
            }
        }
        var_15 &= ((/* implicit */_Bool) var_4);
        var_16 &= ((/* implicit */long long int) ((((((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [i_0] [(short)1]))))) ? ((~(2642677660237520828ULL))) : (var_8))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))));
    }
    for (long long int i_3 = 1; i_3 < 13; i_3 += 2) 
    {
        arr_9 [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_8)) ? (arr_0 [(_Bool)1]) : (((/* implicit */int) var_3))))))) ? (((long long int) (((_Bool)1) ? (((/* implicit */int) var_5)) : (arr_0 [(short)20])))) : (((/* implicit */long long int) (~(((/* implicit */int) arr_3 [i_3 + 2])))))));
        /* LoopSeq 1 */
        for (signed char i_4 = 0; i_4 < 15; i_4 += 4) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (int i_5 = 0; i_5 < 15; i_5 += 4) 
            {
                arr_15 [i_5] [i_5] [i_4] [i_3] |= ((_Bool) (!(((/* implicit */_Bool) arr_0 [i_5]))));
                /* LoopSeq 2 */
                for (signed char i_6 = 4; i_6 < 14; i_6 += 2) 
                {
                    arr_18 [i_3] [9LL] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_3 [i_3 + 1])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) ((((/* implicit */int) (signed char)-87)) > (((/* implicit */int) arr_10 [i_3] [i_3] [i_3])))))));
                    arr_19 [i_3] [i_4] [(_Bool)1] [i_6] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (signed char)-66))))) ? (((/* implicit */long long int) ((/* implicit */int) ((short) (signed char)-111)))) : (((arr_12 [i_3] [i_4]) / (((/* implicit */long long int) ((/* implicit */int) (short)7602)))))));
                }
                for (signed char i_7 = 0; i_7 < 15; i_7 += 4) 
                {
                    var_17 |= ((/* implicit */unsigned short) (_Bool)1);
                    var_18 |= ((/* implicit */unsigned short) ((_Bool) 11286400284669244421ULL));
                    /* LoopSeq 1 */
                    for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
                    {
                        var_19 = ((/* implicit */_Bool) (~(((/* implicit */int) arr_11 [i_8 - 1] [i_4]))));
                        var_20 = ((((/* implicit */_Bool) (-(((/* implicit */int) var_7))))) ? (arr_12 [i_3 + 2] [i_8 - 1]) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_4 [i_4] [i_4] [i_4])) >= (((/* implicit */int) var_3)))))));
                        arr_24 [i_3] [i_3 + 1] [i_4] [i_5] [i_7] [i_8] [i_7] = ((((((/* implicit */_Bool) (short)24988)) || (((/* implicit */_Bool) var_8)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_1 [i_3] [i_5])))) : (arr_20 [i_3] [i_3] [i_5] [i_7] [i_8] [i_5]));
                        var_21 = ((/* implicit */signed char) ((((((/* implicit */int) (signed char)52)) != (((/* implicit */int) var_9)))) && (((/* implicit */_Bool) ((arr_16 [i_3] [i_4] [i_5] [(signed char)6] [i_5] [(signed char)6]) ? (((/* implicit */int) (short)19330)) : (((/* implicit */int) (signed char)-86)))))));
                    }
                    var_22 = ((((/* implicit */_Bool) arr_3 [i_3 + 2])) ? (((/* implicit */int) arr_21 [i_3] [i_3] [i_5])) : (((/* implicit */int) arr_23 [i_3])));
                }
            }
            var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) var_5))));
            arr_25 [i_3] &= ((/* implicit */long long int) arr_13 [i_4] [i_3]);
        }
        arr_26 [i_3] [i_3] = arr_4 [i_3] [i_3] [i_3];
    }
    for (signed char i_9 = 0; i_9 < 19; i_9 += 4) 
    {
        var_24 = ((/* implicit */_Bool) min((var_24), ((!(((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-127)))))))));
        var_25 -= ((/* implicit */_Bool) ((((arr_28 [i_9] [i_9]) == (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_1), (var_3))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((short) (!(((/* implicit */_Bool) var_3))))))) : (max((var_6), (((/* implicit */long long int) ((var_5) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) var_3)))))))));
    }
    var_26 = ((signed char) ((((var_5) ? (((/* implicit */int) (signed char)120)) : (((/* implicit */int) (_Bool)1)))) % (((((/* implicit */_Bool) (signed char)125)) ? (((/* implicit */int) (short)12685)) : (((/* implicit */int) (signed char)52))))));
    var_27 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) max((((((/* implicit */int) var_5)) - (((/* implicit */int) var_1)))), ((+(((/* implicit */int) (signed char)57))))))), (((((/* implicit */_Bool) var_3)) ? (min((((/* implicit */unsigned long long int) var_10)), (var_8))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_7), (((/* implicit */signed char) var_5))))))))));
    var_28 = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) var_7))))) <= (((/* implicit */int) var_1))));
}
