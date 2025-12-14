/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102259
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102259 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102259
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
    var_17 |= var_4;
    var_18 ^= ((/* implicit */unsigned short) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))));
    var_19 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) (!(((/* implicit */_Bool) var_11)))))) || ((!(((/* implicit */_Bool) var_3))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 1; i_0 < 17; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 19; i_2 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_3 = 3; i_3 < 16; i_3 += 3) 
                    {
                        var_20 = ((/* implicit */unsigned short) (-(((/* implicit */int) (!(((((/* implicit */_Bool) arr_0 [i_3])) && (((/* implicit */_Bool) var_3)))))))));
                        var_21 ^= ((/* implicit */unsigned short) (+(((((/* implicit */int) arr_7 [i_0 + 2])) - (((/* implicit */int) var_4))))));
                        arr_10 [i_0 - 1] [i_0 + 1] [i_0 - 1] [i_0 + 2] = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */int) ((unsigned short) var_10))) >= (((/* implicit */int) (unsigned short)37940))))) >= (((/* implicit */int) (unsigned short)56252))));
                        var_22 = ((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned short)51228))));
                        arr_11 [(unsigned short)9] [i_1] [i_2] [i_3 - 1] = ((/* implicit */unsigned short) (-(((/* implicit */int) ((((/* implicit */int) (unsigned short)4586)) < (((((/* implicit */_Bool) (unsigned short)65526)) ? (((/* implicit */int) (unsigned short)40253)) : (((/* implicit */int) (unsigned short)6808)))))))));
                    }
                    var_23 = ((/* implicit */unsigned short) max((var_23), (var_1)));
                    var_24 ^= max((((unsigned short) (unsigned short)60113)), (((unsigned short) (unsigned short)9277)));
                    var_25 *= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~(((/* implicit */int) max(((unsigned short)22354), (arr_1 [(unsigned short)15] [i_0 + 2])))))))));
                }
            } 
        } 
    } 
    var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_13)) && (((/* implicit */_Bool) var_13))));
}
