/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141095
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141095 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141095
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
    var_19 = (+(((/* implicit */int) var_10)));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        var_20 = ((/* implicit */int) 18446744073709551608ULL);
        arr_3 [i_0] = ((/* implicit */unsigned long long int) 2130857597);
    }
    for (unsigned short i_1 = 4; i_1 < 11; i_1 += 4) 
    {
        arr_6 [i_1 + 1] [i_1 - 4] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [i_1] [i_1])))))));
        var_21 -= ((/* implicit */unsigned long long int) var_4);
        /* LoopNest 2 */
        for (unsigned short i_2 = 0; i_2 < 13; i_2 += 2) 
        {
            for (int i_3 = 0; i_3 < 13; i_3 += 4) 
            {
                {
                    var_22 = ((/* implicit */unsigned char) ((((/* implicit */int) var_4)) & (((/* implicit */int) min((((/* implicit */unsigned short) ((((/* implicit */_Bool) 2130857597)) || (((/* implicit */_Bool) -1636740254))))), ((unsigned short)15))))));
                    arr_11 [i_3] [i_3] [i_3] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((max((var_3), (((/* implicit */unsigned long long int) var_10)))) == (max((((/* implicit */unsigned long long int) var_4)), (18446744073709551608ULL))))))) | (arr_8 [i_1 + 1] [i_1] [i_3])));
                }
            } 
        } 
        var_23 = ((/* implicit */unsigned short) max((min((((/* implicit */unsigned long long int) arr_4 [i_1 - 3])), (var_6))), (((/* implicit */unsigned long long int) var_17))));
    }
    for (unsigned long long int i_4 = 2; i_4 < 10; i_4 += 1) 
    {
        var_24 ^= ((/* implicit */unsigned short) arr_13 [i_4]);
        /* LoopSeq 4 */
        for (unsigned char i_5 = 0; i_5 < 12; i_5 += 4) 
        {
            var_25 ^= ((/* implicit */unsigned short) ((((/* implicit */int) var_15)) ^ (((/* implicit */int) var_12))));
            var_26 = ((/* implicit */unsigned long long int) arr_1 [i_4] [i_4]);
            var_27 = ((((((/* implicit */int) var_15)) - (arr_9 [i_4] [i_4 + 2] [i_4] [i_4]))) << ((((((+(((/* implicit */int) (unsigned short)61773)))) | (((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_4)))))) - (65502))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned short i_6 = 1; i_6 < 11; i_6 += 2) 
            {
                var_28 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_7))))) : (((/* implicit */int) arr_2 [i_6 + 1]))));
                var_29 = ((/* implicit */unsigned short) var_7);
                var_30 |= (unsigned short)51204;
                var_31 ^= var_0;
            }
            var_32 -= ((/* implicit */unsigned long long int) arr_7 [i_4]);
        }
        for (unsigned short i_7 = 0; i_7 < 12; i_7 += 4) 
        {
            var_33 = ((/* implicit */int) var_3);
            var_34 = ((/* implicit */unsigned long long int) arr_16 [i_4] [i_7]);
            var_35 -= ((/* implicit */unsigned short) arr_9 [i_4 - 2] [i_7] [i_4 + 2] [i_4 - 2]);
            var_36 = var_0;
            var_37 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) var_8)) << (((16645758396213084433ULL) - (16645758396213084433ULL)))))) < (arr_12 [i_4 - 2] [i_4])))) + (((/* implicit */int) max((((unsigned short) (unsigned char)167)), (min(((unsigned short)14332), (((/* implicit */unsigned short) (unsigned char)167)))))))));
        }
        /* vectorizable */
        for (unsigned long long int i_8 = 0; i_8 < 12; i_8 += 1) 
        {
            arr_23 [i_4] [i_8] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_4] [i_8])) ? (((/* implicit */int) arr_15 [i_4])) : (((/* implicit */int) var_2))))) ? ((~(((/* implicit */int) var_11)))) : (((/* implicit */int) var_1))));
            /* LoopSeq 2 */
            for (unsigned char i_9 = 3; i_9 < 9; i_9 += 1) /* same iter space */
            {
                var_38 -= (+(((var_3) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))));
                var_39 += ((/* implicit */int) ((((((/* implicit */_Bool) 312854816)) ? (((/* implicit */int) (unsigned short)3763)) : (((/* implicit */int) (unsigned char)255)))) == (((/* implicit */int) var_8))));
                arr_28 [4] [4] [i_9 - 3] [i_4] |= ((/* implicit */unsigned short) ((var_3) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_9 - 1])))));
            }
            for (unsigned char i_10 = 3; i_10 < 9; i_10 += 1) /* same iter space */
            {
                arr_32 [i_4 + 2] [i_4] = ((/* implicit */unsigned short) var_14);
                var_40 = var_9;
            }
        }
        for (unsigned char i_11 = 0; i_11 < 12; i_11 += 1) 
        {
            var_41 -= ((/* implicit */unsigned long long int) arr_34 [8] [i_4 - 2] [8]);
            var_42 ^= min((((/* implicit */unsigned long long int) var_11)), (((((/* implicit */unsigned long long int) arr_9 [i_11] [i_11] [i_4] [i_4])) % ((+(var_3))))));
            arr_35 [i_4] = arr_15 [i_4];
            var_43 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_2)))))));
        }
        arr_36 [i_4] [i_4] = ((/* implicit */unsigned short) ((((unsigned long long int) arr_33 [i_4 + 2] [i_4] [i_4 + 1])) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))));
    }
    var_44 = ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((int) 3106730500307589826ULL))) < (var_3)))));
}
