/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103782
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103782 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103782
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
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            {
                arr_4 [i_1] [i_1] = ((/* implicit */short) 2532795368253356738LL);
                var_18 = ((/* implicit */short) (unsigned char)215);
                /* LoopSeq 1 */
                for (int i_2 = 0; i_2 < 14; i_2 += 1) 
                {
                    var_19 = ((/* implicit */unsigned char) -259363807878164287LL);
                    arr_7 [i_0] [i_1] [i_1] = ((/* implicit */signed char) 259363807878164286LL);
                }
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned long long int) var_12);
}
