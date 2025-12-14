/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187993
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187993 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187993
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
    for (signed char i_0 = 1; i_0 < 18; i_0 += 3) 
    {
        var_18 = min((((/* implicit */signed char) ((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned char)239)) : (((/* implicit */int) var_1)))) <= ((-(((/* implicit */int) (signed char)-29))))))), (var_3));
        var_19 |= ((/* implicit */signed char) (((+(min((arr_3 [i_0 + 1]), (((/* implicit */long long int) var_14)))))) + (arr_0 [i_0 - 1])));
        var_20 = arr_0 [i_0 + 1];
        var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) min((((/* implicit */long long int) var_14)), ((+(arr_0 [i_0 + 1]))))))));
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            for (unsigned char i_2 = 2; i_2 < 18; i_2 += 3) 
            {
                {
                    arr_9 [i_0] [i_1] [i_2] [i_1] = ((/* implicit */unsigned char) min((((/* implicit */long long int) (+(((/* implicit */int) var_15))))), (((long long int) (signed char)-29))));
                    arr_10 [i_0] [i_1] [i_1] = ((/* implicit */unsigned int) min((min((((arr_8 [i_0] [i_1] [i_1]) & (((/* implicit */long long int) arr_6 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 1])))), (((/* implicit */long long int) (signed char)-29)))), (min((((/* implicit */long long int) (signed char)-29)), (arr_8 [i_0 + 1] [i_2 - 2] [i_1])))));
                    arr_11 [i_1] [i_1] = ((/* implicit */signed char) (-(843417817U)));
                    arr_12 [i_1] = var_0;
                    arr_13 [i_0 + 1] [i_1] [i_2 - 2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_13))))) ? ((((-(((/* implicit */int) var_13)))) % ((+(((/* implicit */int) (signed char)51)))))) : ((+(((/* implicit */int) (signed char)-26))))));
                }
            } 
        } 
    }
    var_22 = min((var_4), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)54)) && (((/* implicit */_Bool) (signed char)60))))));
}
