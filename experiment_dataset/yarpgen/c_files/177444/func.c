/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177444
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177444 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177444
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 2; i_1 < 20; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_14 = ((/* implicit */_Bool) (~(min((((var_11) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) var_0)))), (((/* implicit */long long int) arr_7 [i_0] [13] [i_0] [i_0]))))));
                    arr_10 [i_2] [9LL] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (-2147483647 - 1))))) * (min((((/* implicit */unsigned long long int) ((arr_8 [i_0] [i_0] [i_0] [i_0]) > (((/* implicit */long long int) arr_7 [i_2] [20] [i_1] [i_0]))))), (((unsigned long long int) arr_0 [i_2]))))));
                    var_15 = ((/* implicit */unsigned char) var_10);
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */unsigned int) min((2147483647), (((/* implicit */int) (unsigned short)52739))));
}
