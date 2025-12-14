/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17747
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17747 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17747
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
    var_11 = ((/* implicit */unsigned int) ((long long int) min((var_1), (((/* implicit */long long int) ((var_9) & (((/* implicit */int) (unsigned char)52))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 4; i_0 < 14; i_0 += 1) 
    {
        for (unsigned short i_1 = 3; i_1 < 12; i_1 += 2) 
        {
            {
                arr_4 [i_1 - 1] [i_1] [10LL] = ((/* implicit */unsigned char) max((((/* implicit */int) arr_2 [i_0] [9LL])), (((926293595) & (-926293587)))));
                /* LoopNest 2 */
                for (unsigned short i_2 = 3; i_2 < 14; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 15; i_3 += 4) 
                    {
                        {
                            arr_12 [i_3] [i_2] [12LL] [i_0] = -926293573;
                            var_12 = max((min((max((var_1), (((/* implicit */long long int) arr_5 [i_1 - 3])))), (((long long int) var_7)))), (((/* implicit */long long int) ((unsigned int) -926293611))));
                        }
                    } 
                } 
                arr_13 [i_0 - 4] [i_1 + 2] [4U] = ((/* implicit */unsigned int) max((((((long long int) 3667251962U)) - (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0 - 2] [i_0 + 1]))))), (((long long int) min((var_4), (((/* implicit */long long int) (unsigned char)174)))))));
                arr_14 [i_1 + 3] = max((arr_8 [i_1] [i_1] [i_0 + 1]), (((/* implicit */long long int) ((int) max((((/* implicit */long long int) (unsigned short)0)), ((-9223372036854775807LL - 1LL)))))));
                var_13 += ((/* implicit */unsigned int) min((((/* implicit */int) arr_2 [i_1] [i_0])), (((int) 8632941067362662636LL))));
            }
        } 
    } 
}
