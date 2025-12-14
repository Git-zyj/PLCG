/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111055
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111055 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111055
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
    for (long long int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (signed char i_3 = 1; i_3 < 24; i_3 += 4) 
                    {
                        {
                            /* LoopSeq 4 */
                            for (signed char i_4 = 0; i_4 < 25; i_4 += 3) /* same iter space */
                            {
                                arr_14 [i_3] = ((/* implicit */long long int) max((arr_4 [i_0] [i_1]), (((/* implicit */unsigned short) (((-(254108117104143831LL))) >= (((/* implicit */long long int) max((arr_11 [i_1] [i_1] [i_3]), (((/* implicit */int) arr_6 [i_0] [17U]))))))))));
                                arr_15 [i_0] [i_2] [i_3] = ((/* implicit */_Bool) -1);
                                var_10 = ((/* implicit */signed char) min((min((arr_6 [i_3 + 1] [i_3 + 1]), (arr_6 [i_3 - 1] [i_3 - 1]))), ((!(arr_6 [i_3 + 1] [i_3 - 1])))));
                                var_11 = ((/* implicit */_Bool) 2954002269613189282LL);
                                arr_16 [i_4] [i_3] [i_3] [i_1] [i_3] [i_1] [i_0] = ((/* implicit */unsigned int) max((max(((+(8166914209997682920ULL))), (((/* implicit */unsigned long long int) (signed char)14)))), (((/* implicit */unsigned long long int) arr_5 [i_3] [i_3] [i_2] [i_3 - 1]))));
                            }
                            for (signed char i_5 = 0; i_5 < 25; i_5 += 3) /* same iter space */
                            {
                                arr_21 [i_0] [i_0] [i_0] [i_3] [i_0] [i_0] [i_0] = ((/* implicit */int) ((min((((/* implicit */unsigned int) arr_5 [i_0] [i_0] [i_0] [i_0])), (max((arr_1 [10ULL]), (((/* implicit */unsigned int) (signed char)16)))))) >= (max((max((((/* implicit */unsigned int) arr_3 [i_0] [i_0])), (arr_20 [i_0] [i_5] [i_2] [i_3] [i_5]))), (((/* implicit */unsigned int) max((((/* implicit */unsigned short) arr_7 [i_3])), (arr_12 [i_0] [12U] [i_2] [i_2] [i_5]))))))));
                                var_12 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((short) (~(((/* implicit */int) (signed char)-24)))))), (min((arr_0 [i_0]), (((/* implicit */long long int) max((((/* implicit */int) arr_7 [(unsigned char)4])), (arr_5 [(unsigned char)16] [(unsigned char)16] [i_2] [16LL]))))))));
                                arr_22 [i_0] [i_1] [i_3] [i_3] [9LL] [i_3] = ((/* implicit */long long int) min((((/* implicit */unsigned int) max((((/* implicit */unsigned short) (signed char)-19)), (arr_18 [21U] [i_3 - 1] [i_3 + 1] [i_3 + 1] [i_3 + 1])))), ((~(arr_17 [i_3] [i_3 - 1] [i_3])))));
                            }
                            for (signed char i_6 = 0; i_6 < 25; i_6 += 3) /* same iter space */
                            {
                                var_13 = ((/* implicit */unsigned long long int) arr_12 [18U] [i_1] [i_3 + 1] [i_3] [i_3]);
                                var_14 = ((/* implicit */int) max((var_14), (((/* implicit */int) arr_7 [i_3]))));
                                var_15 = ((/* implicit */_Bool) min((min((((/* implicit */signed char) arr_6 [i_3] [i_0])), (arr_3 [i_3 + 1] [i_3 - 1]))), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_19 [i_0] [i_0])) && (((/* implicit */_Bool) max(((signed char)-1), (arr_24 [i_0] [i_1] [i_2] [i_6])))))))));
                            }
                            for (unsigned short i_7 = 1; i_7 < 21; i_7 += 3) 
                            {
                                arr_28 [i_0] [i_1] [20ULL] [i_3] = ((/* implicit */unsigned short) min((max((arr_19 [23ULL] [i_3 - 1]), (arr_19 [i_3] [i_3 - 1]))), (min((arr_19 [(short)15] [i_3 - 1]), (arr_19 [i_3 - 1] [i_3 + 1])))));
                                var_16 = ((/* implicit */unsigned int) arr_0 [i_7]);
                                arr_29 [i_3] [i_3] [i_2] [i_2] [11ULL] [i_1] [i_3] = ((/* implicit */unsigned char) arr_24 [i_0] [i_0] [i_0] [i_0]);
                            }
                            arr_30 [24LL] [i_3] [i_0] [i_0] = ((/* implicit */unsigned char) (-(((/* implicit */int) ((((unsigned int) 18446744073709551615ULL)) > (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_4 [(unsigned short)15] [i_0])) && (((/* implicit */_Bool) arr_17 [i_3] [i_2] [i_0])))))))))));
                            var_17 = ((/* implicit */unsigned int) (signed char)-39);
                            arr_31 [i_3] = arr_18 [i_0] [i_0] [i_0] [i_0] [i_0];
                        }
                    } 
                } 
                arr_32 [i_1] [i_0] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) max((-3243172988659655763LL), (((/* implicit */long long int) (signed char)-1))))), (arr_26 [i_0] [7U])));
                var_18 += arr_17 [i_1] [i_1] [i_0];
                var_19 += ((/* implicit */_Bool) min(((~(max((11ULL), (((/* implicit */unsigned long long int) (unsigned short)7)))))), (((/* implicit */unsigned long long int) (unsigned char)28))));
                var_20 &= arr_27 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0];
            }
        } 
    } 
    var_21 = ((/* implicit */signed char) ((_Bool) min((18446744073709551615ULL), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) <= (var_9)))))));
    var_22 = ((/* implicit */unsigned char) ((int) var_3));
    var_23 &= ((/* implicit */unsigned int) min((max((max((((/* implicit */unsigned long long int) var_3)), (var_7))), (((/* implicit */unsigned long long int) max((var_8), (((/* implicit */unsigned short) var_4))))))), (((/* implicit */unsigned long long int) var_9))));
}
