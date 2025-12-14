/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120825
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120825 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120825
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
    for (long long int i_0 = 0; i_0 < 13; i_0 += 4) /* same iter space */
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_0 [i_0]);
        /* LoopSeq 2 */
        for (long long int i_1 = 3; i_1 < 11; i_1 += 4) 
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 13; i_2 += 3) 
            {
                for (unsigned int i_3 = 0; i_3 < 13; i_3 += 1) 
                {
                    {
                        var_12 = ((/* implicit */long long int) min((var_12), (min((((/* implicit */long long int) (+((+(arr_2 [i_0] [i_1])))))), (max((((/* implicit */long long int) (!(((/* implicit */_Bool) arr_10 [(short)4] [i_0]))))), (2147483647LL)))))));
                        var_13 *= ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_6 [12ULL] [5LL])) : (((/* implicit */int) arr_13 [i_0] [i_0] [i_1 - 1] [i_2] [i_3] [i_3]))))), (max((arr_5 [i_0] [i_1]), (((/* implicit */unsigned int) arr_13 [i_0] [i_1 + 2] [i_2] [i_3] [i_2] [i_1]))))))) ? (min((((/* implicit */long long int) max((((/* implicit */unsigned char) arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])), ((unsigned char)0)))), (max((-5445621331740825060LL), (((/* implicit */long long int) (signed char)31)))))) : (((/* implicit */long long int) ((((/* implicit */int) arr_6 [i_1 + 1] [i_1 - 1])) & (min((((/* implicit */int) (signed char)-32)), (arr_2 [9U] [i_1 - 1]))))))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (unsigned long long int i_4 = 0; i_4 < 13; i_4 += 4) 
            {
                for (unsigned long long int i_5 = 0; i_5 < 13; i_5 += 1) 
                {
                    {
                        var_14 = max((((/* implicit */long long int) arr_12 [i_0] [i_1])), ((+(arr_9 [i_0] [i_1 + 2] [i_1 + 2]))));
                        var_15 += ((/* implicit */unsigned long long int) (signed char)-27);
                        arr_22 [i_1] [i_1] [(unsigned char)8] [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) (signed char)-55)), (((long long int) arr_0 [i_0]))))) ? (((/* implicit */int) (signed char)-31)) : (((/* implicit */int) (!((!(((/* implicit */_Bool) arr_18 [(unsigned char)11] [i_4] [i_4])))))))));
                    }
                } 
            } 
        }
        for (unsigned char i_6 = 4; i_6 < 11; i_6 += 3) 
        {
            var_16 ^= min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-40)) ? (-573461537) : (((/* implicit */int) arr_24 [i_6 - 4])))))))), (arr_10 [i_0] [i_6 + 1]));
            var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_4 [(signed char)5] [i_6] [(unsigned char)0])) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) (signed char)0)))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) (unsigned char)19)))) : ((+(((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [12ULL]))) : (83800250U)))))));
            var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((arr_17 [i_6 + 2] [i_6 - 4]), (arr_17 [i_6 - 1] [i_6 + 1])))) ? ((~(((long long int) arr_13 [i_0] [i_6 - 2] [5U] [i_0] [i_6] [i_6 - 3])))) : (((/* implicit */long long int) min((((/* implicit */int) arr_0 [i_6 - 3])), (((((/* implicit */int) var_8)) & (((/* implicit */int) arr_18 [1] [i_6] [i_0])))))))));
        }
    }
    for (long long int i_7 = 0; i_7 < 13; i_7 += 4) /* same iter space */
    {
        var_19 = ((unsigned int) min((((((/* implicit */_Bool) arr_10 [9ULL] [i_7])) ? (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_7] [i_7]))) : (arr_7 [i_7] [10ULL] [i_7]))), (((/* implicit */long long int) (signed char)-32))));
        arr_29 [i_7] [i_7] = ((/* implicit */unsigned char) (~(((int) arr_9 [5ULL] [i_7] [i_7]))));
        /* LoopSeq 1 */
        for (long long int i_8 = 1; i_8 < 12; i_8 += 3) 
        {
            var_20 = ((/* implicit */int) max((((long long int) max((10241646629104606348ULL), (((/* implicit */unsigned long long int) 2374010483355397542LL))))), (((/* implicit */long long int) min((-983706893), (((int) arr_6 [i_7] [i_8 + 1])))))));
            var_21 = ((/* implicit */unsigned char) arr_16 [i_7] [i_7]);
        }
        var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_31 [2] [i_7]) << (0U)))) ? (arr_2 [i_7] [i_7]) : (((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_7] [i_7])) || (((/* implicit */_Bool) arr_31 [5U] [i_7])))))));
        arr_32 [(unsigned short)11] &= ((/* implicit */unsigned int) max((((((((/* implicit */int) arr_0 [i_7])) + (2147483647))) << (((((/* implicit */int) arr_12 [i_7] [i_7])) - (84))))), (((/* implicit */int) arr_12 [i_7] [i_7]))));
    }
    /* LoopNest 2 */
    for (unsigned char i_9 = 1; i_9 < 23; i_9 += 2) 
    {
        for (unsigned char i_10 = 0; i_10 < 24; i_10 += 3) 
        {
            {
                var_23 = ((/* implicit */short) min((var_23), (arr_33 [i_9])));
                var_24 = ((/* implicit */_Bool) ((unsigned long long int) max((((/* implicit */unsigned char) (signed char)-120)), (arr_35 [i_9 - 1]))));
                var_25 = arr_36 [i_10] [i_10] [i_9];
                arr_38 [i_9] [10LL] [i_10] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((arr_37 [i_9] [i_10]), (((/* implicit */unsigned short) arr_33 [i_9])))))));
                arr_39 [i_9] [12] = ((/* implicit */unsigned int) min((((/* implicit */long long int) min(((-(0))), (-983706873)))), (((long long int) ((arr_36 [i_9 - 1] [i_9] [i_9]) >> (((arr_34 [i_10]) - (17979032121638015647ULL))))))));
            }
        } 
    } 
}
