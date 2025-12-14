/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111212
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111212 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111212
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
    var_10 = ((/* implicit */signed char) min((((/* implicit */unsigned int) (-((+(((/* implicit */int) (unsigned short)34893))))))), (((unsigned int) ((var_1) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (185276031272424822LL))))));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        var_11 = ((/* implicit */signed char) min((var_11), (((/* implicit */signed char) (-((~(max((((/* implicit */unsigned long long int) (unsigned short)34893)), (arr_1 [i_0] [(unsigned short)10]))))))))));
        arr_4 [i_0] = ((/* implicit */unsigned char) min((((long long int) (!(((/* implicit */_Bool) arr_0 [i_0]))))), (185276031272424822LL)));
        var_12 = ((/* implicit */int) max((var_12), (((/* implicit */int) min((((unsigned long long int) ((((/* implicit */long long int) 16777200)) & (-7116399542535603689LL)))), (((/* implicit */unsigned long long int) ((unsigned short) arr_3 [i_0]))))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (signed char i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            /* LoopSeq 3 */
            for (unsigned short i_2 = 1; i_2 < 9; i_2 += 1) 
            {
                var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -4017449187621585481LL)) ? (arr_6 [i_0]) : (((/* implicit */long long int) 2741327416U))));
                var_14 = (!(((/* implicit */_Bool) arr_3 [i_1])));
                var_15 = ((/* implicit */unsigned char) (unsigned short)34883);
            }
            for (unsigned int i_3 = 0; i_3 < 13; i_3 += 2) 
            {
                var_16 = ((/* implicit */int) max((var_16), ((+(arr_0 [i_3])))));
                /* LoopSeq 1 */
                for (unsigned long long int i_4 = 0; i_4 < 13; i_4 += 1) 
                {
                    /* LoopSeq 3 */
                    for (unsigned char i_5 = 3; i_5 < 12; i_5 += 2) /* same iter space */
                    {
                        arr_17 [i_0] = ((((/* implicit */_Bool) arr_14 [i_0] [i_5 - 2] [i_0] [i_5 + 1] [i_5 - 1] [i_5])) ? (-1562523295406213337LL) : (((/* implicit */long long int) arr_14 [i_0] [i_5 - 1] [i_5] [i_5 - 3] [i_5 + 1] [i_5])));
                        var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) -16777202)) || (((/* implicit */_Bool) (+(-1184438543))))));
                    }
                    for (unsigned char i_6 = 3; i_6 < 12; i_6 += 2) /* same iter space */
                    {
                        var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) arr_21 [i_3] [i_4] [i_3]))));
                        var_19 = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_19 [i_1] [i_1] [i_0] [i_4] [i_6] [3] [i_6 - 2]))));
                    }
                    for (unsigned char i_7 = 3; i_7 < 12; i_7 += 2) /* same iter space */
                    {
                        arr_24 [i_0] = ((/* implicit */unsigned long long int) var_7);
                        var_20 = ((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)3))));
                        var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) arr_16 [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_0] [i_0]))) : (arr_3 [i_7]))) : (((/* implicit */unsigned long long int) -185276031272424816LL))));
                        var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) -16777202)) ? (((/* implicit */int) arr_10 [i_0] [i_0] [i_7 - 3] [i_4])) : (arr_5 [i_7 - 3] [i_7 + 1] [i_7 - 3])));
                        var_23 &= ((/* implicit */short) ((((/* implicit */_Bool) arr_15 [i_7 - 3] [i_7] [i_3] [i_4] [i_3])) ? (((/* implicit */int) (unsigned short)8432)) : (arr_14 [i_1] [i_7 + 1] [(_Bool)1] [i_4] [i_4] [i_1])));
                    }
                    arr_25 [i_0] [8] [i_3] [i_3] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)16643)) ? (((/* implicit */unsigned long long int) arr_6 [i_0])) : (arr_13 [i_1] [i_1] [i_1] [i_1] [i_1] [i_0])));
                }
                arr_26 [i_0] [i_0] [i_3] = ((/* implicit */unsigned int) (~(arr_0 [i_0])));
            }
            for (unsigned short i_8 = 2; i_8 < 12; i_8 += 2) 
            {
                var_24 = ((/* implicit */long long int) max((var_24), (((/* implicit */long long int) (+(((/* implicit */int) var_7)))))));
                var_25 = ((/* implicit */unsigned int) max((var_25), (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)30674)))))));
                var_26 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_10 [i_8 - 2] [i_0] [i_8 + 1] [i_8 - 2])) & (((/* implicit */int) arr_10 [i_8 + 1] [i_0] [i_8 - 1] [i_8 + 1]))));
                var_27 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_21 [i_0] [6] [i_0]))));
            }
            var_28 = ((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned char)51))));
        }
        var_29 = ((/* implicit */int) max((var_29), (((/* implicit */int) var_2))));
    }
}
