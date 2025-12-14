/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108346
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108346 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108346
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
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (unsigned short i_1 = 1; i_1 < 22; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 24; i_2 += 2) 
            {
                {
                    var_11 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_10)) / (-2106812870)))) ? (((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) arr_3 [i_0] [i_1])))) : (2106812846)))) ? (((/* implicit */int) ((((/* implicit */int) arr_3 [i_1 - 1] [i_1])) < (((/* implicit */int) (_Bool)1))))) : (((/* implicit */int) var_8))));
                    arr_6 [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) var_4)))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [(unsigned short)16]))) : (arr_2 [(unsigned char)4] [i_2]))))))));
                    var_12 = ((/* implicit */int) (+(var_7)));
                    var_13 = ((/* implicit */_Bool) var_1);
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) (!(((/* implicit */_Bool) var_8)))))));
    var_15 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_0))));
}
