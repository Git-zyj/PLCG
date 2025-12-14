/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171661
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171661 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171661
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
    var_15 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) -1013390823)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) var_9)) : (var_1)))))), ((!(((/* implicit */_Bool) var_12))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            for (long long int i_2 = 1; i_2 < 18; i_2 += 3) 
            {
                {
                    arr_9 [i_1] [i_1] [i_1] [i_0] = ((/* implicit */long long int) ((max((((/* implicit */int) (short)30084)), (arr_7 [i_2 + 1] [i_2 - 1] [i_0]))) << (((((min((((((/* implicit */_Bool) (unsigned char)197)) ? (arr_7 [i_0] [i_1] [i_2]) : (arr_2 [i_2 + 1]))), (arr_2 [i_1]))) + (289113544))) - (13)))));
                    var_16 = ((/* implicit */unsigned short) ((unsigned int) arr_7 [i_2] [i_2 - 1] [i_2 + 1]));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */int) var_4);
    var_18 += ((/* implicit */unsigned char) ((((/* implicit */int) var_11)) * (((/* implicit */int) var_11))));
    /* LoopNest 3 */
    for (unsigned short i_3 = 1; i_3 < 16; i_3 += 4) 
    {
        for (unsigned int i_4 = 3; i_4 < 13; i_4 += 2) 
        {
            for (long long int i_5 = 0; i_5 < 17; i_5 += 3) 
            {
                {
                    arr_19 [i_5] [i_4 - 2] [i_3] [i_5] = ((((/* implicit */_Bool) ((((/* implicit */int) arr_5 [i_5] [i_4] [i_3 + 1])) + (((/* implicit */int) (signed char)102))))) ? (((arr_5 [i_3] [i_3] [i_3 + 1]) ? (((/* implicit */int) arr_5 [i_3] [i_4 - 1] [i_3 + 1])) : (((/* implicit */int) arr_5 [i_3] [i_4 - 2] [i_3 + 1])))) : (((/* implicit */int) min(((short)-512), (((/* implicit */short) arr_5 [i_3 - 1] [i_3] [i_3 + 1]))))));
                    arr_20 [i_3] [i_5] = ((/* implicit */short) var_1);
                    var_19 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_12 [i_3 + 1])) ? (((/* implicit */int) arr_12 [i_3 - 1])) : (((/* implicit */int) arr_4 [i_3 - 1] [i_4] [i_4 + 2])))) < (((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))));
                }
            } 
        } 
    } 
}
