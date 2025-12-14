/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174194
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174194 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174194
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
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_1 [i_0] [i_0]);
        arr_3 [i_0] [i_0] = ((/* implicit */long long int) var_13);
    }
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_1 = 0; i_1 < 23; i_1 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_3 = 0; i_3 < 23; i_3 += 1) 
            {
                for (long long int i_4 = 0; i_4 < 23; i_4 += 1) 
                {
                    {
                        var_18 = ((/* implicit */long long int) (((+(arr_4 [i_2]))) ^ (((unsigned long long int) arr_11 [i_1] [i_2] [i_3] [i_4]))));
                        arr_12 [i_1] [i_1] [i_3] [i_4] = ((/* implicit */_Bool) arr_6 [i_3]);
                        /* LoopSeq 1 */
                        for (signed char i_5 = 0; i_5 < 23; i_5 += 2) 
                        {
                            var_19 += ((/* implicit */signed char) ((arr_14 [i_2] [i_3] [i_5]) ^ (((/* implicit */unsigned long long int) arr_8 [i_1] [i_2] [i_3] [i_4]))));
                            var_20 = ((/* implicit */_Bool) arr_6 [i_1]);
                            arr_16 [i_1] [i_1] [i_3] [i_3] [i_3] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_10 [i_1] [i_2] [i_2] [i_2])))) <= (((((/* implicit */_Bool) var_1)) ? (14686005398194416311ULL) : (((/* implicit */unsigned long long int) arr_11 [i_1] [i_2] [i_5] [i_4]))))));
                            var_21 = ((/* implicit */short) ((unsigned long long int) arr_7 [i_1]));
                        }
                        var_22 = ((/* implicit */long long int) ((((((/* implicit */int) (signed char)(-127 - 1))) + (2147483647))) << (((15280754496240137926ULL) - (15280754496240137926ULL)))));
                    }
                } 
            } 
            var_23 = ((/* implicit */_Bool) (~(((/* implicit */int) arr_6 [i_1]))));
            arr_17 [i_1] [i_2] [i_2] = ((/* implicit */long long int) (~(arr_11 [i_1] [i_1] [i_2] [i_2])));
        }
        var_24 = ((/* implicit */_Bool) arr_4 [i_1]);
        arr_18 [i_1] [i_1] = ((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) -1384370235615521977LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (14052481873708223329ULL))));
        var_25 &= ((/* implicit */unsigned long long int) (~(arr_15 [i_1] [i_1] [i_1] [i_1] [i_1])));
    }
    for (int i_6 = 1; i_6 < 19; i_6 += 2) 
    {
        arr_21 [i_6 + 1] = ((/* implicit */long long int) arr_13 [i_6] [i_6] [i_6] [i_6 - 1] [i_6] [i_6] [i_6]);
        var_26 |= ((/* implicit */int) ((var_2) ? (arr_19 [i_6]) : (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_17)), (var_12)))) ? (min((((/* implicit */unsigned long long int) arr_15 [i_6 + 1] [i_6] [i_6] [i_6 + 1] [i_6])), (var_10))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_6)))))))));
        /* LoopNest 2 */
        for (long long int i_7 = 0; i_7 < 20; i_7 += 1) 
        {
            for (signed char i_8 = 4; i_8 < 18; i_8 += 1) 
            {
                {
                    var_27 += ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_24 [i_7]))));
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 20; i_9 += 1) 
                    {
                        for (unsigned short i_10 = 0; i_10 < 20; i_10 += 1) 
                        {
                            {
                                var_28 += ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)40157)) || (((/* implicit */_Bool) arr_4 [i_9]))))), (arr_11 [i_6] [i_8 + 1] [i_9] [i_10])))) ? (max((arr_14 [i_6 - 1] [i_7] [(_Bool)1]), (arr_22 [i_6 + 1] [i_8 - 1]))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) ((unsigned short) arr_8 [i_7] [i_8] [i_8] [i_8]))))))));
                                arr_32 [i_6] [i_7] [i_8] [i_8] [i_9] [i_6] [i_8] = ((/* implicit */long long int) arr_0 [i_6]);
                                arr_33 [i_6] [i_7] [i_8] [i_6] [i_8] = ((/* implicit */short) arr_4 [i_6]);
                                var_29 = ((/* implicit */long long int) (~(((/* implicit */int) min((arr_0 [i_6 - 1]), (var_3))))));
                                var_30 = ((/* implicit */int) max((var_30), (((/* implicit */int) min((((/* implicit */unsigned long long int) var_15)), (((((/* implicit */_Bool) arr_30 [i_9] [i_6 - 1] [i_6] [i_6 + 1] [i_6 - 1] [i_6 - 1] [i_6])) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_6 + 1]))))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
}
