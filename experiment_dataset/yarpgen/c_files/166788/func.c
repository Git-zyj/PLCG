/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166788
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166788 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166788
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
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 1; i_2 < 13; i_2 += 1) 
                {
                    for (unsigned short i_3 = 2; i_3 < 11; i_3 += 1) 
                    {
                        {
                            var_13 ^= ((/* implicit */unsigned long long int) var_3);
                            arr_11 [(signed char)12] [i_1] [(short)2] [i_3] [i_3] [i_3] = (((+(((/* implicit */int) arr_1 [i_3 + 1])))) * (((/* implicit */int) (!(var_0)))));
                            var_14 |= var_7;
                            var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) (+(((/* implicit */int) ((unsigned char) var_6))))))));
                            var_16 = ((/* implicit */_Bool) arr_4 [i_1]);
                        }
                    } 
                } 
                var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) arr_0 [i_0] [i_1]))));
                arr_12 [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) (+(((((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0] [i_0])) / (((/* implicit */int) arr_9 [(unsigned char)0] [(unsigned char)6] [i_0] [(unsigned char)10] [i_0]))))));
            }
        } 
    } 
    var_18 = ((/* implicit */short) ((max((((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) var_7)))), ((_Bool)1))) ? (((((((/* implicit */int) (unsigned char)6)) < (((/* implicit */int) var_6)))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (unsigned char)105)))) : (((/* implicit */int) var_11))));
    /* LoopSeq 4 */
    for (short i_4 = 0; i_4 < 13; i_4 += 2) 
    {
        var_19 += ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)150)) - (((/* implicit */int) (unsigned short)49152))));
        var_20 = ((((/* implicit */int) var_10)) > ((+(((/* implicit */int) arr_9 [i_4] [(signed char)6] [i_4] [i_4] [i_4])))));
        /* LoopNest 2 */
        for (unsigned char i_5 = 1; i_5 < 10; i_5 += 2) 
        {
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                {
                    arr_21 [i_4] [6] [6] = (unsigned char)69;
                    var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) max(((+(((/* implicit */int) arr_14 [i_5 + 3] [i_5 + 1])))), (((/* implicit */int) var_11)))))));
                    var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) ((((/* implicit */int) max((arr_18 [i_5 + 3]), (arr_3 [i_5 + 1] [i_6])))) - ((+(((/* implicit */int) var_2)))))))));
                }
            } 
        } 
        var_23 = ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)173))) >= ((-(var_1))));
    }
    /* vectorizable */
    for (unsigned char i_7 = 0; i_7 < 22; i_7 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned short i_8 = 4; i_8 < 20; i_8 += 2) 
        {
            for (unsigned short i_9 = 4; i_9 < 21; i_9 += 4) 
            {
                {
                    arr_29 [i_7] [i_7] [i_7] [i_7] = ((/* implicit */unsigned char) ((((/* implicit */int) var_0)) - (((/* implicit */int) arr_28 [i_8 - 1] [i_8 - 3]))));
                    arr_30 [i_7] [(unsigned short)13] [i_9] = ((/* implicit */short) ((((/* implicit */int) (short)2248)) ^ (((((/* implicit */_Bool) (unsigned char)66)) ? (((/* implicit */int) arr_22 [i_7])) : (((/* implicit */int) (unsigned char)6))))));
                    arr_31 [i_7] [i_7] [i_9] = ((/* implicit */unsigned short) var_11);
                }
            } 
        } 
        arr_32 [i_7] = ((/* implicit */short) (+(((/* implicit */int) (unsigned char)178))));
    }
    /* vectorizable */
    for (short i_10 = 0; i_10 < 20; i_10 += 4) 
    {
        arr_37 [i_10] = ((/* implicit */unsigned char) arr_35 [i_10]);
        arr_38 [i_10] [i_10] |= ((/* implicit */short) ((((/* implicit */_Bool) arr_23 [i_10])) ? (((/* implicit */int) arr_23 [i_10])) : (((/* implicit */int) arr_23 [i_10]))));
        /* LoopNest 2 */
        for (signed char i_11 = 0; i_11 < 20; i_11 += 4) 
        {
            for (signed char i_12 = 0; i_12 < 20; i_12 += 1) 
            {
                {
                    var_24 = ((/* implicit */short) ((((/* implicit */_Bool) arr_22 [i_11])) ? (((/* implicit */int) arr_22 [i_10])) : (((/* implicit */int) arr_28 [i_12] [i_11]))));
                    arr_43 [i_10] [0LL] [i_11] [(signed char)8] = (~(((/* implicit */int) ((((/* implicit */int) arr_28 [i_12] [i_11])) >= (((/* implicit */int) arr_34 [i_10]))))));
                    arr_44 [i_10] [(short)17] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)49152)) ? (((/* implicit */int) (unsigned char)160)) : (1386677808)));
                    var_25 = ((/* implicit */short) ((((/* implicit */int) arr_26 [i_10] [i_10])) % (((/* implicit */int) ((short) arr_33 [i_12])))));
                }
            } 
        } 
        /* LoopNest 3 */
        for (signed char i_13 = 1; i_13 < 18; i_13 += 2) 
        {
            for (short i_14 = 0; i_14 < 20; i_14 += 4) 
            {
                for (unsigned int i_15 = 1; i_15 < 17; i_15 += 2) 
                {
                    {
                        arr_54 [i_10] [i_13] [i_14] [i_13] = ((/* implicit */long long int) var_7);
                        arr_55 [i_13] [i_10] [i_13] [(short)18] [i_15] = ((/* implicit */signed char) ((arr_47 [i_13 - 1]) != (((/* implicit */unsigned int) ((((/* implicit */int) arr_35 [i_13 - 1])) + (((/* implicit */int) arr_41 [(unsigned short)12] [i_13] [i_10])))))));
                    }
                } 
            } 
        } 
    }
    for (short i_16 = 0; i_16 < 10; i_16 += 2) 
    {
        var_26 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_36 [i_16])) ? (max((((/* implicit */unsigned int) arr_35 [(_Bool)1])), (((var_1) << (((((/* implicit */int) var_5)) - (22186))))))) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_36 [i_16])) | (((/* implicit */int) var_8)))))));
        arr_59 [i_16] [5U] = ((/* implicit */unsigned long long int) arr_18 [i_16]);
        var_27 += ((/* implicit */unsigned short) ((((var_8) ? (arr_15 [i_16]) : (((/* implicit */int) var_12)))) > (((/* implicit */int) max((min((((/* implicit */signed char) var_12)), (arr_24 [i_16]))), (((/* implicit */signed char) arr_13 [i_16])))))));
        arr_60 [i_16] = ((/* implicit */short) (unsigned short)26309);
    }
    /* LoopNest 2 */
    for (unsigned short i_17 = 0; i_17 < 19; i_17 += 2) 
    {
        for (unsigned char i_18 = 4; i_18 < 18; i_18 += 4) 
        {
            {
                var_28 = ((/* implicit */unsigned char) (+(((/* implicit */int) ((((/* implicit */_Bool) arr_22 [i_17])) && (((/* implicit */_Bool) var_3)))))));
                var_29 = ((/* implicit */_Bool) min((((/* implicit */unsigned int) max((((/* implicit */unsigned short) var_12)), (var_6)))), (((((((/* implicit */unsigned int) ((/* implicit */int) var_4))) / (var_1))) / (((/* implicit */unsigned int) ((/* implicit */int) arr_63 [i_18 - 3])))))));
            }
        } 
    } 
    var_30 = ((((/* implicit */int) (unsigned char)0)) != (((/* implicit */int) (_Bool)0)));
}
