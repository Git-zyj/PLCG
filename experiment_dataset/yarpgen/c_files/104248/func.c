/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104248
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104248 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104248
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
    var_20 = ((/* implicit */int) min((var_11), (((((((/* implicit */unsigned int) -1129905656)) == (var_9))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -7385696150754239522LL)) ? (-7385696150754239516LL) : (-2458293438308787980LL)))) : (0ULL)))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (long long int i_1 = 1; i_1 < 18; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                {
                    var_21 = ((/* implicit */unsigned short) (+(((int) arr_4 [i_1 + 4] [i_1 + 3]))));
                    var_22 = ((/* implicit */unsigned long long int) var_17);
                    /* LoopNest 2 */
                    for (long long int i_3 = 1; i_3 < 20; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 3; i_4 < 20; i_4 += 4) 
                        {
                            {
                                arr_12 [i_0] [i_0] [i_2] [i_3 + 2] [i_4 - 3] [i_1] = ((/* implicit */_Bool) arr_4 [i_3] [i_3]);
                                var_23 = ((/* implicit */signed char) max((var_23), (((signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 7ULL)) ? (var_11) : (((/* implicit */unsigned long long int) var_15))))) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)139)) || (((/* implicit */_Bool) 18446744073709551593ULL))))) : (((/* implicit */int) var_17)))))));
                            }
                        } 
                    } 
                    var_24 = ((/* implicit */unsigned char) (~(((/* implicit */int) ((arr_7 [i_0] [i_1] [i_0]) != (((/* implicit */int) var_13)))))));
                }
            } 
        } 
    } 
    var_25 = ((/* implicit */unsigned char) max((max((((/* implicit */unsigned long long int) ((unsigned int) var_14))), (((((/* implicit */_Bool) var_5)) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_17))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 533858154)) ? (((/* implicit */long long int) var_3)) : (7385696150754239526LL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (min((var_11), (((/* implicit */unsigned long long int) var_3))))))));
    var_26 = ((/* implicit */long long int) (unsigned char)0);
}
