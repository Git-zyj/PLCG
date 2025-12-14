/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186482
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186482 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186482
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
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        var_13 = ((/* implicit */_Bool) (((-(((/* implicit */int) arr_2 [i_0])))) + (((/* implicit */int) max((arr_2 [i_0]), (arr_2 [i_0]))))));
        var_14 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (2639011127U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_0])))))), (max((arr_1 [i_0]), (((/* implicit */unsigned long long int) max((arr_0 [i_0] [i_0]), (((/* implicit */unsigned short) var_9)))))))));
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 1; i_1 < 15; i_1 += 1) 
    {
        arr_5 [i_1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_4 [i_1 + 1] [i_1 + 2]))));
        /* LoopNest 3 */
        for (int i_2 = 3; i_2 < 16; i_2 += 2) 
        {
            for (unsigned long long int i_3 = 2; i_3 < 14; i_3 += 4) 
            {
                for (int i_4 = 3; i_4 < 15; i_4 += 3) 
                {
                    {
                        arr_14 [i_2] [i_2 - 3] [i_4] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (+(var_6))))));
                        var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [i_1] [i_1] [i_2])) ? (0) : (((/* implicit */int) (unsigned char)209))));
                        arr_15 [i_2] [i_2] [i_2] [i_2 + 1] [i_2 - 2] [i_2] = ((/* implicit */unsigned long long int) ((short) 1757878717));
                        var_16 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (var_3)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 4294967295U))))) : (((/* implicit */int) arr_9 [i_3 + 2] [i_3 + 1] [i_1]))));
                        var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) arr_10 [i_3] [i_3] [i_2] [i_3]))));
                    }
                } 
            } 
        } 
        var_18 = ((/* implicit */unsigned long long int) arr_6 [i_1 + 2] [i_1 - 1] [(short)10]);
        var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 1757878717)))))) == (((unsigned long long int) var_1))));
    }
    var_20 = ((/* implicit */int) var_4);
}
