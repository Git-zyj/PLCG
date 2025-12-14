/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188583
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188583 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188583
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
    var_20 = (!(((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) 878685462)) && (((/* implicit */_Bool) -1231768884)))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            for (int i_2 = 3; i_2 < 18; i_2 += 1) 
            {
                {
                    arr_7 [i_2 - 3] [i_2] [i_0] = ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned long long int) var_19)) : (18446744073709551607ULL))))))));
                    var_21 = ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_11)))) - (((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (arr_3 [18] [i_1])))))) ? (((((/* implicit */int) max(((signed char)53), (arr_2 [i_1] [i_2])))) ^ (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0]))))))) : ((((!(((/* implicit */_Bool) 18446744073709551607ULL)))) ? (max((((/* implicit */int) var_10)), (-1675961897))) : (((((/* implicit */int) arr_6 [i_0])) + (((/* implicit */int) arr_2 [i_0] [i_0])))))));
                    var_22 = ((/* implicit */int) max((((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)56)) && (((/* implicit */_Bool) min((2691677071720650383ULL), (((/* implicit */unsigned long long int) var_13)))))))), ((unsigned short)16569)));
                }
            } 
        } 
    } 
}
