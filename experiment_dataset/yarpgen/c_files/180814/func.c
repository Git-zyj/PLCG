/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180814
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180814 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180814
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
    var_10 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)237)) == (((/* implicit */int) (signed char)6))));
    /* LoopSeq 4 */
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned short) arr_0 [i_0]);
        arr_4 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_0 [i_0]))))) ? (((/* implicit */int) arr_0 [i_0])) : (((var_1) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_0 [i_0]))))));
    }
    /* vectorizable */
    for (unsigned int i_1 = 4; i_1 < 9; i_1 += 4) 
    {
        /* LoopSeq 1 */
        for (short i_2 = 1; i_2 < 9; i_2 += 2) 
        {
            arr_10 [i_1] [(unsigned char)7] [(unsigned char)2] = ((signed char) var_1);
            var_11 = ((/* implicit */unsigned int) min((var_11), (((/* implicit */unsigned int) ((var_1) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))))));
        }
        arr_11 [i_1] = ((/* implicit */_Bool) (~(arr_9 [i_1])));
        /* LoopSeq 1 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            arr_14 [i_1] [i_1] [i_3] = ((/* implicit */short) ((unsigned long long int) var_4));
            arr_15 [2U] [i_1] [i_1] &= ((/* implicit */unsigned short) arr_0 [i_1]);
            var_12 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_2 [i_1 - 3])) : (((/* implicit */int) arr_2 [i_1 - 4]))));
            arr_16 [i_1] [0LL] [i_3] = ((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_3)))));
        }
        arr_17 [i_1] [i_1] = ((/* implicit */unsigned long long int) var_2);
    }
    /* vectorizable */
    for (long long int i_4 = 2; i_4 < 16; i_4 += 1) 
    {
        var_13 = ((/* implicit */_Bool) ((arr_19 [i_4 - 1] [i_4 - 1]) ? (var_8) : (((/* implicit */int) var_6))));
        arr_20 [i_4] |= ((/* implicit */unsigned char) var_6);
        arr_21 [i_4] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)32767))));
        var_14 = (+(((/* implicit */int) arr_19 [i_4 - 2] [i_4 - 2])));
        arr_22 [i_4 - 2] = ((/* implicit */unsigned char) ((var_1) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_19 [i_4 - 1] [i_4]))));
    }
    for (unsigned char i_5 = 3; i_5 < 16; i_5 += 2) 
    {
        var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) (-(((/* implicit */int) ((unsigned char) var_8))))))));
        arr_25 [i_5] = ((/* implicit */short) var_6);
        /* LoopSeq 3 */
        for (unsigned char i_6 = 1; i_6 < 16; i_6 += 2) 
        {
            var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) ((unsigned long long int) max((((/* implicit */unsigned int) ((_Bool) var_0))), (max((arr_28 [(unsigned char)0] [i_6 - 1] [(signed char)6]), (((/* implicit */unsigned int) var_7))))))))));
            arr_30 [(signed char)12] [i_5] [(signed char)12] &= ((/* implicit */short) arr_26 [i_5] [(_Bool)1]);
        }
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            arr_34 [i_5 - 2] [i_5] [i_5] = ((/* implicit */int) ((((var_1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) 3605811525U)))) : (((unsigned long long int) (_Bool)1)))) * (((/* implicit */unsigned long long int) ((((/* implicit */int) var_3)) * (((/* implicit */int) (_Bool)0)))))));
            arr_35 [i_5] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) 1537220563U)) ^ (18446744073709551596ULL)));
            var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) (((+(((/* implicit */int) arr_33 [i_5 + 2] [6ULL] [i_5])))) << (((((/* implicit */int) min((((/* implicit */unsigned short) var_6)), (arr_33 [i_5 - 3] [(unsigned char)6] [i_5 + 2])))) - (32534))))))));
            arr_36 [i_5] [i_7] [i_7] = ((/* implicit */int) var_5);
            arr_37 [i_5] = ((/* implicit */unsigned short) var_3);
        }
        for (unsigned short i_8 = 2; i_8 < 17; i_8 += 4) 
        {
            var_18 |= ((/* implicit */signed char) ((68719476728ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535)))));
            var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) (-(((((/* implicit */_Bool) arr_29 [i_5 + 1] [i_8 - 2] [i_8 - 2])) ? (arr_28 [i_8 - 1] [i_8] [i_8]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_29 [i_5 - 2] [i_8 - 1] [i_8 + 1]))))))))));
            var_20 = ((/* implicit */_Bool) ((unsigned long long int) ((var_8) + (((/* implicit */int) var_6)))));
        }
    }
    var_21 = ((/* implicit */short) var_3);
}
