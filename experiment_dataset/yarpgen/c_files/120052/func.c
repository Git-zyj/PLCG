/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120052
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120052 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120052
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
    var_10 ^= ((/* implicit */unsigned long long int) (short)14336);
    /* LoopNest 2 */
    for (long long int i_0 = 3; i_0 < 11; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                var_11 += ((/* implicit */_Bool) max((((arr_3 [i_1] [i_0 - 3]) - (-7592546245128899210LL))), (((/* implicit */long long int) ((signed char) arr_3 [i_1] [i_0 - 1])))));
                arr_7 [i_1] [i_1] [i_1] |= ((/* implicit */short) (!((!(((/* implicit */_Bool) arr_0 [i_1]))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 12; i_2 += 3) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            arr_15 [i_0] = ((((_Bool) arr_8 [i_0] [i_0] [i_0])) ? (((unsigned long long int) arr_6 [i_0 - 3])) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (short)14336)))));
                            var_12 += ((/* implicit */unsigned int) ((unsigned long long int) (-(3161823481U))));
                            var_13 = ((/* implicit */signed char) min((var_13), (((/* implicit */signed char) ((((int) ((unsigned long long int) var_0))) < (((/* implicit */int) arr_14 [i_1] [i_1])))))));
                        }
                    } 
                } 
                arr_16 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_10 [i_0] [i_1] [i_0 - 2])) % (((/* implicit */int) arr_10 [i_0] [i_1] [i_0 - 1]))))) ? (((unsigned long long int) arr_14 [i_0] [i_0 - 3])) : (((/* implicit */unsigned long long int) ((int) (-(arr_13 [i_0] [i_0] [i_1])))))));
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned long long int) ((_Bool) 892055843));
    var_15 = ((/* implicit */signed char) var_3);
}
