/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155266
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155266 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155266
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
    var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((-1LL) + (9223372036854775807LL))) >> (((var_17) + (1442432039)))))) ? (((long long int) (_Bool)1)) : (((/* implicit */long long int) var_2)))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_21 = ((/* implicit */_Bool) max((((/* implicit */int) (_Bool)1)), ((~(((/* implicit */int) arr_5 [i_0]))))));
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            arr_12 [i_0] [(unsigned char)9] [i_2] [4] = ((/* implicit */unsigned long long int) (-(max((1920U), (((/* implicit */unsigned int) var_5))))));
                            var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_1))) > (((unsigned int) arr_1 [i_1]))));
                        }
                    } 
                } 
            }
        } 
    } 
}
