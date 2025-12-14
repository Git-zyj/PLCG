/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141276
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141276 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141276
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
    /* LoopNest 3 */
    for (long long int i_0 = 1; i_0 < 17; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 18; i_2 += 2) 
            {
                {
                    var_13 = (~(((long long int) 5863008317272151221LL)));
                    var_14 = ((var_12) % (((((/* implicit */_Bool) var_5)) ? (7605829850160851295LL) : (3662718267099993861LL))));
                    var_15 = ((((((var_9) / (var_3))) / (var_0))) << (((((long long int) ((long long int) var_3))) - (5933371916530707777LL))));
                    var_16 = (~(var_10));
                }
            } 
        } 
    } 
    var_17 |= var_10;
}
