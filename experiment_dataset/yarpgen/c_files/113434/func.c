/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113434
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113434 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113434
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
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 4; i_1 < 9; i_1 += 3) 
        {
            {
                var_13 = ((/* implicit */unsigned short) max((var_13), (((/* implicit */unsigned short) (~(((arr_5 [i_0]) ? (min((((/* implicit */unsigned int) var_5)), (16777215U))) : (((/* implicit */unsigned int) (-(((/* implicit */int) arr_5 [i_0]))))))))))));
                var_14 = ((/* implicit */_Bool) min((var_14), (((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) arr_0 [i_0 - 1]))))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (signed char i_2 = 0; i_2 < 18; i_2 += 2) 
    {
        for (int i_3 = 0; i_3 < 18; i_3 += 1) 
        {
            for (long long int i_4 = 0; i_4 < 18; i_4 += 2) 
            {
                {
                    var_15 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_2] [i_2])) ? (var_7) : (var_7)))) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_10 [i_4] [i_2])))) : ((-(var_7))))) - ((+(((((/* implicit */_Bool) 1319238616)) ? (-1319238616) : (921792769)))))));
                    var_16 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) arr_7 [i_2])))) ? (((/* implicit */int) ((((/* implicit */int) arr_7 [i_3])) <= (((/* implicit */int) var_8))))) : (((/* implicit */int) arr_7 [i_2]))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */long long int) ((int) (+(((/* implicit */int) var_5)))));
    var_18 *= ((/* implicit */short) 4278190076U);
}
