/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118464
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118464 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118464
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
    for (short i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            {
                arr_6 [5LL] [i_0] = ((/* implicit */unsigned int) ((((((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)105))) : (arr_1 [i_0] [i_1]))) << (((((/* implicit */int) var_1)) - (105))))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_4 [10ULL] [i_1] [i_0]) <= (arr_4 [i_0] [i_1] [i_0])))))));
                var_17 = (+(((/* implicit */int) var_11)));
            }
        } 
    } 
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
    {
        var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_2 + 1] [(_Bool)1])) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (arr_9 [i_2 + 1] [(unsigned short)14]))))));
        /* LoopSeq 1 */
        for (unsigned short i_3 = 1; i_3 < 24; i_3 += 1) 
        {
            var_19 -= ((/* implicit */short) (unsigned char)189);
            arr_12 [(unsigned short)0] &= ((/* implicit */short) (unsigned char)70);
        }
    }
    for (unsigned short i_4 = 4; i_4 < 13; i_4 += 2) 
    {
        /* LoopSeq 2 */
        for (unsigned char i_5 = 2; i_5 < 13; i_5 += 4) /* same iter space */
        {
            var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) ((((((/* implicit */int) (unsigned short)17442)) ^ (((/* implicit */int) arr_16 [i_4] [i_5 - 2])))) != (((/* implicit */int) ((arr_18 [i_4] [i_4] [i_5]) == (arr_18 [i_4 - 1] [i_4] [i_4 - 4])))))))));
            var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) arr_14 [i_4] [i_5 - 1]))));
            arr_19 [i_4] [i_4] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_5])) ? (((/* implicit */int) arr_3 [i_4 + 1] [i_5] [i_5 - 2])) : (((/* implicit */int) arr_16 [i_4 - 4] [i_4 - 4]))))), (((((/* implicit */_Bool) arr_7 [i_5])) ? (arr_4 [i_4 - 3] [i_4 - 3] [i_4]) : (arr_7 [i_4])))));
            arr_20 [i_4] [i_5 - 2] = ((/* implicit */signed char) (((!(((/* implicit */_Bool) arr_17 [i_4 - 2] [i_5 + 1])))) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 1443201538))))))));
        }
        for (unsigned char i_6 = 2; i_6 < 13; i_6 += 4) /* same iter space */
        {
            var_22 -= ((/* implicit */unsigned short) arr_5 [i_6] [i_4 - 4] [i_6]);
            /* LoopNest 2 */
            for (unsigned char i_7 = 0; i_7 < 14; i_7 += 2) 
            {
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        for (signed char i_9 = 2; i_9 < 12; i_9 += 2) 
                        {
                            var_23 = ((/* implicit */short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_18 [i_4] [i_4 - 3] [i_9 + 1])) ? (((/* implicit */int) var_4)) : (min((-13), (((/* implicit */int) var_11))))))), (((arr_1 [i_9] [i_4]) | (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_12)))))))));
                            var_24 = ((/* implicit */unsigned long long int) arr_14 [i_8] [i_8]);
                        }
                        arr_30 [i_8] [i_7] [i_8] = ((/* implicit */signed char) ((short) arr_22 [i_4 - 1]));
                        /* LoopSeq 1 */
                        for (signed char i_10 = 2; i_10 < 13; i_10 += 2) 
                        {
                            var_25 = ((/* implicit */unsigned char) arr_18 [i_6] [i_6] [i_4 - 1]);
                            var_26 = ((/* implicit */signed char) arr_28 [i_4] [i_6 - 2] [i_7] [i_7] [i_8] [i_8] [i_7]);
                        }
                        var_27 = ((/* implicit */_Bool) max((var_27), (((/* implicit */_Bool) arr_7 [i_6]))));
                    }
                } 
            } 
        }
        /* LoopSeq 1 */
        for (short i_11 = 0; i_11 < 14; i_11 += 4) 
        {
            arr_35 [i_4 - 2] = ((/* implicit */unsigned char) arr_15 [i_4] [(signed char)5]);
            var_28 *= ((/* implicit */unsigned short) arr_26 [i_4] [i_4 - 1] [i_11]);
            var_29 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) arr_8 [i_4 + 1] [i_11])), (min((arr_7 [i_11]), (arr_7 [i_11])))));
        }
        arr_36 [i_4] [i_4] = ((/* implicit */int) (_Bool)0);
        arr_37 [i_4 + 1] [i_4] |= ((/* implicit */_Bool) ((var_13) ? (((arr_25 [i_4 - 4] [i_4 - 2] [i_4 - 2]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_25 [i_4 + 1] [i_4 - 4] [i_4 - 2]))) : (arr_11 [i_4 + 1] [i_4] [i_4 - 1]))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_13)))))));
        arr_38 [i_4] = ((/* implicit */unsigned short) (-(max((((/* implicit */unsigned long long int) arr_9 [i_4 - 2] [i_4])), (arr_15 [i_4 - 1] [i_4 - 3])))));
    }
}
