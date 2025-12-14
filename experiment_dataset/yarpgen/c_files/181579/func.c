/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181579
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181579 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181579
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
    var_12 |= ((/* implicit */_Bool) min((((/* implicit */unsigned int) (~(((/* implicit */int) (!(((/* implicit */_Bool) -204260910)))))))), (((var_6) ? (((((/* implicit */_Bool) var_10)) ? (var_4) : (((/* implicit */unsigned int) -437371030)))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_2))))))))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 4; i_1 < 10; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 2) 
            {
                {
                    var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned char) arr_4 [i_1 + 2] [i_1 - 3] [i_1] [i_1]))) ? (min((arr_4 [i_2] [i_1] [i_1] [i_0]), (((/* implicit */int) max((((/* implicit */short) arr_2 [i_1] [i_2])), (arr_1 [(unsigned char)0])))))) : (max((((((/* implicit */int) var_6)) + (-437371030))), (437371030)))));
                    var_14 = var_0;
                    arr_6 [i_1] [i_1] [i_0] = ((/* implicit */int) arr_2 [i_1] [11]);
                }
            } 
        } 
        var_15 = ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_5 [i_0] [i_0] [i_0])), (1987360469480095551ULL)))) ? (((/* implicit */int) (unsigned char)159)) : (((/* implicit */int) ((((/* implicit */_Bool) max(((unsigned char)4), ((unsigned char)96)))) || (((/* implicit */_Bool) (+(-437371030))))))));
        /* LoopSeq 3 */
        for (short i_3 = 2; i_3 < 9; i_3 += 4) 
        {
            var_16 = max((((/* implicit */unsigned long long int) max((arr_4 [i_0] [i_0] [i_3] [i_0]), (((/* implicit */int) arr_2 [i_3] [i_3 - 2]))))), (max((((/* implicit */unsigned long long int) (unsigned char)75)), (1044856998521543474ULL))));
            arr_10 [i_0] [i_3] [i_3 - 2] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (unsigned char)104))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)106))) : (((unsigned long long int) (_Bool)1))));
        }
        /* vectorizable */
        for (int i_4 = 2; i_4 < 8; i_4 += 1) 
        {
            arr_13 [i_0] [i_4] = ((/* implicit */signed char) ((unsigned int) (~(arr_8 [i_0] [i_4 + 1] [i_4]))));
            arr_14 [i_4] [i_4] = ((/* implicit */int) ((short) var_1));
            /* LoopNest 2 */
            for (unsigned short i_5 = 0; i_5 < 12; i_5 += 4) 
            {
                for (unsigned int i_6 = 2; i_6 < 10; i_6 += 1) 
                {
                    {
                        /* LoopSeq 2 */
                        for (long long int i_7 = 0; i_7 < 12; i_7 += 1) /* same iter space */
                        {
                            var_17 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_6 + 2] [i_4 + 2] [i_7] [i_6])) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) -1866411079)) : (arr_3 [i_5]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_1))))));
                            var_18 = ((/* implicit */unsigned long long int) var_7);
                            var_19 += ((/* implicit */signed char) ((((/* implicit */unsigned int) ((((/* implicit */int) arr_15 [i_0] [i_5] [i_5] [i_7])) - (((/* implicit */int) (short)-24852))))) < (((((/* implicit */_Bool) -1LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-300))) : (var_10)))));
                        }
                        for (long long int i_8 = 0; i_8 < 12; i_8 += 1) /* same iter space */
                        {
                            var_20 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_16 [i_4 - 2] [i_4 + 3] [(unsigned short)11])) ? (((2347611460470662683LL) % (((/* implicit */long long int) ((/* implicit */int) (unsigned char)151))))) : (var_9)));
                            arr_25 [i_0] [i_6] [i_5] [i_6 + 2] [i_8] = ((/* implicit */unsigned long long int) var_5);
                            var_21 += ((/* implicit */unsigned char) arr_23 [i_6] [i_6 - 2] [8ULL] [i_6 - 2] [i_6] [i_6 + 1] [i_6 + 2]);
                            var_22 *= ((/* implicit */_Bool) arr_21 [(short)0] [i_6 - 1] [i_6] [(short)6] [i_8] [i_5]);
                            arr_26 [i_6] = ((/* implicit */int) ((_Bool) var_0));
                        }
                        var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_5] [i_4] [i_0])) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_7 [i_5] [i_0])) : (2080166145)))) : (var_7)));
                    }
                } 
            } 
            arr_27 [i_0] = ((/* implicit */unsigned char) (short)300);
        }
        for (signed char i_9 = 0; i_9 < 12; i_9 += 4) 
        {
            var_24 = ((/* implicit */unsigned short) ((((/* implicit */long long int) 1073741824U)) != (-1373082188092982256LL)));
            arr_32 [i_0] [i_9] [(unsigned short)4] = ((/* implicit */short) max((((/* implicit */int) (_Bool)1)), (45568514)));
            arr_33 [i_0] [i_0] = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((((/* implicit */int) min((arr_22 [7LL] [i_0]), (((/* implicit */unsigned short) arr_2 [i_9] [i_9]))))) | (((((/* implicit */_Bool) 1073741827U)) ? (arr_24 [i_0] [i_0] [i_9] [i_9] [i_9] [2ULL]) : (((/* implicit */int) arr_15 [i_0] [i_0] [i_9] [i_9]))))))), (max((((/* implicit */unsigned int) arr_1 [i_9])), (((unsigned int) 8126464U))))));
            arr_34 [i_0] [i_0] [i_9] = ((((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_0 [i_9]), (((/* implicit */short) var_6))))) ? (((/* implicit */int) (short)15872)) : (((/* implicit */int) (unsigned char)111))))) != (-1LL));
        }
    }
    /* LoopSeq 1 */
    for (short i_10 = 3; i_10 < 7; i_10 += 2) 
    {
        arr_38 [i_10] [i_10] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(min((((/* implicit */unsigned long long int) arr_7 [i_10] [i_10 + 3])), (2258072809372708389ULL)))))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (((long long int) 17401887075188008153ULL))));
        arr_39 [i_10] = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) (unsigned char)159)) ? (17401887075188008149ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */unsigned long long int) (unsigned char)184))));
    }
}
