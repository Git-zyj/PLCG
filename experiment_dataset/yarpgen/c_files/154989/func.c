/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154989
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154989 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154989
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
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (long long int i_1 = 2; i_1 < 15; i_1 += 3) 
        {
            {
                var_19 = ((/* implicit */signed char) min((var_19), (var_4)));
                var_20 -= ((((((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [i_0]))))) ? (arr_1 [(unsigned char)5]) : (((/* implicit */unsigned int) ((/* implicit */int) var_0))))) < (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) max(((unsigned char)242), ((unsigned char)96)))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 8; i_2 += 2) 
    {
        for (int i_3 = 0; i_3 < 10; i_3 += 2) 
        {
            {
                var_21 -= ((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? (((((/* implicit */_Bool) ((unsigned short) var_9))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_2] [7] [i_2])) && (((/* implicit */_Bool) arr_5 [i_3]))))) : (max((((/* implicit */int) arr_3 [i_2] [i_2] [(unsigned char)8])), (var_9))))) : (arr_2 [(short)9])));
                arr_10 [i_2] [i_3] [i_3] = ((/* implicit */signed char) min((max((((/* implicit */unsigned char) ((signed char) var_6))), (var_8))), (var_3)));
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned int) var_18);
}
