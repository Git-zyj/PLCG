/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121379
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121379 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121379
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
    /* LoopSeq 1 */
    for (short i_0 = 2; i_0 < 17; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 19; i_2 += 2) 
            {
                {
                    arr_8 [i_0] [i_1] [i_2] = ((/* implicit */short) 2038752044);
                    var_17 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_13)), (max((var_14), (((/* implicit */unsigned int) arr_0 [i_0 + 1] [i_0]))))))) ? (((((/* implicit */_Bool) arr_7 [i_1])) ? (min((((/* implicit */int) arr_1 [i_2] [i_0 - 1])), (2038752044))) : (-2038752047))) : (min((((/* implicit */int) var_2)), (-2038752044)))));
                    arr_9 [i_0 - 1] = ((/* implicit */_Bool) (+(2038752024)));
                    arr_10 [i_1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned char)98))))), (var_6)))) ? (((/* implicit */int) ((unsigned char) arr_5 [i_0 + 1] [i_0 + 1] [i_0 - 2]))) : (((((/* implicit */_Bool) arr_1 [i_0 + 2] [i_0 + 2])) ? (((/* implicit */int) arr_1 [i_0 + 1] [i_0 + 2])) : (-2038752042)))));
                }
            } 
        } 
        /* LoopSeq 3 */
        for (unsigned short i_3 = 2; i_3 < 18; i_3 += 3) 
        {
            var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_7 [i_0])) ? ((+((+(((/* implicit */int) arr_0 [i_0] [i_3])))))) : ((-(min((2038752043), (((/* implicit */int) (unsigned char)99))))))));
            var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) max((min((((/* implicit */int) var_0)), (((((/* implicit */_Bool) -2038752044)) ? (((/* implicit */int) (unsigned short)56155)) : (((/* implicit */int) arr_1 [i_0] [i_0])))))), (min(((~(((/* implicit */int) var_3)))), (((((/* implicit */_Bool) 2038752054)) ? (((/* implicit */int) arr_11 [i_0 - 2])) : (-2038752042))))))))));
            var_20 = ((/* implicit */short) (unsigned char)176);
        }
        for (unsigned short i_4 = 0; i_4 < 19; i_4 += 3) 
        {
            var_21 = min((((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)255))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_11))))) : (2038752058))), (((((/* implicit */_Bool) (+(((/* implicit */int) arr_3 [i_0]))))) ? (((/* implicit */int) var_9)) : (((var_0) ? (((/* implicit */int) var_9)) : (2038752041))))));
            var_22 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_2 [i_0] [(unsigned short)9])) / (((/* implicit */int) arr_13 [i_0] [i_4]))));
            /* LoopSeq 2 */
            for (unsigned long long int i_5 = 4; i_5 < 16; i_5 += 2) 
            {
                /* LoopSeq 2 */
                for (unsigned long long int i_6 = 1; i_6 < 17; i_6 += 3) /* same iter space */
                {
                    var_23 -= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) max((((/* implicit */int) arr_5 [i_0] [(_Bool)1] [i_6 - 1])), (-2038752024)))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_0] [i_5] [i_6])))))) : (9223372036854775807LL))) + (((/* implicit */long long int) ((/* implicit */int) arr_21 [i_0])))));
                    var_24 = var_2;
                    var_25 = (-(((/* implicit */int) max(((unsigned short)56181), (arr_11 [i_0 + 1])))));
                    var_26 = ((/* implicit */short) ((((/* implicit */_Bool) arr_17 [i_4])) ? (((/* implicit */int) arr_19 [i_5] [i_5 - 4] [i_4] [i_5 - 4])) : (min(((-(var_12))), (((/* implicit */int) min((arr_20 [i_4] [(unsigned short)10] [i_5] [i_6]), (((/* implicit */unsigned short) var_2)))))))));
                    var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(max((((/* implicit */unsigned long long int) 2038752044)), (8766659929312155781ULL)))))) ? (((/* implicit */int) ((var_7) < (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) var_0)), ((unsigned short)56155)))))))) : (max((2038752042), (((/* implicit */int) ((unsigned char) (unsigned char)255)))))));
                }
                for (unsigned long long int i_7 = 1; i_7 < 17; i_7 += 3) /* same iter space */
                {
                    var_28 += ((/* implicit */unsigned short) (-((-(min((var_1), (((/* implicit */long long int) arr_12 [i_4] [i_4] [i_0]))))))));
                    var_29 = ((/* implicit */unsigned long long int) min((var_29), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((int) arr_3 [i_7 + 1]))) ? (min((((/* implicit */unsigned int) ((((/* implicit */_Bool) 2038752045)) ? (((/* implicit */int) (unsigned char)29)) : (((/* implicit */int) arr_12 [i_0] [i_0] [i_5]))))), (arr_4 [i_0 - 2]))) : (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */short) (_Bool)1)), (arr_13 [i_0 + 1] [i_5 - 3]))))))))));
                    arr_27 [i_4] [i_7 + 2] [i_5] [9LL] [i_4] = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_23 [i_0] [i_0 - 2])) ? (arr_23 [i_0 + 1] [i_5 + 2]) : (((/* implicit */long long int) arr_16 [i_7 + 1] [i_4] [i_4]))))));
                    var_30 = ((/* implicit */long long int) ((2038752044) * (((/* implicit */int) var_0))));
                }
                var_31 = ((/* implicit */unsigned long long int) arr_4 [i_4]);
                var_32 -= ((/* implicit */long long int) (!((!(((/* implicit */_Bool) arr_18 [i_5]))))));
                arr_28 [i_0 + 1] [i_4] [i_0] [i_4] = ((/* implicit */long long int) var_13);
            }
            for (long long int i_8 = 3; i_8 < 17; i_8 += 3) 
            {
                var_33 &= ((/* implicit */short) var_3);
                var_34 &= ((/* implicit */_Bool) arr_31 [i_0] [i_0] [i_0] [i_0]);
            }
        }
        /* vectorizable */
        for (unsigned int i_9 = 2; i_9 < 17; i_9 += 3) 
        {
            var_35 = ((/* implicit */unsigned char) var_12);
            /* LoopNest 2 */
            for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
            {
                for (unsigned short i_11 = 0; i_11 < 19; i_11 += 3) 
                {
                    {
                        var_36 = ((/* implicit */short) ((((/* implicit */_Bool) arr_26 [i_10] [i_10 - 1] [0U] [i_10])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)35930))) : (arr_4 [i_11])))) : (((((/* implicit */_Bool) arr_37 [i_11] [(_Bool)1] [i_9] [i_11])) ? (((/* implicit */long long int) ((/* implicit */int) var_16))) : (arr_31 [i_10] [i_10] [i_9 - 2] [i_10])))));
                        var_37 = ((var_0) ? (2038752044) : (((/* implicit */int) arr_14 [i_9 - 1] [i_10] [i_9 + 1])));
                        var_38 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_25 [i_11] [(unsigned short)8] [i_9] [i_0 + 1])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_25 [i_0] [i_9] [i_10 - 1] [i_11]))));
                    }
                } 
            } 
        }
        /* LoopNest 2 */
        for (int i_12 = 0; i_12 < 19; i_12 += 4) 
        {
            for (int i_13 = 0; i_13 < 19; i_13 += 4) 
            {
                {
                    arr_47 [i_13] [i_13] [i_12] [12U] = (unsigned char)121;
                    arr_48 [i_0] [i_13] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_19 [i_0 - 2] [i_12] [i_12] [i_0]))))) ? (((unsigned int) var_11)) : (((/* implicit */unsigned int) (+(2038752026))))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))) : (((((((/* implicit */_Bool) 2038752018)) && (((/* implicit */_Bool) var_1)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_25 [i_13] [i_13] [i_12] [i_0]))) : ((-(var_8))))));
                }
            } 
        } 
        var_39 = ((/* implicit */short) arr_31 [i_0] [i_0] [i_0] [i_0]);
    }
    /* LoopNest 2 */
    for (long long int i_14 = 0; i_14 < 15; i_14 += 4) 
    {
        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
        {
            {
                var_40 = ((/* implicit */int) ((((/* implicit */_Bool) ((((int) -1)) | (((((/* implicit */_Bool) var_13)) ? (2038752043) : (((/* implicit */int) var_16))))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(arr_30 [i_15]))))) : (arr_23 [i_14] [i_15])));
                arr_54 [i_15] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) (unsigned char)50)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)9381))) : (var_8))), (((/* implicit */long long int) max(((unsigned short)65535), ((unsigned short)9393))))))) ? (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_22 [i_14] [i_15] [i_15] [17LL])), (var_7)))) ? (max((((/* implicit */long long int) arr_49 [i_15])), (arr_6 [i_15] [i_14]))) : (((/* implicit */long long int) ((/* implicit */int) var_6))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (~(arr_4 [i_15])))) ? (((int) -2038752026)) : (min((2147483647), (978931693))))))));
            }
        } 
    } 
    var_41 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)56155))) : (((unsigned long long int) var_2))))));
}
