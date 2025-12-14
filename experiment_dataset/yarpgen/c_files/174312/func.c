/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174312
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174312 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174312
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
    var_15 = ((/* implicit */signed char) (-((-(((unsigned long long int) var_12))))));
    var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) max((((/* implicit */long long int) var_8)), (((max((((/* implicit */long long int) (unsigned short)50810)), (3401504483215292289LL))) ^ (((/* implicit */long long int) ((/* implicit */int) var_9))))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        var_17 = ((/* implicit */int) max((var_17), (((/* implicit */int) var_5))));
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            var_18 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) 1062115260U)) ? (((/* implicit */unsigned long long int) 3401504483215292289LL)) : (8796093022207ULL))) < (((/* implicit */unsigned long long int) arr_1 [i_1]))));
            var_19 = ((/* implicit */unsigned short) (+(((1062115260U) + (((/* implicit */unsigned int) arr_3 [i_0] [i_0]))))));
            var_20 ^= ((/* implicit */unsigned long long int) ((unsigned short) arr_4 [i_1] [i_1] [10]));
            /* LoopNest 3 */
            for (unsigned short i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 22; i_3 += 1) 
                {
                    for (short i_4 = 0; i_4 < 22; i_4 += 2) 
                    {
                        {
                            var_21 += ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)37802)) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_10 [i_0] [i_2] [i_3] [i_4])) : (((/* implicit */int) arr_10 [i_0] [i_1] [i_1] [i_1])))) : (((/* implicit */int) ((short) 0LL)))));
                            arr_16 [i_0] = ((/* implicit */int) (+(((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */long long int) -1)) : (arr_4 [i_0] [i_0] [i_0])))));
                        }
                    } 
                } 
            } 
        }
        /* LoopNest 3 */
        for (unsigned long long int i_5 = 0; i_5 < 22; i_5 += 3) 
        {
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                for (unsigned short i_7 = 1; i_7 < 20; i_7 += 4) 
                {
                    {
                        /* LoopSeq 3 */
                        for (unsigned short i_8 = 0; i_8 < 22; i_8 += 3) /* same iter space */
                        {
                            var_22 ^= ((/* implicit */unsigned long long int) var_4);
                            arr_27 [i_0] [i_0] [i_6] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) arr_14 [i_0] [i_0] [i_0] [i_0] [i_0]))) ? (arr_5 [i_7 - 1] [i_7 + 1]) : (var_0)));
                        }
                        for (unsigned short i_9 = 0; i_9 < 22; i_9 += 3) /* same iter space */
                        {
                            var_23 = ((/* implicit */long long int) (~(((unsigned long long int) arr_10 [i_0] [i_5] [i_6] [i_0]))));
                            var_24 = ((/* implicit */unsigned long long int) 0LL);
                        }
                        for (unsigned long long int i_10 = 0; i_10 < 22; i_10 += 1) 
                        {
                            var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((484374468U) / (484374468U)))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0] [i_5])))))));
                            arr_33 [i_0] [i_7 + 1] [i_6] [i_0] = ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) var_2)));
                            arr_34 [i_0] [i_5] [i_6] [i_7 + 2] [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_6))));
                        }
                        arr_35 [0U] [i_5] [i_6] [i_0] [i_0] [i_5] = ((/* implicit */short) arr_8 [i_0] [i_0] [i_0] [i_7 + 1]);
                        /* LoopSeq 1 */
                        for (unsigned short i_11 = 3; i_11 < 21; i_11 += 1) 
                        {
                            var_26 -= ((/* implicit */long long int) (-(arr_19 [i_0] [i_5] [(short)3])));
                            var_27 &= ((/* implicit */long long int) var_8);
                        }
                    }
                } 
            } 
        } 
        arr_38 [i_0] = ((/* implicit */signed char) ((long long int) (~(var_14))));
        arr_39 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((unsigned int) arr_17 [i_0]));
    }
    /* vectorizable */
    for (signed char i_12 = 0; i_12 < 12; i_12 += 2) 
    {
        var_28 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (var_5) : (var_10)))) ? (var_1) : (((/* implicit */unsigned long long int) (-(var_2))))));
        /* LoopNest 2 */
        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
        {
            for (unsigned long long int i_14 = 0; i_14 < 12; i_14 += 4) 
            {
                {
                    arr_48 [i_13] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [10LL] [i_13] [i_13] [i_13]))));
                    var_29 = ((/* implicit */unsigned long long int) max((var_29), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_23 [i_12])) ? (arr_43 [i_12] [i_12]) : (arr_43 [i_13] [i_14]))))));
                    var_30 = ((/* implicit */_Bool) max((var_30), (((((/* implicit */int) (!(((/* implicit */_Bool) var_9))))) > (((/* implicit */int) ((((/* implicit */_Bool) arr_25 [i_13])) || (((/* implicit */_Bool) arr_21 [i_14])))))))));
                    var_31 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_31 [i_13] [(signed char)13] [i_14])) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_31 [i_13] [i_14] [i_14]))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned short i_15 = 0; i_15 < 12; i_15 += 2) 
        {
            for (int i_16 = 0; i_16 < 12; i_16 += 4) 
            {
                {
                    var_32 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) arr_23 [i_15])) > (((/* implicit */int) var_9))))) >= (((/* implicit */int) ((_Bool) 3401504483215292289LL)))));
                    var_33 = ((/* implicit */unsigned long long int) max((var_33), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_1) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))) ? (((/* implicit */int) ((((/* implicit */int) var_3)) >= (((/* implicit */int) (short)-5046))))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) arr_28 [i_12] [i_12] [i_12] [i_12] [5LL])) != (arr_8 [i_12] [i_15] [i_16] [i_16])))))))));
                }
            } 
        } 
    }
}
