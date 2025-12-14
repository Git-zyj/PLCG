/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145176
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145176 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145176
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
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            {
                arr_5 [i_1] [i_0] [i_0] &= ((/* implicit */short) (!(((/* implicit */_Bool) -844375446))));
                var_19 *= ((/* implicit */signed char) ((((/* implicit */_Bool) min((((int) (short)-8753)), (((/* implicit */int) ((signed char) arr_1 [i_1])))))) ? (((((/* implicit */_Bool) 844375445)) ? (5829969762256088430ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_4 [i_0] [(signed char)6] [i_1])) % (2147483647)))))) : (((/* implicit */unsigned long long int) 298736660U))));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 21; i_3 += 1) 
                    {
                        {
                            var_20 = ((/* implicit */long long int) arr_1 [i_0]);
                            var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) min((max((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_4 [i_2] [i_2] [i_0]))))), (((5829969762256088451ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)145))))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)8752)) != (((/* implicit */int) (short)4))))))))));
                        }
                    } 
                } 
                var_22 = ((/* implicit */unsigned int) max((((/* implicit */int) max((((/* implicit */unsigned char) (signed char)-79)), ((unsigned char)28)))), (((((/* implicit */_Bool) min((var_3), (((/* implicit */unsigned long long int) arr_3 [i_0]))))) ? (((/* implicit */int) arr_11 [i_1] [i_1] [i_0] [i_0] [i_0])) : (((/* implicit */int) var_9))))));
            }
        } 
    } 
    var_23 = ((/* implicit */_Bool) max((((/* implicit */unsigned int) (+(((/* implicit */int) var_6))))), (((((((/* implicit */unsigned long long int) ((/* implicit */int) (short)32761))) > (var_13))) ? (var_14) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))));
    var_24 = ((/* implicit */long long int) ((var_3) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))));
}
