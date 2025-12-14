/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172194
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172194 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172194
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
    var_16 = var_6;
    var_17 = ((((/* implicit */_Bool) ((((int) (signed char)30)) >> ((((~(6279809786245648660LL))) + (6279809786245648691LL)))))) ? (max((((/* implicit */long long int) ((unsigned char) var_7))), (((((/* implicit */_Bool) 728525483U)) ? (var_15) : (var_2))))) : (((/* implicit */long long int) ((((((/* implicit */_Bool) (signed char)32)) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) (short)8532))))) | (((/* implicit */unsigned int) max((var_10), (2052519025))))))));
    /* LoopNest 3 */
    for (long long int i_0 = 2; i_0 < 15; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            for (long long int i_2 = 1; i_2 < 15; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_0] |= ((/* implicit */unsigned int) ((((/* implicit */int) arr_4 [i_2] [i_1] [i_0])) == (((((/* implicit */_Bool) (~(arr_6 [i_2] [i_1] [i_1])))) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_1] [(signed char)10] [i_1]))) < (3566441801U)))) : (((/* implicit */int) ((((/* implicit */_Bool) (short)-326)) && (((/* implicit */_Bool) arr_3 [i_0])))))))));
                    var_18 = ((/* implicit */_Bool) arr_0 [i_0 - 2] [i_1]);
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */signed char) (((-(max((((/* implicit */unsigned int) var_13)), (var_6))))) / (((/* implicit */unsigned int) (-(((/* implicit */int) (short)32256)))))));
}
