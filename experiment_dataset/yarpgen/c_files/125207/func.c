/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125207
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125207 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125207
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
    var_18 += ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) max((var_12), (((/* implicit */unsigned short) ((var_11) < (((/* implicit */unsigned int) ((/* implicit */int) var_13))))))))), (max((((/* implicit */unsigned long long int) ((var_7) & (((/* implicit */int) var_12))))), (((7831395934702578379ULL) ^ (((/* implicit */unsigned long long int) 2559475635U))))))));
    var_19 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (7831395934702578379ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_15)))))) ? (((((/* implicit */_Bool) 10615348139006973236ULL)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_0)))) : (((((/* implicit */int) var_0)) - (((/* implicit */int) (short)27500))))))) ? (((((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) | (6661432892164542751ULL))) | (((/* implicit */unsigned long long int) min((((/* implicit */int) var_15)), (var_7)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_10) & (((/* implicit */int) var_13))))) ? (((/* implicit */unsigned int) max((((/* implicit */int) var_6)), (-2147483637)))) : (min((573183106U), (((/* implicit */unsigned int) var_16)))))))));
    var_20 = ((/* implicit */_Bool) var_11);
    /* LoopNest 2 */
    for (unsigned short i_0 = 3; i_0 < 19; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (short i_2 = 0; i_2 < 23; i_2 += 2) 
                {
                    for (unsigned int i_3 = 0; i_3 < 23; i_3 += 4) 
                    {
                        for (int i_4 = 3; i_4 < 20; i_4 += 4) 
                        {
                            {
                                arr_13 [i_4] [i_3] [i_2] [i_2] [i_0] [i_0] = ((/* implicit */signed char) min(((((-(arr_6 [i_0] [i_3] [i_2]))) - (((/* implicit */unsigned int) ((/* implicit */int) var_2))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [i_3] [i_0] [i_0])) ? (((/* implicit */int) min((arr_4 [i_3] [i_2]), ((signed char)-104)))) : (max((((/* implicit */int) arr_5 [i_0 + 4] [i_0 + 4])), (var_7))))))));
                                var_21 = ((/* implicit */long long int) (-((((_Bool)1) ? ((~(var_11))) : ((~(var_8)))))));
                            }
                        } 
                    } 
                } 
                var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 0ULL)) ? (-2836728883355965466LL) : (8948054519628860477LL)))) ? (max((var_4), (arr_0 [i_0]))) : (((((/* implicit */_Bool) var_0)) ? (arr_7 [i_1] [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [(unsigned short)10] [i_1] [i_1] [i_0 + 1] [(unsigned short)10] [i_0])))))))), (((((/* implicit */_Bool) ((-7808521063857848552LL) | (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) ? (min((((/* implicit */unsigned long long int) (unsigned char)205)), (2346908208877821813ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_5 [i_1] [i_0])) >> (((1599916648) - (1599916646)))))))))))));
                /* LoopNest 2 */
                for (unsigned int i_5 = 0; i_5 < 23; i_5 += 2) 
                {
                    for (unsigned short i_6 = 0; i_6 < 23; i_6 += 2) 
                    {
                        {
                            arr_20 [i_6] [i_1] [i_1] [i_0] = ((/* implicit */long long int) (+((+(1669624573)))));
                            var_23 = ((/* implicit */short) (!(((((/* implicit */int) (short)-6112)) < (((/* implicit */int) (unsigned short)59207))))));
                            var_24 ^= max((((/* implicit */long long int) min((((/* implicit */int) var_0)), (((((((/* implicit */int) (signed char)-92)) + (2147483647))) >> (((((/* implicit */int) var_2)) + (10281)))))))), (((((/* implicit */_Bool) min((1509147800U), (arr_7 [i_1] [i_1] [i_5])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_19 [(short)11])) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (signed char)119))))) : (7641017878532768712LL))));
                        }
                    } 
                } 
            }
        } 
    } 
}
