/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188484
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188484 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188484
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
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        arr_3 [(signed char)7] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) var_3)) | ((+(var_6)))));
        /* LoopSeq 2 */
        for (unsigned short i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            arr_7 [i_0] = ((/* implicit */unsigned long long int) 2265328066U);
            /* LoopSeq 1 */
            for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 3) 
            {
                /* LoopSeq 1 */
                for (unsigned char i_3 = 1; i_3 < 16; i_3 += 2) 
                {
                    var_14 = arr_6 [i_0] [i_1];
                    arr_15 [i_2] = ((/* implicit */unsigned short) var_3);
                    /* LoopSeq 3 */
                    for (int i_4 = 0; i_4 < 19; i_4 += 2) 
                    {
                        arr_20 [i_0] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) ((arr_9 [i_0] [i_0] [i_2]) / (((/* implicit */int) (signed char)-86))))), (((unsigned int) var_0))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [i_3]))) : (((((-2698010193370042001LL) + (9223372036854775807LL))) >> (((((/* implicit */int) arr_12 [i_0] [i_3 + 3] [i_2] [i_3])) - (27505)))))));
                        arr_21 [i_4] &= ((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((var_13) % (((/* implicit */int) arr_6 [i_1] [i_1]))))), (min((((/* implicit */long long int) ((((/* implicit */unsigned long long int) 3937818021U)) > (5866636640180036343ULL)))), (((long long int) -6894842252556770833LL))))));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_5 = 0; i_5 < 19; i_5 += 4) 
                    {
                        var_15 = ((/* implicit */unsigned long long int) max((var_15), ((~(12516158095228337696ULL)))));
                        var_16 = ((/* implicit */long long int) arr_6 [i_2] [i_3]);
                    }
                    for (int i_6 = 0; i_6 < 19; i_6 += 2) 
                    {
                        var_17 = ((arr_25 [i_1]) | (((/* implicit */unsigned long long int) (-(2147483626)))));
                        var_18 = ((/* implicit */unsigned long long int) max((var_18), (((((unsigned long long int) var_3)) >> (((2147483647) - (2147483587)))))));
                        var_19 *= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_8 [i_0] [i_6] [i_2] [i_3])), (-3648960538426421582LL)))) > (((unsigned long long int) var_5))));
                    }
                }
                var_20 = (((+(((/* implicit */int) arr_23 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))) / (max((var_13), (((/* implicit */int) arr_23 [i_0] [i_0] [i_1] [i_0] [i_1] [i_2] [i_2])))));
                var_21 -= ((/* implicit */unsigned char) ((unsigned int) ((unsigned short) ((signed char) var_9))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned char i_7 = 0; i_7 < 19; i_7 += 3) 
                {
                    var_22 |= arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0];
                    var_23 -= 22ULL;
                }
            }
            arr_30 [i_0] = ((/* implicit */unsigned long long int) ((signed char) max((arr_27 [i_0] [i_0]), (12516158095228337696ULL))));
            arr_31 [15ULL] = min((min((arr_16 [i_0] [i_0] [i_1] [i_1] [i_0] [i_0]), (var_11))), (((((/* implicit */_Bool) var_1)) ? (arr_16 [i_0] [i_0] [i_1] [i_1] [i_1] [i_1]) : (((/* implicit */unsigned long long int) arr_28 [i_0])))));
        }
        for (unsigned int i_8 = 3; i_8 < 18; i_8 += 2) 
        {
            var_24 &= ((unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (arr_26 [i_0] [i_0] [i_0] [i_8 - 1] [i_0] [i_0]) : (arr_19 [i_0] [i_0] [i_0])));
            var_25 = ((/* implicit */unsigned short) max((var_25), (((/* implicit */unsigned short) min((((/* implicit */long long int) ((unsigned int) (~(arr_5 [i_0] [i_8 - 1] [i_8]))))), (((long long int) (~(arr_17 [i_0] [i_0] [i_8 - 3])))))))));
        }
        arr_34 [i_0] = ((/* implicit */unsigned char) arr_17 [i_0] [i_0] [i_0]);
    }
    var_26 = ((/* implicit */long long int) 2ULL);
}
