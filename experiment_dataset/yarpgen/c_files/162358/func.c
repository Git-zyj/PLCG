/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162358
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162358 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162358
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
    var_12 = min((((((/* implicit */_Bool) ((unsigned char) var_11))) ? (((((/* implicit */long long int) var_1)) / (var_5))) : (((/* implicit */long long int) ((/* implicit */int) var_4))))), (((/* implicit */long long int) ((unsigned int) 8427908605605882525ULL))));
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        var_13 = ((/* implicit */long long int) ((((/* implicit */_Bool) 10018835468103669089ULL)) ? (10018835468103669087ULL) : (8427908605605882525ULL)));
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 25; i_2 += 1) 
            {
                for (long long int i_3 = 0; i_3 < 25; i_3 += 3) 
                {
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned long long int i_4 = 0; i_4 < 25; i_4 += 3) 
                        {
                            arr_16 [i_2] [i_1] [i_2] [i_2] [i_2] = ((/* implicit */_Bool) ((unsigned char) arr_8 [i_0] [i_2] [i_2]));
                            var_14 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_14 [(unsigned short)20] [i_0] [i_3] [i_4])) ? (((/* implicit */int) arr_14 [2ULL] [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_14 [i_0] [i_0] [i_0] [i_0]))));
                        }
                        var_15 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) min((((/* implicit */int) var_11)), ((+(((/* implicit */int) arr_14 [i_3] [i_2] [i_2] [(unsigned char)17]))))))), ((-(var_7)))));
                    }
                } 
            } 
        } 
        arr_17 [i_0] &= ((/* implicit */_Bool) 8427908605605882525ULL);
    }
    /* vectorizable */
    for (unsigned long long int i_5 = 0; i_5 < 12; i_5 += 3) 
    {
        arr_22 [i_5] [i_5] = ((/* implicit */long long int) ((arr_18 [i_5]) * (((/* implicit */unsigned long long int) var_0))));
        var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) (-(1490206081U))))));
        arr_23 [i_5] [i_5] = ((/* implicit */unsigned int) ((int) var_7));
    }
    for (unsigned long long int i_6 = 0; i_6 < 20; i_6 += 1) 
    {
        arr_26 [i_6] = ((/* implicit */short) ((unsigned long long int) ((unsigned long long int) -1LL)));
        var_17 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) max((var_4), (var_4)))) ? (((/* implicit */unsigned long long int) var_5)) : (max((8427908605605882525ULL), (((/* implicit */unsigned long long int) arr_14 [i_6] [i_6] [i_6] [i_6]))))))));
        var_18 = ((short) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (((((/* implicit */long long int) ((/* implicit */int) var_4))) | (var_7)))));
    }
    var_19 = ((/* implicit */long long int) var_2);
    var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) ((_Bool) 15579694000165493982ULL))) : (((/* implicit */int) var_4))))) ? ((+(min((var_5), (((/* implicit */long long int) var_11)))))) : (((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) 8427908605605882525ULL)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) var_11))))) : (min((((/* implicit */long long int) var_1)), (var_0)))))));
}
