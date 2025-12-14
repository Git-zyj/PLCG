/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174284
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174284 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174284
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
    var_12 = ((/* implicit */unsigned short) var_11);
    /* LoopSeq 4 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 1) /* same iter space */
    {
        var_13 = (!(((/* implicit */_Bool) max((arr_1 [(signed char)1]), (((/* implicit */long long int) 1586245958))))));
        var_14 = ((/* implicit */int) max((var_14), (((/* implicit */int) var_9))));
        var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) (signed char)92))));
        arr_3 [(signed char)19] |= ((/* implicit */short) arr_0 [i_0]);
        arr_4 [i_0] = ((/* implicit */unsigned char) 2041468829);
    }
    for (unsigned int i_1 = 0; i_1 < 24; i_1 += 1) /* same iter space */
    {
        var_16 = ((/* implicit */_Bool) max((var_16), (((arr_2 [i_1] [i_1]) >= (((long long int) (_Bool)0))))));
        var_17 += ((/* implicit */unsigned int) 281474842492928LL);
        var_18 = ((/* implicit */long long int) 2590165174U);
    }
    for (unsigned int i_2 = 0; i_2 < 24; i_2 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned int i_3 = 0; i_3 < 24; i_3 += 4) 
        {
            for (unsigned short i_4 = 0; i_4 < 24; i_4 += 2) 
            {
                for (signed char i_5 = 0; i_5 < 24; i_5 += 3) 
                {
                    {
                        /* LoopSeq 3 */
                        for (int i_6 = 4; i_6 < 22; i_6 += 2) /* same iter space */
                        {
                            arr_23 [i_4] [(unsigned short)3] [i_4] [i_2] [i_6] [i_2] = (~(min((-779801006), (((/* implicit */int) (short)-3154)))));
                            var_19 = (((!(((/* implicit */_Bool) arr_18 [i_5] [i_6 + 2] [i_6 - 4] [i_6 + 1] [(unsigned char)9])))) ? (((((/* implicit */_Bool) 3014437148145902241LL)) ? (arr_1 [i_6 + 1]) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_6 [i_2] [(signed char)15])) > (arr_14 [i_2] [i_3] [15]))))))) : (((/* implicit */long long int) ((/* implicit */int) arr_22 [(unsigned char)1] [i_3] [i_2]))));
                            var_20 = ((/* implicit */int) arr_5 [i_2]);
                            arr_24 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */long long int) (((~(((int) (unsigned char)238)))) <= (((((/* implicit */_Bool) arr_0 [i_2])) ? (((/* implicit */int) (signed char)45)) : (((/* implicit */int) arr_12 [i_2] [i_2] [i_2]))))));
                        }
                        for (int i_7 = 4; i_7 < 22; i_7 += 2) /* same iter space */
                        {
                            arr_28 [i_2] [11] [i_2] [i_2] = ((/* implicit */int) var_7);
                            arr_29 [17LL] [17LL] [i_4] [i_2] [i_7 + 1] [i_4] [i_2] = max((min((5903305488016781029LL), (((/* implicit */long long int) arr_18 [i_7 + 2] [i_7 + 2] [i_7 - 3] [i_7 - 1] [i_5])))), (((/* implicit */long long int) var_6)));
                            var_21 = ((/* implicit */unsigned short) (~((~(-2041468828)))));
                        }
                        for (int i_8 = 4; i_8 < 22; i_8 += 2) /* same iter space */
                        {
                            var_22 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) arr_32 [i_2] [i_8 + 2] [i_2] [i_8 + 2] [i_8]))) > (((((/* implicit */long long int) ((/* implicit */int) arr_32 [i_8 - 4] [i_8 + 2] [i_2] [15U] [i_8 + 2]))) / (-5903305488016781029LL)))));
                            var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (arr_25 [i_2] [i_3] [i_4] [i_5] [(unsigned char)8] [i_5]) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))), (arr_9 [i_2])))) ? (((/* implicit */long long int) ((/* implicit */int) ((var_8) == (((/* implicit */long long int) arr_11 [i_8] [i_8 + 1])))))) : (arr_20 [3U] [i_8 + 2] [i_8] [i_2])));
                        }
                        var_24 = ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */long long int) arr_22 [i_2] [i_2] [i_2])), (min((((/* implicit */long long int) (unsigned char)13)), (5903305488016781029LL))))))));
                    }
                } 
            } 
        } 
        var_25 = ((/* implicit */long long int) max((var_25), (max((((((/* implicit */_Bool) (-(arr_30 [i_2] [i_2] [i_2] [i_2] [i_2])))) ? (-1626585243967698369LL) : (((/* implicit */long long int) (~(((/* implicit */int) arr_33 [i_2] [i_2] [20U] [i_2] [i_2] [i_2]))))))), (((((/* implicit */_Bool) arr_17 [i_2] [i_2] [i_2])) ? (arr_26 [i_2] [i_2] [i_2] [i_2] [i_2]) : (arr_17 [i_2] [(signed char)1] [i_2])))))));
    }
    for (unsigned int i_9 = 0; i_9 < 24; i_9 += 1) /* same iter space */
    {
        var_26 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) ((var_11) & (((/* implicit */long long int) ((/* implicit */int) arr_10 [(signed char)13] [i_9] [i_9])))))) ? (((/* implicit */unsigned int) (~(-27737732)))) : ((~(arr_25 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9])))))));
        var_27 = ((/* implicit */int) (!(((/* implicit */_Bool) (~(((((/* implicit */int) (unsigned char)227)) + (((/* implicit */int) var_4)))))))));
    }
}
