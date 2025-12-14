/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115690
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115690 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115690
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
    for (unsigned int i_0 = 3; i_0 < 19; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            {
                arr_7 [i_0] = ((/* implicit */signed char) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_0] [i_0 - 1] [i_0 - 2])))))));
                arr_8 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) min((((/* implicit */short) (signed char)10)), ((short)-91)))), (((unsigned long long int) -6778433749420280527LL))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (((((((/* implicit */_Bool) arr_2 [4ULL])) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (arr_2 [i_1]))))))));
            }
        } 
    } 
    var_14 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (+(var_6)))))))) ^ ((+(var_6)))));
}
