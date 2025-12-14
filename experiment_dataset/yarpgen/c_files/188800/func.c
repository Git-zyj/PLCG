/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188800
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188800 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188800
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
    for (long long int i_0 = 1; i_0 < 20; i_0 += 4) 
    {
        for (signed char i_1 = 4; i_1 < 19; i_1 += 4) 
        {
            {
                var_10 = ((/* implicit */int) min((var_10), (((/* implicit */int) max((((/* implicit */unsigned long long int) max((3352434951018288613LL), (((/* implicit */long long int) -2049492912))))), ((~(18446744073709551599ULL))))))));
                arr_6 [i_0 - 1] [i_1] [i_0 - 1] |= ((/* implicit */unsigned int) (~((~(var_1)))));
            }
        } 
    } 
    var_11 = ((/* implicit */int) min((-3352434951018288611LL), (((/* implicit */long long int) ((int) (signed char)39)))));
    /* LoopSeq 1 */
    for (long long int i_2 = 1; i_2 < 9; i_2 += 1) 
    {
        arr_9 [i_2] [i_2] = ((/* implicit */long long int) ((((int) (-(((/* implicit */int) (signed char)34))))) % (((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_2])) && (((/* implicit */_Bool) (-(arr_0 [i_2 + 1])))))))));
        var_12 += ((/* implicit */long long int) arr_3 [i_2] [i_2] [i_2]);
    }
}
