/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140935
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140935 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140935
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
    var_12 += ((/* implicit */unsigned char) (-(((/* implicit */int) var_3))));
    var_13 = ((((((/* implicit */_Bool) ((((/* implicit */int) var_11)) & (((/* implicit */int) var_11))))) ? (min((((/* implicit */int) var_10)), (450505450))) : (((/* implicit */int) var_5)))) >= (-202277868));
    var_14 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) ((signed char) (unsigned short)2453)))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) max((var_6), (((/* implicit */unsigned short) var_9)))))))) : (max((((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (var_0))), (((/* implicit */unsigned long long int) var_11))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 1; i_1 < 23; i_1 += 2) 
        {
            {
                var_15 = ((/* implicit */short) ((((/* implicit */int) (unsigned short)50956)) / (-202277868)));
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 25; i_3 += 3) 
                    {
                        {
                            var_16 = ((/* implicit */unsigned int) ((var_0) | (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_8 [i_3])) & (((/* implicit */int) arr_8 [i_2 + 1])))))));
                            var_17 = ((/* implicit */unsigned long long int) arr_3 [i_0]);
                        }
                    } 
                } 
                var_18 = ((/* implicit */unsigned short) (-(((/* implicit */int) (((~(((/* implicit */int) var_2)))) > (((/* implicit */int) var_5)))))));
            }
        } 
    } 
    var_19 = ((/* implicit */_Bool) var_7);
}
