/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11077
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11077 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11077
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
    for (int i_0 = 2; i_0 < 18; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            for (short i_2 = 1; i_2 < 18; i_2 += 1) 
            {
                {
                    var_16 = ((/* implicit */signed char) max((min((min((((/* implicit */unsigned long long int) (unsigned char)137)), (5018461119815220484ULL))), (((/* implicit */unsigned long long int) 1334822197167851866LL)))), (((/* implicit */unsigned long long int) max((var_7), (((/* implicit */long long int) var_5)))))));
                    var_17 = var_8;
                    var_18 = ((/* implicit */signed char) var_9);
                    var_19 = (unsigned char)8;
                }
            } 
        } 
    } 
    var_20 += ((/* implicit */_Bool) max((5018461119815220484ULL), (((/* implicit */unsigned long long int) 1334822197167851866LL))));
    var_21 = ((/* implicit */unsigned char) max((max((var_1), (((/* implicit */unsigned long long int) var_15)))), (((/* implicit */unsigned long long int) max((-1334822197167851880LL), (8816015649087687940LL))))));
    var_22 = ((/* implicit */unsigned int) (-2147483647 - 1));
}
