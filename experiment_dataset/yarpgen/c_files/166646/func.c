/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166646
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166646 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166646
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
    var_17 = ((/* implicit */signed char) var_9);
    var_18 = ((/* implicit */short) (-(((/* implicit */int) var_8))));
    var_19 = ((/* implicit */_Bool) 311142612);
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                {
                    var_20 = ((/* implicit */long long int) (~(-311142610)));
                    var_21 += ((((/* implicit */_Bool) arr_4 [(signed char)23])) ? (arr_5 [i_0] [i_1]) : (((/* implicit */unsigned int) (-(((/* implicit */int) var_1))))));
                }
            } 
        } 
        /* LoopSeq 1 */
        for (short i_3 = 1; i_3 < 23; i_3 += 4) 
        {
            var_22 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_3 + 1])) ? (arr_5 [i_0] [i_3 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))));
            var_23 = ((/* implicit */unsigned int) var_10);
            var_24 *= (-(arr_6 [i_0] [i_3] [22ULL]));
            var_25 *= ((/* implicit */unsigned char) (~(var_7)));
        }
        var_26 = ((/* implicit */signed char) (-(((/* implicit */int) arr_0 [i_0]))));
        var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_0]))) : (arr_2 [i_0] [i_0])));
    }
}
