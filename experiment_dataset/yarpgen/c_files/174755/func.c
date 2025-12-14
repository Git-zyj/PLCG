/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174755
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174755 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174755
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
    var_18 = ((/* implicit */signed char) (-(((/* implicit */int) (!(((/* implicit */_Bool) ((var_11) >> (((/* implicit */int) (_Bool)1))))))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 1; i_0 < 18; i_0 += 1) 
    {
        for (int i_1 = 3; i_1 < 17; i_1 += 1) 
        {
            for (unsigned short i_2 = 3; i_2 < 16; i_2 += 1) 
            {
                {
                    var_19 = ((/* implicit */signed char) (~(((var_6) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0 - 1])))))));
                    arr_8 [i_0] [i_0] [i_0] [i_0] = ((((((/* implicit */_Bool) var_3)) ? (arr_1 [i_0]) : (arr_1 [i_0]))) & (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_2 + 3])))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_3 = 0; i_3 < 17; i_3 += 1) 
    {
        for (unsigned long long int i_4 = 0; i_4 < 17; i_4 += 1) 
        {
            {
                var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((int) arr_6 [i_3] [i_4] [i_3] [i_4]))) ? (min((((((/* implicit */_Bool) (unsigned char)183)) ? (((/* implicit */int) arr_3 [i_4])) : (((/* implicit */int) (signed char)31)))), (((/* implicit */int) arr_4 [i_3] [i_3] [i_3])))) : (((/* implicit */int) var_4))));
                var_21 = ((/* implicit */long long int) ((((/* implicit */int) var_13)) | (((/* implicit */int) (signed char)24))));
                var_22 += ((/* implicit */unsigned short) arr_13 [i_3]);
            }
        } 
    } 
}
