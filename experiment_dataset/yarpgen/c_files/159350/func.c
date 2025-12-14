/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159350
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159350 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159350
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
    for (signed char i_0 = 1; i_0 < 18; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 20; i_2 += 3) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            arr_10 [i_0 + 2] [i_0] [i_2] [i_3] = ((/* implicit */unsigned short) (!(var_3)));
                            arr_11 [i_0] [i_0] [(unsigned short)4] [i_0] [(signed char)8] &= ((((/* implicit */int) var_5)) != (((/* implicit */int) ((((/* implicit */int) ((_Bool) 2147483647))) < (var_2)))));
                            var_16 = ((/* implicit */unsigned short) (~(((((/* implicit */int) ((((/* implicit */unsigned long long int) var_14)) >= (var_0)))) ^ (((/* implicit */int) arr_9 [i_0] [i_1] [i_2] [i_0] [i_0 - 1]))))));
                        }
                    } 
                } 
                arr_12 [i_0] [(signed char)2] |= ((/* implicit */long long int) arr_9 [i_0] [i_0 + 1] [i_0 + 1] [i_1] [14U]);
                var_17 = ((/* implicit */_Bool) ((((unsigned int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) var_12)) : (var_8)))) << (((((int) var_2)) - (211967407)))));
                var_18 += ((/* implicit */signed char) (~(var_13)));
            }
        } 
    } 
    var_19 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_5))))) : (var_12)))));
}
