/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155440
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155440 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155440
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
    var_10 = ((/* implicit */long long int) min((var_10), (((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_0))))) ? (((/* implicit */int) (short)-4228)) : (((/* implicit */int) var_0)))) : (((/* implicit */int) var_9)))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (long long int i_1 = 1; i_1 < 24; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 25; i_2 += 3) 
                {
                    for (unsigned char i_3 = 1; i_3 < 23; i_3 += 3) 
                    {
                        {
                            arr_10 [(unsigned char)3] [(unsigned char)3] [(signed char)6] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 3937644812U)) ? (((/* implicit */int) (short)-4228)) : (((/* implicit */int) (unsigned char)42)))))));
                            var_11 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 858725446U)) ? (((/* implicit */int) (unsigned char)42)) : (((/* implicit */int) (short)4228))))) ? (((((/* implicit */_Bool) ((var_9) ? (var_8) : (var_8)))) ? (((var_3) ? (var_8) : (((/* implicit */int) var_3)))) : (((/* implicit */int) var_7)))) : (((/* implicit */int) var_1))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned char i_4 = 2; i_4 < 23; i_4 += 3) 
                {
                    for (short i_5 = 1; i_5 < 23; i_5 += 1) 
                    {
                        for (long long int i_6 = 0; i_6 < 25; i_6 += 3) 
                        {
                            {
                                var_12 ^= ((/* implicit */unsigned int) ((var_3) ? (var_8) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((var_8) >= (((/* implicit */int) var_3)))))) == (((((/* implicit */_Bool) var_8)) ? (var_4) : (((/* implicit */unsigned int) var_8)))))))));
                                var_13 = ((/* implicit */int) max((var_13), (var_8)));
                                var_14 *= ((/* implicit */unsigned int) ((((var_9) && (((/* implicit */_Bool) var_6)))) ? (((((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) var_4)) : (var_2))) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((-4751864876522386448LL) != (((/* implicit */long long int) ((/* implicit */int) (unsigned char)42))))))))) : (((var_1) ? (((/* implicit */unsigned long long int) var_6)) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) var_4)) : (var_2)))))));
                            }
                        } 
                    } 
                } 
                arr_21 [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((var_1) ? (((/* implicit */int) var_5)) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_7)) : (var_8)))))) ? (((var_9) ? (((((/* implicit */_Bool) (short)-4228)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)42))) : (793423480U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)4223)) ? (((/* implicit */int) (short)4219)) : (((/* implicit */int) (unsigned char)26))))))) : (((/* implicit */unsigned int) var_8))));
                arr_22 [i_1] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (2830949141U) : (((/* implicit */unsigned int) 482576254))))) ? (5868469367116696668ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_5)) >= (((/* implicit */int) ((var_2) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) -5305832255243172407LL)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-4235))) : (-9166972440795271001LL)))) ? (var_4) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_1))))))));
            }
        } 
    } 
}
