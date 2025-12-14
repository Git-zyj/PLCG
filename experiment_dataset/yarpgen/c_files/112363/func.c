/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112363
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112363 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112363
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
    /* LoopSeq 1 */
    for (int i_0 = 1; i_0 < 23; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                {
                    var_10 = ((/* implicit */long long int) ((unsigned char) (+(-1327222727))));
                    var_11 = min((72057594037927936LL), (((/* implicit */long long int) (_Bool)1)));
                }
            } 
        } 
        var_12 = ((/* implicit */int) min((var_12), (((/* implicit */int) -3698836151993426842LL))));
    }
    var_13 = ((/* implicit */int) ((unsigned long long int) var_3));
}
