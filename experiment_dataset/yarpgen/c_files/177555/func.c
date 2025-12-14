/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177555
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177555 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177555
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
    var_12 = ((/* implicit */unsigned int) (-(((/* implicit */int) var_9))));
    /* LoopSeq 4 */
    for (int i_0 = 0; i_0 < 11; i_0 += 4) /* same iter space */
    {
        var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((((/* implicit */int) var_11)) + (2147483647))) >> (((((/* implicit */int) var_0)) - (16764))))) << (((((/* implicit */int) min((var_3), (((/* implicit */unsigned char) arr_1 [i_0] [i_0]))))) - (57)))))) ? (min((((((/* implicit */_Bool) arr_0 [(unsigned char)3])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_5)))), (((/* implicit */int) arr_0 [i_0])))) : (min((((/* implicit */int) var_0)), ((~(((/* implicit */int) arr_0 [4U]))))))));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) min(((unsigned short)49936), (arr_0 [i_0])))) >> (((((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) var_3)) : ((-2147483647 - 1)))) - (145)))))) ? (((var_5) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned short)15599)))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0])) % (((/* implicit */int) var_0))))))))));
    }
    for (int i_1 = 0; i_1 < 11; i_1 += 4) /* same iter space */
    {
        arr_5 [i_1] = ((/* implicit */int) var_2);
        var_14 = ((/* implicit */unsigned int) ((int) ((((/* implicit */int) ((((/* implicit */_Bool) (signed char)9)) || (var_5)))) >> (((min((1602884709), (((/* implicit */int) var_4)))) - (99))))));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 11; i_2 += 4) /* same iter space */
    {
        arr_9 [i_2] = (-(((/* implicit */int) arr_7 [i_2])));
        /* LoopSeq 2 */
        for (short i_3 = 0; i_3 < 11; i_3 += 3) /* same iter space */
        {
            arr_13 [i_3] [i_3] [i_3] = ((/* implicit */signed char) var_8);
            arr_14 [i_2] [i_3] = ((/* implicit */int) ((((((/* implicit */int) var_3)) >= (2060021728))) && (((/* implicit */_Bool) var_7))));
        }
        for (short i_4 = 0; i_4 < 11; i_4 += 3) /* same iter space */
        {
            /* LoopSeq 2 */
            for (unsigned int i_5 = 0; i_5 < 11; i_5 += 4) /* same iter space */
            {
                arr_19 [i_2] [i_4] [i_4] [4] = ((/* implicit */short) var_5);
                arr_20 [i_4] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((2147483647) ^ (((/* implicit */int) var_6))))) ? (((arr_3 [i_2]) >> (((/* implicit */int) var_5)))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_15 [i_2] [i_4] [(unsigned short)2])) : (((/* implicit */int) var_3))))));
                var_15 = ((/* implicit */short) arr_6 [i_2]);
            }
            for (unsigned int i_6 = 0; i_6 < 11; i_6 += 4) /* same iter space */
            {
                var_16 = ((/* implicit */int) arr_17 [i_4]);
                /* LoopNest 2 */
                for (signed char i_7 = 0; i_7 < 11; i_7 += 4) 
                {
                    for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) 
                    {
                        {
                            arr_31 [i_4] [4] = ((/* implicit */int) ((((((/* implicit */int) var_1)) << (((((/* implicit */int) var_9)) - (23522))))) != (((/* implicit */int) var_10))));
                            var_17 += ((/* implicit */short) ((((((/* implicit */int) arr_29 [i_8] [i_8 + 1] [i_8] [(short)5] [i_8] [i_8] [i_8 + 1])) + (2147483647))) >> (((((/* implicit */int) arr_29 [i_8] [i_8 + 1] [i_8] [i_8] [(short)4] [i_8] [i_8 + 1])) + (8341)))));
                            var_18 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_27 [i_8 + 1] [(signed char)10] [i_8 + 1] [i_8 + 1] [i_8 + 1]))));
                        }
                    } 
                } 
                var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_4 [i_6])) ? (((/* implicit */int) var_11)) : (arr_4 [i_2])));
                var_20 = ((/* implicit */signed char) ((((/* implicit */int) arr_0 [i_2])) | (((/* implicit */int) arr_22 [i_2] [i_4] [i_6]))));
                var_21 = ((/* implicit */short) arr_30 [(unsigned short)1] [i_2] [i_4] [i_4] [i_6]);
            }
            /* LoopSeq 3 */
            for (signed char i_9 = 0; i_9 < 11; i_9 += 4) 
            {
                var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_22 [i_2] [i_4] [i_9])) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_23 [i_2] [i_2] [i_4] [i_2]))))) : (arr_32 [i_4])));
                /* LoopNest 2 */
                for (unsigned char i_10 = 2; i_10 < 10; i_10 += 2) 
                {
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        {
                            arr_44 [i_2] [i_4] [i_4] [(signed char)3] [(signed char)5] [i_11] [i_11] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_16 [i_4])) + (((/* implicit */int) var_8))))) ? (((((/* implicit */int) var_2)) / (((/* implicit */int) arr_12 [i_4] [i_4] [(short)8])))) : (((/* implicit */int) var_11))));
                            arr_45 [i_2] [i_2] [i_2] [i_4] [i_2] = (~(((/* implicit */int) arr_26 [i_10 + 1] [i_10 - 2] [(_Bool)1] [i_10 + 1])));
                            var_23 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_3))))));
                            arr_46 [i_4] [i_10 + 1] [i_10 - 2] = ((/* implicit */signed char) (!(var_5)));
                            var_24 += ((/* implicit */signed char) var_5);
                        }
                    } 
                } 
            }
            for (signed char i_12 = 0; i_12 < 11; i_12 += 3) 
            {
                arr_50 [i_4] [i_4] [i_12] [i_4] = ((/* implicit */signed char) ((((/* implicit */unsigned int) 2096545750)) + (arr_49 [i_4])));
                var_25 = ((/* implicit */int) ((((unsigned int) (signed char)55)) <= (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)51145)) ^ (((/* implicit */int) var_10)))))));
                arr_51 [i_4] [i_4] [i_4] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_2]))));
            }
            for (signed char i_13 = 0; i_13 < 11; i_13 += 3) 
            {
                arr_54 [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_29 [i_2] [(signed char)6] [i_2] [i_2] [i_2] [i_2] [i_2])) && (((/* implicit */_Bool) arr_11 [i_2] [i_4] [i_4]))));
                var_26 = ((/* implicit */short) ((arr_6 [i_2]) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_28 [i_2] [6U] [i_13] [i_4])) : (((/* implicit */int) var_1)))) : ((-(((/* implicit */int) var_11))))));
                arr_55 [i_2] [(unsigned short)3] [i_2] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_4] [i_4] [i_4])) ? (arr_52 [i_2] [i_4] [i_13] [i_13]) : (((/* implicit */int) arr_27 [i_2] [i_2] [i_2] [i_2] [i_2]))))) ? ((-(((/* implicit */int) arr_12 [i_4] [i_4] [(short)4])))) : (((/* implicit */int) (unsigned short)15624))));
            }
            var_27 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)51145))) : (arr_48 [(unsigned char)6] [i_4] [i_4] [i_4])))) ? (((/* implicit */int) ((((/* implicit */int) var_11)) <= (((/* implicit */int) var_5))))) : ((-(((/* implicit */int) arr_34 [i_2] [i_2] [i_4] [i_2])))));
        }
    }
    /* vectorizable */
    for (int i_14 = 0; i_14 < 11; i_14 += 4) /* same iter space */
    {
        /* LoopNest 3 */
        for (signed char i_15 = 0; i_15 < 11; i_15 += 1) 
        {
            for (signed char i_16 = 0; i_16 < 11; i_16 += 4) 
            {
                for (unsigned short i_17 = 0; i_17 < 11; i_17 += 3) 
                {
                    {
                        var_28 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_16]))));
                        arr_67 [i_14] [i_15] [i_14] [i_16] [i_15] = ((((/* implicit */int) ((((/* implicit */int) var_1)) != (((/* implicit */int) arr_42 [i_14] [i_15] [i_15] [i_17] [i_14] [i_14] [(short)1]))))) % (((/* implicit */int) var_3)));
                        var_29 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)33549)) ? (((/* implicit */int) (unsigned short)49920)) : (((/* implicit */int) (unsigned short)51145))));
                    }
                } 
            } 
        } 
        arr_68 [i_14] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 3743385478U)) ? (((/* implicit */int) arr_47 [2] [i_14])) : (((/* implicit */int) var_10))));
    }
}
