/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166512
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166512 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166512
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
    var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) max((((((((/* implicit */_Bool) 2575576651U)) || (((/* implicit */_Bool) var_14)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_15))) : (((((/* implicit */_Bool) 2575576650U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (2575576659U))))), (((/* implicit */unsigned int) (!(((18446744073709551611ULL) >= (((/* implicit */unsigned long long int) 1719390636U))))))))))));
    var_17 = ((/* implicit */short) max((var_5), (((/* implicit */long long int) (+((-(1719390656U))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (unsigned int i_1 = 4; i_1 < 21; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 22; i_2 += 2) 
                {
                    for (unsigned int i_3 = 0; i_3 < 22; i_3 += 2) 
                    {
                        {
                            var_18 *= ((/* implicit */unsigned long long int) max(((-((-(((/* implicit */int) arr_1 [i_3])))))), (max((((/* implicit */int) (unsigned char)207)), (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) (signed char)-14)) : (((/* implicit */int) (unsigned char)50))))))));
                            arr_10 [i_2] [i_2] [i_1] [i_0] = ((/* implicit */long long int) (+(((/* implicit */int) (((~(((/* implicit */int) arr_2 [i_3] [i_2])))) >= (((((/* implicit */_Bool) 1719390645U)) ? (((/* implicit */int) arr_3 [i_0] [(short)6] [i_3])) : (((/* implicit */int) arr_5 [i_2])))))))));
                            var_19 += ((/* implicit */unsigned int) (-(((/* implicit */int) ((short) max((((/* implicit */short) var_0)), ((short)21730)))))));
                            var_20 |= ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_1 - 4] [i_1 - 3] [i_1 - 3] [i_1 - 4])) ? (((/* implicit */int) arr_9 [i_1 - 2] [i_1 - 3] [i_1 - 4] [i_1 - 3])) : (((/* implicit */int) (short)6161)))))));
                        }
                    } 
                } 
                var_21 ^= ((/* implicit */short) ((((((/* implicit */_Bool) arr_3 [i_1 + 1] [i_1 + 1] [i_1])) ? (((/* implicit */int) arr_3 [i_1 - 2] [i_1 - 4] [i_1])) : (2034408248))) ^ (((/* implicit */int) ((short) (!(((/* implicit */_Bool) arr_5 [16LL]))))))));
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned short) (((~(1719390625U))) >= (((/* implicit */unsigned int) ((/* implicit */int) (short)6168)))));
    var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) (((-(var_11))) << ((((+(((/* implicit */int) (short)32757)))) - (32757)))))) ? (483129405U) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (!(((/* implicit */_Bool) 17028700903395175901ULL))))) : (((((/* implicit */_Bool) 1719390642U)) ? (((/* implicit */int) (short)-908)) : (((/* implicit */int) (unsigned char)202)))))))));
}
