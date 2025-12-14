/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123933
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123933 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123933
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
    var_10 &= ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) var_4)), (((((4060431233819862139ULL) | (((/* implicit */unsigned long long int) 1743970820549625869LL)))) ^ (((/* implicit */unsigned long long int) ((int) -1743970820549625870LL)))))));
    var_11 = ((/* implicit */signed char) var_5);
    var_12 = ((/* implicit */unsigned int) min((var_12), (((/* implicit */unsigned int) var_6))));
    /* LoopSeq 2 */
    for (short i_0 = 1; i_0 < 11; i_0 += 2) 
    {
        var_13 = ((/* implicit */long long int) (-(min((((/* implicit */int) (signed char)6)), (((int) var_2))))));
        /* LoopSeq 2 */
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned char i_2 = 0; i_2 < 12; i_2 += 3) 
            {
                arr_7 [i_0 + 1] &= ((/* implicit */long long int) (!(((/* implicit */_Bool) var_0))));
                /* LoopNest 2 */
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    for (unsigned long long int i_4 = 1; i_4 < 10; i_4 += 2) 
                    {
                        {
                            var_14 = ((/* implicit */short) (~(((((/* implicit */_Bool) arr_4 [i_0] [i_0 + 1] [i_0 - 1] [i_0])) ? (((/* implicit */int) arr_2 [(short)6] [i_2] [i_2])) : (((/* implicit */int) arr_2 [i_0 - 1] [5ULL] [i_0]))))));
                            var_15 = ((/* implicit */long long int) arr_9 [i_2] [i_1] [i_2] [i_3]);
                            var_16 *= ((/* implicit */unsigned long long int) arr_0 [i_0]);
                            arr_15 [6U] [i_1] = ((/* implicit */signed char) var_3);
                        }
                    } 
                } 
                arr_16 [i_0] [i_2] [i_1] [i_0] &= ((/* implicit */int) ((8400522140662059161ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_0 - 1] [i_1] [i_1] [i_1])))));
                arr_17 [i_2] [i_2] [i_1] [i_0 + 1] = ((/* implicit */signed char) ((unsigned int) (short)-6022));
                var_17 = ((/* implicit */unsigned int) ((signed char) ((int) arr_9 [1] [i_0 - 1] [i_0] [i_0 - 1])));
            }
            var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) ((int) var_9)))));
            var_19 = ((/* implicit */unsigned char) arr_2 [i_1] [(unsigned char)9] [(short)11]);
        }
        /* vectorizable */
        for (signed char i_5 = 0; i_5 < 12; i_5 += 4) 
        {
            var_20 = ((/* implicit */unsigned long long int) ((signed char) (signed char)-23));
            var_21 -= ((/* implicit */unsigned int) var_8);
        }
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned int i_6 = 3; i_6 < 10; i_6 += 3) 
        {
            arr_24 [i_0 - 1] [i_6] [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_11 [i_0] [i_0 + 1] [i_6 - 3] [i_6])) : (((/* implicit */int) arr_11 [i_0 + 1] [i_0 + 1] [i_6 + 2] [i_6]))));
            /* LoopSeq 2 */
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                var_22 = ((/* implicit */long long int) ((((/* implicit */int) var_8)) + (((((/* implicit */_Bool) 2757321981U)) ? (((/* implicit */int) arr_6 [i_7])) : (((/* implicit */int) (signed char)121))))));
                arr_27 [(signed char)10] [(signed char)10] &= ((/* implicit */unsigned long long int) (!(arr_12 [i_0] [8] [i_0] [i_6 + 1] [i_6 - 3] [i_7] [i_7])));
            }
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                /* LoopNest 2 */
                for (long long int i_9 = 0; i_9 < 12; i_9 += 3) 
                {
                    for (int i_10 = 2; i_10 < 8; i_10 += 4) 
                    {
                        {
                            var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) ((int) ((((/* implicit */int) arr_21 [i_0] [4U] [4U])) % (((/* implicit */int) var_8))))))));
                            arr_36 [i_0] [i_6] [9] [9] [i_10] = ((/* implicit */short) ((((/* implicit */_Bool) arr_32 [i_6] [(unsigned char)0] [i_9] [i_10])) ? (var_9) : (((/* implicit */int) arr_30 [2U] [i_6 + 1] [i_6] [i_6 - 1]))));
                            arr_37 [i_0] [i_6] [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((unsigned long long int) (_Bool)0));
                        }
                    } 
                } 
                arr_38 [i_6] = ((/* implicit */unsigned int) ((signed char) ((((/* implicit */_Bool) (short)-10757)) ? (4095) : (((/* implicit */int) (signed char)(-127 - 1))))));
            }
            arr_39 [i_6] = var_3;
        }
        for (unsigned long long int i_11 = 2; i_11 < 8; i_11 += 3) 
        {
            arr_43 [i_0] [i_11] [i_11 + 4] = ((/* implicit */long long int) var_7);
            /* LoopNest 3 */
            for (unsigned long long int i_12 = 1; i_12 < 10; i_12 += 2) 
            {
                for (unsigned long long int i_13 = 3; i_13 < 10; i_13 += 3) 
                {
                    for (unsigned long long int i_14 = 0; i_14 < 12; i_14 += 3) 
                    {
                        {
                            arr_53 [i_11] = ((/* implicit */unsigned short) max((((/* implicit */int) arr_46 [i_13 - 2] [i_13 - 1])), (((int) (+(((/* implicit */int) var_5)))))));
                            arr_54 [i_0] [i_11] [i_11] [3] = ((/* implicit */unsigned short) ((short) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_33 [i_0] [i_0] [i_0 - 1] [i_0] [(_Bool)1])) ? (-1743970820549625876LL) : (((/* implicit */long long int) 1537645315U))))), (var_1))));
                            arr_55 [i_0] [i_11] [i_12] [i_12 + 2] [i_13] [i_13 + 1] [i_11] = ((/* implicit */unsigned char) (+(((((((/* implicit */_Bool) arr_45 [i_11])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (4294967295U))) & (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_51 [i_0])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (signed char)7)))))))));
                        }
                    } 
                } 
            } 
        }
        for (unsigned long long int i_15 = 2; i_15 < 11; i_15 += 3) 
        {
            var_24 &= ((/* implicit */short) ((((((/* implicit */_Bool) 2622591990U)) ? (-679807950) : (((/* implicit */int) (unsigned short)4434)))) - ((-(((/* implicit */int) (!(((/* implicit */_Bool) arr_29 [i_15])))))))));
            var_25 &= ((((/* implicit */_Bool) min((((((-902752779) + (2147483647))) >> (((arr_34 [i_15]) - (1893178781640359983LL))))), (arr_51 [i_0 + 1])))) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 4294967295U)) || ((_Bool)0))))));
        }
    }
    /* vectorizable */
    for (unsigned char i_16 = 2; i_16 < 17; i_16 += 3) 
    {
        var_26 = ((/* implicit */_Bool) ((arr_59 [i_16 + 3]) / (arr_60 [i_16 + 3])));
        var_27 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) 563288837U)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (_Bool)1)))) < (((/* implicit */int) (unsigned char)113))));
        arr_61 [i_16] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_59 [i_16 - 1])) && ((!(((/* implicit */_Bool) arr_60 [i_16 + 1]))))));
    }
}
