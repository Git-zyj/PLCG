/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183596
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183596 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183596
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
    var_10 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)58741)) ? (((int) (+(var_9)))) : (min((var_7), (((/* implicit */int) (unsigned short)6794))))));
    var_11 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((min((var_0), (var_9))), (((/* implicit */int) (unsigned short)58736))))) ? (((((/* implicit */_Bool) var_2)) ? (((int) (unsigned short)6794)) : (((int) (unsigned short)58719)))) : ((+(((/* implicit */int) ((var_7) == (var_0))))))));
    var_12 |= var_7;
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 12; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_4 [i_0] [i_0] [i_1] &= ((/* implicit */signed char) var_7);
                var_13 = var_5;
            }
        } 
    } 
    /* LoopNest 3 */
    for (int i_2 = 2; i_2 < 14; i_2 += 2) 
    {
        for (int i_3 = 1; i_3 < 15; i_3 += 3) 
        {
            for (unsigned int i_4 = 0; i_4 < 16; i_4 += 4) 
            {
                {
                    var_14 += ((/* implicit */unsigned int) (~(((/* implicit */int) min((arr_10 [i_3 - 1] [i_4] [i_4]), (((/* implicit */unsigned short) (signed char)-5)))))));
                    arr_14 [i_3] [(unsigned short)13] [i_4] [i_3] = ((/* implicit */int) var_4);
                    var_15 += ((/* implicit */int) (((~(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-43))))))) < (((arr_7 [i_4] [i_2 - 1]) / (((/* implicit */int) arr_6 [i_3 - 1]))))));
                    arr_15 [i_2] [i_3] = ((/* implicit */unsigned int) ((int) min((797627136U), (((/* implicit */unsigned int) (unsigned short)58741)))));
                }
            } 
        } 
    } 
}
