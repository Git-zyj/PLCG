/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186226
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186226 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186226
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
    var_18 *= ((/* implicit */unsigned int) ((var_12) & (((((/* implicit */long long int) ((/* implicit */int) var_4))) ^ (((var_15) & (((/* implicit */long long int) ((/* implicit */int) var_11)))))))));
    var_19 = ((/* implicit */long long int) var_14);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (unsigned short i_1 = 2; i_1 < 13; i_1 += 2) 
        {
            {
                arr_4 [i_0] [i_0] = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) ((((/* implicit */int) (short)2805)) | (((/* implicit */int) (short)2805))))), (min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_1))))), (((arr_0 [i_0] [i_1]) / (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))))));
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */long long int) var_10);
                var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) arr_1 [i_0] [i_0]))));
                var_21 += ((/* implicit */long long int) (+(((((/* implicit */_Bool) (~(((/* implicit */int) var_5))))) ? (max((arr_3 [i_0] [i_1] [i_0]), (((/* implicit */unsigned int) var_4)))) : (arr_0 [i_0] [i_0])))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_2 = 0; i_2 < 14; i_2 += 2) 
    {
        for (short i_3 = 0; i_3 < 14; i_3 += 3) 
        {
            {
                var_22 *= ((/* implicit */_Bool) arr_8 [i_3]);
                var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)20))) - (var_6)));
            }
        } 
    } 
}
