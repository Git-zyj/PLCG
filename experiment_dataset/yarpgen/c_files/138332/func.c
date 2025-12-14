/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138332
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138332 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138332
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
    var_18 = ((/* implicit */unsigned short) ((int) 3400840674422964249LL));
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 24; i_0 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 24; i_2 += 4) 
            {
                {
                    arr_7 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) -1622121760))))));
                    arr_8 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) var_2);
                }
            } 
        } 
        var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)250))))) ? (arr_0 [i_0] [i_0]) : (((((/* implicit */_Bool) arr_5 [i_0])) ? (var_2) : (((/* implicit */long long int) 1298345353))))))) ? ((-(arr_2 [i_0] [i_0]))) : (((/* implicit */long long int) ((unsigned int) min((((/* implicit */int) var_0)), (-914386010)))))));
    }
    for (long long int i_3 = 0; i_3 < 24; i_3 += 2) /* same iter space */
    {
        /* LoopSeq 1 */
        for (signed char i_4 = 3; i_4 < 23; i_4 += 2) 
        {
            arr_14 [12LL] [i_3] = ((/* implicit */unsigned char) (~(((/* implicit */int) (short)24167))));
            arr_15 [i_4] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_0 [i_3] [i_4 + 1]))));
            /* LoopNest 2 */
            for (short i_5 = 1; i_5 < 23; i_5 += 2) 
            {
                for (long long int i_6 = 0; i_6 < 24; i_6 += 2) 
                {
                    {
                        var_20 = ((/* implicit */unsigned long long int) (short)24176);
                        arr_21 [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)87))))) ? (((((/* implicit */long long int) (-(arr_3 [i_5])))) % (arr_2 [i_5 - 1] [i_4 - 2]))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_4 [i_4 + 1] [i_4 - 2] [i_5 - 1]))))));
                        var_21 = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) (short)-24168))) <= (arr_19 [i_3] [i_4 - 2] [i_5] [i_5 + 1] [i_4 - 2] [i_3])))), (-4443844136820243459LL)));
                        arr_22 [i_3] [i_4] [i_5] [i_5] [i_6] [i_6] = ((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) arr_6 [i_4 - 1] [i_5 - 1] [(unsigned short)1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_15))) : (arr_6 [i_4 - 3] [i_5 - 1] [i_4]))));
                    }
                } 
            } 
        }
        arr_23 [i_3] = ((/* implicit */short) 914386010);
    }
    var_22 = ((/* implicit */unsigned int) var_11);
    /* LoopSeq 4 */
    for (unsigned int i_7 = 0; i_7 < 11; i_7 += 1) 
    {
        arr_27 [i_7] [i_7] = arr_16 [i_7] [i_7] [i_7] [i_7];
        arr_28 [i_7] = ((/* implicit */unsigned char) min((8456654697003599120LL), (((/* implicit */long long int) (unsigned short)10))));
    }
    for (long long int i_8 = 0; i_8 < 11; i_8 += 2) /* same iter space */
    {
        var_23 = ((/* implicit */unsigned int) ((unsigned long long int) (short)19024));
        arr_32 [i_8] [i_8] = ((/* implicit */long long int) arr_16 [i_8] [(_Bool)1] [i_8] [i_8]);
        /* LoopNest 2 */
        for (unsigned char i_9 = 0; i_9 < 11; i_9 += 1) 
        {
            for (unsigned char i_10 = 3; i_10 < 10; i_10 += 4) 
            {
                {
                    var_24 = ((/* implicit */_Bool) (((((_Bool)1) ? (((/* implicit */int) (unsigned char)144)) : (((/* implicit */int) min((var_4), ((unsigned char)100)))))) >> (((/* implicit */int) (unsigned char)23))));
                    var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) var_8))))) ? (((/* implicit */long long int) 3855779371U)) : (var_13)));
                    /* LoopSeq 2 */
                    for (long long int i_11 = 0; i_11 < 11; i_11 += 1) /* same iter space */
                    {
                        var_26 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)203))) + (((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) | (3722392263955813429LL)))) ? (-5996182706746840160LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-7940)))))));
                        arr_42 [4LL] [i_9] [8] [i_9] [i_8] = ((/* implicit */unsigned long long int) min(((!((_Bool)1))), ((!(((/* implicit */_Bool) (+(4294967295U))))))));
                    }
                    /* vectorizable */
                    for (long long int i_12 = 0; i_12 < 11; i_12 += 1) /* same iter space */
                    {
                        arr_45 [(unsigned char)2] [i_9] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)161))) : (-4257799835891689215LL)))) ? (((/* implicit */int) (unsigned short)14857)) : (arr_18 [i_9] [i_9] [i_10 + 1] [i_10] [i_12]));
                        arr_46 [i_9] [i_10] [i_9] = ((((/* implicit */int) arr_10 [i_8] [i_8])) / (((((/* implicit */_Bool) (short)0)) ? (((/* implicit */int) arr_26 [i_12])) : (((/* implicit */int) var_5)))));
                        var_27 = ((/* implicit */_Bool) ((((/* implicit */_Bool) -2112913090822016614LL)) ? (((/* implicit */int) (short)8477)) : (((/* implicit */int) (unsigned short)38157))));
                        var_28 = ((unsigned long long int) ((((/* implicit */_Bool) arr_25 [i_8])) ? (arr_3 [i_9]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_35 [i_9] [(short)5] [i_9] [i_9])))));
                    }
                }
            } 
        } 
    }
    for (long long int i_13 = 0; i_13 < 11; i_13 += 2) /* same iter space */
    {
        /* LoopSeq 2 */
        for (unsigned char i_14 = 0; i_14 < 11; i_14 += 4) 
        {
            arr_51 [i_14] = ((/* implicit */long long int) var_1);
            var_29 = ((/* implicit */signed char) (unsigned char)0);
        }
        /* vectorizable */
        for (unsigned int i_15 = 1; i_15 < 9; i_15 += 3) 
        {
            var_30 = ((/* implicit */unsigned long long int) ((short) arr_36 [i_13] [i_15] [i_13] [i_15 + 2]));
            arr_54 [i_13] [i_15 - 1] = ((/* implicit */unsigned char) ((long long int) arr_53 [i_15 - 1]));
        }
        arr_55 [i_13] = ((/* implicit */unsigned long long int) ((min((((/* implicit */long long int) (short)29468)), (((var_3) | (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_13]))))))) - (((/* implicit */long long int) (~(((/* implicit */int) arr_25 [i_13])))))));
        arr_56 [i_13] [i_13] = ((/* implicit */unsigned int) ((8456654697003599110LL) / (((/* implicit */long long int) ((/* implicit */int) (unsigned char)250)))));
    }
    for (long long int i_16 = 0; i_16 < 11; i_16 += 2) /* same iter space */
    {
        var_31 = ((/* implicit */_Bool) ((4193526281U) << (((/* implicit */int) ((_Bool) (unsigned char)251)))));
        arr_59 [i_16] = ((/* implicit */unsigned long long int) (((-(arr_33 [i_16] [i_16]))) - (((/* implicit */long long int) (~(((/* implicit */int) ((_Bool) 8456654697003599110LL))))))));
        arr_60 [i_16] = ((/* implicit */long long int) var_0);
        arr_61 [i_16] [i_16] = ((/* implicit */short) (((((~(((/* implicit */int) ((((/* implicit */int) var_14)) > (var_9)))))) + (2147483647))) >> (((((/* implicit */int) (short)-13551)) + (13552)))));
    }
}
