/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139626
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139626 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139626
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
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 18; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 19; i_2 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_3 = 0; i_3 < 20; i_3 += 1) 
                    {
                        arr_10 [i_1] [i_2 - 2] [i_2] [5ULL] [i_1] = ((((/* implicit */_Bool) 18446744073709551608ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))) : (8187326104118008389ULL));
                        var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(64848585146562361ULL)))) ? (((((/* implicit */_Bool) max((18446744073709551615ULL), (((/* implicit */unsigned long long int) var_2))))) ? (((unsigned long long int) var_3)) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_3] [(unsigned char)0] [(unsigned char)0] [i_0]))))) : (((((/* implicit */_Bool) arr_4 [i_2 - 1])) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_2 - 2])))))));
                    }
                    var_15 = ((/* implicit */unsigned long long int) var_9);
                    /* LoopNest 2 */
                    for (signed char i_4 = 0; i_4 < 20; i_4 += 3) 
                    {
                        for (signed char i_5 = 1; i_5 < 18; i_5 += 3) 
                        {
                            {
                                var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1 + 1]))) + (arr_0 [i_5 + 1] [i_2 + 1]))) + (((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)-15322))))))))));
                                arr_17 [i_5 + 2] [i_4] [i_1] [i_1] [i_1 + 2] [i_0] = arr_15 [18ULL] [i_0] [i_1] [18ULL] [i_4] [i_5 - 1];
                                var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) (+(((((/* implicit */_Bool) arr_11 [i_1 - 2] [i_0] [i_2 - 1] [i_5 - 1])) ? (((/* implicit */int) arr_11 [i_1 - 1] [i_0] [i_2 + 1] [i_4])) : (((/* implicit */int) var_4)))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) arr_16 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [(unsigned char)6]))) : (18446744073709551615ULL))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned int) var_13))) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_16 [i_0])) : (((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0] [i_0])))) : (((/* implicit */int) arr_4 [i_0]))))) : (arr_14 [(unsigned short)1] [i_0])));
    }
    var_19 = ((/* implicit */unsigned int) (~(((((unsigned long long int) var_2)) / (((var_7) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))))));
    var_20 = ((/* implicit */unsigned char) var_12);
}
