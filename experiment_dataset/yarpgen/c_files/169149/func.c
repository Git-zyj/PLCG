/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169149
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169149 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169149
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
    var_17 = ((/* implicit */int) (!(((/* implicit */_Bool) var_1))));
    var_18 = ((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)1))) - (653308680U)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 2841461171U)) ? (((/* implicit */unsigned int) var_6)) : (var_14)))) : (var_9))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        arr_4 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 653308685U)) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) : (var_2)))) ? (((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */int) arr_2 [i_0] [i_0])) : (((/* implicit */int) var_0)))) : (((/* implicit */int) arr_2 [i_0] [i_0]))));
        var_19 = ((/* implicit */unsigned short) (-(3641658622U)));
        var_20 = ((/* implicit */unsigned long long int) (+(1271593583047532032LL)));
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 13; i_2 += 4) 
            {
                {
                    arr_9 [i_1] [i_1] = (-(((((/* implicit */int) (unsigned short)64929)) - (((/* implicit */int) (unsigned char)0)))));
                    var_21 = ((/* implicit */unsigned char) ((((/* implicit */int) (!((_Bool)1)))) - (((((/* implicit */int) (signed char)-102)) + (((/* implicit */int) arr_2 [i_1] [i_2]))))));
                    arr_10 [i_0] [i_0] [i_1] = ((/* implicit */unsigned short) var_4);
                    var_22 = ((/* implicit */unsigned short) arr_1 [i_0]);
                }
            } 
        } 
    }
}
