/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128178
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128178 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128178
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
    var_15 = ((/* implicit */int) ((((/* implicit */_Bool) var_2)) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) / (var_0))) : (max((((/* implicit */unsigned long long int) var_14)), (max((((/* implicit */unsigned long long int) (unsigned short)36328)), (15874036114075934850ULL)))))));
    var_16 = ((/* implicit */unsigned short) var_2);
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        arr_2 [i_0] [i_0] = var_10;
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 20; i_2 += 1) 
            {
                {
                    arr_9 [(unsigned char)0] [i_1] = ((/* implicit */unsigned long long int) min((var_2), (((/* implicit */unsigned char) arr_7 [i_1]))));
                    /* LoopSeq 2 */
                    for (unsigned short i_3 = 2; i_3 < 17; i_3 += 4) /* same iter space */
                    {
                        arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] = ((((/* implicit */unsigned long long int) arr_3 [i_2] [i_1] [10ULL])) / (273291757797115049ULL));
                        var_17 ^= ((/* implicit */unsigned char) arr_8 [i_0] [(_Bool)1] [i_2] [i_3]);
                        var_18 ^= ((/* implicit */short) ((((/* implicit */_Bool) min((((((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) + (16419800408342895732ULL))), (((((/* implicit */_Bool) arr_10 [i_0] [(short)13] [i_2] [i_0] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (2026943665366655884ULL)))))) ? (max((((((/* implicit */int) var_7)) / (((/* implicit */int) (signed char)70)))), (((/* implicit */int) arr_12 [i_0] [(short)17] [i_2] [(unsigned short)12] [i_0] [i_0])))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */unsigned long long int) arr_1 [i_0])) : (2026943665366655883ULL)))) ? (((/* implicit */int) arr_5 [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_0 [16ULL]))))));
                    }
                    for (unsigned short i_4 = 2; i_4 < 17; i_4 += 4) /* same iter space */
                    {
                        arr_18 [i_0] [i_0] [i_1] [i_1] [i_1] [(short)13] = ((/* implicit */int) arr_16 [i_1]);
                        var_19 = ((/* implicit */unsigned int) min((((/* implicit */int) (((_Bool)1) || (((((/* implicit */int) arr_12 [i_0] [i_1] [i_2] [i_4 + 1] [i_0] [i_0])) >= (((/* implicit */int) (_Bool)1))))))), (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_0 [i_0]))))));
                        var_20 = ((/* implicit */unsigned long long int) var_8);
                    }
                    var_21 += ((/* implicit */_Bool) min((max((((/* implicit */unsigned int) max((arr_12 [i_0] [i_1] [i_2] [i_0] [9] [i_0]), (((/* implicit */signed char) (_Bool)1))))), (max((4294967272U), (((/* implicit */unsigned int) (unsigned short)58189)))))), (((/* implicit */unsigned int) arr_0 [i_0]))));
                    arr_19 [(_Bool)0] [i_1 + 1] [i_0] [i_0] = ((/* implicit */int) arr_12 [i_1] [i_1 + 1] [7ULL] [i_1 + 1] [7ULL] [i_2]);
                    /* LoopSeq 1 */
                    for (signed char i_5 = 0; i_5 < 20; i_5 += 1) 
                    {
                        arr_22 [i_5] [i_0] [i_0] = max((((unsigned long long int) ((((/* implicit */_Bool) arr_13 [i_0] [i_1 + 1])) ? (((/* implicit */int) arr_11 [i_5] [i_2] [i_1] [i_1] [i_0])) : (((/* implicit */int) arr_7 [i_0]))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((10351112640443311013ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0])))))) ? (arr_1 [i_1 + 1]) : ((~(((/* implicit */int) arr_0 [i_1]))))))));
                        var_22 = ((/* implicit */unsigned short) var_0);
                    }
                }
            } 
        } 
        arr_23 [i_0] = ((/* implicit */unsigned long long int) (unsigned short)39235);
        var_23 = ((/* implicit */unsigned long long int) arr_6 [i_0]);
    }
    for (int i_6 = 0; i_6 < 16; i_6 += 1) 
    {
        var_24 = ((/* implicit */unsigned long long int) min(((!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_6]))) - (2026943665366655880ULL)))))), ((!(((/* implicit */_Bool) -33802830))))));
        arr_28 [10ULL] [i_6] = ((/* implicit */long long int) arr_21 [i_6] [i_6] [i_6] [i_6]);
    }
    for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
    {
        var_25 = ((/* implicit */long long int) min((var_25), (((/* implicit */long long int) arr_30 [i_7]))));
        var_26 = ((/* implicit */unsigned int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) ^ (max((536870896ULL), (((/* implicit */unsigned long long int) -6319970511512866793LL)))))) != (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_32 [i_7 - 1] [i_7]))) / (2385921097214761782ULL)))));
    }
    var_27 = ((/* implicit */_Bool) ((16419800408342895726ULL) | (16419800408342895731ULL)));
}
