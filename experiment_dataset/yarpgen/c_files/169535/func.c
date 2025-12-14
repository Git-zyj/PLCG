/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169535
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169535 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169535
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
    var_16 = var_5;
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 18; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            {
                arr_4 [i_0] [i_0] [i_1] = ((/* implicit */short) (+(((/* implicit */int) min(((unsigned short)6120), (((/* implicit */unsigned short) var_6)))))));
                var_17 ^= ((/* implicit */short) min(((-(((/* implicit */int) ((32767LL) < (((/* implicit */long long int) ((/* implicit */int) (signed char)96)))))))), (((/* implicit */int) max((((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) > (18185441126001872299ULL))), ((!(var_10))))))));
            }
        } 
    } 
}
