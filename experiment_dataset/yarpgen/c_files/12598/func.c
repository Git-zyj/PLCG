/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12598
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12598 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12598
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
    for (long long int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (unsigned short i_1 = 1; i_1 < 19; i_1 += 2) 
        {
            {
                var_13 = ((/* implicit */unsigned char) var_0);
                arr_5 [i_0] = arr_4 [i_0] [i_1 + 1];
                arr_6 [i_1] [i_1] = ((/* implicit */signed char) (~(((/* implicit */int) (unsigned char)54))));
                arr_7 [(unsigned short)8] [i_1] [i_1 + 1] = 6375625343171477276ULL;
            }
        } 
    } 
    var_14 = ((/* implicit */long long int) 12071118730538074364ULL);
    var_15 = ((/* implicit */signed char) (-(12071118730538074339ULL)));
}
