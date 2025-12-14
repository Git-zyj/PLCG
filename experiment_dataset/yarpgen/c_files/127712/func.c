/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127712
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127712 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127712
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
    /* LoopNest 3 */
    for (long long int i_0 = 1; i_0 < 18; i_0 += 4) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (unsigned int i_2 = 2; i_2 < 17; i_2 += 2) 
            {
                {
                    var_12 -= ((/* implicit */unsigned char) var_11);
                    /* LoopSeq 3 */
                    for (signed char i_3 = 0; i_3 < 20; i_3 += 1) 
                    {
                        arr_14 [i_0] [i_0] [11] [i_1] [i_3] = ((/* implicit */unsigned long long int) var_1);
                        var_13 = ((/* implicit */unsigned short) var_1);
                        var_14 ^= ((/* implicit */int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)102))) : (max((((/* implicit */unsigned int) min(((unsigned char)145), ((unsigned char)147)))), (var_4)))));
                        arr_15 [i_2] [i_1] [i_0 + 2] = ((/* implicit */unsigned int) var_10);
                    }
                    for (unsigned int i_4 = 0; i_4 < 20; i_4 += 1) 
                    {
                        arr_19 [i_1] [i_1] [i_4] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) max((var_4), (((/* implicit */unsigned int) var_8))))))) ? (((((/* implicit */_Bool) (~(-4659068496279899130LL)))) ? (((/* implicit */unsigned int) ((int) -1651202717))) : (((var_4) + (((/* implicit */unsigned int) 1902515941)))))) : (((/* implicit */unsigned int) ((var_0) >> (((var_1) - (2712751463U))))))));
                        arr_20 [i_0] [i_1] [i_1] = ((/* implicit */unsigned long long int) var_5);
                        arr_21 [i_2] [i_1] [i_1 - 1] [i_2] [i_4] &= ((/* implicit */short) max((arr_3 [i_0 + 1] [i_0]), (((/* implicit */int) (_Bool)1))));
                        var_15 = ((/* implicit */int) (((-(((((/* implicit */_Bool) var_3)) ? (3583737548989681394ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))))) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))));
                    }
                    for (int i_5 = 0; i_5 < 20; i_5 += 3) 
                    {
                        var_16 |= ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((12376225523580720205ULL) <= (((/* implicit */unsigned long long int) (-(926138263)))))))));
                        arr_24 [i_0] [(signed char)14] [i_2] [i_2] [(unsigned short)2] |= ((/* implicit */int) var_5);
                    }
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */int) var_7);
    var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) var_10))));
}
