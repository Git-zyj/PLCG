/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124018
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124018 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124018
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
    var_19 = ((/* implicit */unsigned short) min(((-((-(var_14))))), (((/* implicit */long long int) -407718579))));
    var_20 = ((/* implicit */int) ((((var_13) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_14)))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535)))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            {
                var_21 = ((/* implicit */int) min(((+(var_13))), (((/* implicit */unsigned long long int) arr_2 [i_0]))));
                var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) var_11))));
                arr_5 [i_0] [i_1] [(_Bool)1] = ((/* implicit */long long int) var_13);
            }
        } 
    } 
}
