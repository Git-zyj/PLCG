/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18334
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18334 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18334
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
    var_17 = ((/* implicit */unsigned short) ((var_5) - (((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_9)))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 25; i_0 += 3) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            var_18 = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_0 [i_1]))))) ? (((((/* implicit */_Bool) arr_3 [(_Bool)1] [(_Bool)1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [(_Bool)1]))) : (13602293934100309415ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1])))));
            var_19 = ((/* implicit */unsigned long long int) ((_Bool) arr_2 [i_1]));
            /* LoopSeq 1 */
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                arr_8 [i_0] [i_2] [i_2 + 1] = ((/* implicit */_Bool) arr_1 [i_2]);
                var_20 = ((/* implicit */unsigned int) ((arr_5 [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_2 + 1]) + (arr_5 [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_2 + 1])));
                arr_9 [i_2] [i_1] [i_2] [i_2] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_7 [i_0] [i_2] [i_0]))));
            }
            arr_10 [i_1] [i_0] = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_7 [i_0] [(_Bool)1] [i_0]))));
        }
        var_21 = ((/* implicit */short) (-(((/* implicit */int) ((unsigned short) (signed char)77)))));
        var_22 = ((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)98))) : (402653184U)));
    }
    for (int i_3 = 0; i_3 < 25; i_3 += 3) /* same iter space */
    {
        var_23 = ((/* implicit */long long int) arr_13 [i_3]);
        /* LoopSeq 4 */
        for (unsigned long long int i_4 = 2; i_4 < 24; i_4 += 3) 
        {
            arr_17 [i_3] [i_3] [i_4] = ((/* implicit */int) arr_12 [i_3] [(unsigned short)16]);
            arr_18 [i_3] [i_4] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_3] [i_3])) ? (arr_2 [i_3]) : (arr_2 [i_3]))))));
            arr_19 [i_4] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) (_Bool)1))));
            var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 10325518463152479633ULL)) ? (((/* implicit */int) (short)-26461)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (((((/* implicit */_Bool) arr_15 [i_3] [i_4])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (arr_14 [i_4 - 2])))))) ? ((+(2133126080U))) : (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) min((((/* implicit */unsigned short) var_6)), ((unsigned short)5301)))))))));
        }
        for (unsigned long long int i_5 = 0; i_5 < 25; i_5 += 4) 
        {
            arr_23 [i_3] [0LL] [i_3] = ((/* implicit */short) (_Bool)0);
            var_25 = ((/* implicit */long long int) 12615148272550456644ULL);
        }
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            var_26 = ((/* implicit */int) min((var_26), (((/* implicit */int) ((((((/* implicit */int) arr_7 [i_3] [(unsigned char)24] [i_3])) > (((/* implicit */int) arr_7 [i_3] [(short)2] [i_6])))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_7))))) : (((((/* implicit */_Bool) arr_15 [i_3] [18])) ? (min((((/* implicit */unsigned long long int) arr_21 [20U])), (arr_5 [i_6] [i_6] [i_3] [(short)19]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [24LL]))))))))));
            var_27 = ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_3] [i_3] [i_6] [i_6])) ? (var_11) : (((/* implicit */long long int) arr_11 [i_3]))))), (arr_5 [i_3] [i_3] [i_3] [i_3])))) ? (min((((/* implicit */unsigned int) min((((/* implicit */short) (_Bool)1)), ((short)448)))), (arr_3 [i_3] [12U]))) : (max((var_10), (((/* implicit */unsigned int) ((_Bool) 3113999118904637249ULL))))));
        }
        /* vectorizable */
        for (int i_7 = 3; i_7 < 22; i_7 += 2) 
        {
            arr_30 [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_25 [i_7] [(unsigned short)24] [i_7 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_16))) : (arr_5 [i_7] [i_7] [i_7 + 1] [i_7])));
            var_28 = ((/* implicit */signed char) max((var_28), (((/* implicit */signed char) ((_Bool) var_16)))));
            var_29 |= ((/* implicit */unsigned char) arr_5 [(unsigned short)14] [(unsigned short)14] [i_3] [i_3]);
            var_30 = ((/* implicit */signed char) arr_5 [i_7] [i_3] [i_3] [i_3]);
            /* LoopSeq 4 */
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                var_31 = ((/* implicit */_Bool) ((arr_6 [i_3]) ^ (((/* implicit */long long int) ((/* implicit */int) arr_32 [i_3] [i_7] [i_8] [i_3])))));
                arr_34 [i_3] [i_3] [i_8] [i_8] = ((unsigned short) arr_4 [i_3] [i_8]);
                var_32 = ((/* implicit */unsigned char) (-(((/* implicit */int) (short)22710))));
                var_33 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -340825973)) && (((/* implicit */_Bool) (~(((/* implicit */int) arr_33 [i_3] [i_3] [i_8])))))));
            }
            for (unsigned int i_9 = 4; i_9 < 24; i_9 += 2) 
            {
                arr_39 [i_3] [i_7] [(_Bool)1] [i_7] = ((/* implicit */short) arr_27 [i_9]);
                var_34 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_7 + 3])) ? (arr_25 [i_9 + 1] [i_7 + 1] [i_3]) : (((/* implicit */int) var_1))));
                var_35 = ((/* implicit */long long int) var_16);
            }
            for (signed char i_10 = 1; i_10 < 24; i_10 += 2) 
            {
                arr_42 [i_10] [i_3] [i_3] [i_3] = ((/* implicit */signed char) (~(((/* implicit */int) (unsigned char)3))));
                var_36 = ((/* implicit */int) arr_4 [i_7 + 1] [(unsigned short)12]);
            }
            for (unsigned int i_11 = 0; i_11 < 25; i_11 += 1) 
            {
                var_37 = ((/* implicit */unsigned short) ((signed char) -2942700895738383130LL));
                var_38 *= ((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) != (1164556518)));
            }
        }
        var_39 = ((/* implicit */_Bool) ((min((var_6), ((_Bool)1))) ? (arr_3 [i_3] [i_3]) : (((arr_3 [i_3] [i_3]) ^ (arr_3 [i_3] [i_3])))));
        var_40 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) min((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) > (var_4)))), (((((/* implicit */int) var_9)) | (var_8)))))) * (var_4)));
        arr_45 [i_3] [i_3] = ((/* implicit */_Bool) arr_24 [(unsigned char)11]);
    }
}
