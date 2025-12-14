/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152534
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152534 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152534
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
    var_11 = ((/* implicit */short) max((var_11), (((/* implicit */short) var_2))));
    /* LoopNest 3 */
    for (short i_0 = 2; i_0 < 24; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 4; i_1 < 23; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 1; i_3 < 22; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 25; i_4 += 1) 
                        {
                            {
                                arr_11 [i_2] [(unsigned short)13] [i_0] = ((/* implicit */unsigned short) (((!(((((/* implicit */_Bool) arr_3 [(signed char)12] [(signed char)12])) || (((/* implicit */_Bool) var_2)))))) && ((((!(((/* implicit */_Bool) var_9)))) && ((!(((/* implicit */_Bool) var_9))))))));
                                var_12 = ((/* implicit */unsigned long long int) min((((var_8) >> (((var_0) - (4359286817546496725LL))))), (((/* implicit */unsigned int) ((short) var_7)))));
                            }
                        } 
                    } 
                    arr_12 [20] [i_2] [i_1] [17LL] = ((/* implicit */_Bool) var_1);
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */unsigned int) var_6);
}
