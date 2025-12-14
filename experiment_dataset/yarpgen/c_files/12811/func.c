/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12811
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12811 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12811
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
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        var_12 = ((/* implicit */long long int) ((unsigned long long int) ((((/* implicit */_Bool) 127748650U)) ? (((/* implicit */int) (unsigned short)65535)) : (var_4))));
        var_13 = ((/* implicit */unsigned short) ((signed char) -1444126412));
    }
    /* LoopNest 2 */
    for (long long int i_1 = 0; i_1 < 20; i_1 += 4) 
    {
        for (int i_2 = 0; i_2 < 20; i_2 += 2) 
        {
            {
                arr_6 [(signed char)0] [i_2] = ((/* implicit */long long int) ((unsigned short) arr_2 [i_2]));
                arr_7 [i_1] [i_2] = min((((unsigned short) max((((/* implicit */unsigned short) var_0)), (var_11)))), (var_3));
                var_14 = ((/* implicit */long long int) ((unsigned short) arr_3 [i_2]));
                arr_8 [i_1] [i_1] [i_1] = ((/* implicit */int) ((short) max((((/* implicit */long long int) 1444126411)), (6404409182256981826LL))));
            }
        } 
    } 
}
