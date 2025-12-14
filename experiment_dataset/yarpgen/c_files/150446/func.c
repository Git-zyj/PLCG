/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150446
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150446 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150446
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
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (unsigned char i_1 = 1; i_1 < 17; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 20; i_2 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_3 = 1; i_3 < 19; i_3 += 3) 
                    {
                        var_20 = ((/* implicit */unsigned int) ((min((((/* implicit */unsigned long long int) ((15809359103753552251ULL) > (15809359103753552249ULL)))), (2637384969955999379ULL))) & (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_1] [i_1 - 1] [i_1 + 3] [i_3 + 1] [i_1] [i_3 - 1])) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (short)-24922)) : (((/* implicit */int) arr_6 [i_1] [i_2] [i_1 + 2] [i_1])))) : (((/* implicit */int) arr_2 [i_0] [i_1 - 1] [i_3 + 1])))))));
                        var_21 = ((/* implicit */short) arr_5 [i_1 + 3] [i_3 - 1] [i_3 - 1] [i_3]);
                    }
                    var_22 = ((((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_1 + 2] [i_1 + 2] [i_1 + 2])) & (((/* implicit */int) arr_2 [i_1 + 1] [i_1 + 3] [i_1 + 3]))))) ? (((/* implicit */int) arr_2 [i_1 + 3] [i_1 + 1] [i_1])) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_1 + 2] [i_1 - 1] [i_1]))))));
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */short) (((!(((/* implicit */_Bool) ((signed char) var_18))))) || (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */int) var_14)) <= (var_15)))), (((((/* implicit */_Bool) var_12)) ? (2637384969955999365ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))))))));
    /* LoopNest 2 */
    for (short i_4 = 0; i_4 < 11; i_4 += 3) 
    {
        for (unsigned long long int i_5 = 1; i_5 < 7; i_5 += 3) 
        {
            {
                var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) var_4))));
                /* LoopSeq 2 */
                for (unsigned short i_6 = 0; i_6 < 11; i_6 += 3) 
                {
                    arr_19 [i_4] [i_4] [i_6] = ((min((((arr_13 [i_4] [i_4]) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_4] [i_5 - 1]))))), (((/* implicit */unsigned long long int) ((unsigned short) 2637384969955999378ULL))))) - (((((/* implicit */unsigned long long int) ((((/* implicit */int) var_0)) / (((/* implicit */int) var_2))))) - (((((/* implicit */_Bool) arr_10 [i_5] [(short)0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_4] [i_6]))) : (3ULL))))));
                    /* LoopNest 2 */
                    for (long long int i_7 = 0; i_7 < 11; i_7 += 3) 
                    {
                        for (int i_8 = 0; i_8 < 11; i_8 += 4) 
                        {
                            {
                                var_25 = ((/* implicit */long long int) (unsigned short)49259);
                                var_26 = ((/* implicit */unsigned int) (+(((arr_5 [i_4] [i_6] [i_7] [i_8]) | (arr_5 [(_Bool)1] [i_7] [i_7] [i_5])))));
                            }
                        } 
                    } 
                }
                for (signed char i_9 = 2; i_9 < 10; i_9 += 2) 
                {
                    /* LoopNest 2 */
                    for (long long int i_10 = 0; i_10 < 11; i_10 += 2) 
                    {
                        for (unsigned long long int i_11 = 0; i_11 < 11; i_11 += 1) 
                        {
                            {
                                arr_33 [i_5 + 2] [i_9] [i_10] [i_9] = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */_Bool) arr_24 [i_10] [i_10] [i_10] [i_10] [i_10] [8ULL])) && (((/* implicit */_Bool) max(((unsigned short)55377), (((/* implicit */unsigned short) var_18)))))))) <= (((((int) arr_14 [6ULL])) / (((/* implicit */int) ((unsigned char) arr_12 [i_10] [i_11])))))));
                                var_27 = ((/* implicit */unsigned char) max((var_27), (((/* implicit */unsigned char) (unsigned short)8198))));
                                var_28 = ((/* implicit */unsigned char) (((+(((/* implicit */int) (unsigned char)31)))) >= (((((/* implicit */int) arr_16 [i_5 + 1])) | (arr_17 [i_5 + 4] [i_5 + 2] [i_5 - 1])))));
                            }
                        } 
                    } 
                    var_29 = ((/* implicit */short) min((var_29), (((/* implicit */short) ((((2637384969955999364ULL) > (((/* implicit */unsigned long long int) 130245268U)))) ? (2637384969955999366ULL) : (max((((/* implicit */unsigned long long int) 67108863U)), (arr_5 [i_9] [i_9 - 1] [i_5 - 1] [i_5]))))))));
                }
                var_30 = ((((max((((/* implicit */unsigned long long int) arr_0 [i_4] [i_5])), (arr_13 [i_4] [i_5]))) - (((/* implicit */unsigned long long int) arr_25 [i_4] [i_4] [i_4] [i_4] [6U])))) & (((/* implicit */unsigned long long int) ((long long int) ((arr_5 [i_4] [(unsigned char)17] [i_5] [i_5]) > (arr_24 [i_4] [i_4] [i_4] [i_4] [i_4] [(unsigned char)2]))))));
            }
        } 
    } 
}
