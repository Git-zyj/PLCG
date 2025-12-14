/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115085
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115085 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115085
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
    var_14 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_10)) ? (min((((/* implicit */long long int) min(((unsigned char)222), ((unsigned char)222)))), (min((((/* implicit */long long int) var_6)), (var_12))))) : (((((/* implicit */_Bool) ((unsigned short) 4294967292U))) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 4294967292U))))))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        /* LoopSeq 4 */
        for (long long int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            var_15 -= var_6;
            /* LoopNest 2 */
            for (unsigned char i_2 = 3; i_2 < 23; i_2 += 1) 
            {
                for (long long int i_3 = 0; i_3 < 24; i_3 += 2) 
                {
                    {
                        arr_11 [i_0] [i_3] [(unsigned short)10] |= ((/* implicit */unsigned char) ((4U) <= (4294967268U)));
                        var_16 += ((/* implicit */unsigned char) arr_8 [i_1] [i_2 - 2] [i_2 + 1] [i_3] [i_3]);
                        var_17 = ((/* implicit */unsigned char) var_12);
                        /* LoopSeq 1 */
                        for (long long int i_4 = 0; i_4 < 24; i_4 += 3) 
                        {
                            var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((long long int) 4294967286U))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned short)26300)) : (((/* implicit */int) arr_6 [i_4] [i_1] [i_1] [i_1])))) : (((/* implicit */int) arr_3 [(unsigned char)1] [(unsigned char)1] [i_0]))));
                            var_19 -= ((/* implicit */unsigned int) (+(((/* implicit */int) arr_13 [i_2] [i_1] [i_2 - 2] [i_3] [i_3]))));
                        }
                    }
                } 
            } 
            arr_15 [i_1] = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_13 [i_1] [i_1] [i_0] [i_0] [i_1]))));
            var_20 = ((unsigned char) arr_0 [i_1]);
        }
        for (unsigned int i_5 = 0; i_5 < 24; i_5 += 1) /* same iter space */
        {
            var_21 = ((/* implicit */long long int) max((var_21), (((arr_1 [i_0]) + (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_5]))) ^ (4294967292U))))))));
            var_22 |= ((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned short)39235))));
        }
        for (unsigned int i_6 = 0; i_6 < 24; i_6 += 1) /* same iter space */
        {
            var_23 = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) -3005914598946693944LL))))) >= (((/* implicit */int) ((unsigned short) var_6)))));
            /* LoopSeq 1 */
            for (unsigned short i_7 = 2; i_7 < 21; i_7 += 2) 
            {
                var_24 += ((/* implicit */unsigned int) ((unsigned short) arr_3 [i_7 - 1] [i_7 - 1] [i_0]));
                var_25 = ((/* implicit */unsigned short) ((unsigned int) arr_21 [i_6] [i_7 + 3] [i_6]));
                arr_24 [i_7] [i_6] [i_6] [i_7 + 3] = (~(4294967288U));
                var_26 |= (+(arr_8 [i_0] [i_0] [i_7 + 3] [i_7 - 1] [i_7 - 1]));
            }
            /* LoopNest 2 */
            for (long long int i_8 = 2; i_8 < 22; i_8 += 1) 
            {
                for (unsigned char i_9 = 2; i_9 < 23; i_9 += 3) 
                {
                    {
                        var_27 = ((/* implicit */long long int) max((var_27), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_2 [i_8 + 1])))))));
                        var_28 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_26 [i_6] [i_6] [i_6])) ? (((/* implicit */int) arr_26 [i_6] [i_6] [i_0])) : (((/* implicit */int) arr_26 [i_6] [i_9] [i_8 - 1]))));
                    }
                } 
            } 
            arr_29 [i_6] [i_6] = ((/* implicit */long long int) (-(((/* implicit */int) var_0))));
            var_29 = ((unsigned int) arr_1 [i_6]);
        }
        for (unsigned int i_10 = 0; i_10 < 24; i_10 += 1) /* same iter space */
        {
            arr_32 [i_0] [i_10] |= ((/* implicit */unsigned char) ((((/* implicit */int) arr_14 [i_10] [i_10] [10U] [(unsigned short)8] [(unsigned char)18] [i_10])) > (((/* implicit */int) ((var_12) != (((/* implicit */long long int) ((/* implicit */int) arr_30 [i_0]))))))));
            arr_33 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */long long int) var_10)) | (var_12)));
        }
        var_30 -= ((/* implicit */unsigned int) arr_2 [i_0]);
        arr_34 [i_0] = ((((/* implicit */_Bool) (unsigned char)127)) ? (8589410304LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)93))));
    }
    for (long long int i_11 = 1; i_11 < 10; i_11 += 4) 
    {
        var_31 = ((/* implicit */unsigned short) (((~(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_6))) == (arr_2 [4U])))))) | (((/* implicit */int) ((unsigned short) 1084853195U)))));
        var_32 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_11))));
        var_33 = ((unsigned char) min((8872314131595166246LL), (((/* implicit */long long int) (unsigned short)36896))));
        /* LoopNest 3 */
        for (unsigned char i_12 = 0; i_12 < 11; i_12 += 2) 
        {
            for (unsigned short i_13 = 0; i_13 < 11; i_13 += 3) 
            {
                for (unsigned char i_14 = 0; i_14 < 11; i_14 += 2) 
                {
                    {
                        var_34 = ((/* implicit */unsigned int) var_12);
                        var_35 = ((long long int) ((((/* implicit */int) arr_25 [i_11 + 1] [i_11 - 1] [i_11])) | (((/* implicit */int) (unsigned short)65535))));
                        /* LoopSeq 1 */
                        for (unsigned char i_15 = 1; i_15 < 9; i_15 += 3) 
                        {
                            var_36 = ((/* implicit */long long int) (unsigned char)131);
                            var_37 += ((/* implicit */unsigned char) max((((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_40 [(unsigned char)0]))) * (1123092469U)))) ? (((/* implicit */long long int) ((/* implicit */int) max(((unsigned short)51303), (arr_45 [i_11] [i_11] [i_13] [i_13] [i_11] [i_15 + 1]))))) : (((((/* implicit */_Bool) var_9)) ? (arr_19 [i_14] [i_12]) : (((/* implicit */long long int) ((/* implicit */int) arr_26 [i_12] [i_15] [i_12]))))))), (((/* implicit */long long int) ((4294967292U) <= (4294967288U))))));
                        }
                    }
                } 
            } 
        } 
    }
    for (unsigned short i_16 = 0; i_16 < 16; i_16 += 1) 
    {
        var_38 = ((/* implicit */unsigned short) max((var_38), (((/* implicit */unsigned short) var_1))));
        arr_50 [i_16] |= arr_5 [i_16] [i_16] [i_16];
        arr_51 [i_16] [i_16] = ((/* implicit */unsigned char) (~(((long long int) ((var_11) << (((((/* implicit */int) var_6)) - (44))))))));
    }
    var_39 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) 4294967286U)) ? (((/* implicit */int) (unsigned short)65524)) : (((/* implicit */int) (unsigned char)93))))), (((((var_7) + (9223372036854775807LL))) << (((var_12) + (8114704086477623594LL))))))))));
}
