/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140273
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140273 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140273
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
    for (long long int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        var_11 += ((/* implicit */short) (unsigned char)247);
        var_12 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0])) || (((/* implicit */_Bool) arr_0 [i_0]))));
    }
    /* vectorizable */
    for (long long int i_1 = 1; i_1 < 7; i_1 += 2) /* same iter space */
    {
        var_13 = ((/* implicit */unsigned char) arr_2 [5]);
        var_14 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_2 [i_1 + 2]))));
        arr_4 [i_1] [i_1] = ((/* implicit */unsigned short) 2147483647);
        var_15 = ((/* implicit */unsigned long long int) (+(arr_3 [i_1 + 3])));
        /* LoopNest 2 */
        for (int i_2 = 3; i_2 < 6; i_2 += 1) 
        {
            for (signed char i_3 = 2; i_3 < 7; i_3 += 1) 
            {
                {
                    arr_12 [i_3] = arr_5 [i_1 + 2];
                    var_16 = ((/* implicit */long long int) (+(-143243645)));
                }
            } 
        } 
    }
    for (long long int i_4 = 1; i_4 < 7; i_4 += 2) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned short i_5 = 1; i_5 < 9; i_5 += 2) 
        {
            for (unsigned char i_6 = 0; i_6 < 10; i_6 += 1) 
            {
                for (unsigned char i_7 = 2; i_7 < 9; i_7 += 2) 
                {
                    {
                        arr_24 [i_4] [i_7 - 2] [i_5] [i_4] [i_4] = (+(((((/* implicit */_Bool) arr_7 [i_4] [i_5 + 1] [i_6])) ? (arr_7 [2ULL] [i_5 + 1] [i_6]) : (((/* implicit */long long int) arr_9 [i_4 + 1] [i_5])))));
                        var_17 = ((/* implicit */unsigned char) arr_9 [i_4] [i_5]);
                        var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) var_6))));
                    }
                } 
            } 
        } 
        var_19 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_4])) ? (((/* implicit */int) var_1)) : (var_0)))) && (((/* implicit */_Bool) max((((/* implicit */short) arr_10 [i_4 - 1])), (arr_11 [5LL])))))))));
        var_20 = ((/* implicit */unsigned short) max((((/* implicit */int) (!(((/* implicit */_Bool) arr_23 [0]))))), (min((((/* implicit */int) var_10)), (var_0)))));
        arr_25 [i_4 - 1] [i_4 - 1] = ((/* implicit */long long int) min((min(((-(688664724))), (((/* implicit */int) (unsigned char)255)))), (arr_9 [i_4 + 3] [6LL])));
    }
    /* vectorizable */
    for (long long int i_8 = 1; i_8 < 7; i_8 += 2) /* same iter space */
    {
        arr_29 [i_8] = ((/* implicit */long long int) var_1);
        arr_30 [i_8] = ((/* implicit */_Bool) (~(((/* implicit */int) arr_14 [i_8]))));
        arr_31 [i_8] [i_8] = ((/* implicit */unsigned char) (!(((((/* implicit */_Bool) arr_14 [i_8])) && (((/* implicit */_Bool) arr_26 [i_8]))))));
    }
    var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (max((var_5), (((/* implicit */long long int) (short)32741)))) : (min((-7580984341290928428LL), (((/* implicit */long long int) 968842022))))))) && (((/* implicit */_Bool) var_6))));
    /* LoopSeq 2 */
    for (int i_9 = 3; i_9 < 12; i_9 += 1) 
    {
        var_22 = ((/* implicit */long long int) var_10);
        arr_35 [i_9] &= ((/* implicit */short) arr_34 [i_9 - 3] [i_9 - 1]);
        arr_36 [i_9] = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) (!(((/* implicit */_Bool) arr_33 [i_9 + 1]))))), (arr_33 [i_9 - 2])));
    }
    /* vectorizable */
    for (short i_10 = 2; i_10 < 18; i_10 += 3) 
    {
        var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_7)) ? (316460783154115112LL) : (((/* implicit */long long int) ((/* implicit */int) arr_38 [i_10 + 4]))))))));
        arr_39 [i_10 + 4] = ((/* implicit */unsigned char) arr_37 [i_10]);
        arr_40 [i_10] = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_37 [i_10]))));
        arr_41 [i_10] = arr_38 [i_10];
        /* LoopSeq 1 */
        for (long long int i_11 = 0; i_11 < 22; i_11 += 2) 
        {
            /* LoopSeq 1 */
            for (long long int i_12 = 2; i_12 < 19; i_12 += 2) 
            {
                var_24 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) -73851579)) != (arr_44 [i_12] [i_12 - 1] [i_10 + 1] [i_10 + 1])));
                /* LoopSeq 1 */
                for (long long int i_13 = 0; i_13 < 22; i_13 += 4) 
                {
                    var_25 = ((/* implicit */unsigned long long int) arr_42 [(unsigned short)13] [i_13] [i_12 + 3]);
                    var_26 = ((/* implicit */long long int) min((var_26), (((/* implicit */long long int) arr_46 [i_10 + 2] [(_Bool)1] [i_13] [i_10 + 2] [i_11]))));
                }
            }
            var_27 = ((/* implicit */unsigned char) (+(((/* implicit */int) var_7))));
            var_28 += ((((long long int) (_Bool)1)) * (((/* implicit */long long int) ((((/* implicit */_Bool) arr_45 [i_11] [i_10] [i_10] [i_10])) ? (((/* implicit */int) arr_38 [i_10])) : (((/* implicit */int) arr_42 [i_10 + 4] [i_10] [i_10]))))));
        }
    }
    var_29 &= ((/* implicit */signed char) var_4);
}
