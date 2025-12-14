/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169184
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169184 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169184
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
    for (long long int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        arr_4 [i_0] = ((/* implicit */int) var_6);
        var_12 = var_7;
    }
    /* LoopNest 2 */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        for (long long int i_2 = 1; i_2 < 22; i_2 += 3) 
        {
            {
                arr_10 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) 4294967295U)) != ((+(arr_8 [i_2 + 1])))));
                arr_11 [i_1] = ((/* implicit */unsigned short) 20U);
            }
        } 
    } 
}
