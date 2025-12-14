/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105061
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105061 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105061
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
    var_11 = ((/* implicit */int) ((short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_0)), (18446744073709551615ULL)))) && (((/* implicit */_Bool) ((var_9) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (signed char)-79))))))));
    var_12 = ((/* implicit */signed char) ((((/* implicit */_Bool) min(((-(1ULL))), (((/* implicit */unsigned long long int) (unsigned short)0))))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) min(((short)26014), (((/* implicit */short) (signed char)127)))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (signed char i_1 = 2; i_1 < 14; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (unsigned short i_2 = 0; i_2 < 17; i_2 += 2) 
                {
                    for (signed char i_3 = 1; i_3 < 16; i_3 += 2) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_12 [i_3] [i_1] [i_3] = ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)(-127 - 1)))));
                                var_13 = ((/* implicit */_Bool) max((((((/* implicit */int) var_6)) & (((/* implicit */int) arr_11 [i_3] [i_3 - 1] [i_3] [i_3 + 1] [i_3 - 1] [i_3 - 1] [i_3])))), (((/* implicit */int) min((arr_11 [i_3] [i_3 - 1] [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_3]), (((/* implicit */unsigned short) var_3)))))));
                            }
                        } 
                    } 
                } 
                var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) (signed char)-127)) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) (unsigned char)44)))), (((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [(short)16] [i_0] [i_0] [i_0]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (((min((18446744073709551594ULL), (5279566058391897522ULL))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_0 [i_0]) == (((/* implicit */int) (signed char)-115))))))))));
            }
        } 
    } 
}
