/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170141
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170141 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170141
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
    var_18 = ((/* implicit */int) ((unsigned char) (-(((unsigned long long int) -8909952786120311705LL)))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (long long int i_1 = 3; i_1 < 10; i_1 += 1) 
        {
            for (unsigned int i_2 = 1; i_2 < 13; i_2 += 4) 
            {
                {
                    arr_9 [i_1] [i_1] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_1 + 3] [i_1 + 3] [i_2 + 1] [i_2])) ? (arr_6 [i_1 + 4] [i_1 + 3] [i_2 + 1] [i_2]) : (arr_6 [i_1 - 1] [i_1 + 4] [i_2 - 1] [i_1 + 4])))) <= (((((/* implicit */_Bool) ((var_6) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-9720)))))) ? (462993799423427394ULL) : (((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned int) (short)(-32767 - 1))))))))));
                    var_19 ^= ((/* implicit */short) max((((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0])) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) + (var_10))) : (((((/* implicit */_Bool) arr_4 [i_0] [i_1 - 2])) ? (2192266982688664998ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_0]))))))), (((/* implicit */unsigned long long int) max((((var_10) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_0]))))), (((((/* implicit */unsigned long long int) 2060850270)) > (var_7))))))));
                }
            } 
        } 
    } 
}
