/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102644
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102644 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102644
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
    var_20 = ((/* implicit */int) ((((/* implicit */_Bool) (+(7LL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (((((/* implicit */_Bool) min((-2828885927757300086LL), (((/* implicit */long long int) var_15))))) ? (var_15) : (var_5)))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        var_21 = arr_1 [i_0];
        /* LoopSeq 3 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            arr_5 [i_1] = ((/* implicit */unsigned long long int) ((((((((/* implicit */_Bool) arr_2 [0U] [i_1] [6LL])) ? (var_10) : (((/* implicit */int) arr_3 [10ULL])))) - (((/* implicit */int) ((unsigned short) 10974533513903800452ULL))))) | (((/* implicit */int) ((_Bool) max((((/* implicit */long long int) arr_1 [i_0])), (var_7)))))));
            var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) max(((!((_Bool)1))), ((!(((/* implicit */_Bool) var_8)))))))));
            var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) 2629852733U))))), (((((/* implicit */_Bool) var_11)) ? (arr_1 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)32768)))))))) ? (((/* implicit */long long int) ((((/* implicit */int) var_3)) | (((/* implicit */int) var_1))))) : (((long long int) arr_2 [i_1 - 1] [i_1 - 1] [i_1 - 1])))))));
            var_24 = ((/* implicit */short) min((((/* implicit */long long int) min((arr_0 [(short)5] [(short)5]), (((/* implicit */unsigned int) ((arr_3 [(unsigned short)4]) && (var_13))))))), (((2828885927757300085LL) ^ (((/* implicit */long long int) ((/* implicit */int) (short)32766)))))));
            var_25 -= ((/* implicit */int) (!(((/* implicit */_Bool) 9223372036854775807LL))));
        }
        for (unsigned long long int i_2 = 0; i_2 < 25; i_2 += 2) /* same iter space */
        {
            var_26 = ((/* implicit */unsigned long long int) min((var_26), (((((/* implicit */_Bool) (~(min((arr_4 [i_0]), (((/* implicit */long long int) var_6))))))) ? (max((arr_2 [i_0] [i_2] [i_2]), (((/* implicit */unsigned long long int) var_18)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))));
            var_27 = ((/* implicit */unsigned long long int) var_14);
        }
        for (unsigned long long int i_3 = 0; i_3 < 25; i_3 += 2) /* same iter space */
        {
            var_28 = ((/* implicit */unsigned long long int) var_12);
            /* LoopNest 2 */
            for (unsigned long long int i_4 = 1; i_4 < 24; i_4 += 4) 
            {
                for (int i_5 = 0; i_5 < 25; i_5 += 4) 
                {
                    {
                        var_29 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) arr_9 [i_0])) ? (arr_9 [i_5]) : (arr_9 [i_0]))) : (((/* implicit */int) arr_14 [i_4] [i_3] [(unsigned char)17] [i_3] [(unsigned char)17] [i_4]))));
                        arr_16 [i_4] [i_3] [7ULL] [i_4 + 1] [i_5] = max((((((/* implicit */int) var_6)) ^ (arr_13 [i_4 + 1] [i_0]))), ((~(arr_13 [i_0] [i_5]))));
                    }
                } 
            } 
            arr_17 [i_0] [(unsigned short)8] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 13695049812153453276ULL)) && (((/* implicit */_Bool) 3914167370903626652ULL))));
            /* LoopSeq 2 */
            for (int i_6 = 2; i_6 < 24; i_6 += 4) 
            {
                /* LoopNest 2 */
                for (unsigned int i_7 = 3; i_7 < 24; i_7 += 3) 
                {
                    for (unsigned long long int i_8 = 0; i_8 < 25; i_8 += 2) 
                    {
                        {
                            var_30 = ((/* implicit */_Bool) ((min((((((/* implicit */_Bool) 7472210559805751181ULL)) || (((/* implicit */_Bool) -9223372036854775802LL)))), ((!(((/* implicit */_Bool) 603755582U)))))) ? (((unsigned int) arr_21 [i_6 - 2] [i_6 - 2] [i_6 - 2] [i_6 - 2])) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_21 [i_6 + 1] [i_6] [i_6 - 1] [i_6]))))))));
                            var_31 = (-(((((/* implicit */_Bool) 10086212678293479084ULL)) ? (3426524402U) : (1671235051U))));
                            var_32 = ((/* implicit */short) max((((((/* implicit */_Bool) (unsigned char)67)) ? (((/* implicit */long long int) ((/* implicit */int) arr_10 [14] [i_6 + 1] [i_7]))) : (-1LL))), (((/* implicit */long long int) arr_10 [(unsigned char)10] [i_6 + 1] [i_7]))));
                        }
                    } 
                } 
                var_33 ^= var_6;
            }
            for (short i_9 = 0; i_9 < 25; i_9 += 1) 
            {
                arr_29 [i_9] [i_3] [23ULL] [i_3] = ((/* implicit */unsigned long long int) ((long long int) ((_Bool) -2757078418959185465LL)));
                /* LoopNest 2 */
                for (unsigned char i_10 = 0; i_10 < 25; i_10 += 2) 
                {
                    for (unsigned int i_11 = 0; i_11 < 25; i_11 += 4) 
                    {
                        {
                            var_34 = ((/* implicit */unsigned long long int) (+((((+(4294967295U))) * (((/* implicit */unsigned int) (-(((/* implicit */int) var_6)))))))));
                            var_35 = ((/* implicit */unsigned short) min((var_35), (((/* implicit */unsigned short) arr_11 [i_0] [i_3] [11ULL]))));
                            arr_35 [i_9] [i_9] [i_9] [13U] = ((/* implicit */unsigned int) min(((-(arr_4 [i_9]))), (((/* implicit */long long int) ((unsigned short) arr_4 [i_9])))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                {
                    for (long long int i_13 = 0; i_13 < 25; i_13 += 4) 
                    {
                        {
                            var_36 = ((/* implicit */unsigned int) min((2828885927757300085LL), (((/* implicit */long long int) 4294967279U))));
                            var_37 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_40 [i_0] [i_12] [i_9] [24ULL] [i_0])) ? ((-(var_11))) : (((/* implicit */unsigned long long int) var_18))));
                            var_38 &= ((/* implicit */_Bool) -9223372036854775805LL);
                        }
                    } 
                } 
            }
        }
    }
    var_39 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) -1LL)) | (min((((/* implicit */unsigned long long int) 6292403874211615221LL)), (14532576702805924967ULL)))));
}
