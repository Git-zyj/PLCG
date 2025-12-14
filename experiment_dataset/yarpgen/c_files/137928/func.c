/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137928
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137928 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137928
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_17 = ((/* implicit */short) arr_1 [i_0] [i_0]);
        var_18 = ((/* implicit */signed char) ((arr_1 [i_0] [i_0]) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) arr_1 [(_Bool)1] [i_0]))));
    }
    for (signed char i_1 = 0; i_1 < 11; i_1 += 3) 
    {
        /* LoopSeq 1 */
        for (signed char i_2 = 2; i_2 < 8; i_2 += 4) 
        {
            var_19 = ((/* implicit */_Bool) (unsigned char)13);
            var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_13)) ? (((((arr_3 [3ULL]) << (((((/* implicit */int) arr_2 [i_1])) + (1006))))) | (((/* implicit */unsigned long long int) -9223372036854775798LL)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))));
        }
        arr_7 [i_1] [i_1] = ((/* implicit */short) max((((((/* implicit */_Bool) 9223372036854775775LL)) ? (7865290696168265354ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)2))))), (((((/* implicit */_Bool) (unsigned char)2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)3))) : (11715900966192245735ULL)))));
    }
    for (unsigned long long int i_3 = 0; i_3 < 23; i_3 += 3) 
    {
        arr_10 [i_3] [i_3] = ((/* implicit */unsigned long long int) max((1737708234U), (((/* implicit */unsigned int) (unsigned char)213))));
        var_21 = ((/* implicit */unsigned long long int) max((-9223372036854775798LL), (((/* implicit */long long int) var_6))));
        var_22 = ((/* implicit */unsigned short) ((unsigned long long int) (+(9223372036854775797LL))));
        var_23 = ((/* implicit */long long int) var_16);
        var_24 |= ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_9 [i_3] [i_3])) : (((/* implicit */int) arr_9 [i_3] [i_3]))))), (max((((/* implicit */unsigned long long int) var_13)), (18446744073709551615ULL)))));
    }
    /* LoopSeq 2 */
    for (unsigned int i_4 = 0; i_4 < 13; i_4 += 3) 
    {
        arr_13 [i_4] = ((/* implicit */long long int) ((int) (unsigned short)52639));
        var_25 = ((/* implicit */short) arr_8 [(signed char)22]);
        /* LoopSeq 3 */
        for (signed char i_5 = 0; i_5 < 13; i_5 += 1) 
        {
            arr_18 [i_4] [i_5] [i_5] = ((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)9))));
            var_26 = ((/* implicit */unsigned int) (_Bool)1);
        }
        for (unsigned long long int i_6 = 1; i_6 < 11; i_6 += 3) 
        {
            var_27 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_5)), (3746383266380236873LL)))) ^ (((6730843107517305880ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))) ? (((/* implicit */int) arr_9 [i_6] [i_4])) : ((~(((((/* implicit */_Bool) 3746383266380236873LL)) ? (-531739956) : (-531739940)))))));
            arr_22 [i_4] [i_6 + 1] = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)-6041)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)248))) : (4294967295U)));
        }
        for (unsigned int i_7 = 0; i_7 < 13; i_7 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned int i_8 = 2; i_8 < 12; i_8 += 4) 
            {
                for (short i_9 = 0; i_9 < 13; i_9 += 1) 
                {
                    {
                        arr_31 [i_7] [i_7] = max((((/* implicit */unsigned long long int) var_6)), (max((((/* implicit */unsigned long long int) (unsigned char)68)), (var_2))));
                        var_28 *= ((/* implicit */signed char) max((arr_11 [i_4]), (((/* implicit */int) ((((/* implicit */int) var_11)) <= ((((_Bool)1) ? (((/* implicit */int) (unsigned short)46362)) : (((/* implicit */int) (signed char)-2)))))))));
                        var_29 = ((/* implicit */unsigned short) arr_15 [1LL] [i_7] [i_7]);
                    }
                } 
            } 
            arr_32 [i_4] [i_7] [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)15))) : (-3746383266380236892LL)))))))) == ((~(arr_12 [i_7] [i_7])))));
            var_30 = ((/* implicit */short) ((arr_12 [(signed char)4] [(_Bool)1]) * (((/* implicit */unsigned int) ((/* implicit */int) arr_30 [i_4] [i_4] [i_4] [i_4] [i_7] [i_7])))));
        }
    }
    for (int i_10 = 2; i_10 < 12; i_10 += 1) 
    {
        var_31 = ((/* implicit */unsigned short) 11715900966192245726ULL);
        var_32 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_19 [i_10 - 2] [i_10]))))) ? (((/* implicit */int) max(((unsigned short)63333), (((/* implicit */unsigned short) (short)15872))))) : (((((/* implicit */int) (signed char)7)) ^ (((/* implicit */int) (short)9250))))));
        var_33 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */long long int) -700611782)) | (3746383266380236873LL)))), (((((/* implicit */_Bool) 3746383266380236883LL)) ? (((/* implicit */unsigned long long int) 3746383266380236883LL)) : (11715900966192245726ULL)))))) ? (((((/* implicit */_Bool) -3746383266380236867LL)) ? (6730843107517305871ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)152))))) : (max((((/* implicit */unsigned long long int) max((arr_34 [i_10]), (4854398678847794195LL)))), (var_7)))));
        var_34 = ((/* implicit */unsigned long long int) ((_Bool) ((unsigned short) var_6)));
    }
}
