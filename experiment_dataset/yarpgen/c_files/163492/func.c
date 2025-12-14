/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163492
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163492 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163492
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
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (long long int i_1 = 2; i_1 < 9; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 10; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 1; i_3 < 6; i_3 += 2) 
                    {
                        for (long long int i_4 = 3; i_4 < 9; i_4 += 2) 
                        {
                            {
                                var_12 = ((/* implicit */unsigned short) var_5);
                                var_13 = ((/* implicit */short) (((!(((/* implicit */_Bool) (~(((/* implicit */int) arr_8 [(short)1] [i_1 - 1]))))))) && (((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) arr_2 [i_3 + 2] [i_2])) ? (((/* implicit */unsigned long long int) arr_7 [(short)9] [i_3] [i_2] [i_1] [i_0])) : (var_8)))))));
                            }
                        } 
                    } 
                    var_14 = ((/* implicit */unsigned short) ((short) ((((/* implicit */_Bool) (~(arr_9 [i_0] [i_1 - 1] [i_1 + 1] [i_2] [i_2] [i_2])))) ? ((-(arr_6 [i_1] [i_0]))) : (var_11))));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */short) ((signed char) ((((/* implicit */unsigned long long int) max((var_11), (((/* implicit */long long int) (short)-5468))))) / ((-(var_9))))));
    var_16 = ((/* implicit */long long int) (~((+(((/* implicit */int) (!(((/* implicit */_Bool) (short)16383)))))))));
    var_17 = ((/* implicit */long long int) min((var_4), (((/* implicit */unsigned short) var_0))));
    var_18 = ((/* implicit */long long int) var_2);
}
