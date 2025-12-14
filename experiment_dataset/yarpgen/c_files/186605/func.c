/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186605
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186605 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186605
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
    var_12 -= ((/* implicit */unsigned long long int) var_9);
    var_13 = ((/* implicit */long long int) min((var_13), (((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) var_6)) ? (var_11) : (((/* implicit */int) var_4)))))) || (((((((/* implicit */long long int) ((/* implicit */int) var_1))) | (var_0))) >= (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) (unsigned char)200)))))))))));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) max((var_3), (((/* implicit */short) var_6)))))) : ((-(var_0))))) * (((/* implicit */long long int) arr_0 [i_0]))));
        /* LoopSeq 1 */
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            var_14 = ((/* implicit */long long int) max((var_14), (((/* implicit */long long int) (short)-6885))));
            var_15 &= ((/* implicit */signed char) var_10);
            var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_5)))) % (-8861570185348426639LL)))) ? (((/* implicit */long long int) ((/* implicit */int) (short)23762))) : (((((/* implicit */_Bool) var_4)) ? (var_2) : (((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)195))))))))))));
            var_17 += ((/* implicit */long long int) min((((/* implicit */unsigned int) max((arr_4 [i_0]), (arr_4 [i_0])))), (min((((((/* implicit */unsigned int) var_11)) | (2206888034U))), (((/* implicit */unsigned int) ((var_8) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))))))));
            var_18 &= ((((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_0] [i_1])) / (arr_0 [i_1])))) ? (((/* implicit */unsigned long long int) ((long long int) (_Bool)1))) : (((unsigned long long int) 218039727400308386LL)));
        }
        /* LoopSeq 2 */
        for (long long int i_2 = 4; i_2 < 6; i_2 += 2) 
        {
            arr_8 [i_0] [3LL] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 2090862528)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_2 + 2] [i_2 + 2])) ? (((/* implicit */int) arr_3 [i_2 + 2] [i_2 + 2])) : (((/* implicit */int) arr_3 [i_2 + 2] [i_2 + 2])))))));
            /* LoopSeq 1 */
            for (unsigned short i_3 = 4; i_3 < 6; i_3 += 3) 
            {
                var_19 += ((/* implicit */unsigned char) ((((((/* implicit */_Bool) 4281330951U)) ? (arr_9 [(unsigned short)3] [i_2 + 3] [(unsigned short)3]) : (arr_9 [i_0] [i_0] [i_0]))) != ((-(arr_9 [i_2 + 1] [i_2 + 1] [i_0])))));
                /* LoopSeq 2 */
                for (unsigned char i_4 = 0; i_4 < 10; i_4 += 4) 
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned short i_5 = 0; i_5 < 10; i_5 += 2) 
                    {
                        arr_17 [(_Bool)1] [i_2] [i_2] = ((/* implicit */unsigned short) ((int) arr_14 [7U] [i_2] [i_3 + 4] [7U]));
                        arr_18 [i_2] [i_3 - 2] &= ((/* implicit */unsigned int) arr_9 [i_0] [i_3] [i_0]);
                    }
                    var_20 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_2 + 1] [i_3 - 4] [i_4])) ? (6506186100147190556LL) : (((/* implicit */long long int) 4294406691U))))) ? (((/* implicit */int) max((arr_11 [i_2 + 3] [i_3 - 4] [i_3 - 4]), (arr_11 [i_2 - 3] [i_3 - 1] [i_4])))) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_11 [i_2 - 3] [i_3 - 1] [i_3]))) < (var_9))))));
                    var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) max((((((/* implicit */long long int) ((/* implicit */int) (signed char)109))) - (max((var_0), (((/* implicit */long long int) var_3)))))), (((/* implicit */long long int) arr_12 [i_3 - 2] [i_3] [i_2 + 4])))))));
                }
                for (long long int i_6 = 0; i_6 < 10; i_6 += 2) 
                {
                    var_22 -= ((/* implicit */short) ((unsigned char) ((((/* implicit */_Bool) ((short) (_Bool)0))) ? (((unsigned long long int) arr_12 [i_6] [i_0] [i_0])) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_1)) >= (((/* implicit */int) var_3)))))))));
                    arr_23 [i_0] [(unsigned short)1] [i_3] [i_6] = ((/* implicit */short) var_10);
                }
                var_23 = ((/* implicit */_Bool) ((1741281695815766093LL) + (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (-4376923688250939040LL) : (((/* implicit */long long int) ((/* implicit */int) arr_22 [i_3] [i_0])))))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_0))))))))));
                var_24 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (-(arr_16 [i_0] [i_2] [i_3] [i_3] [i_2])))) & (((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) ^ (arr_19 [i_0] [i_2 + 4] [i_3 - 1] [i_3 + 3])))))) ? ((~(((long long int) arr_22 [i_0] [i_0])))) : (((/* implicit */long long int) ((((/* implicit */int) (short)4124)) & ((-(((/* implicit */int) (_Bool)1)))))))));
            }
        }
        for (signed char i_7 = 0; i_7 < 10; i_7 += 3) 
        {
            var_25 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_15 [i_0] [i_0] [i_0]) >> (((var_2) - (6700040587273222222LL)))))) ? (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)35572)) / (((/* implicit */int) var_1))))) : (((arr_16 [i_0] [i_0] [i_0] [i_7] [i_7]) - (((/* implicit */long long int) arr_15 [i_0] [i_0] [i_7]))))));
            var_26 = ((/* implicit */short) arr_21 [i_0] [i_0] [i_7] [i_7]);
            var_27 += ((/* implicit */long long int) max((((unsigned long long int) ((((/* implicit */_Bool) arr_14 [i_0] [i_7] [i_0] [i_7])) && (((/* implicit */_Bool) var_8))))), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) var_6))))), (var_2))))));
        }
        var_28 = ((/* implicit */short) max((arr_10 [(short)5] [i_0] [(short)1]), (((/* implicit */unsigned long long int) var_1))));
    }
}
