/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110784
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110784 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110784
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
    /* LoopSeq 2 */
    for (short i_0 = 3; i_0 < 9; i_0 += 3) /* same iter space */
    {
        var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned char) ((((/* implicit */int) arr_1 [i_0 - 1])) != (((/* implicit */int) arr_1 [i_0 + 1]))))), (((unsigned char) ((((/* implicit */_Bool) var_5)) ? (var_0) : (((/* implicit */int) (signed char)-120))))))))));
        var_16 -= ((/* implicit */int) ((long long int) min((min((((/* implicit */int) var_10)), (var_0))), (((/* implicit */int) arr_1 [i_0 - 1])))));
        var_17 &= ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-120))) : (3007204746781442207ULL)))) ? (arr_0 [i_0] [i_0]) : (min((((((/* implicit */_Bool) arr_0 [i_0] [(signed char)9])) ? (((/* implicit */int) (signed char)107)) : (((/* implicit */int) (signed char)-120)))), (((((/* implicit */int) (signed char)119)) & (var_4))))));
        arr_2 [i_0] = (signed char)123;
        /* LoopNest 3 */
        for (long long int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 10; i_3 += 2) 
                {
                    {
                        arr_12 [i_1] = ((/* implicit */long long int) ((((/* implicit */int) (signed char)58)) <= (((int) ((signed char) (signed char)-127)))));
                        arr_13 [(signed char)7] [i_1] [i_2] [5LL] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_8 [(signed char)1] [1LL] [9LL] [9LL] [i_0]), (var_4)))) ? ((-(var_7))) : (((/* implicit */unsigned long long int) min((((/* implicit */int) (signed char)109)), (var_0))))))) ? (min((var_7), (((/* implicit */unsigned long long int) arr_9 [i_1])))) : (((/* implicit */unsigned long long int) max((((/* implicit */long long int) (!(((/* implicit */_Bool) 544810954))))), ((+(7288925187028275134LL))))))));
                        var_18 += ((/* implicit */unsigned int) (signed char)-120);
                    }
                } 
            } 
        } 
    }
    for (short i_4 = 3; i_4 < 9; i_4 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (signed char i_5 = 0; i_5 < 10; i_5 += 2) 
        {
            for (int i_6 = 0; i_6 < 10; i_6 += 1) 
            {
                {
                    arr_21 [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-120)))))) / (((((/* implicit */_Bool) 1527911550)) ? (2925991110798805405ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)119)))))))) ? (((((/* implicit */_Bool) (signed char)-113)) ? (((/* implicit */unsigned long long int) arr_15 [i_4 - 2] [i_4 - 3])) : (arr_14 [i_4 - 1]))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) ((short) var_2))) ^ (((((/* implicit */_Bool) 5284807521610390454ULL)) ? (((/* implicit */int) (signed char)119)) : (((/* implicit */int) var_6)))))))));
                    var_19 = max((((((/* implicit */int) arr_20 [i_4 - 3] [i_4 - 3] [i_4 - 3])) >> (((((/* implicit */int) (short)-32764)) + (32793))))), (((/* implicit */int) (((~(arr_17 [i_4]))) >= ((-(((/* implicit */int) (signed char)119))))))));
                }
            } 
        } 
        var_20 = ((/* implicit */int) ((((/* implicit */_Bool) min((arr_19 [7LL] [7LL] [i_4 - 2] [2U]), (arr_19 [8ULL] [(signed char)2] [i_4 - 1] [(signed char)6])))) ? ((-((~(-126498925727705382LL))))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)26)))));
        var_21 ^= (!(((/* implicit */_Bool) ((-775939896) / (((/* implicit */int) (_Bool)1))))));
    }
    /* LoopNest 3 */
    for (long long int i_7 = 0; i_7 < 17; i_7 += 4) 
    {
        for (int i_8 = 0; i_8 < 17; i_8 += 2) 
        {
            for (unsigned long long int i_9 = 0; i_9 < 17; i_9 += 4) 
            {
                {
                    arr_29 [(unsigned char)11] [i_8] [(_Bool)1] = ((/* implicit */short) ((2147483636) >> (((min((arr_22 [i_7]), (((/* implicit */unsigned int) arr_27 [i_7] [i_7] [i_7])))) - (22341U)))));
                    arr_30 [i_7] [i_9] = ((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_28 [(signed char)2] [i_8])) ? (-126498925727705384LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-120)))))) ? (max((arr_26 [4ULL] [i_8]), (((/* implicit */int) var_10)))) : (min((var_13), (775939895))))));
                }
            } 
        } 
    } 
}
