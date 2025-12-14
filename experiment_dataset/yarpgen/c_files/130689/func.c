/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130689
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130689 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130689
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
    for (int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            {
                arr_4 [i_0] [i_0] = ((/* implicit */unsigned char) (!((!(((((/* implicit */long long int) ((/* implicit */int) arr_0 [16]))) <= (arr_2 [i_0] [i_0])))))));
                var_11 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_2 [i_0] [(_Bool)1])) || (((/* implicit */_Bool) (short)-11708))))), (((unsigned short) var_10)))))) + (((unsigned long long int) ((((/* implicit */int) arr_0 [i_0])) % (arr_3 [i_0]))))));
                arr_5 [i_0] [i_1] = ((((/* implicit */_Bool) (unsigned char)187)) || (((/* implicit */_Bool) (signed char)64)));
            }
        } 
    } 
    var_12 |= ((/* implicit */short) (~((~(6512607995489549040LL)))));
}
