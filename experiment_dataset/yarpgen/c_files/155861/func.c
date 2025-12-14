/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155861
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155861 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155861
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
    for (unsigned int i_0 = 1; i_0 < 14; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 15; i_2 += 1) 
            {
                {
                    arr_8 [i_0 - 1] [i_0 + 1] [i_0] = var_3;
                    var_10 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_1 [i_0])), (arr_4 [i_0] [i_0] [i_0 - 1])))) ? ((+((-(((/* implicit */int) arr_6 [i_0 - 1] [i_0 - 1] [i_2] [i_2])))))) : (((/* implicit */int) ((((/* implicit */int) (unsigned short)16058)) != (((/* implicit */int) (signed char)15)))))));
                    var_11 = ((/* implicit */unsigned char) (~((~(3084130857U)))));
                }
            } 
        } 
    } 
    var_12 = ((/* implicit */unsigned int) (~((~((~(((/* implicit */int) (short)32739))))))));
}
