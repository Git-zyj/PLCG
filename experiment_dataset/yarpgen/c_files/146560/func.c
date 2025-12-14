/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146560
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146560 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146560
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
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (unsigned char i_1 = 4; i_1 < 16; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_10 [i_0] [i_1 - 4] [i_0] = ((/* implicit */unsigned short) ((signed char) 3405412049682019745LL));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 17; i_4 += 2) 
                        {
                            {
                                arr_15 [i_1] [i_2] [i_3 - 1] [i_4] = ((((/* implicit */_Bool) ((unsigned long long int) (signed char)-78))) ? (((((/* implicit */_Bool) var_6)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [i_0] [i_1 - 3]))))) : (((unsigned int) var_1)));
                                var_12 -= ((/* implicit */signed char) (-(((((/* implicit */_Bool) 15041321297949926903ULL)) ? (((/* implicit */int) var_5)) : (((((/* implicit */_Bool) (unsigned short)15898)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_3 [i_0] [i_1 - 1] [i_1 - 1]))))))));
                                var_13 = ((/* implicit */unsigned short) ((signed char) ((((/* implicit */_Bool) -1792563689)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1 + 1] [i_1 + 1] [i_2]))) : (arr_0 [i_1 + 1] [i_1 - 4]))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_14 = ((unsigned long long int) var_4);
}
