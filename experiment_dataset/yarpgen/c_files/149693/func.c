/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149693
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149693 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149693
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
    for (unsigned int i_0 = 3; i_0 < 11; i_0 += 3) 
    {
        for (int i_1 = 3; i_1 < 10; i_1 += 3) 
        {
            {
                var_20 = ((/* implicit */short) ((((/* implicit */int) ((var_6) >= (var_12)))) / ((-(((var_17) ? (((/* implicit */int) var_1)) : (var_11)))))));
                var_21 = ((/* implicit */unsigned int) (-((+((+(var_12)))))));
                var_22 = ((/* implicit */unsigned int) (~(((((/* implicit */unsigned long long int) -621960983)) ^ (0ULL)))));
            }
        } 
    } 
    var_23 = ((/* implicit */long long int) var_1);
    var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) (-((~(var_10)))))) : (var_3))))));
    var_25 = ((/* implicit */short) (+(-363903552)));
}
