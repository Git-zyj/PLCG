/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102123
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102123 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102123
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
    var_12 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) ((((/* implicit */int) var_10)) / (((/* implicit */int) var_8))))) ? (((((/* implicit */int) var_3)) * (((/* implicit */int) (signed char)127)))) : ((-(((/* implicit */int) (signed char)23)))))), ((~(((/* implicit */int) ((((/* implicit */_Bool) 2479977633U)) || ((_Bool)1))))))));
    var_13 = ((/* implicit */short) ((_Bool) (!(((/* implicit */_Bool) var_6)))));
    var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_5)) & (((/* implicit */int) max((((unsigned char) var_6)), (((/* implicit */unsigned char) (_Bool)1)))))));
    /* LoopSeq 4 */
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) (!(((_Bool) arr_1 [i_0] [(signed char)6])))))));
        var_16 ^= ((/* implicit */unsigned int) (~((~(((/* implicit */int) arr_1 [i_0] [i_0]))))));
        arr_2 [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_1 [i_0] [i_0])))) ^ (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0])))))));
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            var_17 = ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) ((signed char) (+(2479977633U))))) : (((/* implicit */int) ((signed char) 2479977633U)))));
            var_18 = ((/* implicit */_Bool) min((var_18), ((!(((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) arr_0 [i_0])) || (((/* implicit */_Bool) arr_0 [i_0]))))))))));
        }
        /* vectorizable */
        for (long long int i_2 = 0; i_2 < 12; i_2 += 4) 
        {
            arr_8 [i_0] = ((/* implicit */_Bool) (((-(((/* implicit */int) arr_5 [i_2])))) + (((/* implicit */int) (_Bool)0))));
            var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_1 [i_2] [i_0])))))));
            var_20 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_4 [i_2])) && (((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1)))))));
        }
    }
    /* vectorizable */
    for (long long int i_3 = 4; i_3 < 20; i_3 += 3) /* same iter space */
    {
        /* LoopSeq 1 */
        for (int i_4 = 2; i_4 < 21; i_4 += 2) 
        {
            arr_15 [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_3 - 2] [i_3])) || (((/* implicit */_Bool) arr_11 [i_3 - 2] [i_3]))));
            /* LoopNest 2 */
            for (unsigned char i_5 = 0; i_5 < 23; i_5 += 3) 
            {
                for (unsigned int i_6 = 0; i_6 < 23; i_6 += 3) 
                {
                    {
                        arr_22 [i_3] [i_3] = ((/* implicit */unsigned int) arr_21 [i_3] [i_4] [i_4] [i_5] [i_6] [i_6]);
                        arr_23 [i_3] [15] [i_3] [i_3] [1ULL] [i_6] = ((/* implicit */unsigned long long int) var_8);
                        arr_24 [i_3 + 1] [i_3] [i_4] [i_6] = (!(((/* implicit */_Bool) 6136996643112122980LL)));
                        arr_25 [i_3] [(signed char)15] [(signed char)19] [i_3] = arr_18 [i_3 - 1] [i_3 - 4] [i_6];
                    }
                } 
            } 
            var_21 = (+(((/* implicit */int) arr_10 [i_3])));
        }
        var_22 = ((/* implicit */_Bool) ((arr_18 [i_3] [0] [(unsigned char)20]) | (((/* implicit */int) var_11))));
    }
    for (long long int i_7 = 4; i_7 < 20; i_7 += 3) /* same iter space */
    {
        var_23 ^= ((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_7] [i_7] [8]))));
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 23; i_8 += 2) 
        {
            for (int i_9 = 0; i_9 < 23; i_9 += 1) 
            {
                {
                    var_24 ^= ((/* implicit */_Bool) 548298357);
                    var_25 = ((/* implicit */unsigned int) min((var_25), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 0LL)) && (((/* implicit */_Bool) 4294967295U)))))) - (min((((/* implicit */unsigned long long int) (_Bool)1)), (min((((/* implicit */unsigned long long int) arr_10 [i_8])), (var_1))))))))));
                    var_26 = ((/* implicit */_Bool) min((var_26), (((/* implicit */_Bool) var_6))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned long long int i_10 = 0; i_10 < 23; i_10 += 3) 
                    {
                        arr_36 [i_7] [i_7] [i_9] [i_10] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_34 [i_7 - 2])) && (((/* implicit */_Bool) (-(arr_21 [i_7] [i_7] [i_8] [i_8] [i_8] [i_10]))))));
                        arr_37 [i_7] [i_10] [i_9] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_2))));
                        var_27 = ((/* implicit */unsigned short) arr_31 [i_7 + 1] [i_8] [i_9] [(short)0]);
                        arr_38 [i_7] [i_10] [i_7] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)35397))));
                    }
                    /* vectorizable */
                    for (signed char i_11 = 0; i_11 < 23; i_11 += 3) 
                    {
                        arr_42 [i_7] [i_8] [i_8] [i_11] [i_11] = ((/* implicit */int) (((_Bool)1) ? (arr_12 [i_11] [i_8] [i_11]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)63)))));
                        /* LoopSeq 1 */
                        for (short i_12 = 3; i_12 < 20; i_12 += 4) 
                        {
                            arr_46 [i_8] [i_11] [i_11] = ((/* implicit */unsigned short) var_10);
                            var_28 = ((/* implicit */unsigned char) min((var_28), (((/* implicit */unsigned char) ((((/* implicit */_Bool) 1887979492U)) ? (((/* implicit */long long int) -1842905723)) : (1330558353935125286LL))))));
                        }
                        arr_47 [i_11] [i_9] [i_11] = ((/* implicit */int) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) (unsigned short)30131))));
                        arr_48 [i_11] [i_8] [i_9] [i_11] = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) arr_21 [i_7 + 1] [i_8] [i_7 - 3] [17U] [i_9] [i_8])))) && (((/* implicit */_Bool) arr_27 [0ULL] [i_9]))));
                    }
                }
            } 
        } 
    }
    for (long long int i_13 = 4; i_13 < 20; i_13 += 3) /* same iter space */
    {
        var_29 ^= ((/* implicit */unsigned short) var_11);
        arr_52 [i_13] = ((/* implicit */unsigned short) min((((/* implicit */long long int) (+(((/* implicit */int) max(((unsigned short)52070), (((/* implicit */unsigned short) arr_16 [8LL] [i_13 + 1])))))))), (arr_9 [i_13])));
        var_30 = arr_20 [i_13] [i_13] [(signed char)10] [i_13] [i_13];
    }
}
