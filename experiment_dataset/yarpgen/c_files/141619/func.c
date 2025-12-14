/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141619
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141619 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141619
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
    /* LoopNest 2 */
    for (unsigned int i_0 = 2; i_0 < 10; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 1) 
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (signed char i_3 = 3; i_3 < 11; i_3 += 1) 
                    {
                        arr_12 [i_0] [i_1] [i_0] [i_3] = ((/* implicit */unsigned short) 13261271240463869668ULL);
                        var_16 = ((/* implicit */long long int) (-(((/* implicit */int) arr_10 [i_1] [i_0 + 1] [i_0] [i_1] [i_1] [i_3]))));
                        var_17 = ((/* implicit */unsigned long long int) (~(var_1)));
                        var_18 = (~(((((/* implicit */_Bool) arr_3 [i_2])) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1))))));
                    }
                    for (long long int i_4 = 0; i_4 < 12; i_4 += 2) 
                    {
                        var_19 = min(((~(((((/* implicit */_Bool) (short)14)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (4294967295U))))), (((/* implicit */unsigned int) arr_4 [i_1])));
                        var_20 = ((/* implicit */_Bool) max((((/* implicit */long long int) (short)15)), (9089621402969227802LL)));
                        var_21 = ((/* implicit */unsigned short) ((((/* implicit */int) max(((short)14), (((/* implicit */short) (signed char)8))))) | (1048575)));
                        var_22 ^= ((/* implicit */unsigned int) max((arr_7 [i_1] [i_1] [i_1]), (min((((((/* implicit */_Bool) arr_8 [i_0] [i_2] [i_4])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_8)))), ((-(((/* implicit */int) var_12))))))));
                    }
                    for (unsigned long long int i_5 = 3; i_5 < 10; i_5 += 4) 
                    {
                        /* LoopSeq 1 */
                        for (int i_6 = 2; i_6 < 10; i_6 += 2) 
                        {
                            arr_20 [(unsigned short)5] [i_1] = ((/* implicit */int) min((((/* implicit */unsigned long long int) max(((signed char)8), (((/* implicit */signed char) (_Bool)1))))), (max((((/* implicit */unsigned long long int) max((((/* implicit */long long int) (unsigned short)16797)), (var_11)))), (arr_3 [i_0])))));
                            arr_21 [i_0 + 2] [(unsigned short)4] [i_0 + 2] [i_5] [i_1] [i_0] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) 1048566)), (3ULL)));
                        }
                        var_23 = ((/* implicit */unsigned short) arr_6 [i_1]);
                        var_24 = ((/* implicit */int) min((max((arr_6 [i_1]), (((/* implicit */unsigned int) arr_13 [i_1] [i_0 - 1] [i_5 + 2] [i_0 - 1] [i_0 - 1])))), (arr_6 [i_1])));
                    }
                    var_25 = ((/* implicit */_Bool) ((((/* implicit */int) arr_17 [8U] [i_0 + 2] [i_0 - 2] [i_0 + 1] [i_2])) | (((/* implicit */int) var_12))));
                }
                /* LoopNest 2 */
                for (unsigned int i_7 = 2; i_7 < 11; i_7 += 4) 
                {
                    for (unsigned int i_8 = 4; i_8 < 11; i_8 += 2) 
                    {
                        {
                            var_26 = ((/* implicit */unsigned int) ((max((((/* implicit */int) arr_14 [i_0 + 1] [i_1] [4ULL] [i_8] [i_8])), (arr_4 [i_1]))) > (((/* implicit */int) arr_14 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_8] [i_8]))));
                            arr_28 [i_1] = ((((/* implicit */unsigned long long int) ((((((((/* implicit */int) (short)-1)) & (((/* implicit */int) (signed char)-116)))) + (2147483647))) << (((2098210161) - (2098210161)))))) - (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)117)) ? (((/* implicit */unsigned int) -1853127227)) : (arr_16 [i_0] [i_1] [i_1] [i_8 - 4] [i_7] [(unsigned short)0])))) ? ((~(16888649826621646261ULL))) : (((/* implicit */unsigned long long int) max((arr_15 [i_0] [i_1]), (((/* implicit */unsigned int) var_7))))))));
                            arr_29 [i_1] [i_1] [(unsigned short)3] [(unsigned short)0] [i_1] [(unsigned short)3] = ((/* implicit */unsigned short) ((max((((/* implicit */unsigned long long int) arr_7 [2U] [i_0 + 1] [i_0])), ((~(var_5))))) >= (((/* implicit */unsigned long long int) arr_16 [i_8 - 4] [i_7 - 2] [i_1] [i_1] [i_0] [i_0 + 2]))));
                            var_27 = ((/* implicit */unsigned short) max((17179869183ULL), (((/* implicit */unsigned long long int) ((short) (unsigned short)62983)))));
                        }
                    } 
                } 
                var_28 = ((/* implicit */long long int) arr_16 [10] [10] [i_1] [i_1] [i_0 + 2] [i_1]);
                var_29 = ((/* implicit */short) ((_Bool) max((arr_5 [i_0 + 2]), (((/* implicit */unsigned int) arr_14 [i_0] [i_0] [i_0 + 2] [i_0 + 1] [i_0 - 2])))));
                var_30 = ((/* implicit */short) min((13410320253939801575ULL), (((/* implicit */unsigned long long int) 2717128708U))));
            }
        } 
    } 
    var_31 = ((/* implicit */short) ((((/* implicit */unsigned long long int) min((((/* implicit */int) (signed char)123)), (-1853127223)))) != (var_3)));
}
