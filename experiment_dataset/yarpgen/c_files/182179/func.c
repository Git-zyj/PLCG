/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182179
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182179 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182179
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
    var_15 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) var_2)), (((((/* implicit */_Bool) (+(((/* implicit */int) var_4))))) ? (((unsigned long long int) var_6)) : (((/* implicit */unsigned long long int) var_5))))));
    var_16 = 18014398508957696ULL;
    var_17 = ((/* implicit */int) min((((long long int) var_4)), (((/* implicit */long long int) ((var_9) != (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))))))));
    var_18 += ((/* implicit */unsigned char) var_1);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            {
                var_19 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_0] [i_0])) || (((/* implicit */_Bool) 914486737))));
                arr_7 [i_1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned long long int) max((var_13), (((((/* implicit */int) var_2)) | (arr_0 [16] [i_1])))))) : (((var_9) / (((/* implicit */unsigned long long int) 914486739))))));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 2) 
                {
                    for (unsigned int i_3 = 0; i_3 < 24; i_3 += 4) 
                    {
                        {
                            arr_13 [i_0] [5ULL] [16] [i_0] [i_0] [i_0] = ((/* implicit */short) ((((((/* implicit */_Bool) arr_0 [i_2] [i_3])) ? (((unsigned long long int) var_10)) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_12 [i_0] [i_1] [i_1] [i_1] [i_1])) && (((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_3])))))))) << (((max((((((/* implicit */_Bool) var_5)) ? (914486738) : (var_7))), (((((/* implicit */_Bool) var_7)) ? (arr_11 [i_0]) : (arr_11 [(unsigned short)18]))))) - (1988151491)))));
                            var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) (unsigned short)22970)) >= (((((/* implicit */_Bool) (short)-3820)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (signed char)41))))))) <= (((/* implicit */int) min(((short)-18412), ((short)18411))))));
                            var_21 = arr_4 [1] [i_2];
                        }
                    } 
                } 
            }
        } 
    } 
}
