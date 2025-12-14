/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119092
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119092 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119092
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
    var_19 = var_13;
    var_20 |= ((/* implicit */long long int) (~(3145728U)));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 21; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 22; i_1 += 3) 
        {
            for (unsigned int i_2 = 1; i_2 < 21; i_2 += 3) 
            {
                {
                    arr_8 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_2 [i_2 - 1] [i_0 - 1]))));
                    var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~((~(arr_6 [i_2] [i_1 - 2] [i_0] [i_0])))))) ? (((unsigned long long int) 6464358842455276942ULL)) : (((((/* implicit */_Bool) (~(arr_4 [i_2])))) ? (arr_6 [i_0] [(short)20] [i_1] [i_2]) : (((/* implicit */unsigned long long int) arr_5 [(short)22] [(short)22] [(short)22]))))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */_Bool) var_1);
    var_23 -= ((/* implicit */int) 8519546896670848974LL);
}
