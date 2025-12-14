/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182193
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182193 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182193
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
    for (int i_0 = 3; i_0 < 9; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 8; i_1 += 2) 
        {
            {
                var_10 = ((/* implicit */signed char) max((var_10), (((/* implicit */signed char) arr_2 [i_0]))));
                arr_5 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 1277229849U)) ? (2636816022U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)221)))));
                var_11 = (!(((/* implicit */_Bool) (+(var_0)))));
                var_12 *= ((/* implicit */signed char) max((3017737447U), (1277229849U)));
                var_13 = ((unsigned short) ((_Bool) var_9));
            }
        } 
    } 
    /* LoopSeq 4 */
    for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 2) 
    {
        /* LoopSeq 3 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            arr_10 [i_2] [i_2] = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) var_9)), (((((/* implicit */_Bool) ((((/* implicit */int) arr_8 [(short)12] [i_3] [i_2])) | (((/* implicit */int) var_2))))) ? (((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (1807482951U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)12))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_2] [i_2] [i_3])))))));
            var_14 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) (~(((/* implicit */int) var_6))))) ? ((-(((/* implicit */int) arr_6 [15U])))) : (((/* implicit */int) ((3017737452U) != (((/* implicit */unsigned int) ((/* implicit */int) (signed char)14)))))))), (((/* implicit */int) arr_8 [i_2] [i_2] [i_2]))));
            /* LoopNest 2 */
            for (signed char i_4 = 0; i_4 < 19; i_4 += 4) 
            {
                for (short i_5 = 0; i_5 < 19; i_5 += 4) 
                {
                    {
                        var_15 -= ((/* implicit */unsigned int) arr_12 [i_2] [i_3] [i_4] [i_5]);
                        var_16 = ((/* implicit */signed char) max((arr_11 [i_2] [i_2] [i_5]), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_2)) ? (arr_7 [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) var_8))))) == (((/* implicit */unsigned int) ((/* implicit */int) var_8))))))));
                        var_17 = ((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned short) arr_6 [i_2]))) >= ((-(min((((/* implicit */int) var_8)), (arr_15 [i_2] [i_2] [i_4] [i_4] [i_5])))))));
                    }
                } 
            } 
        }
        /* vectorizable */
        for (signed char i_6 = 1; i_6 < 18; i_6 += 3) 
        {
            var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)0)) ? (-863372545) : (((/* implicit */int) (unsigned short)65535))));
            var_19 = ((/* implicit */short) ((((/* implicit */unsigned long long int) arr_15 [i_2] [i_6 + 1] [i_6 - 1] [i_6 + 1] [i_6 + 1])) & (var_3)));
        }
        for (unsigned char i_7 = 2; i_7 < 17; i_7 += 2) 
        {
            /* LoopSeq 2 */
            for (unsigned char i_8 = 0; i_8 < 19; i_8 += 2) /* same iter space */
            {
                var_20 -= ((/* implicit */unsigned short) ((((arr_18 [i_7] [i_7] [i_7 - 2]) | (arr_18 [i_7] [i_7] [i_7 - 2]))) % (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_25 [i_2] [i_7] [i_8] [i_8]))))), (arr_18 [i_2] [i_7 - 2] [i_8])))));
                arr_26 [i_2] [i_8] = ((/* implicit */int) ((((/* implicit */int) var_9)) != (((/* implicit */int) var_5))));
                arr_27 [(unsigned char)5] [i_7] = ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) arr_14 [i_2] [i_2] [i_8])))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_12 [i_2] [i_7] [i_7 + 1] [i_8]))))) ? (((arr_25 [i_2] [i_2] [i_7 - 1] [i_8]) ? (((/* implicit */int) arr_25 [i_7] [i_7] [i_7 + 1] [i_7])) : (((/* implicit */int) arr_25 [i_2] [i_7] [i_7 + 2] [i_8])))) : (((/* implicit */int) arr_6 [2U]))));
            }
            for (unsigned char i_9 = 0; i_9 < 19; i_9 += 2) /* same iter space */
            {
                var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) (+(((/* implicit */int) (_Bool)0)))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (int i_10 = 0; i_10 < 19; i_10 += 2) 
                {
                    var_22 = ((/* implicit */signed char) (((-2147483647 - 1)) < (var_0)));
                    arr_33 [i_2] [i_7] [i_9] [i_10] = ((/* implicit */int) (((!(((/* implicit */_Bool) var_9)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_32 [i_2] [i_7 - 2] [i_9] [i_10])) ? (((/* implicit */int) arr_12 [i_2] [i_2] [i_9] [i_10])) : (((/* implicit */int) var_2))))) : ((-(var_4)))));
                }
            }
            var_23 = ((/* implicit */unsigned long long int) arr_23 [i_2] [i_2]);
        }
        arr_34 [i_2] [i_2] = ((((/* implicit */_Bool) (signed char)39)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)33)));
    }
    for (long long int i_11 = 0; i_11 < 13; i_11 += 1) 
    {
        var_24 = ((/* implicit */long long int) (-((~(((((/* implicit */int) (signed char)-10)) | (((/* implicit */int) var_2))))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned short i_12 = 0; i_12 < 13; i_12 += 2) 
        {
            /* LoopSeq 2 */
            for (int i_13 = 0; i_13 < 13; i_13 += 3) /* same iter space */
            {
                arr_43 [i_13] [i_13] [i_11] [i_11] = ((/* implicit */_Bool) (unsigned short)65531);
                var_25 -= ((/* implicit */unsigned short) ((unsigned long long int) (signed char)-66));
                var_26 = ((/* implicit */short) ((arr_15 [i_11] [i_12] [i_12] [i_12] [i_13]) != (arr_15 [i_11] [i_12] [i_13] [i_11] [i_12])));
            }
            for (int i_14 = 0; i_14 < 13; i_14 += 3) /* same iter space */
            {
                /* LoopNest 2 */
                for (unsigned char i_15 = 0; i_15 < 13; i_15 += 2) 
                {
                    for (long long int i_16 = 0; i_16 < 13; i_16 += 2) 
                    {
                        {
                            var_27 = ((/* implicit */unsigned int) var_0);
                            var_28 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_36 [i_11])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (arr_14 [i_11] [i_12] [i_14])));
                        }
                    } 
                } 
                arr_52 [1LL] [1LL] = ((/* implicit */int) arr_51 [i_12] [i_12] [i_14] [i_12] [i_12]);
                var_29 = ((/* implicit */unsigned short) min((var_29), (((/* implicit */unsigned short) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_0))))))))));
                arr_53 [11] = ((/* implicit */signed char) arr_45 [i_11] [i_12] [i_14] [i_14]);
            }
            var_30 = ((/* implicit */unsigned int) (~(((/* implicit */int) (!(((/* implicit */_Bool) -26LL)))))));
            arr_54 [i_12] [i_12] [i_11] = ((/* implicit */_Bool) ((((/* implicit */int) arr_50 [i_11])) & (((((/* implicit */int) (signed char)-39)) * (((/* implicit */int) arr_23 [i_11] [i_11]))))));
            /* LoopSeq 1 */
            for (unsigned long long int i_17 = 0; i_17 < 13; i_17 += 2) 
            {
                var_31 += arr_46 [i_12];
                var_32 = ((/* implicit */int) max((var_32), ((~((+(((/* implicit */int) arr_12 [18LL] [i_11] [i_12] [i_17]))))))));
            }
        }
        arr_58 [i_11] = arr_8 [(_Bool)1] [i_11] [i_11];
        var_33 = var_2;
        var_34 = ((/* implicit */unsigned long long int) arr_35 [i_11]);
    }
    for (signed char i_18 = 0; i_18 < 25; i_18 += 1) 
    {
        var_35 *= ((/* implicit */signed char) (~(((((/* implicit */int) arr_60 [i_18])) << (((/* implicit */int) arr_60 [(unsigned char)23]))))));
        var_36 = ((/* implicit */long long int) max(((-(((/* implicit */int) var_2)))), (((/* implicit */int) min((arr_60 [i_18]), (arr_60 [i_18]))))));
        var_37 = ((/* implicit */signed char) (!(max((((((/* implicit */_Bool) arr_61 [i_18])) && (((/* implicit */_Bool) arr_61 [i_18])))), (arr_60 [i_18])))));
        var_38 = ((/* implicit */unsigned char) max((var_38), (((/* implicit */unsigned char) ((48LL) & (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))))));
        var_39 = ((/* implicit */unsigned char) (~(((((/* implicit */long long int) ((/* implicit */int) max((var_7), (arr_60 [i_18]))))) ^ (((((/* implicit */_Bool) arr_59 [20ULL] [i_18])) ? (((/* implicit */long long int) ((/* implicit */int) arr_60 [13LL]))) : (var_4)))))));
    }
    for (signed char i_19 = 2; i_19 < 22; i_19 += 2) 
    {
        var_40 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) min((var_5), (arr_63 [i_19]))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (-(1277229861U)))) ? ((-(arr_65 [i_19]))) : ((~(((/* implicit */int) (signed char)7))))))) : (((((/* implicit */_Bool) (~(arr_59 [i_19] [i_19])))) ? (((/* implicit */long long int) ((/* implicit */int) arr_62 [i_19 + 2]))) : (((long long int) var_9))))));
        arr_66 [i_19] = -1;
    }
}
