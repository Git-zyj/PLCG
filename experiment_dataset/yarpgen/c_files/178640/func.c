/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178640
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178640 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178640
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
    for (long long int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    var_17 = ((/* implicit */unsigned short) (unsigned char)1);
                    arr_6 [i_0] = ((/* implicit */unsigned char) ((long long int) ((((/* implicit */int) arr_0 [i_2 - 1])) * (((/* implicit */int) arr_0 [i_2 - 1])))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned long long int) (~(973668344964958708LL)));
}
