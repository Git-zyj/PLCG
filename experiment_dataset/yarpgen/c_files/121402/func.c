/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121402
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121402 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121402
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
    var_19 = ((/* implicit */_Bool) var_18);
    var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) (-(min((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned char)13)) : (((/* implicit */int) var_10)))), (max((((/* implicit */int) var_16)), (var_15))))))))));
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] [i_0] = ((/* implicit */short) min((((/* implicit */long long int) (unsigned char)13)), (max((arr_1 [i_0]), (arr_1 [i_0])))));
        var_21 = ((/* implicit */short) max((((/* implicit */unsigned long long int) arr_0 [i_0])), ((~(var_7)))));
        var_22 = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((arr_2 [i_0]) != (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))))) >= (((/* implicit */int) min(((unsigned char)242), ((unsigned char)243))))));
        arr_4 [i_0] = ((/* implicit */_Bool) min((max((max((((/* implicit */unsigned int) var_5)), (arr_2 [i_0]))), (((/* implicit */unsigned int) ((_Bool) var_15))))), (((((/* implicit */_Bool) (unsigned char)14)) ? (arr_2 [i_0]) : (((/* implicit */unsigned int) (+(((/* implicit */int) var_12)))))))));
        /* LoopNest 3 */
        for (signed char i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 22; i_2 += 1) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 22; i_3 += 2) 
                {
                    {
                        arr_14 [i_0] [i_1] [i_2] [i_3] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [(signed char)16] [i_3] [i_3] [i_3])) ? (max((2284899598U), (((/* implicit */unsigned int) var_8)))) : (((/* implicit */unsigned int) min((var_15), (((/* implicit */int) arr_9 [i_0] [i_1] [i_2] [17ULL])))))))) ? (((/* implicit */int) ((((((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (var_6))) == (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_0 [i_3]))))))) : ((~(((/* implicit */int) (_Bool)1))))));
                        var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) 2010067671U)) ? (((/* implicit */int) (short)-4714)) : (((/* implicit */int) (short)-4687))));
                        var_24 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (signed char)-5))));
                        var_25 = ((/* implicit */unsigned short) ((signed char) ((unsigned long long int) ((signed char) 4ULL))));
                    }
                } 
            } 
        } 
    }
    for (unsigned char i_4 = 0; i_4 < 22; i_4 += 1) /* same iter space */
    {
        var_26 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) (short)-26343)) || (((/* implicit */_Bool) arr_8 [(_Bool)1] [i_4] [(signed char)14]))));
        /* LoopNest 2 */
        for (unsigned char i_5 = 2; i_5 < 19; i_5 += 4) 
        {
            for (unsigned char i_6 = 0; i_6 < 22; i_6 += 4) 
            {
                {
                    var_27 |= ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) var_11)), (3522035562639970689ULL)));
                    arr_21 [i_4] [i_5 + 2] [(signed char)5] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) ((short) min((arr_12 [i_5] [i_5] [i_5 - 2] [i_5 - 1]), (var_18)))))) - (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)82)) ? (((/* implicit */int) arr_10 [i_4] [i_5] [1LL])) : (((/* implicit */int) var_18))))) ? (((/* implicit */long long int) arr_13 [i_4] [i_4] [21ULL] [i_4])) : (max((((/* implicit */long long int) arr_19 [i_4] [(signed char)10] [i_4])), (arr_0 [i_4])))))));
                }
            } 
        } 
        var_28 = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)2048)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)16132))) : (((unsigned int) arr_18 [(signed char)14]))));
        /* LoopNest 2 */
        for (unsigned char i_7 = 0; i_7 < 22; i_7 += 3) 
        {
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                {
                    var_29 = ((/* implicit */unsigned char) max((var_29), (((/* implicit */unsigned char) var_6))));
                    var_30 = (!(((/* implicit */_Bool) (signed char)-82)));
                }
            } 
        } 
        var_31 = ((/* implicit */signed char) max((((/* implicit */int) ((signed char) ((((/* implicit */_Bool) 7591270563736957761ULL)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (short)-14389)))))), (((var_15) - (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_25 [i_4] [19U]))) == (3U))))))));
    }
    /* vectorizable */
    for (unsigned char i_9 = 0; i_9 < 22; i_9 += 1) /* same iter space */
    {
        var_32 = ((/* implicit */short) ((((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) (short)-14337)))) ? (((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) var_4)))) : (((/* implicit */int) ((signed char) var_15)))));
        /* LoopNest 2 */
        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
        {
            for (int i_11 = 0; i_11 < 22; i_11 += 1) 
            {
                {
                    var_33 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) (short)6678)) ? (((/* implicit */unsigned int) var_5)) : (2010067671U))) + (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_36 [(_Bool)1] [i_9])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_12)))))));
                    arr_38 [i_11] [i_10] [15] = ((/* implicit */int) arr_37 [(short)7] [20ULL] [i_10] [i_10]);
                }
            } 
        } 
    }
}
