/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175518
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175518 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175518
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
    var_11 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_8)) ? (-2781026045192883616LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            {
                var_12 = ((/* implicit */unsigned int) arr_5 [2LL] [1LL] [(unsigned char)0]);
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 20; i_2 += 3) 
                {
                    for (signed char i_3 = 0; i_3 < 20; i_3 += 2) 
                    {
                        {
                            var_13 = ((/* implicit */_Bool) ((unsigned char) (!(((/* implicit */_Bool) ((int) arr_2 [i_0]))))));
                            var_14 = ((/* implicit */signed char) max((var_14), (((/* implicit */signed char) ((1218665497U) / (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))));
                            arr_13 [i_0] [i_1] [i_1] [(short)12] = ((/* implicit */signed char) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)29741)) ? (2781026045192883615LL) : (((/* implicit */long long int) ((/* implicit */int) (short)64)))))) ? (((((/* implicit */_Bool) 2147483638)) ? (3948569792390981752LL) : (-2781026045192883628LL))) : (var_9)))));
                            /* LoopSeq 4 */
                            /* vectorizable */
                            for (unsigned long long int i_4 = 0; i_4 < 20; i_4 += 1) /* same iter space */
                            {
                                var_15 = ((/* implicit */unsigned long long int) var_2);
                                var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) ((unsigned short) arr_2 [i_0])))));
                                var_17 *= ((/* implicit */short) var_8);
                                arr_18 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned char) arr_11 [i_0] [i_0] [i_0] [i_0] [i_0]))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_17 [i_0] [i_1] [i_2] [(signed char)4] [i_4] [i_4]))));
                            }
                            for (unsigned long long int i_5 = 0; i_5 < 20; i_5 += 1) /* same iter space */
                            {
                                var_18 += ((/* implicit */short) arr_10 [i_0] [i_1] [i_2] [i_2] [12LL] [i_2]);
                                var_19 += arr_4 [i_5] [i_5];
                            }
                            for (unsigned long long int i_6 = 0; i_6 < 20; i_6 += 1) /* same iter space */
                            {
                                arr_24 [i_0] [10LL] = ((/* implicit */int) var_6);
                                var_20 += ((/* implicit */unsigned char) (((((~(((/* implicit */int) (short)30763)))) + (2147483647))) << (((2147483640) - (2147483640)))));
                            }
                            for (unsigned long long int i_7 = 0; i_7 < 20; i_7 += 1) /* same iter space */
                            {
                                arr_28 [i_0] [i_0] [i_2] [i_3] [i_0] [i_7] = ((/* implicit */short) (~(((((/* implicit */_Bool) 18014398509481984LL)) ? (arr_15 [i_2] [(short)9] [19]) : (((/* implicit */int) (signed char)-15))))));
                                var_21 = ((/* implicit */unsigned int) var_1);
                            }
                        }
                    } 
                } 
                var_22 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (short)-2887)), (805306368U)));
                /* LoopNest 2 */
                for (unsigned long long int i_8 = 0; i_8 < 20; i_8 += 1) 
                {
                    for (unsigned long long int i_9 = 4; i_9 < 19; i_9 += 3) 
                    {
                        {
                            var_23 &= ((/* implicit */unsigned char) max((((/* implicit */short) (((~(arr_23 [i_8] [(signed char)4] [i_8] [i_8] [0] [i_1]))) < (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_34 [i_1])) : (((/* implicit */int) arr_34 [(unsigned short)16])))))))), (arr_5 [(unsigned char)6] [(unsigned char)6] [i_9 - 2])));
                            var_24 = ((/* implicit */short) max((-1LL), (((/* implicit */long long int) 2066478382))));
                            arr_35 [6ULL] = ((/* implicit */unsigned long long int) (-(((arr_21 [i_9] [i_1] [i_1] [i_0]) + (((((/* implicit */_Bool) 3489660910U)) ? (-6754353223335909229LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)27)))))))));
                            arr_36 [(unsigned short)3] [i_1] [(unsigned short)3] [i_1] = ((/* implicit */short) ((int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_0] [(unsigned char)15] [i_8] [i_9 + 1] [(unsigned char)15]))) ^ ((~(arr_0 [i_8] [(short)9]))))));
                            arr_37 [i_0] [8LL] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_9 [i_0] [i_8] [i_1] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_9 - 4] [i_9] [i_9 - 3])))))) : (max((var_8), (((/* implicit */long long int) (!((_Bool)1))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_25 = (~(((/* implicit */int) (signed char)124)));
}
