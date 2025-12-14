/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161828
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161828 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161828
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
    var_19 = ((/* implicit */unsigned char) min((var_4), (((/* implicit */unsigned short) var_6))));
    var_20 = ((((/* implicit */_Bool) min((((((/* implicit */int) (signed char)22)) << (((((/* implicit */int) var_11)) - (43864))))), ((+(var_2)))))) || (((/* implicit */_Bool) (+(((/* implicit */int) var_10))))));
    var_21 += ((/* implicit */signed char) (+(((/* implicit */int) var_16))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            {
                var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned short) ((var_8) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (0LL))))) ? (((((/* implicit */_Bool) ((unsigned int) var_11))) ? (((/* implicit */int) (signed char)6)) : (((/* implicit */int) min((var_5), (var_5)))))) : (((/* implicit */int) arr_4 [(_Bool)1]))));
                var_23 += ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)1))))) ? ((+(-2147483635))) : (((/* implicit */int) var_13))))) ? (((/* implicit */int) min((arr_4 [i_0]), (arr_4 [i_0])))) : (17)));
                /* LoopSeq 1 */
                for (signed char i_2 = 1; i_2 < 13; i_2 += 3) 
                {
                    var_24 = ((/* implicit */_Bool) min((var_24), (((/* implicit */_Bool) min((((((/* implicit */_Bool) min((((/* implicit */long long int) 441046966U)), (0LL)))) ? (((((/* implicit */_Bool) 4280149743776916113LL)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) -18)))) : (-1LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((var_0) ? (17) : (((/* implicit */int) var_11))))) ? (((/* implicit */int) min((var_0), (var_16)))) : (((/* implicit */int) var_8))))))))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (long long int i_4 = 3; i_4 < 14; i_4 += 3) 
                        {
                            {
                                var_25 = arr_0 [i_4];
                                var_26 = ((/* implicit */unsigned short) max((((var_7) >> (((arr_11 [i_1] [i_1] [i_2 + 2] [i_2] [i_3] [i_4 - 2] [i_2]) - (2006318838))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_5 [i_2])))))));
                                var_27 = ((/* implicit */unsigned char) max((var_27), (((/* implicit */unsigned char) (signed char)-8))));
                                var_28 = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_10 [i_2 - 1] [i_4] [i_4] [i_4 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_2 + 3] [i_3] [i_4] [i_4 + 1]))) : (2287436161U))), (((/* implicit */unsigned int) min((((var_16) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_9)))), (var_15))))));
                                var_29 = ((/* implicit */unsigned long long int) min((var_29), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((max((((/* implicit */unsigned long long int) var_3)), (arr_1 [i_1] [i_3]))), (((/* implicit */unsigned long long int) -5656451329868322822LL))))))))));
                            }
                        } 
                    } 
                    var_30 = ((/* implicit */signed char) (+(((/* implicit */int) var_4))));
                }
            }
        } 
    } 
}
