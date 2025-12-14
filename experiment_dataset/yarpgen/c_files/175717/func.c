/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175717
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175717 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175717
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
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 12; i_0 += 3) 
    {
        for (signed char i_1 = 1; i_1 < 12; i_1 += 1) 
        {
            {
                var_14 = arr_1 [9ULL] [i_0 - 1];
                /* LoopSeq 2 */
                for (unsigned char i_2 = 2; i_2 < 13; i_2 += 4) /* same iter space */
                {
                    arr_7 [i_0] = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_5 [i_0] [i_0] [i_1 + 2])) / (((((/* implicit */_Bool) (signed char)-75)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_11))))))), (((min((var_7), (1669142320032163275ULL))) * (((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) * (18446744073709551599ULL)))))));
                    arr_8 [i_0] [i_1 + 1] [i_2 - 2] = ((((((/* implicit */_Bool) arr_0 [i_1 + 1])) ? (arr_0 [i_1 + 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))) & ((~(arr_0 [i_1 - 1]))));
                    var_15 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) var_6)), ((~(min((var_9), (((/* implicit */unsigned long long int) var_12))))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 14; i_3 += 3) 
                    {
                        for (signed char i_4 = 2; i_4 < 13; i_4 += 3) 
                        {
                            {
                                arr_14 [i_0] [i_3] [i_0] = ((unsigned char) max((((((/* implicit */_Bool) 16777601753677388340ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)120))) : (18446744073709551597ULL))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_12)))))));
                                var_16 = ((/* implicit */unsigned long long int) arr_5 [i_0] [(signed char)0] [i_0]);
                                arr_15 [i_2 + 1] [i_2 - 1] [i_2] [i_0] = ((/* implicit */signed char) var_9);
                                arr_16 [i_0 + 1] [i_1 + 1] [i_0] [i_0] [i_0 + 1] [i_1 + 2] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_2)) ? (max((9718483667628937001ULL), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) ^ (8457341368644540761ULL))))) : ((~(arr_10 [(unsigned char)7] [i_0] [i_2] [i_2 - 2] [i_2 - 2])))));
                            }
                        } 
                    } 
                }
                for (unsigned char i_5 = 2; i_5 < 13; i_5 += 4) /* same iter space */
                {
                    var_17 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) min((((/* implicit */unsigned char) var_6)), (((unsigned char) 18446744073709551597ULL)))))));
                    var_18 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 14713068435716464474ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (arr_12 [i_0 + 1] [i_0 + 1] [i_0] [i_0 + 1] [i_0 + 1] [i_0 + 1]))) >= (18446744073709551598ULL)));
                    arr_19 [i_5] [i_0] [i_0 - 1] = ((/* implicit */unsigned char) arr_13 [i_0 + 2] [i_0 + 1] [i_1] [i_1 + 2] [i_0]);
                    arr_20 [i_5] [i_5] [i_0] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_2)) >> (0ULL)))) : (((((/* implicit */_Bool) max((var_9), (arr_12 [i_0] [i_1 + 1] [i_0] [i_1 + 1] [9ULL] [i_1])))) ? (max((((/* implicit */unsigned long long int) (signed char)37)), (3733675637993087141ULL))) : (min((((/* implicit */unsigned long long int) var_6)), (var_8)))))));
                }
                var_19 = var_13;
                arr_21 [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) ((((min((var_7), (18446744073709551597ULL))) * (((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (var_7) : (var_9))))) * ((+((~(arr_12 [i_0 + 1] [i_1 + 1] [i_0] [i_0 + 1] [i_0 + 1] [i_0])))))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned long long int) var_13);
    var_21 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_9))));
}
