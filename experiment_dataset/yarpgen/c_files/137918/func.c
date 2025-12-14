/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137918
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137918 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137918
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
    var_19 = ((/* implicit */short) (((!(((/* implicit */_Bool) var_17)))) ? (max((min((var_6), (((/* implicit */unsigned long long int) var_14)))), (((/* implicit */unsigned long long int) ((unsigned char) (unsigned char)218))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))));
    var_20 = ((/* implicit */short) ((int) ((unsigned char) ((unsigned char) var_9))));
    var_21 = ((/* implicit */unsigned long long int) ((short) 31457280));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 2; i_0 < 13; i_0 += 2) 
    {
        for (unsigned char i_1 = 1; i_1 < 11; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 1) 
                {
                    for (unsigned char i_3 = 0; i_3 < 14; i_3 += 4) 
                    {
                        {
                            var_22 = ((short) var_14);
                            arr_14 [i_3] [i_1] [i_2] [(unsigned char)0] [i_3] = ((/* implicit */int) arr_9 [i_0 - 1] [i_0 - 1]);
                            var_23 = ((/* implicit */unsigned long long int) ((unsigned char) min((var_9), (max((((/* implicit */unsigned long long int) var_14)), (var_18))))));
                        }
                    } 
                } 
                var_24 = ((/* implicit */int) var_4);
            }
        } 
    } 
}
