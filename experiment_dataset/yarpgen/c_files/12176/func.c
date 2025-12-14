/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12176
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12176 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12176
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
    var_18 = ((/* implicit */unsigned long long int) min(((~(((/* implicit */int) var_6)))), (((/* implicit */int) var_11))));
    /* LoopSeq 4 */
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        arr_3 [(signed char)5] [(unsigned char)3] = ((/* implicit */_Bool) arr_2 [i_0]);
        arr_4 [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0]))))), (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) arr_1 [(unsigned short)0])) : (((/* implicit */int) (unsigned short)1)))))))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned short i_2 = 3; i_2 < 13; i_2 += 2) 
        {
            for (short i_3 = 2; i_3 < 12; i_3 += 2) 
            {
                {
                    var_19 = ((/* implicit */short) min((((unsigned int) 1818184880)), (((/* implicit */unsigned int) (unsigned short)49152))));
                    arr_12 [i_1] [i_2] [i_2 - 2] [i_2 - 2] = ((/* implicit */_Bool) arr_9 [i_1] [i_2] [i_3]);
                    var_20 &= ((/* implicit */_Bool) (~(-4876828506481572047LL)));
                    var_21 = ((/* implicit */int) arr_1 [i_1]);
                }
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned short i_4 = 0; i_4 < 14; i_4 += 3) 
        {
            /* LoopNest 2 */
            for (long long int i_5 = 3; i_5 < 11; i_5 += 1) 
            {
                for (signed char i_6 = 3; i_6 < 13; i_6 += 2) 
                {
                    {
                        arr_22 [i_5] = ((/* implicit */short) (+(((/* implicit */int) ((unsigned char) arr_16 [i_6 - 1] [i_6 - 1])))));
                        /* LoopSeq 2 */
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
                        {
                            var_22 = ((/* implicit */long long int) arr_17 [i_6 - 2] [i_5 - 3]);
                            var_23 = ((/* implicit */unsigned short) 18446744073709551615ULL);
                            var_24 = ((/* implicit */unsigned long long int) (+((+(((/* implicit */int) (unsigned char)19))))));
                            var_25 = ((/* implicit */int) (+((-(arr_16 [i_4] [i_4])))));
                        }
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) /* same iter space */
                        {
                            var_26 = ((/* implicit */short) var_15);
                            var_27 = ((/* implicit */int) ((_Bool) ((unsigned short) (+(((/* implicit */int) var_2))))));
                        }
                        var_28 = ((/* implicit */int) min((12870908629540018371ULL), (((/* implicit */unsigned long long int) arr_27 [i_1] [i_4] [i_4] [i_5 - 1] [i_5] [i_4]))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (int i_9 = 0; i_9 < 14; i_9 += 3) 
            {
                for (unsigned long long int i_10 = 0; i_10 < 14; i_10 += 2) 
                {
                    {
                        var_29 += ((/* implicit */unsigned short) arr_10 [(unsigned short)0] [i_10]);
                        var_30 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) max((arr_16 [i_4] [i_10]), (36028797018832896ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_1])))))) : (8ULL)))));
                        var_31 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((int) ((8ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_9] [i_10]))))))) | ((~(arr_17 [i_1] [i_9])))));
                        var_32 ^= ((/* implicit */int) 7275279682943761970ULL);
                    }
                } 
            } 
            var_33 = ((/* implicit */short) min(((~(arr_25 [i_1] [i_4] [i_1] [i_4] [i_4]))), (((/* implicit */int) arr_30 [i_1] [i_1] [i_1] [(unsigned short)9]))));
        }
    }
    /* vectorizable */
    for (short i_11 = 0; i_11 < 18; i_11 += 2) 
    {
        var_34 = ((/* implicit */long long int) (+(((/* implicit */int) arr_36 [i_11] [i_11]))));
        /* LoopSeq 1 */
        for (signed char i_12 = 0; i_12 < 18; i_12 += 2) 
        {
            var_35 = ((/* implicit */_Bool) (+(((int) arr_35 [i_11]))));
            arr_39 [i_11] [i_12] = ((/* implicit */short) ((((((/* implicit */_Bool) arr_38 [(_Bool)1] [i_12] [i_11])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_38 [i_11] [i_11] [i_11])))) / (((/* implicit */int) arr_37 [i_11] [i_12]))));
        }
        var_36 = ((/* implicit */_Bool) max((var_36), ((!(((/* implicit */_Bool) arr_34 [i_11]))))));
    }
    for (short i_13 = 0; i_13 < 23; i_13 += 2) 
    {
        var_37 = ((/* implicit */unsigned short) ((((((/* implicit */int) arr_42 [i_13])) < (((/* implicit */int) arr_42 [i_13])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_42 [i_13]))))) : (((/* implicit */int) ((unsigned short) arr_42 [i_13])))));
        var_38 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((short) arr_41 [i_13]))) ? (((((/* implicit */_Bool) arr_42 [i_13])) ? (arr_41 [i_13]) : (arr_41 [i_13]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) 2675383451575402538ULL))))));
        /* LoopNest 2 */
        for (unsigned long long int i_14 = 4; i_14 < 22; i_14 += 1) 
        {
            for (long long int i_15 = 1; i_15 < 21; i_15 += 2) 
            {
                {
                    var_39 = ((/* implicit */long long int) min((var_15), ((+(((/* implicit */int) arr_43 [i_13]))))));
                    var_40 = ((/* implicit */long long int) ((unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) -189336409))))))));
                    /* LoopSeq 1 */
                    for (unsigned short i_16 = 3; i_16 < 21; i_16 += 3) 
                    {
                        var_41 = ((/* implicit */short) arr_49 [i_13] [i_13] [i_14] [i_15] [i_16 + 1] [i_16]);
                        arr_50 [i_13] [i_14] [i_15] [i_16] [i_14] [i_16] = ((/* implicit */unsigned short) ((unsigned int) ((unsigned char) (unsigned short)62798)));
                        var_42 = ((/* implicit */unsigned char) arr_42 [i_14 + 1]);
                    }
                    var_43 = ((/* implicit */unsigned long long int) min((var_43), ((+(arr_47 [i_13] [i_13] [i_13])))));
                    /* LoopNest 2 */
                    for (unsigned short i_17 = 0; i_17 < 23; i_17 += 4) 
                    {
                        for (long long int i_18 = 0; i_18 < 23; i_18 += 2) 
                        {
                            {
                                var_44 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned int) arr_47 [i_15 - 1] [i_15] [i_15 + 2]))) ? (((/* implicit */unsigned long long int) arr_45 [i_14] [i_18])) : (max((((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)36410))))), (arr_46 [i_15 + 2] [i_14 - 3])))));
                                var_45 = ((/* implicit */unsigned int) max((var_45), (((/* implicit */unsigned int) ((((unsigned long long int) min((5632633333970873313LL), (((/* implicit */long long int) (unsigned char)154))))) | (((/* implicit */unsigned long long int) ((int) (!(((/* implicit */_Bool) arr_46 [i_14] [i_18])))))))))));
                                var_46 = ((/* implicit */unsigned long long int) min((arr_53 [i_15 + 1] [i_15 + 1] [i_14 - 1]), (((/* implicit */short) ((signed char) ((_Bool) var_14))))));
                                var_47 = ((((/* implicit */_Bool) 8406948428328446881ULL)) ? (13449322936413284232ULL) : (6313582760398614010ULL));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_48 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_45 [i_13] [i_13]))))), (((((/* implicit */_Bool) arr_47 [(unsigned short)5] [(unsigned short)5] [i_13])) ? (arr_47 [i_13] [(short)6] [i_13]) : (arr_47 [i_13] [i_13] [i_13])))));
    }
    var_49 = ((/* implicit */unsigned short) var_6);
    var_50 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) var_17)) % (1243942595110455021ULL)));
    var_51 = ((/* implicit */unsigned short) max((var_51), (((/* implicit */unsigned short) min((((/* implicit */int) var_6)), ((((((_Bool)1) || (((/* implicit */_Bool) (short)768)))) ? (((var_11) ? (var_0) : (((/* implicit */int) (signed char)-4)))) : (((/* implicit */int) var_1)))))))));
}
