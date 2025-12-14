/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146364
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146364 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146364
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
    for (signed char i_0 = 2; i_0 < 19; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 20; i_2 += 1) 
                {
                    for (unsigned int i_3 = 0; i_3 < 20; i_3 += 4) 
                    {
                        {
                            var_15 &= ((/* implicit */_Bool) max((arr_4 [i_1] [i_3]), (((/* implicit */unsigned int) ((((/* implicit */int) arr_7 [i_1] [i_0] [i_1])) - (((/* implicit */int) arr_7 [i_3] [i_0] [i_3])))))));
                            var_16 = ((((/* implicit */_Bool) arr_1 [i_0] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) min(((short)0), (((/* implicit */short) arr_2 [i_0])))))) : (((((/* implicit */_Bool) (~(162152835)))) ? (3982585457U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0] [i_1] [i_0]))))));
                        }
                    } 
                } 
                var_17 = (i_0 % 2 == zero) ? (((/* implicit */unsigned int) ((((((/* implicit */int) arr_0 [i_0])) << (((((/* implicit */int) arr_0 [i_0])) - (9180))))) - (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) >= (var_12))))))) : (((/* implicit */unsigned int) ((((((/* implicit */int) arr_0 [i_0])) << (((((((/* implicit */int) arr_0 [i_0])) - (9180))) - (5920))))) - (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) >= (var_12)))))));
                var_18 = ((/* implicit */unsigned int) min(((-(var_8))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_0])) & (((/* implicit */int) arr_0 [i_0])))))));
                arr_9 [i_0] [i_1] = ((/* implicit */unsigned int) max((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 2147483644)) && (((/* implicit */_Bool) 3761632192097902024LL)))))) ^ (((((/* implicit */_Bool) arr_4 [i_0] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-30379))) : (arr_8 [i_0] [i_0] [i_1] [(signed char)2])))))), ((-(var_2)))));
                var_19 = ((/* implicit */long long int) (~((~(((/* implicit */int) arr_6 [(unsigned short)9] [i_0] [i_0] [i_1]))))));
            }
        } 
    } 
    var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_2), (((/* implicit */long long int) var_3))))) ? (((/* implicit */unsigned long long int) max((((/* implicit */int) ((((/* implicit */int) (unsigned short)22616)) < (((/* implicit */int) (_Bool)0))))), ((~(var_7)))))) : (var_12)));
}
