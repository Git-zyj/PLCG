/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183642
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183642 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183642
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
    for (unsigned short i_0 = 3; i_0 < 9; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 9; i_1 += 3) 
        {
            {
                arr_6 [i_0] = ((/* implicit */long long int) ((((((((/* implicit */int) arr_0 [i_0] [i_1 - 1])) << (((3758096384U) - (3758096377U))))) < (((/* implicit */int) arr_1 [i_1 + 1])))) && (((/* implicit */_Bool) arr_5 [i_1 + 2] [i_1] [i_0]))));
                arr_7 [i_0] [i_0] = ((/* implicit */unsigned char) arr_4 [i_1]);
            }
        } 
    } 
    var_12 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((((/* implicit */unsigned long long int) var_3)) * (var_1))) == (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)127)) < (((/* implicit */int) (unsigned short)18701))))))))) << (((/* implicit */int) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) + (var_8)))))))));
    /* LoopNest 2 */
    for (long long int i_2 = 0; i_2 < 13; i_2 += 3) 
    {
        for (unsigned int i_3 = 2; i_3 < 11; i_3 += 2) 
        {
            {
                arr_12 [i_2] [11] [i_3 - 1] = ((/* implicit */short) ((((((((/* implicit */int) arr_9 [i_2])) / (((/* implicit */int) arr_9 [i_3])))) / (((((/* implicit */int) arr_9 [i_3])) * (((/* implicit */int) arr_11 [i_2] [i_3])))))) * (((arr_10 [i_3 - 1] [i_2]) / (((((/* implicit */int) arr_8 [i_2])) / (((/* implicit */int) arr_8 [11]))))))));
                var_13 = ((/* implicit */signed char) arr_10 [i_3] [i_2]);
            }
        } 
    } 
}
