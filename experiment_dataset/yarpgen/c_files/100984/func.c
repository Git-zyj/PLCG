/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100984
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100984 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100984
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
    /* LoopSeq 2 */
    for (int i_0 = 3; i_0 < 9; i_0 += 1) 
    {
        var_12 = ((/* implicit */long long int) max((var_12), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) & (-8997831451545198864LL)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) -5784453574147461177LL))))) : (((arr_2 [i_0] [(short)6]) & (0)))))) | (((unsigned long long int) (+(-13)))))))));
        arr_3 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((max((((/* implicit */int) var_11)), (var_5))) >> ((((-(((/* implicit */int) var_6)))) + (143)))))) || (((/* implicit */_Bool) var_1))));
    }
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
    {
        var_13 = ((/* implicit */long long int) max((((((/* implicit */_Bool) arr_5 [i_1 - 1])) ? (arr_5 [i_1 - 1]) : (arr_5 [i_1 - 1]))), (((/* implicit */unsigned long long int) (+((~(-38))))))));
        var_14 = ((/* implicit */int) ((((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) (unsigned short)22821)) : (((/* implicit */int) (short)-32508))))) > (((long long int) 5737933634251130087LL))));
        var_15 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_1])) ? (arr_6 [i_1]) : (arr_6 [i_1]))))));
        var_16 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) min((arr_5 [i_1]), (((/* implicit */unsigned long long int) var_0))))) ? ((~(16))) : ((-(((/* implicit */int) (_Bool)1))))))) | ((+((~(3210029810U)))))));
        /* LoopSeq 2 */
        for (signed char i_2 = 3; i_2 < 16; i_2 += 4) 
        {
            var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_7 [i_1] [i_1])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_4 [i_2])))) + (((/* implicit */int) var_7))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 6244842966072600845LL))))) : (max((((((/* implicit */int) (unsigned short)42727)) - (((/* implicit */int) (signed char)17)))), (((((/* implicit */_Bool) 1775037880593716208LL)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_1))))))));
            arr_9 [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_7 [i_1] [i_1]))));
            arr_10 [i_1] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) min(((short)24524), (((/* implicit */short) (unsigned char)236))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_4 [i_1 - 1]), (arr_4 [i_1 - 1]))))) : (((((/* implicit */_Bool) ((short) -13))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (arr_5 [(unsigned char)8])))));
            var_18 = ((/* implicit */unsigned short) (~(((/* implicit */int) var_9))));
        }
        /* vectorizable */
        for (long long int i_3 = 0; i_3 < 20; i_3 += 3) 
        {
            /* LoopSeq 1 */
            for (short i_4 = 0; i_4 < 20; i_4 += 2) 
            {
                arr_16 [i_4] [9ULL] [i_1] [i_4] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_1] [i_1]))));
                var_19 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 5784453574147461177LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)42700))) : (328630164U))))));
                /* LoopNest 2 */
                for (unsigned int i_5 = 0; i_5 < 20; i_5 += 3) 
                {
                    for (unsigned long long int i_6 = 0; i_6 < 20; i_6 += 1) 
                    {
                        {
                            var_20 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) arr_17 [i_1] [i_1])) : (arr_13 [i_4] [i_4])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_8))))) : (((/* implicit */int) (_Bool)1))));
                            var_21 = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) arr_11 [i_1] [5])) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_3] [i_1]))) : (var_3)))));
                        }
                    } 
                } 
            }
            var_22 *= ((/* implicit */signed char) ((((/* implicit */int) var_1)) ^ (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_12 [16ULL] [i_3] [i_3]))) == (var_4))))));
            arr_23 [i_1] [i_1] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_21 [i_1] [i_3] [i_3] [i_3] [i_1]))))) ? (((((/* implicit */_Bool) arr_20 [i_1] [i_1] [i_1] [i_3] [(signed char)10])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (arr_17 [i_1] [i_1]))) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))));
        }
    }
    var_23 = ((/* implicit */unsigned int) min((min((((/* implicit */int) ((var_4) != (((/* implicit */long long int) ((/* implicit */int) (short)-28750)))))), (939737803))), (((/* implicit */int) (short)19689))));
}
