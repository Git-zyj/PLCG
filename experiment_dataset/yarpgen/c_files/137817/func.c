/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137817
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137817 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137817
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
    var_15 |= var_11;
    var_16 = ((((((/* implicit */_Bool) -13)) ? (((/* implicit */int) (unsigned short)25049)) : (((/* implicit */int) (unsigned char)36)))) < (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_9)) : (((((/* implicit */_Bool) 16214876594914518386ULL)) ? (((/* implicit */int) (signed char)64)) : (((/* implicit */int) var_12)))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 11; i_2 += 2) 
            {
                {
                    var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 7960760444956386055LL)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) -680000670)) ? (7960760444956386055LL) : (-7960760444956386055LL)))) ? (68719476672LL) : (((/* implicit */long long int) ((/* implicit */int) min(((unsigned short)0), (((/* implicit */unsigned short) (unsigned char)36)))))))) : (((/* implicit */long long int) ((/* implicit */int) ((-7960760444956386055LL) <= (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_2])))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 10; i_3 += 2) 
                    {
                        for (signed char i_4 = 0; i_4 < 11; i_4 += 2) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) min((((/* implicit */int) var_12)), (((((((/* implicit */_Bool) (unsigned short)53226)) ? (((/* implicit */int) (signed char)-94)) : (2097151))) * (((/* implicit */int) arr_4 [i_3] [i_3 - 2] [i_3 - 2] [i_3 + 1])))))))));
                                var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) ((((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_3 + 1] [i_3] [(unsigned short)5])) ? (arr_10 [i_0] [i_0] [i_3 - 1] [i_2] [i_1] [i_0] [i_2]) : (arr_10 [i_4] [i_3] [i_3 + 1] [i_2] [(_Bool)1] [i_4] [i_4]))) <= (((/* implicit */int) (((!(arr_4 [i_0] [i_0] [(unsigned short)4] [i_3]))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)12310))) : (0U))))))))))));
                                var_20 += ((/* implicit */unsigned char) min((((/* implicit */long long int) ((((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) (signed char)127)) : (30720))) != (min((arr_5 [5] [i_3 - 1]), (-30721)))))), (((((((/* implicit */long long int) ((/* implicit */int) (unsigned short)224))) / (9223372036854775807LL))) | (-68719476683LL)))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */_Bool) var_12);
    var_22 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 68719476685LL)) || (((/* implicit */_Bool) 9223372036854775807LL))));
}
