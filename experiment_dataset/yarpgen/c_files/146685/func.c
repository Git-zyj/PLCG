/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146685
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146685 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146685
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
    var_10 += ((/* implicit */int) (_Bool)1);
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        var_11 = ((/* implicit */unsigned short) (-(3U)));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) var_9)) + (arr_0 [(unsigned short)1])));
        var_12 = ((/* implicit */unsigned long long int) arr_1 [i_0]);
    }
    /* LoopNest 2 */
    for (short i_1 = 0; i_1 < 23; i_1 += 4) 
    {
        for (int i_2 = 2; i_2 < 22; i_2 += 3) 
        {
            {
                var_13 += ((/* implicit */unsigned int) ((_Bool) ((arr_5 [i_1]) <= (((/* implicit */unsigned long long int) arr_6 [i_2 - 1])))));
                var_14 = ((/* implicit */unsigned long long int) 2412113128U);
            }
        } 
    } 
}
