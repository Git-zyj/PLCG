/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133474
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133474 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133474
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
    /* LoopSeq 4 */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 4) /* same iter space */
    {
        var_13 = ((/* implicit */unsigned short) max((((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_3 [i_0])))))))), (((((/* implicit */int) max((arr_3 [i_0]), (arr_2 [i_0])))) / (((/* implicit */int) max((arr_2 [i_0]), (((/* implicit */unsigned short) var_1)))))))));
        /* LoopSeq 1 */
        for (unsigned short i_1 = 2; i_1 < 23; i_1 += 2) 
        {
            var_14 = ((unsigned short) ((((/* implicit */int) ((unsigned short) (unsigned char)249))) == (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_1])))))));
            arr_8 [i_0] [(unsigned char)18] = ((/* implicit */unsigned char) (((~(((/* implicit */int) arr_5 [i_0] [i_1] [i_0])))) & (((/* implicit */int) max((((/* implicit */unsigned char) ((((/* implicit */int) arr_0 [i_0])) >= (((/* implicit */int) arr_3 [i_1]))))), (max((arr_0 [i_1]), (((/* implicit */unsigned char) (signed char)-87)))))))));
        }
    }
    for (unsigned char i_2 = 0; i_2 < 24; i_2 += 4) /* same iter space */
    {
        arr_11 [i_2] = ((/* implicit */unsigned char) max((((/* implicit */int) max((arr_4 [i_2] [i_2] [(unsigned char)18]), (arr_4 [i_2] [i_2] [i_2])))), ((+((-(((/* implicit */int) arr_6 [i_2]))))))));
        var_15 |= ((/* implicit */unsigned char) ((((((/* implicit */int) arr_7 [i_2])) & (((/* implicit */int) arr_9 [i_2] [i_2])))) < (((/* implicit */int) ((unsigned char) arr_1 [i_2])))));
    }
    for (unsigned char i_3 = 0; i_3 < 22; i_3 += 1) 
    {
        var_16 = ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */_Bool) arr_3 [i_3])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_10 [i_3])))));
        /* LoopSeq 2 */
        for (unsigned char i_4 = 1; i_4 < 19; i_4 += 3) 
        {
            /* LoopSeq 1 */
            for (signed char i_5 = 0; i_5 < 22; i_5 += 3) 
            {
                var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) max((((/* implicit */int) ((unsigned short) arr_1 [(unsigned short)7]))), (min(((-(((/* implicit */int) (signed char)70)))), (((/* implicit */int) arr_7 [i_4 + 3])))))))));
                var_18 = ((unsigned short) min((((unsigned short) (unsigned short)17788)), (((/* implicit */unsigned short) ((signed char) (unsigned short)52143)))));
                var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_4 + 1])) - (((/* implicit */int) arr_1 [i_4 + 1]))))) ? (((/* implicit */int) ((((/* implicit */int) max((arr_13 [(unsigned short)3] [i_4]), (((/* implicit */unsigned short) var_3))))) > (((/* implicit */int) arr_7 [i_3]))))) : (((/* implicit */int) arr_19 [i_3] [i_4] [i_3]))));
            }
            var_20 = ((/* implicit */signed char) min(((~(((/* implicit */int) var_2)))), ((~(((/* implicit */int) (signed char)-1))))));
            /* LoopSeq 3 */
            for (unsigned char i_6 = 2; i_6 < 21; i_6 += 4) 
            {
                var_21 = ((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */int) ((signed char) var_3))) != (((/* implicit */int) arr_22 [i_6] [i_6] [i_6 - 2])))));
                var_22 = ((/* implicit */signed char) max(((!(((/* implicit */_Bool) ((((/* implicit */int) var_6)) & (((/* implicit */int) var_0))))))), (((((/* implicit */_Bool) (~(((/* implicit */int) var_11))))) || (((/* implicit */_Bool) ((unsigned char) arr_20 [i_4])))))));
                var_23 = ((/* implicit */unsigned char) ((unsigned short) (!(((/* implicit */_Bool) min((((/* implicit */unsigned char) arr_19 [i_3] [(signed char)14] [i_6])), (arr_15 [(unsigned short)8] [(unsigned short)8] [(unsigned char)8])))))));
            }
            for (signed char i_7 = 0; i_7 < 22; i_7 += 4) /* same iter space */
            {
                arr_26 [i_3] = ((/* implicit */signed char) min((max(((+(((/* implicit */int) arr_7 [i_3])))), (((/* implicit */int) ((unsigned short) arr_2 [(signed char)9]))))), (((/* implicit */int) ((((/* implicit */int) max((arr_15 [(signed char)12] [(unsigned char)5] [i_3]), (((/* implicit */unsigned char) arr_23 [i_3] [i_4] [i_3]))))) != ((+(((/* implicit */int) var_3)))))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned short i_8 = 1; i_8 < 21; i_8 += 1) 
                {
                    var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned char) var_0))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_17 [i_3] [i_3]))))) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)47763)) && (((/* implicit */_Bool) (unsigned short)22938)))))));
                    var_25 = arr_0 [i_3];
                    arr_30 [(unsigned short)20] [i_3] [(signed char)20] = ((/* implicit */unsigned short) (((-(((/* implicit */int) (unsigned char)0)))) ^ (((/* implicit */int) arr_28 [(unsigned char)7] [i_8 + 1] [i_8] [i_7] [i_3]))));
                }
                var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((arr_28 [i_4 - 1] [(signed char)12] [i_7] [i_4] [(unsigned char)1]), (var_5)))) ? (((((/* implicit */int) arr_28 [i_4 - 1] [i_4 - 1] [(signed char)21] [i_7] [i_4])) - (((/* implicit */int) arr_28 [i_4 - 1] [i_4] [i_7] [(unsigned short)20] [i_7])))) : (((((/* implicit */_Bool) arr_28 [i_4 - 1] [i_4 - 1] [i_7] [(unsigned short)19] [(signed char)8])) ? (((/* implicit */int) arr_9 [i_4 - 1] [(unsigned short)13])) : (((/* implicit */int) var_5))))));
            }
            for (signed char i_9 = 0; i_9 < 22; i_9 += 4) /* same iter space */
            {
                var_27 = ((/* implicit */unsigned short) ((unsigned char) max((arr_15 [i_3] [i_3] [i_4 + 1]), (arr_15 [(unsigned char)12] [(unsigned char)12] [i_4 + 2]))));
                var_28 = ((unsigned short) (+(((/* implicit */int) var_12))));
            }
        }
        for (unsigned char i_10 = 1; i_10 < 19; i_10 += 2) 
        {
            var_29 = ((/* implicit */unsigned short) (~(((/* implicit */int) ((unsigned short) ((((/* implicit */int) var_4)) > (((/* implicit */int) var_0))))))));
            var_30 = ((/* implicit */signed char) max((var_30), (((/* implicit */signed char) arr_20 [i_3]))));
            /* LoopNest 2 */
            for (unsigned char i_11 = 1; i_11 < 19; i_11 += 3) 
            {
                for (unsigned short i_12 = 0; i_12 < 22; i_12 += 2) 
                {
                    {
                        arr_43 [i_3] [i_10] [i_3] [i_12] [(unsigned short)5] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_33 [i_11] [(signed char)8] [i_11])) : (((/* implicit */int) var_4)))))) ? (max((((((/* implicit */int) arr_20 [i_10])) << (((((/* implicit */int) arr_15 [i_3] [i_10] [i_11 + 3])) - (85))))), (((/* implicit */int) arr_32 [i_11 + 2] [i_3] [i_3] [i_10 + 1])))) : (min((((/* implicit */int) max((var_2), (((/* implicit */unsigned char) arr_16 [i_11] [i_3]))))), (((((/* implicit */_Bool) (unsigned short)52133)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_12 [i_3]))))))));
                        var_31 = ((/* implicit */unsigned char) max((min(((+(((/* implicit */int) var_5)))), (((((/* implicit */int) var_11)) ^ (((/* implicit */int) (signed char)0)))))), (((/* implicit */int) ((unsigned short) ((signed char) arr_17 [i_3] [i_10]))))));
                        var_32 = arr_28 [(signed char)10] [i_10] [i_10] [(signed char)0] [i_3];
                    }
                } 
            } 
        }
    }
    /* vectorizable */
    for (unsigned short i_13 = 0; i_13 < 17; i_13 += 1) 
    {
        /* LoopNest 3 */
        for (signed char i_14 = 2; i_14 < 15; i_14 += 1) 
        {
            for (unsigned char i_15 = 0; i_15 < 17; i_15 += 3) 
            {
                for (unsigned short i_16 = 2; i_16 < 16; i_16 += 3) 
                {
                    {
                        arr_54 [i_13] [(unsigned short)11] [(unsigned short)11] [i_13] = ((/* implicit */unsigned short) (+(((((/* implicit */int) arr_14 [i_13] [i_13])) / (((/* implicit */int) arr_27 [i_13] [(unsigned short)18] [i_13] [(unsigned short)18] [i_15]))))));
                        arr_55 [(unsigned char)7] [i_13] [i_15] [i_16] = ((/* implicit */unsigned short) (((-(((/* implicit */int) arr_29 [i_13])))) == (((/* implicit */int) ((unsigned char) arr_24 [(unsigned char)7] [i_15] [i_14])))));
                    }
                } 
            } 
        } 
        arr_56 [i_13] [i_13] = ((/* implicit */unsigned char) (~(((/* implicit */int) ((unsigned short) arr_7 [i_13])))));
    }
    /* LoopSeq 2 */
    for (unsigned char i_17 = 2; i_17 < 13; i_17 += 3) 
    {
        var_33 = ((/* implicit */signed char) max((var_33), (((signed char) ((unsigned short) max((((/* implicit */unsigned char) arr_58 [i_17] [i_17 - 1])), (var_8)))))));
        var_34 = ((unsigned short) ((((/* implicit */int) max((((/* implicit */unsigned short) arr_38 [(unsigned char)19] [i_17 - 1] [i_17 - 1] [i_17 - 1])), (var_4)))) << ((((+(((/* implicit */int) var_7)))) - (76)))));
    }
    for (signed char i_18 = 0; i_18 < 13; i_18 += 3) 
    {
        var_35 = ((/* implicit */unsigned char) max((((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_29 [i_18])) ? (((/* implicit */int) arr_53 [i_18] [(signed char)10] [i_18])) : (((/* implicit */int) var_7)))) == (((/* implicit */int) arr_48 [i_18]))))), (max((min(((unsigned short)17757), (((/* implicit */unsigned short) var_3)))), (((/* implicit */unsigned short) arr_9 [i_18] [i_18]))))));
        arr_63 [i_18] = ((unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) var_12)), (var_8)))) ? (((/* implicit */int) max((((/* implicit */unsigned short) arr_4 [i_18] [i_18] [i_18])), ((unsigned short)65535)))) : (((/* implicit */int) arr_10 [(unsigned short)21]))));
    }
    var_36 = ((/* implicit */unsigned char) min(((+(((/* implicit */int) var_4)))), ((-(((/* implicit */int) ((signed char) var_8)))))));
}
