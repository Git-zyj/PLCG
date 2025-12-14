/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115652
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115652 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115652
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
    for (unsigned short i_0 = 1; i_0 < 8; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 2; i_3 < 9; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 1; i_4 < 9; i_4 += 3) 
                        {
                            {
                                var_10 = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) var_1)), (((((/* implicit */_Bool) arr_8 [i_3])) ? (((4294967293U) + (((/* implicit */unsigned int) 1422260267)))) : (3281891889U)))));
                                var_11 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((unsigned int) (short)632)))));
                                var_12 = ((/* implicit */short) ((3221225472U) % (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-65)))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_5 = 1; i_5 < 10; i_5 += 4) 
                    {
                        for (int i_6 = 1; i_6 < 8; i_6 += 1) 
                        {
                            {
                                var_13 = ((/* implicit */unsigned int) min((((/* implicit */long long int) ((((/* implicit */int) (short)96)) >> (((6861570056210118685LL) - (6861570056210118683LL)))))), (((((min((-5647985391446178079LL), (((/* implicit */long long int) arr_15 [i_0 + 3] [(unsigned short)1] [i_0 + 3] [(short)7])))) + (9223372036854775807LL))) >> (((((/* implicit */int) (signed char)-65)) + (95)))))));
                                arr_20 [i_5] = ((/* implicit */unsigned int) ((11657424971358341240ULL) + (((/* implicit */unsigned long long int) 7383520922604811082LL))));
                                arr_21 [i_5] [i_5] [i_2] [(signed char)8] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_17 [i_5])) ? (((unsigned long long int) 6861570056210118685LL)) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((var_2) != (var_2))))) != (arr_1 [i_5 - 1])))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_14 = (unsigned short)29185;
    /* LoopNest 3 */
    for (unsigned char i_7 = 1; i_7 < 19; i_7 += 3) 
    {
        for (unsigned char i_8 = 1; i_8 < 17; i_8 += 2) 
        {
            for (int i_9 = 2; i_9 < 18; i_9 += 3) 
            {
                {
                    var_15 = ((/* implicit */short) ((((/* implicit */long long int) 2147483647)) == (-6861570056210118685LL)));
                    var_16 = ((/* implicit */unsigned char) (((!(arr_25 [i_8]))) ? (((unsigned int) (unsigned short)11645)) : (((unsigned int) -4509169090764901763LL))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : ((-(6861570056210118685LL))))))));
}
