/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146098
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146098 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146098
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
    for (short i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        var_12 = ((/* implicit */int) max((var_12), (((/* implicit */int) max((((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) var_0))) == (arr_0 [i_0])))), (max((arr_1 [i_0] [i_0]), (arr_2 [i_0] [i_0]))))))));
        var_13 = ((/* implicit */unsigned int) max((-430492649), ((~((-(((/* implicit */int) (unsigned char)7))))))));
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 14; i_2 += 3) 
            {
                {
                    arr_8 [i_0] [i_1] = ((/* implicit */unsigned char) ((long long int) (!(((/* implicit */_Bool) var_11)))));
                    var_14 = ((/* implicit */long long int) var_7);
                    var_15 = ((/* implicit */int) (+(max((((var_11) | (arr_2 [i_1] [i_0]))), (((/* implicit */unsigned int) max((var_4), (((/* implicit */unsigned char) var_0)))))))));
                }
            } 
        } 
    }
    var_16 -= ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_0)) == (((/* implicit */int) var_0)))))) == (var_7))))));
    var_17 ^= ((/* implicit */unsigned int) (unsigned char)218);
    var_18 = var_4;
}
