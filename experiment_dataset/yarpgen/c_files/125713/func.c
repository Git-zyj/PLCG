/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125713
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125713 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125713
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
    for (long long int i_0 = 2; i_0 < 21; i_0 += 1) 
    {
        for (int i_1 = 2; i_1 < 20; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */unsigned char) ((int) (!(((/* implicit */_Bool) var_6)))));
                arr_5 [(short)1] [i_0 - 1] [i_0] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(0ULL)))) ? ((-(arr_3 [i_1]))) : (((/* implicit */int) arr_4 [i_0 + 1]))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_1])) ? (arr_0 [i_0]) : (((/* implicit */long long int) arr_3 [i_1 + 4]))))) ? (min((var_4), (((/* implicit */unsigned long long int) var_12)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))));
                /* LoopNest 2 */
                for (short i_2 = 1; i_2 < 21; i_2 += 1) 
                {
                    for (int i_3 = 0; i_3 < 24; i_3 += 4) 
                    {
                        {
                            var_17 += ((/* implicit */signed char) ((((/* implicit */_Bool) -589593386)) ? (0ULL) : (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (1ULL) : (((/* implicit */unsigned long long int) max((((/* implicit */long long int) (short)-5943)), (4222124650659840LL))))))));
                            arr_10 [i_0] [i_1] [i_2] [i_0] = ((/* implicit */_Bool) (short)31);
                        }
                    } 
                } 
                var_18 += min((((/* implicit */int) (short)-27063)), (min((arr_2 [i_0] [i_0]), (((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_0] [i_1]))))))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned int i_4 = 0; i_4 < 19; i_4 += 4) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned short i_5 = 2; i_5 < 18; i_5 += 4) 
        {
            for (int i_6 = 0; i_6 < 19; i_6 += 2) 
            {
                for (unsigned short i_7 = 4; i_7 < 17; i_7 += 3) 
                {
                    {
                        arr_22 [i_4] [(unsigned short)0] [i_4] [i_7 - 2] [i_7] = ((((/* implicit */_Bool) 4829796245199791866LL)) ? (2136183797) : (((/* implicit */int) var_7)));
                        arr_23 [i_4] [i_4] [i_4] [i_4] = ((/* implicit */unsigned short) var_10);
                    }
                } 
            } 
        } 
        var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) max((((/* implicit */int) var_7)), (arr_12 [i_4]))))));
        arr_24 [i_4] [0LL] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */int) (!(((/* implicit */_Bool) 18446744073709551610ULL))))), (((((/* implicit */int) var_7)) / (((/* implicit */int) arr_6 [i_4] [i_4] [19U]))))))) ? (((/* implicit */int) ((unsigned short) -1209959000))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_19 [i_4] [i_4] [i_4] [i_4] [i_4] [16LL])))))));
    }
    for (unsigned int i_8 = 0; i_8 < 19; i_8 += 4) /* same iter space */
    {
        var_20 += ((unsigned short) (!(((/* implicit */_Bool) var_11))));
        var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) ((((/* implicit */_Bool) arr_27 [i_8])) ? (((((/* implicit */_Bool) 4222124650659817LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_8]))) : (max((11679941104730870222ULL), (((/* implicit */unsigned long long int) -4222124650659841LL)))))) : (((/* implicit */unsigned long long int) (-((~(arr_17 [i_8] [(short)0] [(signed char)15])))))))))));
        arr_29 [i_8] = ((unsigned short) arr_20 [i_8] [i_8] [i_8] [i_8] [(unsigned short)6] [i_8]);
    }
}
