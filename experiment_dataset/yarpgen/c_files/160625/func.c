/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160625
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160625 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160625
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
    for (signed char i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 10; i_2 += 2) 
            {
                {
                    var_14 = ((/* implicit */long long int) ((((((/* implicit */int) (unsigned short)0)) <= (((((/* implicit */int) (unsigned short)12)) ^ (((/* implicit */int) (unsigned short)65524)))))) ? (((((/* implicit */_Bool) 4853431079190225130ULL)) ? (max((((/* implicit */unsigned long long int) 536870848)), (15119129263732358903ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)12))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-12716)) ? (9223372036854775806LL) : (((/* implicit */long long int) arr_3 [i_0] [i_0])))))));
                    arr_8 [i_1] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */int) var_9)) + (2147483647))) << ((((((~(((/* implicit */int) (unsigned short)3250)))) + (3276))) - (25)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((arr_4 [i_1]) ? (8325274442731947010LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-127))))))))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_2]))) < (arr_2 [i_2] [i_1]))))));
                    arr_9 [i_0] [i_1] [i_0] [i_2] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) arr_3 [i_0] [(unsigned short)7])), (min((arr_2 [(unsigned short)0] [i_2]), (((/* implicit */unsigned long long int) (signed char)120))))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 1; i_3 < 9; i_3 += 4) 
                    {
                        for (long long int i_4 = 0; i_4 < 10; i_4 += 1) 
                        {
                            {
                                var_15 = ((/* implicit */_Bool) max((var_15), (var_10)));
                                arr_14 [i_0] [i_1] [i_1] [i_2] [i_3 - 1] [i_4] [i_4] = ((/* implicit */_Bool) (signed char)-89);
                                arr_15 [i_4] = ((/* implicit */unsigned int) (_Bool)1);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_5 = 0; i_5 < 10; i_5 += 2) 
                    {
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            {
                                arr_22 [i_6] [i_2] = ((/* implicit */_Bool) min((((/* implicit */long long int) min(((-2147483647 - 1)), (((/* implicit */int) (unsigned short)3244))))), (((((/* implicit */_Bool) arr_11 [(_Bool)1] [i_2] [i_5] [i_6])) ? (arr_11 [i_1] [i_2] [i_5] [i_6]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-127)))))));
                                var_16 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)65514))));
                                var_17 = ((/* implicit */long long int) arr_1 [i_0] [i_1]);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) max((516317575U), (((/* implicit */unsigned int) var_3))))), (((((/* implicit */_Bool) max((var_7), (((/* implicit */long long int) var_11))))) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) 0))))));
    var_19 = ((/* implicit */int) ((max((((/* implicit */long long int) (!(((/* implicit */_Bool) -1711454527))))), (min((((/* implicit */long long int) (unsigned short)35125)), (6660536961145118593LL))))) - (((/* implicit */long long int) ((/* implicit */int) var_13)))));
}
