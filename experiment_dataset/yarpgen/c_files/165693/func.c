/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165693
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165693 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165693
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
    var_13 = (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) 1985029274U)) ? (1985029271U) : (2309938022U)))) ? (((/* implicit */int) ((_Bool) (_Bool)1))) : (var_3))));
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 14; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            {
                var_14 = ((/* implicit */int) ((((/* implicit */_Bool) (~(4027146976341783986LL)))) ? ((~((-(231982945522562360LL))))) : (((/* implicit */long long int) ((1985029276U) - (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))));
                var_15 = ((/* implicit */unsigned long long int) (((_Bool)1) ? (231982945522562360LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
            }
        } 
    } 
    var_16 = ((/* implicit */_Bool) (~(var_11)));
    var_17 = ((/* implicit */unsigned long long int) var_0);
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 21; i_2 += 3) 
    {
        for (long long int i_3 = 3; i_3 < 19; i_3 += 4) 
        {
            {
                arr_9 [i_3] [(signed char)9] [i_3] = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_2] [i_2]))) : (arr_4 [i_2] [i_2])))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_2] [i_2] [i_2])))))) : (max((arr_8 [i_2] [(signed char)18]), (((/* implicit */long long int) (signed char)-103))))))));
                arr_10 [i_2] [i_2] [i_3] = ((/* implicit */int) arr_4 [i_2] [9LL]);
                arr_11 [i_3] [i_3] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) var_10)) ? ((-(min((0LL), (((/* implicit */long long int) 2309938032U)))))) : (231982945522562360LL)));
                /* LoopSeq 3 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    arr_15 [i_2] [i_3] [i_3] = ((/* implicit */int) (-(2309937991U)));
                    var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) (!(((/* implicit */_Bool) 67108864U)))))));
                }
                /* vectorizable */
                for (unsigned long long int i_5 = 0; i_5 < 21; i_5 += 2) /* same iter space */
                {
                    var_19 -= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_6 [i_5] [i_3 + 1] [i_2])) ? (arr_8 [(_Bool)1] [i_5]) : (arr_6 [i_3 + 1] [i_3] [i_3 + 1])));
                    /* LoopNest 2 */
                    for (unsigned int i_6 = 2; i_6 < 19; i_6 += 2) 
                    {
                        for (unsigned int i_7 = 0; i_7 < 21; i_7 += 3) 
                        {
                            {
                                var_20 = ((int) ((((((/* implicit */int) var_10)) + (2147483647))) << (((4294967295U) - (4294967295U)))));
                                arr_23 [i_2] [i_3] = ((/* implicit */unsigned int) ((_Bool) arr_12 [i_6 - 2] [i_6]));
                                arr_24 [i_2] [i_3] [19] = ((/* implicit */signed char) var_8);
                            }
                        } 
                    } 
                    arr_25 [(signed char)4] [i_5] [i_5] [i_2] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (arr_12 [i_2] [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))))) ? ((~(arr_4 [i_2] [i_3]))) : (((((/* implicit */_Bool) arr_17 [i_2] [i_2])) ? (arr_22 [4ULL] [i_2] [i_2] [i_3] [i_2] [i_5]) : (1985029305U)))));
                }
                for (unsigned long long int i_8 = 0; i_8 < 21; i_8 += 2) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_9 = 0; i_9 < 21; i_9 += 2) 
                    {
                        for (long long int i_10 = 4; i_10 < 19; i_10 += 2) 
                        {
                            {
                                arr_34 [i_2] [i_3 + 1] [i_3] [i_2] [i_3] [i_9] [i_10] = ((/* implicit */signed char) (_Bool)1);
                                var_21 = ((/* implicit */unsigned long long int) var_12);
                                arr_35 [i_3] [18] [i_3] = ((/* implicit */signed char) arr_14 [4] [4] [i_8] [i_8]);
                                arr_36 [i_2] [i_3 + 1] [i_3] [i_8] [i_9] [i_10] [i_10 - 2] = (!(((/* implicit */_Bool) 231982945522562360LL)));
                                var_22 = ((/* implicit */int) (-(18446744073709551615ULL)));
                            }
                        } 
                    } 
                    arr_37 [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) 4212171616U)) ? (8235342399188770509ULL) : (((/* implicit */unsigned long long int) 1985029276U)))))) ? (((((/* implicit */_Bool) arr_4 [i_2] [i_3 - 1])) ? (arr_28 [i_2] [i_8]) : (((/* implicit */unsigned long long int) var_2)))) : (((/* implicit */unsigned long long int) ((long long int) max((((/* implicit */unsigned long long int) arr_4 [13] [(signed char)6])), (arr_21 [i_2] [i_3])))))));
                    arr_38 [i_3] = ((/* implicit */int) ((long long int) ((((/* implicit */long long int) var_8)) ^ (arr_6 [i_2] [i_3] [i_8]))));
                }
                arr_39 [i_3] [17ULL] [8U] = ((/* implicit */unsigned int) (((((!(((/* implicit */_Bool) arr_22 [i_2] [i_3] [i_3 - 2] [i_2] [i_3] [i_3])))) ? (arr_5 [i_2]) : (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) + (arr_33 [i_2] [i_2] [2] [i_2] [i_2] [16U])))))) % (((/* implicit */long long int) (-(var_1))))));
            }
        } 
    } 
}
