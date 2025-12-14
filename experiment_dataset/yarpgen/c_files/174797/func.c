/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174797
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174797 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174797
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
    for (int i_0 = 1; i_0 < 10; i_0 += 2) 
    {
        var_18 = ((/* implicit */signed char) arr_2 [i_0] [i_0]);
        arr_4 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)140)) ? (-1312916212172810815LL) : (1312916212172810809LL)));
        arr_5 [i_0] = ((/* implicit */short) ((int) var_0));
        var_19 = (+(((/* implicit */int) var_12)));
    }
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 24; i_1 += 1) 
    {
        for (signed char i_2 = 0; i_2 < 24; i_2 += 1) 
        {
            {
                var_20 -= ((/* implicit */unsigned char) ((arr_9 [i_1] [i_1]) - (min((((/* implicit */int) var_11)), (var_6)))));
                arr_11 [i_2] = ((/* implicit */_Bool) max((((/* implicit */int) var_12)), ((-(((arr_9 [i_1] [i_2]) << (((var_4) - (11619829938226276590ULL)))))))));
            }
        } 
    } 
}
