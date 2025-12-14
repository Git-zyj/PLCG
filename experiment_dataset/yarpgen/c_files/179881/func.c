/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179881
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179881 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179881
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
    var_15 = ((/* implicit */unsigned short) var_11);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 16; i_2 += 2) 
                {
                    for (int i_3 = 0; i_3 < 16; i_3 += 4) 
                    {
                        {
                            arr_13 [i_2] [i_2] [i_2] = ((/* implicit */signed char) min((((/* implicit */unsigned int) ((9675563) == (((/* implicit */int) arr_10 [i_3] [i_2] [i_1] [i_1] [i_0]))))), (max((((/* implicit */unsigned int) (+(((/* implicit */int) arr_9 [(unsigned short)6] [i_1] [(unsigned short)6] [i_1] [i_2]))))), (((((/* implicit */_Bool) (unsigned short)8127)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)12742))) : (4294967295U)))))));
                            arr_14 [i_3] [i_2] [i_0] [i_0] = ((/* implicit */signed char) 4294967288U);
                        }
                    } 
                } 
                var_16 = ((/* implicit */unsigned long long int) arr_11 [i_1]);
                var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) min(((unsigned short)14), (arr_9 [i_0] [i_0] [i_0] [i_0] [i_1]))))))) ? (11779448626050637312ULL) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)8127))))))))));
                var_18 = ((/* implicit */unsigned short) (+((~((~(((/* implicit */int) arr_1 [i_0] [i_1]))))))));
                var_19 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_12 [(unsigned char)3] [(unsigned char)3])) ? (((/* implicit */int) arr_12 [i_1] [i_1])) : (((/* implicit */int) (signed char)102))))), (((6667295447658914278ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)57401)))))));
            }
        } 
    } 
    var_20 = ((/* implicit */long long int) min((((/* implicit */int) (!(((/* implicit */_Bool) min((11779448626050637298ULL), (((/* implicit */unsigned long long int) (short)-24191)))))))), (((((/* implicit */_Bool) var_0)) ? (min((((/* implicit */int) var_11)), (1431417673))) : (((/* implicit */int) var_9))))));
}
