/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170962
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170962 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170962
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            {
                var_12 = ((/* implicit */unsigned int) max((var_12), (((/* implicit */unsigned int) ((short) max((((/* implicit */unsigned int) arr_3 [i_0] [i_1] [i_1])), (((((/* implicit */_Bool) arr_3 [i_1] [i_1] [i_0])) ? (arr_1 [i_0] [i_1]) : (var_6)))))))));
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 23; i_2 += 3) 
                {
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_13 *= ((/* implicit */unsigned short) arr_1 [i_0] [i_2]);
                            var_14 &= ((/* implicit */unsigned short) min((((((/* implicit */_Bool) arr_5 [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_1])) ? (arr_5 [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_1]) : (arr_5 [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_1]))), (arr_5 [i_0] [i_1] [i_2] [i_1])));
                        }
                    } 
                } 
                arr_9 [i_0] = ((/* implicit */int) arr_4 [i_0]);
                /* LoopNest 2 */
                for (signed char i_4 = 0; i_4 < 23; i_4 += 4) 
                {
                    for (unsigned long long int i_5 = 0; i_5 < 23; i_5 += 2) 
                    {
                        {
                            arr_18 [i_0] [i_5] = ((/* implicit */unsigned long long int) ((unsigned int) var_6));
                            arr_19 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) + (arr_5 [i_0] [i_4] [i_1] [i_0]))) << (((/* implicit */int) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) var_0)))))));
                            var_15 = ((/* implicit */_Bool) var_8);
                        }
                    } 
                } 
                var_16 = ((/* implicit */int) var_2);
            }
        } 
    } 
    var_17 = var_6;
    var_18 = ((/* implicit */unsigned long long int) var_5);
}
