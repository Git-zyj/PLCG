/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127939
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127939 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127939
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
    var_18 = (!(((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-81))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (unsigned int i_1 = 2; i_1 < 24; i_1 += 2) 
        {
            {
                arr_6 [i_0] [22] = ((/* implicit */short) (+(((/* implicit */int) (signed char)81))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 25; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            arr_11 [i_0] [i_1] [i_3] = ((/* implicit */signed char) ((int) (unsigned char)218));
                            var_19 = ((/* implicit */unsigned short) ((signed char) var_15));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_4 = 0; i_4 < 25; i_4 += 3) 
                {
                    for (unsigned short i_5 = 4; i_5 < 21; i_5 += 1) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                            {
                                arr_23 [i_0] = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) max((262143ULL), (((/* implicit */unsigned long long int) arr_0 [i_4])))))))) ^ (min((((((/* implicit */_Bool) arr_22 [i_0] [i_0] [i_0] [i_4] [i_5] [i_0])) ? (((/* implicit */int) (unsigned short)49078)) : (((/* implicit */int) arr_16 [i_1])))), (((/* implicit */int) ((((/* implicit */int) (_Bool)0)) <= (((/* implicit */int) (unsigned char)74)))))))));
                                var_20 += ((/* implicit */short) min((((/* implicit */long long int) ((((_Bool) 262143ULL)) ? ((-(((/* implicit */int) arr_10 [i_1] [i_1])))) : (((((/* implicit */_Bool) arr_4 [i_4])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_9))))))), ((-(((((/* implicit */long long int) ((/* implicit */int) var_15))) / (arr_9 [i_0] [i_1] [i_4] [i_4])))))));
                                var_21 = ((/* implicit */unsigned long long int) var_15);
                                arr_24 [(signed char)20] [i_1 + 1] [i_4] [i_5] [i_0] = min((((((/* implicit */int) arr_10 [i_0] [i_0])) != (((/* implicit */int) arr_21 [i_0] [i_0] [i_4] [i_5] [i_1 - 1] [i_5 + 1] [(unsigned char)12])))), (((var_16) || (arr_21 [i_0] [i_0] [i_4] [i_0] [i_1 - 1] [i_5 + 1] [i_1 - 1]))));
                            }
                            var_22 = ((/* implicit */int) var_4);
                            var_23 = (i_0 % 2 == zero) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_14)) << (((((/* implicit */unsigned long long int) arr_4 [i_4])) & (((((/* implicit */unsigned long long int) arr_17 [i_0] [23] [i_0] [23])) / (300452744924345738ULL)))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_14)) << (((((((/* implicit */unsigned long long int) arr_4 [i_4])) & (((((/* implicit */unsigned long long int) arr_17 [i_0] [23] [i_0] [23])) / (300452744924345738ULL))))) - (17ULL))))));
                        }
                    } 
                } 
                arr_25 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_21 [i_0] [i_0] [i_0] [i_0] [i_1 - 2] [i_1 - 2] [i_1])) ^ (((/* implicit */int) arr_21 [i_0] [i_1] [i_1 + 1] [i_1 - 2] [i_1 + 1] [i_1] [i_1 - 2]))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [i_0] [i_0] [i_0] [i_0] [i_1] [i_1])) ? (arr_3 [i_0]) : (((/* implicit */long long int) 1073741823))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)66)))))) : (var_3))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_18 [i_0] [i_0] [i_1 - 1]))))));
            }
        } 
    } 
}
