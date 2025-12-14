/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163353
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163353 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163353
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
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (unsigned int i_1 = 1; i_1 < 18; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 1; i_2 < 17; i_2 += 4) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 20; i_3 += 4) 
                    {
                        {
                            arr_14 [i_0] [i_1] [i_0] [i_0] [i_1] = ((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)40163)) && (((((/* implicit */_Bool) (short)-15462)) && ((_Bool)1))))))));
                            arr_15 [(unsigned char)13] [i_1] [i_2] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) << (((10698685521824616732ULL) - (10698685521824616718ULL)))));
                            var_17 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_7 [i_1] [i_1] [i_1]))));
                        }
                    } 
                } 
                var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) min((((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) var_2))))) && ((!(((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_1] [i_0]))))))), (var_13))))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned long long int) var_13);
}
