/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165947
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165947 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165947
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
    var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_1) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (((((/* implicit */unsigned int) ((/* implicit */int) var_6))) + (677472059U)))))) ? (1800676602U) : (2951934566U)));
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 14; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                arr_4 [i_0] [i_0] = ((/* implicit */_Bool) (short)-31921);
                arr_5 [i_0] = ((/* implicit */int) ((((/* implicit */long long int) max((var_3), (((/* implicit */int) arr_0 [i_0 - 1] [i_0]))))) < (min((((/* implicit */long long int) 1800676602U)), (arr_3 [i_0 + 1] [i_0 + 1] [i_0])))));
            }
        } 
    } 
    var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) (+(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)52326))))))))));
}
