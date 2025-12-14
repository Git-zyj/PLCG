/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162207
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162207 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162207
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
    var_11 = ((/* implicit */signed char) min((var_11), (((/* implicit */signed char) (~(((/* implicit */int) var_10)))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            {
                arr_6 [i_1] = ((/* implicit */long long int) (~(((unsigned int) arr_4 [i_0] [i_1]))));
                var_12 = ((/* implicit */long long int) max((var_12), (((((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_2 [(unsigned char)8] [(unsigned char)8]))))) >= (arr_1 [i_0]))) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : ((~(max((8551918860086148395LL), (6LL)))))))));
                arr_7 [i_1] [i_1] [i_1] = (~(((((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */short) var_4)), ((short)4395))))) : (arr_4 [i_0] [i_0]))));
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)2))));
    /* LoopNest 2 */
    for (short i_2 = 0; i_2 < 21; i_2 += 1) 
    {
        for (short i_3 = 2; i_3 < 18; i_3 += 2) 
        {
            {
                var_14 = ((/* implicit */signed char) min(((-(arr_10 [i_3]))), (((/* implicit */unsigned long long int) var_10))));
                var_15 = ((/* implicit */unsigned char) (~(((/* implicit */int) ((((/* implicit */_Bool) arr_10 [i_2])) && (((/* implicit */_Bool) var_2)))))));
                var_16 -= ((/* implicit */signed char) var_9);
            }
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_4 = 0; i_4 < 18; i_4 += 2) 
    {
        var_17 += ((/* implicit */signed char) var_0);
        arr_15 [i_4] = ((/* implicit */long long int) var_4);
        var_18 *= ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) arr_9 [i_4])) ? (arr_11 [i_4]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0)))))));
    }
}
