/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179799
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179799 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179799
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
    var_18 = ((/* implicit */signed char) var_5);
    var_19 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) var_11)), (((((/* implicit */_Bool) ((((/* implicit */int) (signed char)1)) / (((/* implicit */int) (signed char)(-127 - 1)))))) ? (((/* implicit */unsigned long long int) var_15)) : (((unsigned long long int) var_5))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 21; i_2 += 2) 
            {
                {
                    arr_9 [i_0] [i_1] [i_0] = ((/* implicit */short) min((((/* implicit */unsigned int) max((var_14), (((/* implicit */signed char) arr_7 [i_0] [(unsigned short)12] [i_0] [i_0]))))), (var_16)));
                    var_20 -= ((/* implicit */_Bool) arr_5 [i_2] [i_2]);
                    arr_10 [i_0] [i_0] [i_2] [i_2] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_7 [i_2] [i_1] [i_1] [i_0])) == (((/* implicit */int) var_5)))))) < (((arr_5 [i_0] [i_0]) % (((/* implicit */unsigned long long int) var_7))))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (long long int i_3 = 2; i_3 < 19; i_3 += 1) 
    {
        for (unsigned int i_4 = 3; i_4 < 21; i_4 += 3) 
        {
            for (unsigned long long int i_5 = 2; i_5 < 21; i_5 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_6 = 0; i_6 < 22; i_6 += 1) 
                    {
                        for (unsigned short i_7 = 4; i_7 < 21; i_7 += 2) 
                        {
                            {
                                var_21 -= ((((unsigned int) ((unsigned short) var_0))) < (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_3] [i_3]))));
                                var_22 += ((/* implicit */unsigned short) (signed char)-52);
                            }
                        } 
                    } 
                    arr_24 [i_3] [i_3] [i_4] [i_5] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_22 [i_3 - 1] [i_4 + 1] [i_5 - 1])) > (((/* implicit */int) arr_22 [i_3 + 3] [i_4 - 3] [i_5 - 1])))))) > (((((/* implicit */_Bool) (signed char)14)) ? (1048575U) : (((/* implicit */unsigned int) 49152))))));
                }
            } 
        } 
    } 
}
