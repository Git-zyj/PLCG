/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120491
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120491 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120491
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (short i_2 = 0; i_2 < 22; i_2 += 3) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 22; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 22; i_4 += 3) 
                        {
                            {
                                var_16 = (i_0 % 2 == zero) ? (((/* implicit */short) max((((((var_14) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1] [i_0]))) : (arr_14 [i_0] [(short)4] [i_2] [i_3] [i_2]))) - (((/* implicit */unsigned long long int) ((16646144) << (((arr_7 [i_3] [(unsigned short)10] [i_0] [i_2]) - (5850382914747158509LL)))))))), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_3)) ? (arr_13 [i_4] [i_0] [i_0] [i_1] [i_0]) : (((/* implicit */unsigned int) 16646144)))) != (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_8 [i_0] [i_2] [i_3] [i_4])) ? (((/* implicit */int) arr_8 [i_0] [i_1] [i_1] [i_1])) : (((/* implicit */int) var_13))))))))))) : (((/* implicit */short) max((((((var_14) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1] [i_0]))) : (arr_14 [i_0] [(short)4] [i_2] [i_3] [i_2]))) - (((/* implicit */unsigned long long int) ((16646144) << (((((arr_7 [i_3] [(unsigned short)10] [i_0] [i_2]) + (5850382914747158509LL))) - (848906919258613416LL)))))))), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_3)) ? (arr_13 [i_4] [i_0] [i_0] [i_1] [i_0]) : (((/* implicit */unsigned int) 16646144)))) != (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_8 [i_0] [i_2] [i_3] [i_4])) ? (((/* implicit */int) arr_8 [i_0] [i_1] [i_1] [i_1])) : (((/* implicit */int) var_13)))))))))));
                                var_17 += ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)154)) ? (1398606801U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)28)))));
                            }
                        } 
                    } 
                } 
                var_18 = ((/* implicit */signed char) ((unsigned long long int) min(((signed char)-50), (((/* implicit */signed char) arr_3 [i_0] [i_0])))));
                var_19 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((3365784960U), (((/* implicit */unsigned int) var_11))))) ? (((((/* implicit */_Bool) arr_14 [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_13)))) : (((/* implicit */int) ((signed char) var_8)))))) ? ((~(((/* implicit */int) arr_6 [(signed char)6])))) : (max((((/* implicit */int) ((((/* implicit */int) var_4)) == (((/* implicit */int) arr_2 [(unsigned short)14]))))), (1)))));
            }
        } 
    } 
}
