/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167626
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167626 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167626
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
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (long long int i_1 = 1; i_1 < 12; i_1 += 3) 
        {
            {
                arr_4 [(unsigned short)2] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((signed char) arr_2 [i_0] [(_Bool)1] [i_1])), (((/* implicit */signed char) ((((/* implicit */int) (_Bool)1)) != ((-2147483647 - 1)))))))) ? (min((((/* implicit */long long int) max((2173059584U), (((/* implicit */unsigned int) (unsigned short)65535))))), (((long long int) arr_3 [i_0] [i_1])))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) min((var_10), (var_5))))))));
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 2; i_2 < 13; i_2 += 2) 
                {
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 14; i_4 += 3) 
                        {
                            {
                                arr_14 [i_3] [i_1 - 1] [i_1 - 1] [i_3] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_9 [i_1] [i_1] [6] [i_1])) ? (((/* implicit */int) arr_0 [i_0])) : (var_10)));
                                arr_15 [12LL] [i_3] [(unsigned char)13] = ((/* implicit */long long int) var_9);
                                var_12 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) (unsigned short)44664)) >= (((/* implicit */int) (unsigned short)44663)))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) (+(((/* implicit */int) arr_12 [i_0] [i_1] [i_2] [6LL] [i_4]))))))) : (((((/* implicit */_Bool) arr_13 [i_0] [i_1 - 1] [i_1] [i_1] [i_2 + 1] [i_3 - 1] [i_4])) ? (arr_13 [i_0] [i_0] [i_0] [1U] [(unsigned char)9] [i_3 - 1] [i_4]) : (arr_13 [i_0] [i_1 + 1] [(short)3] [i_3] [i_3] [i_4] [i_4])))));
                                arr_16 [i_4] [i_3] [i_2] [i_3] [i_0] = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_6 [i_1 - 1] [i_2])) || (((/* implicit */_Bool) arr_13 [i_0] [i_0] [(unsigned char)1] [(unsigned char)1] [i_0] [i_0] [i_0])))) && (((/* implicit */_Bool) min((arr_13 [i_0] [(unsigned short)4] [i_2] [(unsigned short)4] [i_3 - 1] [i_3] [i_4]), (((/* implicit */long long int) (unsigned short)26612)))))));
                                var_13 = ((/* implicit */unsigned short) arr_3 [(unsigned short)10] [(unsigned short)10]);
                            }
                        } 
                    } 
                } 
                arr_17 [i_1 + 2] [i_0] = ((/* implicit */signed char) min(((~(((((/* implicit */_Bool) (unsigned short)38924)) ? (arr_9 [i_0] [i_0] [i_1] [i_1 - 1]) : (((/* implicit */unsigned long long int) var_6)))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)18883)) ? (((/* implicit */int) (short)14228)) : (((/* implicit */int) (unsigned short)44664)))))));
                arr_18 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) min((((/* implicit */int) var_0)), (((int) min((var_7), (((/* implicit */unsigned long long int) arr_12 [i_1] [i_1 + 2] [i_1 + 2] [i_1] [i_1 + 2])))))));
                arr_19 [1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_1])) ? (((long long int) arr_5 [i_0])) : (((/* implicit */long long int) ((int) (unsigned short)17676)))))) && ((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_3 [i_1] [(unsigned short)7])) : (422607352))))))));
            }
        } 
    } 
    var_14 = ((/* implicit */int) 2019693499U);
    var_15 = (unsigned short)38924;
}
