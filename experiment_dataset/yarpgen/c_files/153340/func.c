/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153340
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153340 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153340
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
    var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) max((((/* implicit */int) var_4)), (967891407))))));
    var_18 ^= ((/* implicit */short) min((((/* implicit */unsigned long long int) min(((unsigned char)255), ((unsigned char)0)))), ((+(2558523477489050196ULL)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 25; i_2 += 2) 
            {
                {
                    var_19 = ((/* implicit */unsigned long long int) (unsigned short)10334);
                    var_20 = ((/* implicit */long long int) ((2558523477489050196ULL) | (((/* implicit */unsigned long long int) ((long long int) var_12)))));
                    arr_8 [i_0] [i_1] [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((short) 457608197U)))));
                }
            } 
        } 
    } 
}
