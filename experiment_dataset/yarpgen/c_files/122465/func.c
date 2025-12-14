/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122465
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122465 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122465
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
    var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) (((((-(((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_2)))))) + (2147483647))) >> (((min((((/* implicit */long long int) ((int) var_1))), (((((/* implicit */_Bool) var_7)) ? (var_15) : (((/* implicit */long long int) ((/* implicit */int) var_2))))))) + (1591209824430322171LL))))))));
    var_18 += ((/* implicit */_Bool) var_3);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (unsigned char i_1 = 2; i_1 < 17; i_1 += 2) 
        {
            {
                var_19 = min((((((/* implicit */_Bool) ((unsigned char) 1644671048535200979LL))) ? (((((/* implicit */long long int) 1234290284)) % (-7256137003293628290LL))) : (((/* implicit */long long int) var_10)))), (((/* implicit */long long int) ((int) (unsigned char)32))));
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 18; i_2 += 3) 
                {
                    for (long long int i_3 = 1; i_3 < 17; i_3 += 4) 
                    {
                        {
                            var_20 = ((/* implicit */_Bool) (~((-(((long long int) var_6))))));
                            var_21 = ((/* implicit */signed char) min(((-(((((/* implicit */_Bool) var_2)) ? (var_0) : (var_14))))), (((long long int) (!(((/* implicit */_Bool) var_13)))))));
                            var_22 = ((/* implicit */unsigned char) 1630144811U);
                            arr_10 [i_2] = ((long long int) ((((/* implicit */_Bool) arr_6 [i_1] [i_1 - 2] [i_1 - 1] [8LL])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_1] [i_1 - 2] [i_1 - 1] [i_1 + 1]))) : (var_3)));
                        }
                    } 
                } 
            }
        } 
    } 
}
