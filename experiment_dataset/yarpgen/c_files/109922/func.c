/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109922
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109922 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109922
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
    var_13 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (-(var_4)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1323223446)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_10))))) : (max((var_0), (((/* implicit */unsigned long long int) 752319673U)))))) * ((((+(var_0))) * (((/* implicit */unsigned long long int) ((var_5) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (var_12))))))));
    var_14 -= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) max((var_12), (((/* implicit */unsigned int) ((unsigned char) var_6)))))) != (((((/* implicit */_Bool) ((unsigned long long int) var_11))) ? (((/* implicit */unsigned long long int) var_12)) : (var_0)))));
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((int) min((((/* implicit */int) var_8)), (arr_1 [i_0] [i_0]))))) ? (((((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_0 [i_0])), (var_7)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_0 [i_0]))))) : (((((/* implicit */unsigned int) arr_1 [i_0] [i_0])) / (var_9))))) : (((/* implicit */unsigned int) (-(228148030))))));
        arr_2 [(short)9] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((((((/* implicit */int) var_10)) * (((/* implicit */int) var_1)))) | ((+(((/* implicit */int) (_Bool)1))))))) - (((((/* implicit */_Bool) ((unsigned int) var_10))) ? (((var_12) * (((/* implicit */unsigned int) ((/* implicit */int) var_3))))) : (((/* implicit */unsigned int) arr_1 [i_0] [i_0]))))));
    }
    for (unsigned short i_1 = 0; i_1 < 23; i_1 += 2) 
    {
        arr_5 [i_1] = ((/* implicit */_Bool) var_12);
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_2 = 4; i_2 < 19; i_2 += 1) 
        {
            var_16 = ((/* implicit */short) (-(((((/* implicit */_Bool) var_12)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))));
            /* LoopNest 3 */
            for (long long int i_3 = 0; i_3 < 23; i_3 += 2) 
            {
                for (unsigned short i_4 = 0; i_4 < 23; i_4 += 3) 
                {
                    for (signed char i_5 = 1; i_5 < 21; i_5 += 3) 
                    {
                        {
                            var_17 = var_9;
                            var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 1188098520U)) - (11ULL)))) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_1]))))))));
                            var_19 = ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_8))))) ? ((+(var_4))) : (((/* implicit */unsigned long long int) arr_14 [(_Bool)1] [i_1] [(_Bool)1] [i_2] [i_2 + 4]))));
                            var_20 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 3542647623U))));
                        }
                    } 
                } 
            } 
        }
        var_21 |= ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_10 [i_1] [i_1] [i_1] [i_1]))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_7))))) : (var_4)))));
        var_22 = ((/* implicit */signed char) (~(((1188098520U) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))));
        var_23 = ((/* implicit */int) (~(var_12)));
    }
    /* vectorizable */
    for (short i_6 = 3; i_6 < 24; i_6 += 2) 
    {
        var_24 = ((/* implicit */unsigned short) (-(((((/* implicit */int) arr_19 [i_6] [i_6])) / (arr_18 [i_6])))));
        var_25 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? (var_4) : (((/* implicit */unsigned long long int) var_2))));
        arr_20 [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_18 [i_6 - 3])) ? (arr_18 [i_6 + 1]) : (arr_18 [i_6 + 1])));
    }
    var_26 = ((/* implicit */unsigned short) max((var_26), (((/* implicit */unsigned short) (~(((/* implicit */int) ((((((/* implicit */_Bool) var_7)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) var_6))))) == (((/* implicit */unsigned int) (+(((/* implicit */int) var_6)))))))))))));
}
