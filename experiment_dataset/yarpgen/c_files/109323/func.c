/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109323
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109323 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109323
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (signed char i_1 = 1; i_1 < 24; i_1 += 1) 
        {
            var_18 = ((/* implicit */_Bool) (signed char)-1);
            var_19 = arr_5 [i_0] [i_1 - 1] [i_1 + 1];
            arr_6 [i_0] = ((/* implicit */short) (unsigned short)22347);
            arr_7 [23ULL] = ((/* implicit */unsigned long long int) ((unsigned int) var_3));
        }
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 22; i_2 += 1) 
        {
            for (unsigned short i_3 = 0; i_3 < 25; i_3 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    for (int i_4 = 0; i_4 < 25; i_4 += 1) /* same iter space */
                    {
                        arr_18 [i_2] [i_2] [i_3] [i_4] [(unsigned short)24] [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_16 [i_0] [i_2 - 1] [i_3] [i_4])) : (((/* implicit */int) arr_16 [i_0] [i_2 + 3] [i_3] [i_4]))));
                        var_20 = ((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned char)28))));
                        var_21 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(arr_5 [i_4] [i_2 + 1] [4ULL])))) ? (((long long int) var_10)) : (((/* implicit */long long int) ((unsigned int) (_Bool)1)))));
                        arr_19 [i_2] [i_3] [i_2 + 1] [i_2] = ((/* implicit */_Bool) (unsigned char)27);
                        var_22 = ((/* implicit */int) ((unsigned short) var_1));
                    }
                    for (int i_5 = 0; i_5 < 25; i_5 += 1) /* same iter space */
                    {
                        var_23 |= ((/* implicit */unsigned long long int) (signed char)7);
                        var_24 = ((/* implicit */int) min((var_24), (var_5)));
                        var_25 = ((/* implicit */signed char) (-(((/* implicit */int) arr_11 [i_2 - 1] [i_2 + 1] [i_2 + 1]))));
                    }
                    for (int i_6 = 0; i_6 < 25; i_6 += 1) /* same iter space */
                    {
                        var_26 = arr_5 [i_0] [0LL] [i_0];
                        var_27 = (!(((/* implicit */_Bool) arr_15 [i_2 + 2] [i_2 + 3] [i_2 + 2] [i_2 + 1] [i_2])));
                    }
                    var_28 = ((/* implicit */short) ((arr_8 [19ULL] [i_2 + 2]) - (((/* implicit */unsigned long long int) (-(arr_0 [i_0] [i_0]))))));
                    arr_24 [i_2] [i_2] [i_2] [i_0] = ((/* implicit */int) (+(arr_14 [i_2 + 2] [i_2 + 3])));
                    var_29 = ((/* implicit */unsigned short) arr_10 [i_2] [i_3]);
                    var_30 = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_10 [i_2 + 1] [i_2 + 1]))) < (((((/* implicit */_Bool) arr_5 [i_0] [i_2] [i_3])) ? (3603735527244249901LL) : (((/* implicit */long long int) arr_5 [i_0] [i_0] [i_0]))))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned long long int i_7 = 2; i_7 < 17; i_7 += 2) /* same iter space */
    {
        var_31 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_15 [i_7] [i_7] [i_7 + 1] [(signed char)1] [(signed char)1])) ? (arr_15 [(_Bool)1] [i_7 - 2] [i_7 - 2] [i_7 - 2] [i_7 - 2]) : (((/* implicit */int) (short)32758))));
        var_32 = ((/* implicit */unsigned int) max((var_32), (((/* implicit */unsigned int) 1765413560))));
        var_33 = ((/* implicit */_Bool) ((1765413560) >> (((((/* implicit */int) (unsigned char)245)) - (223)))));
    }
    /* vectorizable */
    for (unsigned long long int i_8 = 2; i_8 < 17; i_8 += 2) /* same iter space */
    {
        var_34 = ((/* implicit */unsigned short) max((var_34), (((/* implicit */unsigned short) ((var_4) > (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_17)) ? (var_12) : (((/* implicit */int) var_1))))))))));
        var_35 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_13 [i_8] [i_8 + 1]))));
        /* LoopSeq 3 */
        for (unsigned short i_9 = 0; i_9 < 18; i_9 += 1) 
        {
            var_36 = ((/* implicit */unsigned short) ((_Bool) arr_3 [i_8 + 1]));
            var_37 = ((/* implicit */unsigned short) min((var_37), (((/* implicit */unsigned short) 1765413549))));
            var_38 = ((/* implicit */unsigned int) arr_9 [i_8] [(unsigned short)9]);
        }
        for (int i_10 = 1; i_10 < 14; i_10 += 3) 
        {
            var_39 = (+(((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_0)))));
            var_40 = ((/* implicit */signed char) ((((/* implicit */int) var_10)) / (((/* implicit */int) arr_13 [i_8] [i_8 - 1]))));
        }
        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
        {
            arr_40 [i_8] [i_8] = ((/* implicit */short) (~((~(((/* implicit */int) var_1))))));
            var_41 = ((/* implicit */signed char) min((var_41), (((/* implicit */signed char) var_6))));
            var_42 ^= ((((/* implicit */_Bool) 1765413560)) ? (-1LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)47))));
        }
    }
    var_43 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((min((((/* implicit */int) var_14)), (var_5))) + ((-(((/* implicit */int) var_13)))))) : (((/* implicit */int) var_14))));
    var_44 = ((/* implicit */unsigned long long int) var_16);
}
