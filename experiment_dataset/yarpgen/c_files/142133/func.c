/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142133
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142133 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142133
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
    var_11 = ((/* implicit */unsigned long long int) (-(((unsigned int) min((4006174686U), (2385274461U))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 11; i_2 += 2) 
            {
                {
                    var_12 |= ((/* implicit */signed char) min((((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_2] [i_2] [i_2])))))))), (((((/* implicit */long long int) -226322655)) | (1664492886056729156LL)))));
                    var_13 = ((/* implicit */unsigned int) min(((-((-(9223372036854775807LL))))), (((/* implicit */long long int) (signed char)43))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned long long int i_3 = 0; i_3 < 25; i_3 += 2) 
    {
        for (unsigned long long int i_4 = 0; i_4 < 25; i_4 += 2) 
        {
            for (short i_5 = 2; i_5 < 24; i_5 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_6 = 0; i_6 < 25; i_6 += 1) 
                    {
                        for (signed char i_7 = 0; i_7 < 25; i_7 += 2) 
                        {
                            {
                                arr_23 [i_5] [i_3] [i_4] [(unsigned short)14] [i_6] [i_6] [(unsigned short)14] = ((/* implicit */unsigned int) arr_21 [i_3]);
                                var_14 = ((/* implicit */unsigned short) arr_21 [i_7]);
                                var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)(-32767 - 1)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (+(2754214917U))))))) : (((/* implicit */int) (short)21948))));
                            }
                        } 
                    } 
                    arr_24 [i_5] = ((/* implicit */short) 2754214917U);
                    var_16 = ((/* implicit */short) (-((-(((((/* implicit */_Bool) 2127111177U)) ? (((/* implicit */int) var_3)) : ((-2147483647 - 1))))))));
                    arr_25 [i_5] = max((((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)14)))))))), ((unsigned char)90));
                }
            } 
        } 
    } 
    var_17 += ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned int) -1664492886056729159LL))))))) ^ (((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) - (var_2))));
}
