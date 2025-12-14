/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178291
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178291 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178291
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
    /* LoopSeq 1 */
    for (unsigned char i_0 = 2; i_0 < 9; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 1; i_1 < 6; i_1 += 3) 
        {
            for (unsigned int i_2 = 3; i_2 < 8; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 10; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 1; i_4 < 7; i_4 += 1) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((unsigned char) arr_9 [i_1 + 4] [i_1] [i_2 + 2] [i_4 + 2]))), (((((/* implicit */_Bool) arr_9 [i_1 + 2] [i_1] [i_2 - 3] [i_4 - 1])) ? (arr_9 [i_1 - 1] [i_1] [i_2 + 2] [i_4 + 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-83)))))));
                                var_16 = ((/* implicit */int) arr_4 [i_1] [i_1]);
                                var_17 = ((/* implicit */signed char) max((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_11 [i_4 + 3] [i_2 + 1] [i_1 + 2])) : (((/* implicit */int) arr_7 [i_2 - 3] [7] [i_2])))), (((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_2 - 2] [i_1] [i_1])) || (((/* implicit */_Bool) arr_11 [i_4 + 2] [i_2 + 2] [i_1 + 1])))))));
                                var_18 = ((/* implicit */unsigned long long int) max(((!(arr_3 [i_1 + 4] [i_4] [i_4]))), (((((/* implicit */_Bool) (unsigned char)49)) || (arr_3 [i_1 + 2] [i_4] [i_1 + 2])))));
                                var_19 = ((/* implicit */short) max((var_9), (max(((signed char)83), (arr_7 [(short)0] [(short)0] [i_1 + 4])))));
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */unsigned long long int) ((int) (-(((/* implicit */int) ((arr_2 [i_0]) == (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)(-127 - 1))))))))));
                    var_21 -= ((/* implicit */unsigned long long int) 3360917840U);
                }
            } 
        } 
        /* LoopSeq 2 */
        for (unsigned long long int i_5 = 1; i_5 < 9; i_5 += 4) /* same iter space */
        {
            var_22 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_5 - 1] [i_5 - 1] [i_0 + 1])) ? (arr_1 [i_0 - 1]) : (((/* implicit */int) arr_7 [i_5 - 1] [i_5 - 1] [i_0 + 1]))))) ? (((((/* implicit */_Bool) 2315588185U)) ? (arr_1 [i_0 + 1]) : (((/* implicit */int) (signed char)94)))) : (((((/* implicit */_Bool) (signed char)120)) ? (arr_1 [i_0 - 2]) : (arr_1 [i_0 + 1])))));
            var_23 *= ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)15)) ? (((9432288678906122842ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)240))))) : ((-(arr_12 [i_0] [i_0 - 1])))));
        }
        for (unsigned long long int i_6 = 1; i_6 < 9; i_6 += 4) /* same iter space */
        {
            /* LoopSeq 1 */
            for (int i_7 = 0; i_7 < 10; i_7 += 1) 
            {
                /* LoopSeq 1 */
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    var_24 = ((/* implicit */unsigned char) ((arr_3 [i_0] [i_0] [i_0]) ? (12925958809353274459ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((var_7), (((/* implicit */unsigned int) var_12))))) ? (((((/* implicit */_Bool) 10686644140890563772ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (4294967292U))) : (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)45))))))))));
                    var_25 = max((((((/* implicit */_Bool) 1350628486638648457ULL)) ? (((/* implicit */int) arr_11 [i_0 + 1] [i_6 - 1] [i_6 - 1])) : (((/* implicit */int) arr_11 [i_0 - 1] [i_6 + 1] [i_6 - 1])))), (((/* implicit */int) ((unsigned char) arr_11 [i_0 - 2] [i_6 - 1] [i_6 + 1]))));
                }
                var_26 = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((_Bool) (unsigned char)219))), (max((arr_9 [i_0] [i_6] [i_7] [i_6]), (arr_9 [i_7] [i_6] [i_6] [i_0 - 1])))));
            }
            var_27 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((arr_0 [i_0 - 2] [i_6 + 1]), (arr_0 [i_0 - 2] [i_6 + 1]))))));
        }
    }
    var_28 = ((/* implicit */unsigned char) var_9);
    /* LoopNest 2 */
    for (int i_9 = 0; i_9 < 11; i_9 += 4) 
    {
        for (unsigned long long int i_10 = 0; i_10 < 11; i_10 += 2) 
        {
            {
                var_29 = ((/* implicit */unsigned char) max((max((arr_27 [i_9]), (arr_27 [i_10]))), (((/* implicit */unsigned long long int) max((var_1), (((/* implicit */int) arr_28 [i_10] [i_9])))))));
                var_30 = ((/* implicit */int) ((((/* implicit */_Bool) arr_28 [i_9] [i_9])) ? (max((arr_30 [i_9] [i_9] [i_10]), (((/* implicit */unsigned long long int) max((arr_26 [i_10]), (((/* implicit */unsigned char) (signed char)(-127 - 1)))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_30 [i_9] [i_10] [i_10]))))));
                var_31 = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_28 [i_9] [i_10])) ? (((/* implicit */int) arr_28 [i_9] [i_9])) : (((/* implicit */int) var_0))))), (arr_27 [i_10])))) ? (((((/* implicit */_Bool) 255)) ? (10686644140890563769ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)159)) / (((/* implicit */int) (unsigned char)138))))) ? (((/* implicit */int) arr_26 [i_10])) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)(-127 - 1)))) != (arr_29 [i_9] [i_10])))))))));
            }
        } 
    } 
}
