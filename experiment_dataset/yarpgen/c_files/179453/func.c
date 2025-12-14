/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179453
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179453 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179453
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
    /* LoopNest 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (long long int i_2 = 2; i_2 < 21; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 22; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 22; i_4 += 2) 
                        {
                            {
                                var_10 += ((/* implicit */signed char) ((((/* implicit */_Bool) arr_11 [i_4])) ? (((((((/* implicit */_Bool) (signed char)-117)) || (var_6))) ? ((-(arr_13 [(signed char)18] [(signed char)18] [i_4] [(signed char)18] [i_2 - 1]))) : (min((((/* implicit */unsigned long long int) arr_11 [i_4])), (arr_12 [i_1]))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (arr_8 [i_0 - 1] [i_4] [20LL]) : (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_4])))))) ? (arr_5 [i_4] [i_1]) : (((/* implicit */unsigned long long int) ((arr_10 [i_1] [i_4] [i_4]) / (4787482808090097582LL))))))));
                                arr_15 [i_0] [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) var_7))) ^ (((((/* implicit */_Bool) arr_5 [i_0] [i_0])) ? (4787482808090097574LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) 2016)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_9 [i_0 - 1] [i_1] [i_0 - 1] [i_0])))))))));
                                arr_16 [i_0] [i_0] [i_3] = ((/* implicit */unsigned int) ((max((((/* implicit */unsigned long long int) (signed char)5)), (arr_2 [i_0]))) / (((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_3)), (var_4))))));
                                var_11 = ((/* implicit */short) ((((((/* implicit */_Bool) min((((/* implicit */int) (unsigned short)0)), (-1999)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-13810)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (unsigned short)0))))))) ? ((+(4787482808090097582LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((signed char) arr_3 [i_0] [i_0] [i_0]))) ? (((/* implicit */int) (short)32376)) : (max((var_3), (((/* implicit */int) (_Bool)1)))))))));
                                arr_17 [i_4] [i_1] [i_1] [i_2] [2ULL] [i_3] [i_4] &= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_4]))) : (arr_12 [i_2])))) ? (((((/* implicit */_Bool) arr_1 [i_2 - 2] [i_4])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (unsigned char)241)))) : (((/* implicit */int) ((signed char) var_7))))))));
                            }
                        } 
                    } 
                    arr_18 [i_0] [i_1] [i_2] = ((/* implicit */long long int) ((int) max(((unsigned char)33), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_7 [16LL] [(signed char)17] [9ULL] [i_2]))))))));
                    arr_19 [i_0] = ((/* implicit */long long int) ((-1177727391) * (((((/* implicit */_Bool) ((long long int) 1177727372))) ? (((/* implicit */int) ((((/* implicit */int) (signed char)(-127 - 1))) >= (((/* implicit */int) var_5))))) : (((/* implicit */int) var_7))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        for (unsigned short i_6 = 0; i_6 < 14; i_6 += 1) 
        {
            {
                var_12 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_14 [i_6] [i_6] [i_6] [i_6] [i_5] [i_6])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_22 [i_6])))))));
                var_13 *= ((/* implicit */short) var_5);
            }
        } 
    } 
}
