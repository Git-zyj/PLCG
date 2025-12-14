/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148578
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148578 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148578
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
    for (short i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 19; i_2 += 1) 
                {
                    for (unsigned int i_3 = 0; i_3 < 19; i_3 += 1) 
                    {
                        {
                            var_20 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_10 [i_0] [i_0] [i_2] [i_2]))))), (((((/* implicit */_Bool) ((16981178826240144298ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-8947)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)12288))) : (4997789167472544989ULL)))));
                            var_21 |= ((/* implicit */unsigned int) ((short) 946042334U));
                            arr_12 [i_0] [6U] [i_3] [i_3] = ((/* implicit */unsigned int) max((min((arr_0 [i_0]), (arr_0 [i_1]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) arr_0 [i_0])))))));
                        }
                    } 
                } 
                arr_13 [i_0] [i_0] [i_0] |= ((/* implicit */unsigned int) (~(((/* implicit */int) max((arr_7 [i_0] [i_1] [i_1] [3ULL]), (arr_3 [i_0]))))));
                var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) min(((+(((/* implicit */int) arr_2 [i_0])))), (((/* implicit */int) (!(((/* implicit */_Bool) var_12))))))))));
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned int) max((var_23), (((unsigned int) ((min((0ULL), (((/* implicit */unsigned long long int) var_6)))) % (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_1), ((short)6489))))))))));
    var_24 &= ((/* implicit */unsigned int) min((((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_0)), (var_4)))) : (min((((/* implicit */unsigned long long int) var_2)), (67553994410557440ULL))))), (18ULL)));
}
