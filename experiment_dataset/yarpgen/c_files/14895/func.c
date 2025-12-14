/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14895
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14895 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14895
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
    var_13 = ((/* implicit */unsigned char) (+((+(min((((/* implicit */int) (_Bool)1)), (var_1)))))));
    var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) var_9))));
    var_15 ^= var_4;
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                arr_6 [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (~(9869438953096353393ULL))))));
                var_16 = ((/* implicit */_Bool) min((((/* implicit */int) max((arr_3 [i_0] [i_0]), (((/* implicit */unsigned short) (_Bool)1))))), (((((/* implicit */_Bool) (unsigned short)2091)) ? (((/* implicit */int) arr_3 [i_1 - 1] [i_0])) : (((/* implicit */int) (_Bool)1))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_2 = 1; i_2 < 9; i_2 += 4) 
    {
        for (unsigned short i_3 = 0; i_3 < 12; i_3 += 2) 
        {
            {
                var_17 = max((((/* implicit */unsigned short) (unsigned char)4)), ((unsigned short)10000));
                var_18 = ((/* implicit */_Bool) (unsigned char)252);
                var_19 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((((/* implicit */_Bool) 17770939033918576224ULL)) ? (((/* implicit */int) arr_3 [i_2] [i_2 + 2])) : (((/* implicit */int) (signed char)66))))) % ((+(min((9051180404125699395LL), (((/* implicit */long long int) (unsigned char)57))))))));
            }
        } 
    } 
}
