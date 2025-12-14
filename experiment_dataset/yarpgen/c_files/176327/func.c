/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176327
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176327 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176327
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
    var_16 = ((/* implicit */signed char) var_4);
    /* LoopNest 2 */
    for (unsigned char i_0 = 4; i_0 < 17; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_2 = 2; i_2 < 18; i_2 += 3) 
                {
                    var_17 = ((/* implicit */short) arr_3 [i_1] [i_1]);
                    arr_8 [i_2] [i_0] [i_2] = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) ((((/* implicit */long long int) 151617858U)) + (-1006692266306431645LL)))) ? (((arr_4 [i_0] [i_0] [i_0]) * (((/* implicit */int) arr_5 [i_0] [i_1] [i_0])))) : ((-(((/* implicit */int) var_7)))))), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_5 [i_0] [i_2 + 1] [2LL])) : (((/* implicit */int) arr_5 [i_0] [i_2 + 1] [i_2]))))));
                    var_18 = ((/* implicit */unsigned long long int) (((~(var_13))) - (((/* implicit */long long int) min((var_0), (((/* implicit */unsigned int) arr_5 [i_0] [i_1] [i_2 + 1])))))));
                    arr_9 [i_2] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? ((~(18446744073709551615ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)-28365))))))))) ? (min((3367135378U), (1866434144U))) : (((/* implicit */unsigned int) ((((/* implicit */int) var_12)) ^ ((~(((/* implicit */int) arr_2 [i_0])))))))));
                }
                var_19 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_3 [i_0 - 4] [i_1])) >= (((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_0 + 1] [i_0 - 1])))))));
                /* LoopNest 3 */
                for (signed char i_3 = 0; i_3 < 19; i_3 += 3) 
                {
                    for (signed char i_4 = 0; i_4 < 19; i_4 += 3) 
                    {
                        for (unsigned char i_5 = 0; i_5 < 19; i_5 += 3) 
                        {
                            {
                                arr_17 [i_0] [i_0] = ((/* implicit */int) max((var_13), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) (short)16961)) << (((3500211814U) - (3500211809U)))))))))));
                                var_20 = ((/* implicit */long long int) ((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_1)) : ((~(((/* implicit */int) arr_6 [i_5] [i_3])))))) > (((int) arr_15 [i_0] [i_0] [i_0 + 1] [i_0] [i_0] [i_0] [i_0 - 4]))));
                                var_21 = ((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */int) ((var_11) >= (((/* implicit */unsigned int) ((/* implicit */int) var_12)))))) > (((/* implicit */int) ((var_14) <= (3751945296U)))))));
                                var_22 = ((/* implicit */unsigned int) max((2150351420093163260LL), (((((/* implicit */_Bool) var_9)) ? ((+(arr_16 [i_0 + 1] [i_0] [(signed char)12] [i_3] [i_3] [i_4] [i_5]))) : (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_0] [12] [i_0 + 2] [i_0])))))));
                                arr_18 [i_0] [i_1] [i_3] [i_4] [14ULL] = ((/* implicit */unsigned char) max(((!(((/* implicit */_Bool) arr_16 [i_0] [i_0] [i_0 - 4] [i_0] [i_0 - 3] [i_4] [i_0])))), ((!(((/* implicit */_Bool) ((5359289082012483320LL) / (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_0]))))))))));
                            }
                        } 
                    } 
                } 
                var_23 = ((/* implicit */long long int) (~(2480092811U)));
            }
        } 
    } 
    /* LoopNest 3 */
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
    {
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            for (long long int i_8 = 1; i_8 < 23; i_8 += 3) 
            {
                {
                    var_24 = ((/* implicit */unsigned short) (~(var_9)));
                    arr_26 [i_6] [i_7] [i_6] = max((((/* implicit */unsigned int) min((arr_19 [i_6] [i_8 - 1]), (((/* implicit */short) var_3))))), (((((/* implicit */_Bool) 262143ULL)) ? (((/* implicit */unsigned int) arr_24 [i_8 - 1] [i_8 - 1] [i_8 + 1])) : (3751945296U))));
                }
            } 
        } 
    } 
}
