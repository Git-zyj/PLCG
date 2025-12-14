/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178678
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178678 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178678
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
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            {
                arr_7 [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned short)20528))));
                var_19 += ((/* implicit */int) max((var_7), ((!(((/* implicit */_Bool) var_17))))));
                var_20 &= ((/* implicit */unsigned short) (+(((/* implicit */int) var_8))));
                arr_8 [i_0] = min((arr_2 [i_1] [i_0]), (((/* implicit */int) ((_Bool) arr_1 [i_0]))));
                /* LoopSeq 1 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    var_21 = ((/* implicit */unsigned short) var_11);
                    arr_11 [i_2] [i_0] [i_0] [i_2] = ((/* implicit */unsigned int) (+(9007130535264256ULL)));
                    var_22 &= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (-2147483647 - 1)))));
                }
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned long long int) var_13);
    var_24 = ((/* implicit */unsigned short) (-(((/* implicit */int) var_16))));
}
