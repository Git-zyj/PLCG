/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17175
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17175 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17175
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
    var_20 -= ((/* implicit */unsigned char) min((-2143488318690291788LL), (var_6)));
    var_21 = ((/* implicit */long long int) 3968);
    var_22 = ((/* implicit */unsigned int) min(((-(((var_18) / (((/* implicit */long long int) ((/* implicit */int) (short)10405))))))), (((/* implicit */long long int) ((var_9) << (((/* implicit */int) ((var_7) <= (3314896761U)))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 12; i_0 += 3) 
    {
        for (unsigned int i_1 = 1; i_1 < 14; i_1 += 3) 
        {
            {
                arr_6 [i_0] [i_1] &= ((/* implicit */unsigned short) max((((/* implicit */long long int) (!(((/* implicit */_Bool) min((var_17), (var_8))))))), (max((var_5), (((/* implicit */long long int) ((((/* implicit */_Bool) 3217258608U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (var_10))))))));
                var_23 = ((/* implicit */int) ((((((/* implicit */_Bool) ((0LL) | (((/* implicit */long long int) 980070548U))))) ? (((((/* implicit */_Bool) (unsigned short)6179)) ? (var_18) : (((/* implicit */long long int) (-2147483647 - 1))))) : (((/* implicit */long long int) (+(0U)))))) / (((/* implicit */long long int) ((((unsigned int) 980070548U)) - (((/* implicit */unsigned int) (+(-1921293721)))))))));
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 15; i_2 += 2) 
                {
                    for (unsigned short i_3 = 1; i_3 < 11; i_3 += 3) 
                    {
                        {
                            arr_11 [i_0 - 1] [i_3] [(short)7] [i_0] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) (-(4294967295U)))) % ((+(3451377474399230122ULL)))));
                            arr_12 [i_0] [i_1] [i_1] [i_1] [i_2] [i_3] = ((/* implicit */int) min((((((231912889988714593LL) - (((/* implicit */long long int) var_12)))) | (((/* implicit */long long int) max((var_15), (((/* implicit */int) var_19))))))), (((/* implicit */long long int) min((((var_0) | (var_17))), (((/* implicit */unsigned int) max(((unsigned short)38537), (((/* implicit */unsigned short) var_13))))))))));
                        }
                    } 
                } 
                arr_13 [(unsigned short)1] = ((/* implicit */int) ((((((/* implicit */_Bool) max((var_7), (((/* implicit */unsigned int) (_Bool)0))))) ? (((/* implicit */unsigned int) ((int) (unsigned char)30))) : (((1U) / (var_8))))) | (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (+(var_18)))) && (((/* implicit */_Bool) ((int) 980070534U)))))))));
                var_24 = ((/* implicit */long long int) (~(max(((~(((/* implicit */int) var_13)))), (((/* implicit */int) (_Bool)0))))));
            }
        } 
    } 
}
