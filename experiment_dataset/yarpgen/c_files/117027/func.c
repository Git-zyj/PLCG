/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117027
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117027 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117027
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 20; i_2 += 3) 
            {
                {
                    var_11 = ((/* implicit */int) min((var_11), (((/* implicit */int) min((((/* implicit */unsigned long long int) (-(var_6)))), (min((((/* implicit */unsigned long long int) ((((/* implicit */int) var_4)) <= (((/* implicit */int) var_10))))), (min((((/* implicit */unsigned long long int) var_8)), (var_2))))))))));
                    /* LoopSeq 2 */
                    for (unsigned short i_3 = 1; i_3 < 19; i_3 += 2) 
                    {
                        arr_12 [0] [i_3] [i_2] = ((/* implicit */short) ((((long long int) min((var_6), (((/* implicit */int) (_Bool)0))))) >> ((((((-(9223372036854775807LL))) - (-9223372036854775782LL))) + (76LL)))));
                        var_12 = ((/* implicit */int) ((((((/* implicit */_Bool) max((8425235200716345707ULL), (((/* implicit */unsigned long long int) (signed char)116))))) ? ((~(-1LL))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)13))))) <= (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                        arr_13 [i_0] [i_1] [i_2] [0LL] [i_2] = ((/* implicit */_Bool) (-((~(((/* implicit */int) var_10))))));
                        var_13 = ((/* implicit */short) ((long long int) (~(var_6))));
                    }
                    for (int i_4 = 0; i_4 < 20; i_4 += 2) 
                    {
                        var_14 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) var_8)) ? (var_2) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_10)) / (var_6)))))), (((unsigned long long int) var_10))));
                        var_15 = ((/* implicit */int) var_3);
                        arr_17 [(unsigned short)3] [i_1] [i_2] [i_4] = (-(min((((/* implicit */int) var_5)), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_4)))))));
                    }
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 0; i_5 < 20; i_5 += 1) 
                    {
                        for (int i_6 = 2; i_6 < 19; i_6 += 1) 
                        {
                            {
                                arr_22 [(short)5] [i_2] [i_5] [i_6] = ((/* implicit */signed char) ((short) min((((((/* implicit */_Bool) -1272278044)) ? (((/* implicit */int) (short)16164)) : (((/* implicit */int) (unsigned short)31)))), (((/* implicit */int) (unsigned short)31)))));
                                arr_23 [i_0] [i_1] [(signed char)0] [i_5] [i_6] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) min((var_4), (max((((/* implicit */short) (_Bool)0)), (var_7)))))), (min((((unsigned long long int) 3657301096U)), (((/* implicit */unsigned long long int) (_Bool)1))))));
                            }
                        } 
                    } 
                    arr_24 [14] [i_1] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */int) var_3)), (var_6)))) ? (((/* implicit */int) max((((/* implicit */unsigned char) var_5)), ((unsigned char)228)))) : (((/* implicit */int) var_9))));
                    arr_25 [i_0] [i_1] [(unsigned char)19] [(unsigned char)5] = ((/* implicit */long long int) min((var_10), (((/* implicit */unsigned char) ((signed char) min((((/* implicit */unsigned short) var_8)), (var_3)))))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */signed char) var_2);
    var_17 &= ((/* implicit */_Bool) ((short) ((unsigned char) ((int) var_10))));
    var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) (~(var_2))))));
}
