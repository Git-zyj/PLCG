/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167896
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167896 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167896
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned char) (~(((/* implicit */int) ((var_4) <= (((arr_1 [i_0]) % (var_4))))))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) (short)-17517)) / (((/* implicit */int) (short)17517))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_6)) / (var_3)))) : (((18186989467293588420ULL) / (((/* implicit */unsigned long long int) arr_0 [i_0]))))));
        arr_4 [i_0] = ((/* implicit */signed char) ((((/* implicit */int) ((-1LL) < (((/* implicit */long long int) ((/* implicit */int) (unsigned char)168)))))) >= (((/* implicit */int) ((((/* implicit */_Bool) (short)-17517)) && (((/* implicit */_Bool) arr_1 [i_0 - 1])))))));
        arr_5 [10LL] |= ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (short)-17517)) > (((((/* implicit */int) var_13)) + (((/* implicit */int) var_7)))))))) < (((((/* implicit */long long int) 340355068U)) / (((((/* implicit */_Bool) arr_0 [(signed char)0])) ? (arr_0 [0ULL]) : (((/* implicit */long long int) arr_1 [i_0]))))))));
        var_16 = ((((/* implicit */int) ((((/* implicit */int) (short)17502)) < (((/* implicit */int) (unsigned short)65527))))) > (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_1 [i_0]) : (arr_1 [i_0])))) || (var_14)))));
    }
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) /* same iter space */
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 2) 
        {
            /* LoopSeq 3 */
            for (short i_3 = 0; i_3 < 12; i_3 += 2) 
            {
                var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((var_5) <= (((/* implicit */unsigned int) 4193280))))) * (((/* implicit */int) ((((/* implicit */_Bool) (signed char)9)) || (((/* implicit */_Bool) (short)-17502)))))));
                arr_14 [i_3] [i_3] [(unsigned short)1] [i_1] = ((/* implicit */short) ((((/* implicit */int) var_13)) / (((/* implicit */int) var_14))));
            }
            for (signed char i_4 = 3; i_4 < 10; i_4 += 1) 
            {
                arr_18 [i_1] [i_1] [i_2] [(unsigned short)10] = ((/* implicit */unsigned char) (((-(((/* implicit */int) (_Bool)1)))) * (((/* implicit */int) (short)-17493))));
                /* LoopSeq 2 */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    var_18 -= ((/* implicit */short) ((((/* implicit */int) arr_10 [i_1 - 1] [i_1 - 1])) | (((/* implicit */int) (short)-17518))));
                    var_19 = ((/* implicit */short) ((((/* implicit */int) var_13)) & (((/* implicit */int) arr_8 [i_4 + 1] [i_1 - 1]))));
                    var_20 *= ((/* implicit */signed char) (~(((/* implicit */int) ((var_10) > (((/* implicit */long long int) ((/* implicit */int) var_6))))))));
                }
                for (unsigned char i_6 = 1; i_6 < 8; i_6 += 2) 
                {
                    var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [i_4 + 1])) && ((!(((/* implicit */_Bool) 6785030359495185453LL))))));
                    var_22 *= ((/* implicit */unsigned char) (((~(((/* implicit */int) var_7)))) * (((/* implicit */int) arr_10 [i_4] [i_4 - 1]))));
                    arr_23 [i_1] [i_1] [i_1] [i_4] [i_1] [i_6] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) var_1))) / (var_10)));
                    arr_24 [i_6] [i_4] [i_1 - 1] [i_1 - 1] [i_6] = ((((((/* implicit */_Bool) arr_0 [i_6])) || (((/* implicit */_Bool) var_7)))) || (((/* implicit */_Bool) ((((/* implicit */int) (short)17517)) - (((/* implicit */int) var_6))))));
                    var_23 *= ((/* implicit */short) ((((/* implicit */_Bool) var_12)) ? (arr_17 [i_6 + 3]) : (((/* implicit */long long int) ((((((/* implicit */int) (short)-23406)) + (2147483647))) << (((33292288U) - (33292288U))))))));
                }
            }
            for (long long int i_7 = 0; i_7 < 12; i_7 += 3) 
            {
                arr_28 [i_1] [4LL] [i_2] [11LL] = ((/* implicit */unsigned int) (((-(var_11))) < (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) arr_9 [i_2])))))));
                var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)6214)) ^ (((/* implicit */int) var_8))));
                var_25 ^= ((/* implicit */short) ((((/* implicit */int) var_0)) / (((/* implicit */int) var_6))));
            }
            arr_29 [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-17482)) ? (((((/* implicit */long long int) ((/* implicit */int) (short)-32750))) / (var_2))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
        }
        for (signed char i_8 = 0; i_8 < 12; i_8 += 4) 
        {
            arr_32 [i_1] [i_1 - 1] [i_1 - 1] = ((((((/* implicit */int) ((((/* implicit */int) (short)7395)) == (1000637612)))) <= (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (short)17482)) : (((/* implicit */int) var_12)))))) ? (((((/* implicit */_Bool) arr_31 [i_1 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (2044U))) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_11 [i_1 - 1])) * (((/* implicit */int) (signed char)63))))));
            arr_33 [i_1] [i_8] = ((/* implicit */unsigned short) ((((((((/* implicit */int) arr_11 [i_1])) * (((/* implicit */int) arr_9 [i_1])))) / (((/* implicit */int) arr_20 [i_1] [i_1 - 1] [i_1] [i_1 - 1])))) ^ (((((/* implicit */int) ((0U) > (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)55506)))))) ^ ((~(((/* implicit */int) var_7))))))));
        }
        arr_34 [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */int) ((((((/* implicit */int) arr_12 [i_1] [i_1 - 1])) << (((((/* implicit */int) var_12)) - (18230))))) > (((/* implicit */int) ((((/* implicit */_Bool) arr_20 [i_1] [i_1] [i_1] [i_1])) || (((/* implicit */_Bool) var_11)))))))) != (((/* implicit */int) ((((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) arr_0 [(unsigned short)0])))) && (((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) var_12)))))))));
    }
    for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) /* same iter space */
    {
        arr_37 [i_9] = ((/* implicit */_Bool) (((-(((14075134853917219535ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_30 [i_9] [i_9]))))))) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (short)-2679)) : (((/* implicit */int) var_13))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_9]))) : (((arr_35 [i_9]) / (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_9]))))))))));
        arr_38 [i_9] = (((-(var_11))) > (((/* implicit */unsigned int) ((((((/* implicit */int) (unsigned char)50)) * (((/* implicit */int) var_8)))) ^ (((/* implicit */int) ((5687604454184032059LL) <= (((/* implicit */long long int) ((/* implicit */int) var_9))))))))));
    }
    var_26 ^= ((/* implicit */short) (+(((((var_5) + (((/* implicit */unsigned int) var_3)))) | (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (short)-17502)) >= (((/* implicit */int) (short)0))))))))));
    var_27 = ((/* implicit */signed char) ((((/* implicit */int) ((((((/* implicit */_Bool) var_13)) || (((/* implicit */_Bool) var_6)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) -7619186622267680036LL)) ? (((/* implicit */int) (short)17502)) : (((/* implicit */int) var_15)))))))) ^ ((~(((((/* implicit */int) var_9)) ^ (((/* implicit */int) var_7))))))));
    var_28 = ((/* implicit */short) var_10);
}
