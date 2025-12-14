/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104642
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104642 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104642
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
    var_11 = (~(var_9));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 2; i_0 < 9; i_0 += 2) 
    {
        var_12 = ((/* implicit */_Bool) ((signed char) var_5));
        arr_3 [i_0] = ((/* implicit */long long int) ((_Bool) 4155614582718728474LL));
        var_13 = ((/* implicit */unsigned int) (+(-4155614582718728475LL)));
        var_14 = (+(var_5));
        arr_4 [i_0] = ((/* implicit */long long int) (+(((/* implicit */int) var_10))));
    }
    for (unsigned int i_1 = 0; i_1 < 10; i_1 += 1) 
    {
        arr_8 [i_1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_1))));
        arr_9 [i_1] [(_Bool)1] = (~((~(-9023377136690904113LL))));
        /* LoopSeq 1 */
        for (unsigned long long int i_2 = 1; i_2 < 7; i_2 += 3) 
        {
            var_15 = ((unsigned int) (-(8891617763489842821LL)));
            var_16 = ((/* implicit */signed char) (-((-(2147483647)))));
        }
        arr_14 [i_1] = ((/* implicit */unsigned short) 4155614582718728474LL);
        arr_15 [i_1] = ((/* implicit */unsigned long long int) (-(var_5)));
    }
    var_17 = ((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned char)198))));
}
