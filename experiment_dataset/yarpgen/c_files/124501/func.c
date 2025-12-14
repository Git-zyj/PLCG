/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124501
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124501 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124501
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
    var_12 = ((/* implicit */short) (-((~(min((((/* implicit */unsigned long long int) (unsigned short)7679)), (var_11)))))));
    /* LoopNest 2 */
    for (long long int i_0 = 3; i_0 < 10; i_0 += 3) 
    {
        for (unsigned short i_1 = 2; i_1 < 13; i_1 += 4) 
        {
            {
                arr_5 [i_1] [i_1] [i_0] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)53716)))))) > (9223372036854775807LL)));
                arr_6 [(short)5] [i_0] [i_0] = ((/* implicit */_Bool) arr_1 [i_0] [i_0]);
                arr_7 [i_0] = ((/* implicit */short) -9223372036854775807LL);
            }
        } 
    } 
}
