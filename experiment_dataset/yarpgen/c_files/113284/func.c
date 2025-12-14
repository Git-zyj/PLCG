/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113284
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113284 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113284
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
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (int i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            /* LoopSeq 2 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                var_15 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_2])) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_2))))) : (((((/* implicit */_Bool) (short)25850)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)0))))));
                var_16 -= ((/* implicit */unsigned short) (-(((/* implicit */int) var_5))));
                var_17 += ((/* implicit */unsigned int) var_3);
                var_18 = ((/* implicit */unsigned int) var_11);
                var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 2476757131U)) ? (arr_0 [i_2]) : (((/* implicit */int) var_3))))))))));
            }
            for (int i_3 = 3; i_3 < 23; i_3 += 2) 
            {
                /* LoopSeq 2 */
                for (short i_4 = 1; i_4 < 24; i_4 += 4) 
                {
                    arr_14 [i_4] [i_4] [i_1] [i_3 + 2] [i_3 + 2] [i_4] = ((/* implicit */long long int) (_Bool)1);
                    /* LoopSeq 2 */
                    for (int i_5 = 4; i_5 < 21; i_5 += 1) 
                    {
                        arr_17 [2ULL] [(_Bool)1] [i_4] [(_Bool)1] [(_Bool)1] = ((/* implicit */unsigned char) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))));
                        var_20 = ((/* implicit */short) (-(((/* implicit */int) arr_10 [i_4] [i_4 - 1] [i_4] [i_4 - 1]))));
                        var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (short)14411)) / (((/* implicit */int) arr_10 [i_3 - 3] [i_3 + 1] [i_3 + 2] [i_3 - 3]))));
                        arr_18 [i_0] [i_1] [i_4] [i_4] [i_5] [i_5] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~(arr_0 [i_0]))))));
                    }
                    for (int i_6 = 0; i_6 < 25; i_6 += 4) 
                    {
                        var_22 = ((/* implicit */short) (~(((/* implicit */int) arr_6 [i_3 - 3] [i_4 - 1] [i_4]))));
                        var_23 = ((/* implicit */int) arr_12 [i_4]);
                        var_24 = ((/* implicit */unsigned long long int) max((var_24), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (8740416069290294936ULL) : (((/* implicit */unsigned long long int) 1980484143))))))))));
                    }
                }
                for (int i_7 = 0; i_7 < 25; i_7 += 4) 
                {
                    var_25 -= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (~(154826616))))));
                    var_26 = ((/* implicit */_Bool) min((var_26), (((/* implicit */_Bool) ((((/* implicit */_Bool) (~(arr_22 [i_0] [i_0] [i_1] [i_3] [i_7] [i_3])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : ((~(1003128945294923919ULL))))))));
                    /* LoopSeq 1 */
                    for (signed char i_8 = 1; i_8 < 24; i_8 += 4) 
                    {
                        var_27 = (short)14411;
                        arr_27 [i_8] [i_8] [i_3] [i_8] [i_3] = ((/* implicit */int) (~(((((/* implicit */_Bool) arr_23 [i_8])) ? (890717958U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)0)))))));
                    }
                }
                var_28 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((((/* implicit */int) (short)-1884)) + (2147483647))) << (((var_4) - (96409272)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 2476757131U))))) : (((/* implicit */int) arr_19 [i_3 + 2] [i_0] [i_0] [i_0]))));
                var_29 = ((/* implicit */signed char) min((var_29), (((/* implicit */signed char) (~(1601684092))))));
            }
            var_30 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_0] [i_0] [i_1] [i_1]))) / (var_9)));
        }
        for (unsigned long long int i_9 = 0; i_9 < 25; i_9 += 2) 
        {
            var_31 += ((((/* implicit */_Bool) max((min(((signed char)9), (var_3))), (((/* implicit */signed char) (!((_Bool)1))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) min((var_7), (((/* implicit */unsigned long long int) 749509870U)))))))) : ((-(((/* implicit */int) (unsigned short)65518)))));
            var_32 = ((/* implicit */unsigned short) (-(((((((/* implicit */_Bool) var_2)) ? (2974604901235981344LL) : (((/* implicit */long long int) 1879048192U)))) & (((/* implicit */long long int) ((((/* implicit */_Bool) 2476757131U)) ? (var_11) : (((/* implicit */int) (unsigned short)17)))))))));
        }
        var_33 = ((/* implicit */unsigned long long int) min((var_33), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((arr_0 [i_0]) / (arr_0 [i_0])))) : (arr_20 [i_0] [i_0] [(short)7] [i_0] [i_0])))));
        var_34 &= ((((/* implicit */unsigned long long int) (~(var_9)))) < (min(((((_Bool)1) ? (((/* implicit */unsigned long long int) -177435232)) : (1003128945294923931ULL))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_5))))))));
    }
    var_35 = (+((~(var_11))));
    var_36 = ((/* implicit */long long int) min((((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_5))))) : (var_2))), (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) 14559440326947845420ULL)) ? (((/* implicit */int) (short)14411)) : (var_4))), ((~(((/* implicit */int) var_8)))))))));
}
