/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162597
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162597 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162597
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
    var_13 = ((/* implicit */long long int) var_11);
    var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_12)) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_4), (var_12))))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (var_0))))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_9)))))));
    var_15 = ((/* implicit */long long int) min((var_15), (((/* implicit */long long int) (((!((!(((/* implicit */_Bool) -1339064958)))))) ? (((/* implicit */unsigned long long int) (~(-1339064962)))) : (min((((/* implicit */unsigned long long int) max((var_2), (((/* implicit */unsigned char) var_5))))), (var_7))))))));
    /* LoopSeq 2 */
    for (int i_0 = 2; i_0 < 7; i_0 += 3) 
    {
        var_16 = ((/* implicit */unsigned int) min((min((arr_0 [i_0 + 3]), (arr_0 [i_0 + 2]))), (((arr_0 [i_0 + 3]) / (arr_0 [i_0 - 1])))));
        /* LoopSeq 1 */
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            arr_5 [i_0] [i_0] [i_1] = ((/* implicit */unsigned int) var_3);
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned char i_2 = 0; i_2 < 10; i_2 += 1) 
            {
                arr_9 [i_0] [i_0 + 1] [i_0] [i_1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 1339064957))));
                arr_10 [i_1] = ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0 - 2] [i_0 + 3]))) : (arr_6 [i_0 + 3] [i_1] [i_2]));
                var_17 = ((/* implicit */int) (!(((/* implicit */_Bool) (-(-1339064961))))));
                /* LoopSeq 4 */
                for (short i_3 = 0; i_3 < 10; i_3 += 4) 
                {
                    var_18 = ((/* implicit */int) arr_3 [i_0] [i_0 + 3] [i_1]);
                    /* LoopSeq 2 */
                    for (unsigned long long int i_4 = 0; i_4 < 10; i_4 += 2) /* same iter space */
                    {
                        var_19 = ((var_1) ? (((/* implicit */int) var_3)) : (1339064975));
                        arr_16 [i_4] [i_1] [i_2] [i_0] [i_1] [i_0] = ((/* implicit */short) ((long long int) 1339064948));
                        var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) var_1))));
                    }
                    for (unsigned long long int i_5 = 0; i_5 < 10; i_5 += 2) /* same iter space */
                    {
                        arr_19 [i_1] [i_3] [i_2] [i_2] [i_1] [i_1] = (-(((/* implicit */int) (signed char)-68)));
                        arr_20 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)241)) ? (((/* implicit */long long int) 1339064936)) : (var_8)));
                    }
                    var_21 = ((/* implicit */unsigned int) max((var_21), ((-(arr_12 [i_3])))));
                }
                for (unsigned char i_6 = 3; i_6 < 7; i_6 += 2) 
                {
                    var_22 = ((((/* implicit */_Bool) arr_7 [i_2])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) ((var_0) >= (((/* implicit */unsigned long long int) -1339064949))))));
                    var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)238)) ^ (1339064954)));
                    var_24 = ((/* implicit */short) (((!(((/* implicit */_Bool) arr_7 [i_6 - 1])))) ? (((/* implicit */long long int) arr_7 [i_0 + 1])) : (((((/* implicit */_Bool) -733991321)) ? (-3088783935887234342LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)2774)))))));
                }
                for (unsigned short i_7 = 0; i_7 < 10; i_7 += 1) 
                {
                    arr_27 [i_0 + 2] [i_1] [i_0] [i_1] [i_7] = ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned short)62747))));
                    arr_28 [i_0] [i_0] [i_0] [i_0] [i_1] [i_0] = (unsigned short)57939;
                }
                for (unsigned int i_8 = 0; i_8 < 10; i_8 += 2) 
                {
                    var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) ((unsigned long long int) (-(((/* implicit */int) var_3))))))));
                    /* LoopSeq 1 */
                    for (int i_9 = 0; i_9 < 10; i_9 += 2) 
                    {
                        var_26 = ((/* implicit */unsigned long long int) -3088783935887234342LL);
                        var_27 = (short)52;
                    }
                }
            }
            arr_34 [i_0] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)15)) && (((/* implicit */_Bool) 16808085872711791933ULL))));
        }
        var_28 = ((/* implicit */unsigned int) (-(max((((/* implicit */int) (signed char)-1)), ((-(-733991326)))))));
    }
    for (unsigned int i_10 = 0; i_10 < 13; i_10 += 2) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (int i_11 = 2; i_11 < 11; i_11 += 1) 
        {
            var_29 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_35 [i_11 + 1] [i_10])) ? (arr_35 [i_11 + 1] [i_11 + 2]) : (arr_35 [i_11 + 1] [i_11])));
            var_30 = ((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (var_0))));
        }
        arr_40 [i_10] = arr_35 [i_10] [i_10];
    }
    /* LoopSeq 1 */
    for (signed char i_12 = 0; i_12 < 16; i_12 += 4) 
    {
        var_31 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 1339064948)) ? (((((/* implicit */unsigned long long int) min((var_8), (((/* implicit */long long int) var_11))))) + (min((arr_41 [i_12]), (((/* implicit */unsigned long long int) (unsigned short)62767)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))));
        var_32 = ((/* implicit */unsigned short) min((var_32), (((/* implicit */unsigned short) (-(min(((-(((/* implicit */int) var_2)))), (((/* implicit */int) max(((unsigned char)236), ((unsigned char)15)))))))))));
    }
}
