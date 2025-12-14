/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179766
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179766 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179766
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
    var_10 -= ((/* implicit */unsigned long long int) var_8);
    var_11 -= ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((var_8) ? (((/* implicit */int) ((((/* implicit */int) var_8)) == (((/* implicit */int) var_6))))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) <= (var_2))))))), (((((/* implicit */_Bool) ((int) var_3))) ? (max((var_9), (4508452387399043134ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            {
                var_12 -= ((/* implicit */signed char) arr_0 [i_1]);
                arr_7 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)126)) ? (9144910857896110641LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1))))));
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 19; i_2 += 3) 
                {
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        {
                            /* LoopSeq 2 */
                            for (short i_4 = 0; i_4 < 19; i_4 += 2) 
                            {
                                var_13 = ((/* implicit */signed char) min((var_13), (var_0)));
                                arr_14 [i_1] [i_2] [i_0] [i_4] = ((/* implicit */signed char) var_9);
                                arr_15 [i_0] [i_1] [i_2] [i_3] [i_0] = arr_10 [i_4] [i_3] [i_2] [5] [i_4];
                                arr_16 [i_0] [i_0] [i_2] [i_3] [(short)4] = ((/* implicit */signed char) var_1);
                            }
                            for (int i_5 = 1; i_5 < 18; i_5 += 3) 
                            {
                                var_14 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) (unsigned char)209))) ? (((((/* implicit */int) arr_10 [i_1] [i_1] [i_5 + 1] [i_1] [(signed char)1])) * (((/* implicit */int) arr_10 [i_5] [i_5 + 1] [i_5 + 1] [i_5 + 1] [i_5])))) : ((+(((/* implicit */int) (signed char)96))))));
                                var_15 -= ((/* implicit */signed char) arr_1 [i_3] [i_1]);
                                arr_20 [i_1] [i_0] [i_5] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) min((var_6), (((/* implicit */signed char) ((_Bool) var_5)))))), (arr_17 [10ULL] [i_0] [(unsigned short)8] [i_3] [i_0])));
                                arr_21 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) (short)-2278)) % (((/* implicit */int) min((((/* implicit */unsigned char) (signed char)60)), ((unsigned char)211))))));
                            }
                            var_16 = ((/* implicit */unsigned long long int) max((var_16), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) + (max((arr_17 [i_0] [i_1] [i_2] [i_1] [i_1]), (arr_17 [i_0] [i_1] [i_2] [i_3 - 1] [i_1])))))));
                            var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) var_9))));
                        }
                    } 
                } 
            }
        } 
    } 
}
