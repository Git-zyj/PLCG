/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149332
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149332 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149332
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
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                var_10 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)8064)) + (((/* implicit */int) (unsigned char)255))))) ? (((/* implicit */int) (unsigned short)23733)) : (((/* implicit */int) (unsigned char)0))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (var_2) : (var_2)))) ? (arr_0 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) -1126608416)))))))) : (((/* implicit */unsigned int) (-(((((/* implicit */int) (unsigned char)198)) ^ (((/* implicit */int) arr_4 [i_0] [(signed char)9] [i_0])))))))));
                arr_5 [i_0] [i_0] [i_0] = min(((unsigned char)230), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_0])) << (((((/* implicit */int) (unsigned char)71)) - (60))))))))));
                arr_6 [i_0] [i_1] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((long long int) arr_4 [i_0] [i_1] [i_1]))) ? ((+(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (unsigned char)9))));
                /* LoopSeq 1 */
                for (unsigned int i_2 = 2; i_2 < 9; i_2 += 1) 
                {
                    arr_11 [i_0] [i_1] [i_2 - 1] = ((/* implicit */int) (unsigned short)3754);
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned int i_3 = 0; i_3 < 10; i_3 += 3) 
                    {
                        arr_14 [(unsigned short)2] [i_1] [(unsigned short)6] |= ((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned short)61781))));
                        arr_15 [i_3] [i_3] [i_3] [i_3] = ((/* implicit */unsigned int) ((int) (unsigned char)208));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_4 = 0; i_4 < 10; i_4 += 4) 
                        {
                            arr_19 [i_3] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)8063))) & (((long long int) var_0))));
                            arr_20 [i_3] [i_1] [i_2] [i_3] [i_4] [(unsigned char)6] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) arr_10 [i_2] [i_2] [i_2 - 2])) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)58)) ? (arr_0 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)184))))))));
                            var_11 = ((/* implicit */long long int) max((var_11), (((/* implicit */long long int) (unsigned char)214))));
                            var_12 ^= ((((/* implicit */_Bool) arr_17 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) (unsigned char)207)) : (((/* implicit */int) arr_17 [i_0] [i_1] [i_2] [i_3] [i_4] [i_4] [i_3])));
                        }
                    }
                    for (unsigned long long int i_5 = 0; i_5 < 10; i_5 += 4) 
                    {
                        arr_23 [i_0] [i_1] [i_0] [i_2] [i_5] = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(arr_0 [i_2 - 1])))) || (((/* implicit */_Bool) min(((unsigned short)57473), (arr_17 [i_2 - 1] [i_2] [i_2 - 1] [i_2 - 2] [i_2] [i_2 - 1] [i_2]))))));
                        var_13 = ((/* implicit */unsigned short) 8796093022207ULL);
                    }
                    for (int i_6 = 0; i_6 < 10; i_6 += 3) 
                    {
                        var_14 = ((/* implicit */long long int) var_9);
                        var_15 = ((((/* implicit */_Bool) (+(var_7)))) ? (min((((/* implicit */long long int) arr_13 [i_2 - 2] [i_6] [i_6] [i_6] [i_6] [i_6])), (8LL))) : (((/* implicit */long long int) (((-(var_6))) / (((/* implicit */int) (unsigned short)60989))))));
                        /* LoopSeq 3 */
                        for (unsigned char i_7 = 0; i_7 < 10; i_7 += 4) /* same iter space */
                        {
                            arr_31 [i_0] = ((/* implicit */int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_8 [i_0] [i_1] [i_2] [i_6])) : (((/* implicit */int) var_3))))) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) max(((unsigned short)37147), (((/* implicit */unsigned short) (unsigned char)51)))))))) < (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)34830)))));
                            var_16 += ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 9223372036854775552LL))));
                            var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)36692)) ? (((/* implicit */int) (unsigned short)65527)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned short)28371)) < (((/* implicit */int) (unsigned short)36667))))) : (((/* implicit */int) min(((unsigned short)28404), ((unsigned short)4546))))))) ? (var_0) : (((/* implicit */long long int) ((((((/* implicit */_Bool) (unsigned short)37132)) ? (((/* implicit */int) arr_1 [i_2])) : (((/* implicit */int) (unsigned char)28)))) >> (((((unsigned int) var_8)) - (2558941184U))))))));
                        }
                        /* vectorizable */
                        for (unsigned char i_8 = 0; i_8 < 10; i_8 += 4) /* same iter space */
                        {
                            var_18 = ((/* implicit */int) ((((/* implicit */_Bool) arr_34 [i_0] [i_1] [i_1] [i_1] [i_2 - 2] [i_6] [i_8])) ? (var_1) : (arr_34 [i_0] [i_1] [i_1] [i_6] [i_1] [i_8] [i_2])));
                            arr_35 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_21 [i_2 + 1] [i_2 + 1] [i_2] [i_6]))));
                            arr_36 [i_0] [i_1] [i_2] [i_6] [(unsigned short)5] [i_6] = ((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned short)28390))));
                            var_19 = ((/* implicit */_Bool) (-(-1)));
                        }
                        for (unsigned char i_9 = 0; i_9 < 10; i_9 += 4) /* same iter space */
                        {
                            arr_39 [i_6] [i_6] [i_6] [i_6] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_16 [i_0])) % (((/* implicit */int) ((((/* implicit */_Bool) arr_28 [i_2 + 1] [i_2 + 1] [i_2 - 1])) || (((/* implicit */_Bool) arr_28 [i_2 - 2] [i_2 - 2] [i_2 + 1])))))));
                            var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) >= (2147483647)));
                            arr_40 [(unsigned short)0] [i_1] [i_2] = ((/* implicit */long long int) (-(((((/* implicit */_Bool) arr_27 [i_0] [i_1] [i_2] [i_2 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0))) : (2441279387U)))));
                        }
                    }
                }
            }
        } 
    } 
    var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) min((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (signed char)73)) : (var_6))), (var_6))))));
    var_22 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) 511729143154695398ULL)))) | (((((/* implicit */_Bool) (unsigned char)218)) ? (((((/* implicit */_Bool) var_9)) ? (var_1) : (((/* implicit */long long int) var_7)))) : (((/* implicit */long long int) ((3327118862U) & (((/* implicit */unsigned int) var_7)))))))));
}
