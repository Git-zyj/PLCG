/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125500
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125500 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125500
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [i_0]))))) ? (min((arr_0 [i_0]), (((/* implicit */int) ((signed char) var_13))))) : (((arr_0 [i_0]) / ((+(((/* implicit */int) var_11)))))));
        var_19 -= ((/* implicit */signed char) arr_0 [i_0]);
    }
    for (unsigned short i_1 = 0; i_1 < 23; i_1 += 1) 
    {
        arr_5 [i_1] [i_1] = ((((/* implicit */_Bool) (+(arr_4 [i_1] [i_1])))) || (((/* implicit */_Bool) (~(((/* implicit */int) var_10))))));
        var_20 = ((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) ((unsigned short) arr_3 [i_1])))))));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 16; i_2 += 3) 
    {
        var_21 = ((/* implicit */signed char) arr_4 [i_2] [i_2]);
        /* LoopNest 3 */
        for (unsigned char i_3 = 0; i_3 < 16; i_3 += 4) 
        {
            for (unsigned short i_4 = 3; i_4 < 13; i_4 += 1) 
            {
                for (unsigned char i_5 = 1; i_5 < 13; i_5 += 3) 
                {
                    {
                        /* LoopSeq 2 */
                        for (int i_6 = 1; i_6 < 13; i_6 += 1) /* same iter space */
                        {
                            arr_19 [i_4] [i_4] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_13 [i_3] [i_3]) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))) ? (((/* implicit */int) var_7)) : (((((/* implicit */_Bool) arr_11 [i_2] [i_2] [i_2])) ? (arr_18 [i_6] [i_5] [i_4] [i_4] [i_2] [i_2]) : (((/* implicit */int) (signed char)94))))));
                            var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_18 [i_3] [i_3] [i_4] [i_3] [i_3] [i_4 + 1])) ? (((/* implicit */int) arr_14 [i_3] [i_3] [i_3] [i_3])) : (((/* implicit */int) arr_14 [i_4] [i_4] [i_4] [i_4 - 1]))));
                        }
                        for (int i_7 = 1; i_7 < 13; i_7 += 1) /* same iter space */
                        {
                            var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) var_15))));
                            var_24 = ((((/* implicit */_Bool) arr_16 [i_7] [i_7 + 2] [i_7 - 1] [i_4] [i_7 - 1])) ? (((/* implicit */int) arr_16 [i_7] [i_7 - 1] [i_7 + 2] [i_4] [i_7 - 1])) : (((/* implicit */int) arr_16 [i_7] [i_7 + 1] [i_7 + 2] [i_4] [i_7])));
                        }
                        var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_11)) ? (18351695540818834058ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_3] [i_3] [i_4] [i_4 + 3] [i_4 + 1])))));
                        var_26 = var_9;
                    }
                } 
            } 
        } 
    }
    for (short i_8 = 0; i_8 < 11; i_8 += 1) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned int i_9 = 0; i_9 < 11; i_9 += 1) /* same iter space */
        {
            arr_28 [i_9] = ((/* implicit */unsigned char) 3033564694U);
            /* LoopNest 3 */
            for (unsigned short i_10 = 1; i_10 < 10; i_10 += 3) 
            {
                for (int i_11 = 0; i_11 < 11; i_11 += 4) 
                {
                    for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) 
                    {
                        {
                            var_27 = ((/* implicit */unsigned int) var_5);
                            var_28 = ((/* implicit */int) min((var_28), (arr_0 [i_12 - 1])));
                        }
                    } 
                } 
            } 
            /* LoopNest 2 */
            for (unsigned int i_13 = 0; i_13 < 11; i_13 += 3) 
            {
                for (signed char i_14 = 4; i_14 < 7; i_14 += 2) 
                {
                    {
                        var_29 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_25 [i_14 - 1] [i_14 + 3] [i_14 - 3])) ? ((+(((/* implicit */int) arr_35 [i_8] [i_8] [i_8])))) : (arr_0 [i_8])));
                        arr_43 [i_8] [i_13] [i_8] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)48274))) >= (((long long int) arr_20 [i_14] [i_13] [i_9] [i_8] [i_8]))));
                        var_30 += ((/* implicit */long long int) var_16);
                        var_31 = ((/* implicit */unsigned int) (unsigned short)24);
                    }
                } 
            } 
        }
        /* vectorizable */
        for (unsigned int i_15 = 0; i_15 < 11; i_15 += 1) /* same iter space */
        {
            /* LoopSeq 1 */
            for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
            {
                var_32 = ((((long long int) var_16)) > (((/* implicit */long long int) ((/* implicit */int) arr_21 [i_8] [i_15] [i_16] [i_15] [i_16]))));
                var_33 = ((unsigned short) (unsigned short)65512);
            }
            /* LoopSeq 3 */
            for (unsigned int i_17 = 0; i_17 < 11; i_17 += 3) 
            {
                var_34 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((signed char) 3033564694U))) ? (((((/* implicit */int) var_10)) * (((/* implicit */int) var_14)))) : (((/* implicit */int) arr_16 [i_8] [i_15] [i_17] [12] [12]))));
                var_35 = ((/* implicit */unsigned short) max((var_35), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_42 [i_8] [i_8] [i_8] [i_8] [i_8])) ? (((/* implicit */int) var_16)) : (((/* implicit */int) (short)-9917)))))));
                var_36 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_12 [(unsigned char)12] [i_15] [(unsigned char)12]) + (((/* implicit */unsigned int) ((/* implicit */int) var_11)))))) ? (((((/* implicit */_Bool) (unsigned short)65529)) ? (((/* implicit */long long int) arr_29 [i_15] [i_8])) : (arr_8 [i_17]))) : (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_8] [14LL] [i_15] [14LL] [i_8])))));
                var_37 = ((/* implicit */_Bool) max((var_37), (((/* implicit */_Bool) ((arr_29 [i_17] [i_8]) ^ (((/* implicit */unsigned int) (-(((/* implicit */int) var_10))))))))));
            }
            for (unsigned int i_18 = 0; i_18 < 11; i_18 += 4) /* same iter space */
            {
                /* LoopSeq 1 */
                for (unsigned int i_19 = 0; i_19 < 11; i_19 += 4) 
                {
                    arr_57 [i_8] = ((/* implicit */_Bool) (+(((/* implicit */int) arr_7 [i_8]))));
                    arr_58 [i_8] [i_15] [i_8] = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) 10531961218745135290ULL)) ? (arr_45 [i_18] [i_15]) : (arr_4 [i_15] [i_8])))));
                }
                var_38 = ((/* implicit */long long int) 4003547484U);
            }
            for (unsigned int i_20 = 0; i_20 < 11; i_20 += 4) /* same iter space */
            {
                var_39 = ((/* implicit */int) min((var_39), (((/* implicit */int) var_17))));
                var_40 += ((/* implicit */short) ((unsigned int) var_2));
                arr_63 [i_8] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_51 [i_20])) ? (arr_51 [i_8]) : (arr_51 [i_20])));
                /* LoopNest 2 */
                for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
                {
                    for (signed char i_22 = 0; i_22 < 11; i_22 += 4) 
                    {
                        {
                            arr_70 [i_8] [i_15] [i_8] [i_21] [i_22] &= ((/* implicit */unsigned char) arr_25 [i_8] [i_8] [i_15]);
                            var_41 = ((/* implicit */unsigned short) arr_40 [i_8] [i_15] [i_15] [i_8]);
                        }
                    } 
                } 
            }
        }
        var_42 = (+(((((/* implicit */_Bool) ((arr_35 [i_8] [i_8] [i_8]) ? (((/* implicit */int) arr_21 [i_8] [i_8] [i_8] [i_8] [i_8])) : (((/* implicit */int) arr_35 [i_8] [i_8] [i_8]))))) ? (((/* implicit */int) arr_31 [i_8] [i_8] [i_8] [i_8])) : ((+(((/* implicit */int) var_0)))))));
        var_43 = ((/* implicit */unsigned short) 854493133U);
    }
    var_44 = ((/* implicit */_Bool) min((var_44), (((/* implicit */_Bool) ((signed char) 7914782854964416339ULL)))));
    var_45 ^= ((/* implicit */short) var_13);
}
