/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177811
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177811 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177811
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
    var_14 = ((/* implicit */long long int) min((((unsigned short) var_5)), (((/* implicit */unsigned short) ((signed char) (!(((/* implicit */_Bool) var_6))))))));
    var_15 *= ((/* implicit */short) var_8);
    var_16 -= ((/* implicit */_Bool) ((((var_0) + (9223372036854775807LL))) << (((((((/* implicit */int) (signed char)-58)) + (80))) - (22)))));
    var_17 = ((/* implicit */unsigned int) var_1);
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 2) /* same iter space */
        {
            var_18 -= ((/* implicit */unsigned char) ((int) arr_3 [i_0] [i_0] [i_0]));
            /* LoopSeq 3 */
            for (signed char i_2 = 0; i_2 < 18; i_2 += 2) 
            {
                /* LoopNest 2 */
                for (signed char i_3 = 3; i_3 < 17; i_3 += 1) 
                {
                    for (signed char i_4 = 0; i_4 < 18; i_4 += 1) 
                    {
                        {
                            arr_15 [i_0] [(short)2] [i_0] [(short)2] [(_Bool)1] = ((/* implicit */signed char) ((unsigned short) (unsigned char)215));
                            arr_16 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_7 [i_4] [i_1] [i_1] [i_0])) && (((/* implicit */_Bool) 3153695308594342882LL))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_5 = 2; i_5 < 17; i_5 += 1) 
                {
                    for (signed char i_6 = 1; i_6 < 17; i_6 += 1) 
                    {
                        {
                            arr_22 [i_6] [i_6] [i_2] [7] [i_6] [i_0] = ((/* implicit */unsigned char) ((arr_14 [i_6 + 1] [i_6 + 1] [i_6] [i_6 + 1] [i_6] [i_6 + 1]) & (arr_14 [i_6 - 1] [i_6] [i_6 - 1] [i_6] [i_6] [i_6])));
                            arr_23 [i_0] [i_0] [i_2] [i_6] [i_6 - 1] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)113))) < (((arr_13 [(unsigned short)1] [i_1] [i_2] [i_5] [(unsigned short)1] [i_2]) % (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-21)))))));
                            var_19 ^= ((/* implicit */int) arr_8 [i_0] [i_0] [i_0]);
                            arr_24 [i_0] [i_6] [i_1] [i_1] [i_2] [i_2] [i_6 - 1] = ((/* implicit */signed char) arr_9 [i_6 - 1] [i_6 + 1] [i_6 - 1] [i_6 - 1]);
                        }
                    } 
                } 
                var_20 *= ((/* implicit */unsigned char) arr_14 [i_0] [(unsigned char)0] [i_2] [i_0] [i_0] [i_0]);
                var_21 ^= ((/* implicit */signed char) ((_Bool) arr_19 [i_0] [(signed char)1] [4U] [i_0] [(signed char)1]));
            }
            for (int i_7 = 1; i_7 < 14; i_7 += 2) /* same iter space */
            {
                arr_27 [(unsigned char)4] = ((/* implicit */int) arr_4 [i_7 - 1] [i_7 + 4]);
                var_22 *= arr_19 [i_0] [i_0] [i_0] [i_0] [(unsigned short)4];
                arr_28 [i_0] [i_1] [i_7] &= ((/* implicit */unsigned char) ((((/* implicit */int) (signed char)26)) == (((/* implicit */int) (signed char)21))));
            }
            for (int i_8 = 1; i_8 < 14; i_8 += 2) /* same iter space */
            {
                var_23 *= ((/* implicit */unsigned char) arr_30 [i_8 + 2]);
                var_24 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_8 + 4] [i_8 + 4]))) ^ (var_11)));
                arr_31 [i_0] [i_1] [i_1] &= ((/* implicit */short) ((arr_7 [i_8 + 1] [i_1] [i_0] [i_0]) & (((/* implicit */unsigned int) ((/* implicit */int) var_7)))));
                var_25 &= ((/* implicit */unsigned char) arr_11 [i_0] [i_0] [i_0] [i_0]);
            }
            arr_32 [8ULL] &= ((/* implicit */int) ((signed char) arr_5 [i_0] [(unsigned char)1]));
            arr_33 [10LL] [(signed char)3] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-29))) * (arr_9 [i_1] [i_1] [i_0] [(unsigned char)8])));
            var_26 *= ((/* implicit */short) arr_18 [i_1] [i_1] [i_1] [i_1] [i_0] [i_0]);
        }
        for (unsigned long long int i_9 = 0; i_9 < 18; i_9 += 2) /* same iter space */
        {
            arr_37 [(short)4] [(unsigned short)8] [i_9] |= ((/* implicit */signed char) ((unsigned long long int) arr_8 [i_0] [i_9] [i_0]));
            arr_38 [i_0] [i_9] = ((/* implicit */unsigned long long int) (unsigned char)185);
            arr_39 [i_0] = ((/* implicit */short) ((signed char) ((((/* implicit */_Bool) (signed char)-29)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-32))) : (2109626007842065754LL))));
            var_27 |= ((/* implicit */unsigned char) (+(arr_11 [i_0] [i_0] [i_0] [i_9])));
        }
        var_28 -= ((/* implicit */long long int) -364152626);
        var_29 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) -2109626007842065754LL)) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) ((var_0) != (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0] [i_0] [(signed char)14]))))))));
        var_30 *= ((/* implicit */unsigned char) ((short) ((((/* implicit */_Bool) arr_4 [i_0] [(unsigned short)17])) ? (arr_14 [i_0] [i_0] [i_0] [(signed char)10] [(signed char)10] [i_0]) : (((/* implicit */int) (unsigned char)65)))));
    }
    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
    {
        arr_43 [i_10] = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */signed char) ((((/* implicit */int) var_8)) != (((/* implicit */int) arr_42 [i_10]))))), ((signed char)28)))) ? (((/* implicit */int) ((min((11912404763011132543ULL), (((/* implicit */unsigned long long int) (unsigned char)166)))) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))) : (((int) ((((/* implicit */int) (unsigned char)70)) * (((/* implicit */int) arr_42 [i_10])))))));
        arr_44 [i_10] = ((/* implicit */unsigned char) min((((((/* implicit */int) arr_42 [i_10])) - (((/* implicit */int) arr_41 [i_10] [i_10])))), (((/* implicit */int) min((arr_41 [i_10] [i_10]), (((/* implicit */short) ((((/* implicit */_Bool) arr_40 [i_10] [5ULL])) || (((/* implicit */_Bool) -3890764203138376957LL))))))))));
    }
}
