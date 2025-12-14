/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100804
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100804 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100804
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
    for (int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 17; i_2 += 4) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_12 = ((/* implicit */_Bool) var_1);
                            var_13 = ((/* implicit */_Bool) min((var_13), (((/* implicit */_Bool) (-((-(((/* implicit */int) (!(((/* implicit */_Bool) var_3))))))))))));
                            var_14 = ((/* implicit */short) (+(((/* implicit */int) (!((!(((/* implicit */_Bool) -1659655047)))))))));
                        }
                    } 
                } 
                arr_10 [i_1] [i_0] [(short)16] = ((/* implicit */int) var_11);
                arr_11 [i_0] [i_0] &= ((/* implicit */_Bool) max(((+(((((/* implicit */_Bool) var_7)) ? (-2110704180) : (((/* implicit */int) var_11)))))), (((arr_4 [i_0] [i_0]) ? (((((/* implicit */int) var_6)) / (arr_7 [i_0] [i_1]))) : (((/* implicit */int) (short)-23002))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_4 = 1; i_4 < 18; i_4 += 1) 
    {
        for (int i_5 = 2; i_5 < 17; i_5 += 1) 
        {
            {
                arr_16 [(_Bool)1] [(_Bool)1] &= ((/* implicit */short) ((((/* implicit */int) ((short) arr_15 [i_5 + 2] [i_5]))) <= (((/* implicit */int) var_10))));
                var_15 = (-(((((/* implicit */int) (_Bool)1)) >> (((/* implicit */int) (_Bool)1)))));
                var_16 = arr_15 [i_4 + 1] [i_5 + 1];
            }
        } 
    } 
}
