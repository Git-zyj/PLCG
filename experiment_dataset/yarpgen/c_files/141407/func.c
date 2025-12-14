/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141407
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141407 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141407
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
    var_12 = ((/* implicit */unsigned int) var_7);
    /* LoopNest 3 */
    for (long long int i_0 = 2; i_0 < 10; i_0 += 3) 
    {
        for (int i_1 = 4; i_1 < 10; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 12; i_2 += 1) 
            {
                {
                    var_13 = (-(min(((+(((/* implicit */int) (signed char)0)))), (((/* implicit */int) max((((/* implicit */short) (unsigned char)6)), (var_7)))))));
                    /* LoopSeq 3 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        var_14 = ((((/* implicit */int) max((((/* implicit */unsigned char) arr_5 [i_0] [i_0])), (arr_3 [i_3 - 1] [i_3] [i_1 - 4])))) % (var_0));
                        var_15 = ((/* implicit */unsigned int) ((min((((/* implicit */unsigned long long int) 1056964608U)), (((((/* implicit */_Bool) (signed char)3)) ? (((/* implicit */unsigned long long int) -6934007220175572326LL)) : (18227421636370908885ULL))))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) -4123087948261375191LL))))));
                    }
                    for (long long int i_4 = 0; i_4 < 12; i_4 += 3) /* same iter space */
                    {
                        var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)6)) ? (4504538866476223640LL) : ((-9223372036854775807LL - 1LL))));
                        var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_12 [i_0] [i_0 + 1] [i_0] [(signed char)9])))))));
                    }
                    /* vectorizable */
                    for (long long int i_5 = 0; i_5 < 12; i_5 += 3) /* same iter space */
                    {
                        var_18 *= ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) var_0)) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_0] [i_1] [i_0] [(signed char)10])))))));
                        var_19 = ((/* implicit */unsigned int) (unsigned char)114);
                        var_20 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned int) var_0)) : (arr_12 [5LL] [i_1 - 1] [i_2] [i_5]))))));
                        var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_1 - 1] [i_0 + 2])) ? (((arr_16 [i_5] [i_0] [8ULL] [i_1] [i_0] [i_0]) >> (((((/* implicit */int) arr_11 [i_0] [i_1] [i_2] [i_1])) - (32))))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)79)))));
                    }
                    /* LoopNest 2 */
                    for (signed char i_6 = 0; i_6 < 12; i_6 += 1) 
                    {
                        for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                        {
                            {
                                var_22 = ((/* implicit */short) ((((((/* implicit */_Bool) arr_21 [i_0] [i_0] [i_2] [i_6] [i_7 - 1])) ? (((/* implicit */int) arr_21 [i_0] [i_1] [i_2] [i_6] [i_7])) : (((/* implicit */int) arr_21 [i_0] [(signed char)4] [i_2] [i_6] [i_2])))) != (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-64)))))));
                                var_23 = ((/* implicit */_Bool) max((min((arr_13 [(short)10] [i_1 - 3] [i_2] [i_6] [i_6] [i_6]), (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)13))))))), (((/* implicit */unsigned int) ((max((((/* implicit */unsigned int) (unsigned char)27)), (9U))) > (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-16)) * (((/* implicit */int) (unsigned char)120))))))))));
                                var_24 = ((/* implicit */signed char) 7029936483262371065LL);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
