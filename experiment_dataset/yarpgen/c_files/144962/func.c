/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144962
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144962 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144962
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
    for (unsigned long long int i_0 = 2; i_0 < 15; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            {
                var_13 = ((/* implicit */int) min((var_13), ((-(((((/* implicit */int) arr_0 [i_0 + 2] [i_0 - 1])) + (((/* implicit */int) arr_0 [i_0 + 2] [i_0 + 1]))))))));
                var_14 = ((/* implicit */_Bool) ((short) arr_2 [i_0] [i_0]));
                /* LoopNest 3 */
                for (long long int i_2 = 0; i_2 < 17; i_2 += 3) 
                {
                    for (unsigned long long int i_3 = 1; i_3 < 13; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 17; i_4 += 3) 
                        {
                            {
                                var_15 = ((/* implicit */short) arr_6 [i_1] [13ULL]);
                                var_16 = ((/* implicit */unsigned short) var_8);
                            }
                        } 
                    } 
                } 
                var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) (((!(((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) var_12)))))) || ((!((_Bool)0))))))));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned long long int) var_11);
    var_19 = ((/* implicit */int) var_8);
}
