/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103455
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103455 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103455
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
    var_16 = ((/* implicit */short) max((((/* implicit */unsigned short) (signed char)74)), ((unsigned short)47093)));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            {
                arr_7 [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */int) var_6)) >= (((/* implicit */int) ((unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)176))) + (arr_1 [i_0] [i_1])))))));
                var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) ((unsigned short) min((arr_0 [i_1]), (arr_0 [i_0])))))));
                /* LoopSeq 2 */
                for (unsigned char i_2 = 4; i_2 < 19; i_2 += 3) 
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 20; i_4 += 2) 
                        {
                            {
                                arr_16 [i_0] [i_2] = ((/* implicit */_Bool) arr_3 [i_1] [i_1]);
                                var_18 = ((/* implicit */short) min((((/* implicit */int) (unsigned char)80)), (arr_14 [i_2])));
                                var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) ((arr_6 [i_0] [i_3]) ? (((unsigned int) arr_9 [i_0])) : (((unsigned int) (!(((/* implicit */_Bool) arr_8 [i_3 + 1] [i_4] [i_4] [i_3 + 1]))))))))));
                            }
                        } 
                    } 
                    var_20 += ((/* implicit */signed char) (+((~(771378315U)))));
                    var_21 = ((/* implicit */long long int) (~(max((3827981311U), (((/* implicit */unsigned int) 524287))))));
                    arr_17 [i_2] [i_1] [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (+(3523588980U)))) ? (((arr_8 [i_0] [i_2] [i_2] [i_0]) / (((/* implicit */unsigned long long int) arr_3 [i_0] [i_1])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))))) / ((+(12329722575132085671ULL)))));
                }
                for (signed char i_5 = 1; i_5 < 19; i_5 += 4) 
                {
                    var_22 += ((/* implicit */short) ((10613240429006360776ULL) << (((((/* implicit */int) (signed char)-1)) + (61)))));
                    arr_20 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((((/* implicit */long long int) ((/* implicit */int) (unsigned char)176))) / (9223372036854775807LL))), (((/* implicit */long long int) (unsigned short)18449))))) ? (max((((/* implicit */int) (!(((/* implicit */_Bool) 1567359475))))), (((((/* implicit */_Bool) (unsigned char)68)) ? (arr_14 [i_1]) : (1567359475))))) : ((+(((((/* implicit */_Bool) var_12)) ? (arr_3 [i_0] [i_1]) : (((/* implicit */int) arr_0 [i_0]))))))));
                    var_23 = ((/* implicit */short) arr_15 [i_0] [i_0] [i_0] [i_1] [i_5 + 1]);
                }
                var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)79)) ? (3282474378U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-46)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : ((-(arr_1 [(short)1] [14])))));
            }
        } 
    } 
}
