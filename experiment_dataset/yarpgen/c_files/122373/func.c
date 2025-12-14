/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122373
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122373 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122373
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
    for (short i_0 = 1; i_0 < 18; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            {
                var_13 += ((/* implicit */unsigned int) var_1);
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (int i_3 = 0; i_3 < 20; i_3 += 4) 
                    {
                        {
                            arr_12 [i_0] = max((((((/* implicit */int) (!(((/* implicit */_Bool) 1099511103488LL))))) % (((/* implicit */int) min((((/* implicit */short) arr_2 [i_0])), (var_1)))))), (((/* implicit */int) ((((((/* implicit */_Bool) (unsigned short)2046)) ? (((/* implicit */int) arr_0 [i_3])) : (var_0))) <= ((~(var_3)))))));
                            /* LoopSeq 2 */
                            for (signed char i_4 = 0; i_4 < 20; i_4 += 1) 
                            {
                                var_14 = ((/* implicit */unsigned short) var_7);
                                arr_16 [i_0 + 2] [i_2] [i_2] [i_3] [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)32767))) * (816459932290164270ULL)))) ? (((((/* implicit */_Bool) (unsigned short)52696)) ? (arr_11 [i_0] [i_1] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) (short)511))))) : (((/* implicit */long long int) ((/* implicit */int) var_10)))))) ? (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [(unsigned char)9] [i_2] [(unsigned short)15])) ? (((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_0 [i_1]))))), (min((((/* implicit */unsigned long long int) arr_1 [i_3] [(short)5])), (7586640947934292600ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((short) arr_7 [i_0 + 2] [i_1] [i_4] [i_3])))))))));
                                var_15 = var_5;
                                var_16 = ((/* implicit */unsigned short) ((long long int) 458752U));
                            }
                            for (unsigned char i_5 = 0; i_5 < 20; i_5 += 4) 
                            {
                                arr_20 [i_0] [i_1] [i_2] [i_3] [i_5] = ((/* implicit */short) min((max((((/* implicit */int) arr_3 [i_0])), (((((/* implicit */int) (signed char)35)) >> (((((/* implicit */int) var_12)) + (36))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [(short)8] [i_1] [i_1])) ? (((/* implicit */int) arr_1 [i_0] [i_2])) : (((/* implicit */int) (unsigned short)43355))))) ? (((/* implicit */int) max((arr_1 [8ULL] [8ULL]), (((/* implicit */short) arr_9 [i_1] [i_1] [i_3] [i_5]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_1])))))))));
                                arr_21 [i_5] [i_2] [i_2] [i_3] [i_3] = ((/* implicit */short) ((((((/* implicit */int) arr_9 [i_0] [(unsigned char)5] [i_0 + 1] [i_0 - 1])) / (((((/* implicit */_Bool) -3887216543467689057LL)) ? (((/* implicit */int) arr_1 [i_0 + 1] [i_0 + 1])) : (((/* implicit */int) (short)-25231)))))) << ((((~(arr_11 [i_0] [i_3] [i_5]))) + (1778607955781959319LL)))));
                            }
                            var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((min((14426206096113568838ULL), (((/* implicit */unsigned long long int) arr_7 [i_0] [i_0] [i_2] [i_0])))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)22691))))))))))))));
                            var_18 = ((/* implicit */unsigned int) max((((/* implicit */long long int) ((((/* implicit */int) arr_9 [i_0 + 1] [i_1] [(unsigned char)9] [i_3])) < (((/* implicit */int) ((_Bool) -1LL)))))), (max((((/* implicit */long long int) ((int) var_4))), (arr_13 [i_0] [i_1] [i_2] [i_2] [i_3])))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_19 |= ((/* implicit */short) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_8)) : (var_3)))) ? (((long long int) var_12)) : (((/* implicit */long long int) ((/* implicit */int) var_10))))), (((/* implicit */long long int) var_2))));
    /* LoopNest 2 */
    for (unsigned long long int i_6 = 2; i_6 < 7; i_6 += 1) 
    {
        for (unsigned int i_7 = 0; i_7 < 10; i_7 += 1) 
        {
            {
                arr_27 [i_7] [(short)5] = ((((/* implicit */_Bool) min((((((/* implicit */_Bool) (unsigned short)61380)) ? (((/* implicit */int) arr_5 [i_6 - 2] [i_7])) : (((/* implicit */int) var_4)))), (((((/* implicit */_Bool) (short)29335)) ? (arr_24 [(unsigned char)6]) : (((/* implicit */int) var_9))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */_Bool) arr_22 [(short)3] [i_6])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_6] [i_7]))) : (arr_22 [i_6] [i_6]))) != (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) arr_17 [i_6] [i_6] [i_6] [i_7] [i_7])), (arr_25 [i_6] [(short)3])))))))) : ((+(((unsigned int) arr_25 [i_6] [i_7])))));
                var_20 = ((/* implicit */unsigned long long int) min(((unsigned short)60788), (((/* implicit */unsigned short) (signed char)100))));
            }
        } 
    } 
}
