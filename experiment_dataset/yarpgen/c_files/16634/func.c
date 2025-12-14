/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16634
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16634 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16634
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
    var_15 = ((/* implicit */unsigned int) ((long long int) ((((/* implicit */_Bool) var_3)) ? ((-(((/* implicit */int) var_10)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_14))))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 13; i_2 += 2) 
            {
                {
                    var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned char) ((signed char) var_3)))) ? (min(((+(var_11))), (((/* implicit */long long int) max((588543993U), (var_9)))))) : (((/* implicit */long long int) ((/* implicit */int) ((short) ((var_4) << (((((((/* implicit */int) arr_0 [0U])) + (172))) - (60)))))))))))));
                    var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((var_0), (((/* implicit */long long int) (signed char)-106))))) ? (max((((/* implicit */long long int) var_8)), (var_4))) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [i_1] [i_1])))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 3; i_3 < 11; i_3 += 2) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_14 [i_0] [i_1] [i_1] [i_3] = ((/* implicit */long long int) (+(((/* implicit */int) arr_9 [i_3 - 2] [i_3 - 3] [i_3] [i_3 + 2]))));
                                var_18 = ((((long long int) -4524473204271858133LL)) > (((/* implicit */long long int) ((/* implicit */int) ((short) var_13)))));
                                var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((-4524473204271858140LL), (((/* implicit */long long int) var_7))))) ? (min(((~(var_5))), (((/* implicit */unsigned int) ((short) var_2))))) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                                var_20 = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_10 [i_3 + 1] [i_3 - 1])) ? (var_13) : (arr_10 [i_3 + 1] [i_3 + 2]))), (((/* implicit */unsigned int) min((((((/* implicit */int) var_8)) % (((/* implicit */int) (unsigned char)126)))), (((/* implicit */int) var_1)))))));
                                var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) arr_6 [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_3 - 1]))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) (((+(var_6))) == (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4524473204271858156LL)) ? (((((-4524473204271858133LL) + (9223372036854775807LL))) >> (((var_4) - (3292567706914473349LL))))) : (((/* implicit */long long int) ((/* implicit */int) ((var_7) != (((/* implicit */int) var_12))))))))))))));
}
