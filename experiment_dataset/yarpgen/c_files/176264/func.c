/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176264
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176264 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176264
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
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) -1514609397)) ? (-4036271796673842132LL) : (((/* implicit */long long int) ((/* implicit */int) var_3)))));
        var_18 = ((((/* implicit */_Bool) ((4036271796673842132LL) - (((/* implicit */long long int) ((/* implicit */int) (unsigned char)24)))))) ? (((/* implicit */long long int) (-(((/* implicit */int) (short)-13336))))) : (((((/* implicit */_Bool) (short)132)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)64))) : (4036271796673842140LL))));
        var_19 &= ((/* implicit */long long int) var_12);
        /* LoopSeq 2 */
        for (unsigned short i_1 = 4; i_1 < 20; i_1 += 2) 
        {
            /* LoopNest 3 */
            for (short i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                for (long long int i_3 = 0; i_3 < 22; i_3 += 3) 
                {
                    for (unsigned char i_4 = 0; i_4 < 22; i_4 += 2) 
                    {
                        {
                            var_20 -= ((/* implicit */signed char) (unsigned short)28109);
                            var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_5)) : (((((/* implicit */int) (signed char)68)) + (((/* implicit */int) (unsigned short)28341))))));
                            var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) (!(arr_1 [i_0 + 1] [i_1 - 1]))))));
                        }
                    } 
                } 
            } 
            var_23 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)28113))) * (((((/* implicit */long long int) ((/* implicit */int) var_6))) / (var_1)))));
        }
        for (short i_5 = 0; i_5 < 22; i_5 += 3) 
        {
            var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) (~(arr_7 [i_0] [i_0] [i_0] [i_0 + 1] [i_0]))))));
            var_25 ^= ((/* implicit */int) ((((/* implicit */int) arr_2 [i_0] [i_0 + 1])) != (((/* implicit */int) (short)-4096))));
        }
    }
    var_26 = ((/* implicit */long long int) ((unsigned long long int) (_Bool)1));
}
