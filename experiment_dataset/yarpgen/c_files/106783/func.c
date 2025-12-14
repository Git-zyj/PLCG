/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106783
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106783 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106783
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
    var_16 = ((/* implicit */int) (~(min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_1))))), (((((/* implicit */_Bool) (unsigned short)65535)) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 4; i_0 < 21; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            {
                var_17 &= ((/* implicit */short) var_10);
                arr_6 [i_0] = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 43900837)) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (arr_0 [i_0]))))))), (max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) -262851703220145959LL))))), (((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */unsigned int) 2147483647)) : (var_11)))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned short i_2 = 0; i_2 < 21; i_2 += 4) 
    {
        for (unsigned short i_3 = 0; i_3 < 21; i_3 += 2) 
        {
            for (unsigned long long int i_4 = 2; i_4 < 18; i_4 += 4) 
            {
                {
                    arr_14 [i_2] [i_3] [(signed char)19] [i_3] |= ((/* implicit */signed char) min((((((/* implicit */_Bool) arr_2 [i_2])) ? (((/* implicit */int) (signed char)-6)) : (((/* implicit */int) arr_2 [i_3])))), (-198133600)));
                    var_18 = ((/* implicit */signed char) var_2);
                }
            } 
        } 
    } 
}
