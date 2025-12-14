/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187291
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187291 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187291
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
    var_10 = ((/* implicit */signed char) min((var_10), (((/* implicit */signed char) var_2))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 13; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 13; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 13; i_4 += 3) 
                        {
                            {
                                var_11 = ((/* implicit */int) max((var_11), (((/* implicit */int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_1 [(short)5])) ? (arr_10 [i_1] [i_0] [(unsigned short)8] [i_0] [i_4] [(unsigned char)8] [i_4]) : (((/* implicit */int) var_7)))), (((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */int) arr_3 [i_2] [i_3] [i_4])) : (((/* implicit */int) arr_2 [i_0] [i_0] [i_0]))))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (short)0)) ? (((/* implicit */int) arr_11 [i_0] [i_1] [(unsigned short)8] [12ULL] [i_4])) : (((/* implicit */int) arr_3 [i_0] [i_2] [(unsigned short)7]))))))))));
                                var_12 = ((/* implicit */short) (+(14ULL)));
                            }
                        } 
                    } 
                    var_13 = ((/* implicit */unsigned long long int) min((var_13), (((/* implicit */unsigned long long int) (short)32767))));
                    var_14 = ((/* implicit */signed char) (unsigned short)31);
                }
            } 
        } 
    } 
}
