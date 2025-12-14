/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174422
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174422 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174422
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
    var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) min((min((var_0), (((/* implicit */int) var_18)))), (((/* implicit */int) ((((/* implicit */int) var_11)) != (((/* implicit */int) var_19)))))))) : (max((var_16), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_11))))))))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (short i_1 = 1; i_1 < 17; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 18; i_2 += 3) 
            {
                {
                    var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) ((signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) arr_6 [i_0] [i_1 - 1])) : (arr_1 [i_1] [i_2])))) ? (arr_1 [i_1 + 1] [(_Bool)1]) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_0))))))))))));
                    arr_9 [(unsigned short)14] [i_1 + 1] [i_1 - 1] [(unsigned char)14] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) ((2147483638) - (((/* implicit */int) var_13))))) ? (1964823177503459207LL) : (((/* implicit */long long int) max((2121183127), (var_0)))))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_18)) ? (arr_7 [i_0] [i_0] [i_1 - 1] [i_1 - 1]) : (2147483642))))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */int) ((signed char) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_0))))))));
}
