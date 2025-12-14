/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142598
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142598 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142598
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
    var_20 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) var_8)), (min((((/* implicit */unsigned long long int) ((short) var_17))), (((((/* implicit */_Bool) var_14)) ? (var_3) : (var_4)))))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 8; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 11; i_2 += 4) 
            {
                {
                    var_21 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-(var_0))))))), (((unsigned char) (+(((/* implicit */int) (short)-7855)))))));
                    /* LoopSeq 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        /* LoopSeq 3 */
                        for (long long int i_4 = 0; i_4 < 11; i_4 += 4) 
                        {
                            var_22 += ((/* implicit */signed char) min((-1751336850), (((/* implicit */int) ((unsigned char) -78081520)))));
                            arr_17 [i_3] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)5)) >= (-289754356)));
                        }
                        for (short i_5 = 0; i_5 < 11; i_5 += 2) 
                        {
                            var_23 ^= ((/* implicit */unsigned long long int) (-((-(((/* implicit */int) var_19))))));
                            var_24 = ((/* implicit */unsigned long long int) (((-(((/* implicit */int) var_1)))) * (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) (unsigned char)10)) ? (var_4) : (((/* implicit */unsigned long long int) var_13))))))));
                            var_25 ^= ((((/* implicit */_Bool) ((((/* implicit */int) ((var_14) >= (((/* implicit */long long int) arr_6 [i_0] [i_0] [i_0]))))) * (((/* implicit */int) ((((/* implicit */int) (signed char)42)) <= (((/* implicit */int) arr_16 [i_0] [i_0 + 2] [i_2] [i_0] [i_0 - 1])))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) ((short) arr_4 [i_2]))))) : (((unsigned long long int) var_5)));
                            var_26 = ((/* implicit */int) min((var_26), (((/* implicit */int) (signed char)3))));
                        }
                        for (unsigned long long int i_6 = 1; i_6 < 9; i_6 += 2) 
                        {
                            arr_22 [i_3] [i_3] = ((/* implicit */short) arr_1 [i_2]);
                            var_27 = ((((/* implicit */int) (unsigned char)254)) % (((/* implicit */int) var_1)));
                            arr_23 [i_0] [i_0] [i_3] = ((/* implicit */short) (~(((((/* implicit */_Bool) arr_9 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_6 - 1])) ? (arr_9 [i_0 + 2] [i_0 + 1] [7ULL] [i_6 + 2]) : (((/* implicit */unsigned long long int) arr_5 [i_0 - 1] [i_0 + 1]))))));
                            var_28 = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_16 [i_0 + 1] [i_6] [i_3] [i_6 + 2] [i_6 + 2])) : (((/* implicit */int) arr_0 [i_0 - 1]))))));
                            var_29 &= ((/* implicit */signed char) min(((short)7855), ((short)-7876)));
                        }
                        var_30 = ((/* implicit */unsigned long long int) -3238866632127273594LL);
                        arr_24 [i_3] [i_1] [i_1] = ((/* implicit */unsigned long long int) (_Bool)0);
                    }
                    for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                    {
                        var_31 = ((/* implicit */long long int) (((-(((((/* implicit */_Bool) (-2147483647 - 1))) ? (1720452317967617936ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)7855))))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))));
                        arr_27 [i_0 + 1] [5LL] [i_2] [i_7] = max(((-(min((var_10), (((/* implicit */unsigned long long int) var_13)))))), (((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) arr_16 [i_0] [i_0] [i_2] [i_2] [i_7 - 1]))))) ? ((~(arr_11 [(short)5] [10ULL] [i_1] [i_0 + 1] [i_0]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)-27741)))))))));
                        /* LoopSeq 1 */
                        for (unsigned int i_8 = 0; i_8 < 11; i_8 += 3) 
                        {
                            var_32 = ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-27740))) & (arr_6 [i_2] [i_7] [i_8])))) ? (18446744073709551610ULL) : (((/* implicit */unsigned long long int) min((arr_14 [i_1] [i_2] [i_7] [i_8]), (((/* implicit */int) (short)-20467))))))) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_7])))));
                            var_33 = ((int) -1814163328);
                            var_34 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_2))))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (short)15417))));
                        }
                    }
                }
            } 
        } 
    } 
}
