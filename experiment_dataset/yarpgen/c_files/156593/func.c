/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156593
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156593 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156593
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
    var_16 = ((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (var_13))))) <= (((/* implicit */int) ((_Bool) ((1188913392U) < (((/* implicit */unsigned int) ((/* implicit */int) var_14)))))))));
    var_17 = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) ((long long int) var_8))) ? (((/* implicit */int) max((var_10), (((/* implicit */unsigned short) (_Bool)1))))) : (((/* implicit */int) var_12))))));
    var_18 &= ((/* implicit */unsigned short) var_9);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 10; i_2 += 3) 
                {
                    for (unsigned short i_3 = 2; i_3 < 8; i_3 += 3) 
                    {
                        {
                            var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) ((((/* implicit */_Bool) ((min((((/* implicit */unsigned long long int) (_Bool)1)), (var_15))) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [6U])))))) ? (((long long int) arr_7 [i_1 - 1] [i_1 - 1])) : (((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1))))))))));
                            arr_10 [i_0] [i_0] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (~(1563658465U)))), (min((((/* implicit */unsigned long long int) (_Bool)1)), (14296024664769982219ULL)))));
                        }
                    } 
                } 
                var_20 = ((/* implicit */short) ((max(((-(arr_0 [i_0] [i_0]))), (((/* implicit */long long int) arr_3 [i_1 - 1] [i_0])))) > (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0])))));
            }
        } 
    } 
}
