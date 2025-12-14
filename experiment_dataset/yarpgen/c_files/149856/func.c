/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149856
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149856 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149856
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
    for (unsigned char i_0 = 1; i_0 < 16; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 19; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_3 = 0; i_3 < 19; i_3 += 1) 
                    {
                        arr_10 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_1] [(unsigned char)18]))) : (arr_6 [i_0] [i_0] [i_0 + 1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned char) var_4)), ((unsigned char)0)))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)60766))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) arr_5 [i_0] [i_2] [(short)8]))))) : (((var_0) & (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))))) : (var_7)));
                        var_17 = var_6;
                    }
                    var_18 = ((/* implicit */unsigned char) ((int) ((unsigned long long int) (signed char)-89)));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned char) var_4);
}
