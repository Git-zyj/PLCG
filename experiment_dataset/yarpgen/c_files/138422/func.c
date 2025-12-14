/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138422
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138422 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138422
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
    var_14 = ((/* implicit */signed char) ((unsigned int) ((signed char) var_10)));
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 20; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (unsigned short i_2 = 0; i_2 < 21; i_2 += 1) 
                {
                    for (unsigned int i_3 = 2; i_3 < 19; i_3 += 4) 
                    {
                        for (signed char i_4 = 0; i_4 < 21; i_4 += 3) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) (-(17554818043697405377ULL))))));
                                var_16 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_0 [4ULL] [14U])), (arr_9 [0ULL])))))))) == (((((/* implicit */_Bool) arr_5 [i_3 - 2])) ? (min((((/* implicit */unsigned long long int) var_8)), (arr_8 [4ULL] [i_1]))) : (((((/* implicit */_Bool) arr_13 [i_1] [i_2])) ? (17793546447051089397ULL) : (((/* implicit */unsigned long long int) 2701144184U))))))));
                                arr_16 [i_0] [i_0 + 1] [i_0] [i_0] [i_0] = ((/* implicit */signed char) max(((~(1593823112U))), (arr_1 [i_0])));
                            }
                        } 
                    } 
                } 
                var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_4 [i_0 + 1] [i_0]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_7 [i_0 + 1] [i_0 - 1])) ^ (((/* implicit */int) arr_7 [i_0 + 1] [i_0 - 1]))))) : ((~((~(var_9)))))));
                arr_17 [i_0 + 1] [i_0 + 1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_1] [i_1])) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) (signed char)4))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0 + 1] [i_0 - 1]))) : (((arr_8 [i_0] [i_1]) & (((/* implicit */unsigned long long int) 2701144184U))))))) ? (((/* implicit */int) min(((unsigned short)32721), (((/* implicit */unsigned short) (signed char)4))))) : (((/* implicit */int) arr_12 [20U] [i_1]))));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned long long int) min((var_18), (((((/* implicit */unsigned long long int) var_3)) + (((unsigned long long int) ((var_4) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))))))));
    var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2701144170U)) ? ((-(2328954650U))) : (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-114)) * (((/* implicit */int) (signed char)-23)))))))) ? (((/* implicit */int) ((unsigned short) ((2601524846U) * (((/* implicit */unsigned int) ((/* implicit */int) var_7))))))) : (((/* implicit */int) ((signed char) ((var_5) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))))));
    /* LoopSeq 1 */
    for (signed char i_5 = 3; i_5 < 11; i_5 += 3) 
    {
        var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((((/* implicit */int) arr_11 [i_5] [i_5] [i_5] [i_5] [i_5])) % (((/* implicit */int) ((signed char) arr_3 [i_5] [i_5])))))) <= (((((unsigned int) (signed char)-75)) - (((/* implicit */unsigned int) ((((/* implicit */int) arr_4 [(signed char)1] [i_5 - 3])) ^ (((/* implicit */int) var_8))))))))))));
        /* LoopNest 2 */
        for (unsigned int i_6 = 0; i_6 < 12; i_6 += 4) 
        {
            for (unsigned int i_7 = 0; i_7 < 12; i_7 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_8 = 1; i_8 < 11; i_8 += 4) 
                    {
                        for (unsigned int i_9 = 0; i_9 < 12; i_9 += 1) 
                        {
                            {
                                arr_34 [i_6] [i_8] [9ULL] [i_6] = ((/* implicit */unsigned int) ((((arr_2 [i_7] [i_9]) - (arr_2 [i_8 + 1] [i_6]))) < (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_28 [i_8 - 1] [(signed char)5] [i_8 - 1]) == (arr_28 [i_8 - 1] [i_9] [i_9])))))));
                                var_21 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((var_3) - (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_5] [i_8] [i_7] [i_8] [i_9] [i_8 + 1])))))) ? ((-(((/* implicit */int) arr_10 [10U] [i_6] [i_7] [i_5] [(unsigned short)8] [i_8 + 1])))) : (((((/* implicit */int) arr_10 [i_5] [i_6] [i_7] [i_5 - 2] [(signed char)17] [i_8 + 1])) >> (((((/* implicit */int) arr_31 [i_5 - 3] [1ULL] [i_9] [i_5 - 2] [i_9])) - (40120)))))));
                                arr_35 [i_8 + 1] [i_7] = ((/* implicit */signed char) (~(((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) var_1)), (1560480561U)))))))));
                                var_22 = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) ((signed char) 1593823107U))), (((((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_8 + 1] [i_5 - 3]))) & (4294967295U)))));
                            }
                        } 
                    } 
                    arr_36 [i_5 - 2] [0ULL] [i_7] = ((/* implicit */unsigned short) ((((((((/* implicit */int) arr_10 [i_7] [i_7] [i_7] [i_7] [i_6] [i_5])) >> (((/* implicit */int) (signed char)1)))) < (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)95))) == (var_5)))))) ? ((((+(((/* implicit */int) (signed char)4)))) - (((/* implicit */int) min(((signed char)-23), (arr_19 [i_5])))))) : (((/* implicit */int) min((((/* implicit */signed char) ((((/* implicit */_Bool) 9044681075842755353ULL)) && (((/* implicit */_Bool) arr_30 [(unsigned short)5]))))), ((signed char)16))))));
                    var_23 = ((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */int) arr_5 [(unsigned short)4])) != (((/* implicit */int) arr_5 [i_5])))))));
                }
            } 
        } 
    }
}
