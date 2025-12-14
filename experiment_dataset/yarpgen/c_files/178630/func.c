/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178630
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178630 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178630
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
    var_13 = ((/* implicit */unsigned short) var_3);
    var_14 = ((/* implicit */unsigned int) var_1);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            {
                arr_4 [(unsigned char)0] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) (~(((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */int) ((unsigned short) (unsigned char)121))) : (((/* implicit */int) arr_0 [i_0]))));
                var_15 *= ((/* implicit */unsigned int) 1409408090);
                var_16 = ((/* implicit */unsigned short) ((_Bool) ((unsigned short) 1441055950)));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned long long int) (((~(var_10))) | (((/* implicit */unsigned int) 1441055979))));
}
