/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14707
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14707 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14707
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
    for (signed char i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (unsigned short i_1 = 2; i_1 < 21; i_1 += 3) 
        {
            for (short i_2 = 2; i_2 < 20; i_2 += 2) 
            {
                {
                    arr_8 [i_0] [i_1 + 1] [i_0] [i_0] &= (-((-(((((/* implicit */int) var_13)) - ((-2147483647 - 1)))))));
                    arr_9 [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)8)) | (((((/* implicit */int) (unsigned short)0)) * (arr_5 [i_1] [i_2 - 2])))));
                }
            } 
        } 
    } 
    var_18 &= ((/* implicit */unsigned int) var_2);
    var_19 = ((((/* implicit */_Bool) var_7)) ? (((((var_2) << (((((var_17) + (759892135))) - (17))))) | (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned short)65522)) : (((/* implicit */int) (short)18121)))))) : ((-(var_2))));
    /* LoopNest 2 */
    for (unsigned char i_3 = 0; i_3 < 22; i_3 += 1) 
    {
        for (unsigned int i_4 = 2; i_4 < 21; i_4 += 1) 
        {
            {
                var_20 = (-(((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (arr_17 [i_4 - 1] [(unsigned char)16] [i_3]))));
                var_21 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)48))))) ? (arr_7 [i_3] [i_4]) : ((-(((/* implicit */int) var_11))))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)200))) * (((var_8) - (((/* implicit */unsigned long long int) arr_6 [i_3] [i_3] [i_3]))))))));
            }
        } 
    } 
}
