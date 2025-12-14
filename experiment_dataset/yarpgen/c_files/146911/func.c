/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146911
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146911 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146911
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
    for (signed char i_0 = 1; i_0 < 21; i_0 += 1) 
    {
        for (signed char i_1 = 4; i_1 < 22; i_1 += 3) 
        {
            {
                arr_5 [i_1] [i_1] [i_1] = ((/* implicit */_Bool) 710075705);
                /* LoopSeq 3 */
                for (long long int i_2 = 2; i_2 < 22; i_2 += 1) 
                {
                    var_16 = ((/* implicit */int) (unsigned short)23657);
                    var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) 710075690))));
                    var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) (~((+(((/* implicit */int) arr_2 [i_1 - 1])))))))));
                }
                for (unsigned long long int i_3 = 0; i_3 < 23; i_3 += 3) 
                {
                    arr_11 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) min((((/* implicit */int) ((signed char) (!((_Bool)1))))), (1048575)));
                    var_19 = ((/* implicit */unsigned long long int) 710075706);
                    arr_12 [i_0] [22U] [i_0] = ((/* implicit */int) ((unsigned long long int) (unsigned short)41892));
                    var_20 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */int) (unsigned short)23657)), (710075709)))) ? (((((/* implicit */_Bool) var_1)) ? (arr_7 [i_1] [i_3]) : (((/* implicit */long long int) ((/* implicit */int) var_7))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) 710075690)) : (arr_6 [i_3] [i_1] [i_0 + 2] [i_0]))))))) ? (((/* implicit */int) ((_Bool) (~(arr_7 [i_1] [(signed char)20]))))) : (((/* implicit */int) arr_8 [i_0])));
                }
                for (unsigned char i_4 = 0; i_4 < 23; i_4 += 2) 
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_5 = 0; i_5 < 23; i_5 += 3) 
                    {
                        var_21 += ((/* implicit */signed char) 918128975U);
                        arr_17 [i_0 + 1] [i_1] [i_4] [i_5] = ((/* implicit */short) max((((((/* implicit */_Bool) arr_16 [i_1 - 3] [i_1 - 3] [i_1 - 3] [i_1 - 1])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned char)173)))), (((/* implicit */int) (!(((/* implicit */_Bool) 710075690)))))));
                        var_22 = ((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_1 - 3] [i_0]);
                    }
                    var_23 |= ((/* implicit */short) max((((((/* implicit */_Bool) ((short) var_1))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) arr_2 [i_1 - 1]))))) : (min((((/* implicit */unsigned int) arr_16 [i_4] [i_4] [i_4] [i_4])), (1453028997U))))), (((/* implicit */unsigned int) arr_15 [i_0] [i_1] [i_1] [i_4]))));
                    /* LoopNest 2 */
                    for (short i_6 = 0; i_6 < 23; i_6 += 1) 
                    {
                        for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                        {
                            {
                                var_24 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) 337086631)) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))) : (arr_6 [i_0] [i_4] [i_6] [i_7])))));
                                arr_22 [i_0 + 1] [i_6] [i_6] = ((/* implicit */unsigned long long int) arr_3 [(unsigned char)16] [i_0] [i_6]);
                                var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) (unsigned char)7))) ? (arr_1 [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_4])) ? (43325088) : (((/* implicit */int) (unsigned short)9261)))))))) ? (((/* implicit */long long int) min((((arr_20 [i_0] [i_0] [i_6] [i_6] [i_0 - 1]) ? (((/* implicit */int) (signed char)92)) : (((/* implicit */int) arr_3 [i_7] [i_4] [i_0])))), (((((/* implicit */int) arr_2 [i_0 + 2])) * (((/* implicit */int) arr_4 [i_7] [i_7 - 1] [i_7]))))))) : (((-15LL) - (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)23655)) ? (((/* implicit */int) (signed char)68)) : (((/* implicit */int) arr_9 [i_4] [i_0 + 2])))))))));
                            }
                        } 
                    } 
                }
                var_26 *= ((/* implicit */_Bool) max((((/* implicit */int) (signed char)-100)), (710075705)));
                arr_23 [i_0] [i_1 + 1] [i_1] = ((/* implicit */_Bool) -43325088);
                var_27 = ((/* implicit */unsigned int) max((var_27), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) var_6)) >> (((((((/* implicit */_Bool) (unsigned short)23630)) ? (((/* implicit */int) (unsigned char)38)) : (((/* implicit */int) (_Bool)1)))) - (24)))))) ? (((/* implicit */int) ((unsigned char) ((((/* implicit */int) (short)-22991)) < (((/* implicit */int) (_Bool)1)))))) : (((/* implicit */int) min(((signed char)-112), ((signed char)15)))))))));
            }
        } 
    } 
    var_28 = ((/* implicit */_Bool) ((((/* implicit */int) var_2)) >> (((((((/* implicit */int) max((((/* implicit */unsigned short) var_0)), ((unsigned short)27435)))) >> (((((/* implicit */_Bool) 43325084)) ? (0) : (((/* implicit */int) (unsigned short)4)))))) - (27423)))));
}
