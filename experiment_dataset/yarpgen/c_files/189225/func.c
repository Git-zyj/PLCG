/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189225
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189225 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189225
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
    var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) (_Bool)1))));
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        var_21 = ((/* implicit */signed char) var_19);
        /* LoopSeq 1 */
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            var_22 = ((/* implicit */signed char) arr_3 [i_1] [i_1] [i_0]);
            var_23 |= ((/* implicit */signed char) (+(742374382)));
            var_24 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_14)) && (((/* implicit */_Bool) ((arr_4 [i_0] [11ULL]) & (arr_4 [i_0] [i_1]))))));
            var_25 &= ((/* implicit */_Bool) (((((+(((/* implicit */int) (signed char)-126)))) + (2147483647))) >> (((((/* implicit */int) arr_1 [i_0])) + (11)))));
            var_26 = ((/* implicit */_Bool) arr_0 [i_0]);
        }
        /* LoopSeq 4 */
        /* vectorizable */
        for (unsigned char i_2 = 0; i_2 < 24; i_2 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned char i_3 = 0; i_3 < 24; i_3 += 3) 
            {
                for (short i_4 = 2; i_4 < 22; i_4 += 3) 
                {
                    {
                        /* LoopSeq 2 */
                        for (short i_5 = 0; i_5 < 24; i_5 += 4) /* same iter space */
                        {
                            arr_15 [(unsigned short)16] [i_2] [i_3] [i_4 + 1] [i_5] [i_4] = (unsigned char)54;
                            var_27 = ((/* implicit */unsigned short) min((var_27), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_0] [i_2] [(unsigned short)4] [i_4] [i_5] [(unsigned short)16])) ? (arr_6 [i_0]) : (((/* implicit */unsigned int) var_1))))))))));
                            var_28 = ((/* implicit */signed char) arr_0 [i_5]);
                            var_29 = ((/* implicit */unsigned int) (~(5943192636444196103ULL)));
                        }
                        for (short i_6 = 0; i_6 < 24; i_6 += 4) /* same iter space */
                        {
                            var_30 = ((/* implicit */int) var_13);
                            var_31 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [7ULL] [i_0])) ? (arr_2 [i_4]) : (((/* implicit */long long int) arr_13 [i_4] [i_4] [i_3] [i_0] [(signed char)20] [i_2]))))) ? (16089767813416830749ULL) : (((/* implicit */unsigned long long int) arr_17 [i_4] [i_0] [(signed char)11] [i_2] [1U]))));
                            arr_20 [i_6] [i_4] [i_3] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_6 [i_4 - 1]))));
                        }
                        var_32 = (+(((((/* implicit */_Bool) arr_9 [i_3] [i_2] [i_0])) ? (var_1) : (((/* implicit */int) (_Bool)1)))));
                        arr_21 [(unsigned char)18] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)37875)) != (((/* implicit */int) (unsigned short)47275))));
                        var_33 = (i_4 % 2 == zero) ? (((((/* implicit */int) arr_16 [i_4] [i_4 + 1] [i_4] [i_4 - 2] [i_4])) >> (((((/* implicit */int) arr_16 [i_4] [i_4 + 1] [i_4] [i_4 - 2] [i_4])) - (39513))))) : (((((/* implicit */int) arr_16 [i_4] [i_4 + 1] [i_4] [i_4 - 2] [i_4])) >> (((((((/* implicit */int) arr_16 [i_4] [i_4 + 1] [i_4] [i_4 - 2] [i_4])) - (39513))) + (19986)))));
                    }
                } 
            } 
            var_34 = ((/* implicit */unsigned char) max((var_34), (((/* implicit */unsigned char) ((((/* implicit */int) var_16)) <= (((/* implicit */int) arr_3 [(unsigned short)14] [i_2] [3ULL])))))));
        }
        /* vectorizable */
        for (unsigned short i_7 = 1; i_7 < 22; i_7 += 1) 
        {
            /* LoopNest 3 */
            for (int i_8 = 0; i_8 < 24; i_8 += 3) 
            {
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    for (unsigned short i_10 = 0; i_10 < 24; i_10 += 1) 
                    {
                        {
                            var_35 = -254571211;
                            arr_32 [i_7] [i_7] [i_7 + 2] [i_7 + 2] [i_7] [(_Bool)1] = ((/* implicit */unsigned int) (unsigned char)54);
                            arr_33 [10U] [i_7] [i_7] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) 1197045653)) ? (((/* implicit */int) (signed char)-110)) : (((((/* implicit */_Bool) (unsigned short)31512)) ? (((/* implicit */int) (unsigned short)34531)) : (((/* implicit */int) (unsigned short)3907))))));
                        }
                    } 
                } 
            } 
            var_36 = ((/* implicit */unsigned short) (+(arr_6 [(signed char)16])));
        }
        /* vectorizable */
        for (signed char i_11 = 2; i_11 < 21; i_11 += 3) 
        {
            var_37 = arr_19 [(unsigned short)0] [i_0] [18U];
            var_38 = ((/* implicit */signed char) ((((/* implicit */int) arr_35 [i_0] [i_11 + 1])) & (((/* implicit */int) arr_35 [i_0] [i_11 - 1]))));
        }
        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
        {
            var_39 -= ((/* implicit */signed char) (~(((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_10 [i_0] [i_0] [i_12])) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_0] [i_12])))))))));
            var_40 = ((/* implicit */short) arr_0 [i_0]);
        }
        arr_42 [i_0] [i_0] = ((/* implicit */unsigned int) arr_5 [3U] [i_0]);
    }
    /* vectorizable */
    for (signed char i_13 = 3; i_13 < 15; i_13 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned short i_14 = 0; i_14 < 17; i_14 += 2) 
        {
            for (unsigned char i_15 = 0; i_15 < 17; i_15 += 1) 
            {
                {
                    var_41 = var_5;
                    arr_52 [i_14] [i_14] [i_15] [i_15] = ((/* implicit */unsigned short) var_4);
                }
            } 
        } 
        var_42 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 3903283022061643685ULL))));
    }
    for (signed char i_16 = 3; i_16 < 15; i_16 += 4) /* same iter space */
    {
        var_43 &= ((/* implicit */long long int) arr_22 [i_16 + 1]);
        var_44 = ((/* implicit */unsigned char) var_7);
        var_45 = ((/* implicit */unsigned short) arr_24 [i_16] [i_16] [i_16]);
        /* LoopNest 2 */
        for (signed char i_17 = 0; i_17 < 17; i_17 += 3) 
        {
            for (unsigned short i_18 = 0; i_18 < 17; i_18 += 4) 
            {
                {
                    var_46 = ((/* implicit */unsigned short) arr_35 [i_16] [i_16]);
                    arr_63 [i_16] [i_16] [1U] [i_17] = ((/* implicit */short) arr_53 [i_16] [i_17]);
                    var_47 &= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_57 [i_16] [i_17] [i_18]))));
                    var_48 = ((/* implicit */int) arr_24 [i_18] [(unsigned char)12] [i_16]);
                }
            } 
        } 
        var_49 = ((/* implicit */unsigned int) max((var_49), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned char)88)))))));
    }
}
