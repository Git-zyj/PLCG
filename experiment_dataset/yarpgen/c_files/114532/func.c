/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114532
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114532 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114532
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
    var_16 = ((/* implicit */unsigned int) var_6);
    var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (((_Bool)1) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))) ? (((((/* implicit */_Bool) var_7)) ? (var_12) : (((/* implicit */long long int) var_8)))) : (((/* implicit */long long int) ((/* implicit */int) var_7)))))) : (var_6)));
    var_18 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) min((var_13), (((/* implicit */long long int) (signed char)-64))))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)59))) : (var_12))), (((/* implicit */long long int) var_1))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (unsigned short i_1 = 2; i_1 < 13; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 14; i_2 += 1) 
                {
                    for (int i_3 = 2; i_3 < 12; i_3 += 1) 
                    {
                        {
                            arr_11 [(unsigned short)13] [i_1] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [(unsigned char)11] [(signed char)9] [i_2])) ? (3954232241994094386LL) : (((/* implicit */long long int) arr_3 [i_0]))))) ? (((((/* implicit */int) var_2)) + (((/* implicit */int) ((signed char) (signed char)84))))) : ((+(((/* implicit */int) var_10)))));
                            arr_12 [i_0] [i_0] [i_1] [(signed char)11] = var_9;
                            arr_13 [i_1] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_7 [(short)5] [i_3 + 2] [i_3 + 1] [i_3 + 1])))) / (((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)85))) < (3954232241994094390LL))))) % (max((((/* implicit */long long int) (unsigned short)64628)), (-7031730509531786714LL)))))));
                        }
                    } 
                } 
                arr_14 [i_1] = ((/* implicit */unsigned long long int) ((long long int) arr_6 [i_1 - 2] [i_1 - 1] [i_1 - 2]));
            }
        } 
    } 
}
