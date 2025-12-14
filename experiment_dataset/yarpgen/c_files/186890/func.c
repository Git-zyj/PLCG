/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186890
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186890 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186890
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
    var_15 = ((/* implicit */unsigned long long int) (+((+(((/* implicit */int) var_7))))));
    var_16 = ((/* implicit */int) var_14);
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) var_3);
        arr_3 [i_0] = ((/* implicit */short) ((unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : ((+(((/* implicit */int) (signed char)4)))))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (signed char i_1 = 0; i_1 < 16; i_1 += 2) /* same iter space */
        {
            arr_6 [i_0] [i_1] = ((/* implicit */unsigned char) var_1);
            var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) (-(arr_5 [i_1] [i_1]))))));
        }
        for (signed char i_2 = 0; i_2 < 16; i_2 += 2) /* same iter space */
        {
            /* LoopSeq 1 */
            for (unsigned short i_3 = 0; i_3 < 16; i_3 += 2) 
            {
                var_18 = min(((signed char)11), (((/* implicit */signed char) (!(((/* implicit */_Bool) (+(1112997691U))))))));
                arr_11 [i_0] [i_3] [i_0] = arr_8 [i_0];
                arr_12 [i_0] [i_2] [i_0] = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((int) (-(((/* implicit */int) (signed char)-5)))))), (((unsigned long long int) ((((/* implicit */_Bool) 4294967284U)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))))));
                var_19 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((short) 6236229555302966220ULL))) ? (((/* implicit */int) ((unsigned short) var_2))) : (((/* implicit */int) (signed char)5)))) ^ (((/* implicit */int) ((unsigned short) arr_5 [i_0] [i_0])))));
            }
            /* LoopNest 2 */
            for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
            {
                for (int i_5 = 0; i_5 < 16; i_5 += 1) 
                {
                    {
                        arr_18 [9ULL] [i_0] [i_4 - 1] [i_5] = ((/* implicit */unsigned int) 7474708531099486094LL);
                        arr_19 [i_5] [i_0] = ((/* implicit */signed char) 4294967270U);
                        var_20 = ((/* implicit */unsigned char) 736395986U);
                        arr_20 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) var_11);
                    }
                } 
            } 
        }
        for (signed char i_6 = 0; i_6 < 16; i_6 += 2) /* same iter space */
        {
            var_21 = ((/* implicit */long long int) var_8);
            var_22 = ((/* implicit */signed char) (+(((((((/* implicit */int) var_7)) << (((/* implicit */int) arr_15 [i_0] [i_6] [i_6])))) | (((var_13) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (short)-7))))))));
        }
    }
    for (unsigned int i_7 = 0; i_7 < 23; i_7 += 2) 
    {
        var_23 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_24 [i_7])))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (signed char i_8 = 1; i_8 < 20; i_8 += 1) 
        {
            var_24 += ((/* implicit */signed char) var_11);
            var_25 -= ((/* implicit */short) var_9);
            /* LoopSeq 1 */
            for (unsigned long long int i_9 = 0; i_9 < 23; i_9 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned char i_10 = 0; i_10 < 23; i_10 += 2) 
                {
                    for (unsigned long long int i_11 = 0; i_11 < 23; i_11 += 2) 
                    {
                        {
                            arr_35 [i_11] [(_Bool)1] [i_9] [i_7] [(_Bool)1] [i_7] = (-(((((/* implicit */_Bool) var_10)) ? (var_6) : (((/* implicit */long long int) var_0)))));
                            arr_36 [(short)3] [i_8] [i_9] [i_10] [i_11] = ((((/* implicit */_Bool) arr_24 [i_7])) ? (((/* implicit */long long int) ((/* implicit */int) arr_34 [i_8 + 1] [i_8 + 2] [i_8]))) : (arr_33 [i_8 + 3] [i_8 + 3] [i_8 - 1] [i_8 - 1] [i_8 + 3] [i_8 + 1] [i_8 + 1]));
                            arr_37 [i_7] [i_8] [i_9] [(short)11] [i_11] = (+(arr_24 [i_8 - 1]));
                            var_26 &= ((/* implicit */short) var_14);
                            arr_38 [(unsigned char)16] [i_7] [1LL] [i_9] [i_10] [i_11] = ((/* implicit */unsigned short) arr_26 [i_7]);
                        }
                    } 
                } 
                var_27 |= ((/* implicit */signed char) (+(3586970770U)));
            }
            var_28 = ((/* implicit */long long int) (unsigned char)251);
        }
        for (signed char i_12 = 0; i_12 < 23; i_12 += 1) 
        {
            var_29 = ((/* implicit */unsigned long long int) var_1);
            var_30 = ((/* implicit */int) ((((arr_33 [i_12] [i_12] [i_12] [i_7] [i_7] [i_12] [(short)10]) / (arr_33 [i_7] [i_7] [i_7] [21U] [i_7] [i_7] [11LL]))) * (((/* implicit */long long int) ((/* implicit */int) min((var_5), (((/* implicit */short) (signed char)4))))))));
            var_31 = ((/* implicit */long long int) (((-(arr_40 [i_12] [i_7]))) - (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (_Bool)1)))))));
            var_32 -= 35184372056064LL;
        }
        /* LoopNest 2 */
        for (long long int i_13 = 4; i_13 < 22; i_13 += 1) 
        {
            for (unsigned int i_14 = 0; i_14 < 23; i_14 += 2) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned int i_15 = 0; i_15 < 23; i_15 += 1) /* same iter space */
                    {
                        arr_48 [i_7] [i_7] [i_15] [i_14] [i_15] = ((/* implicit */unsigned long long int) arr_28 [(unsigned char)14]);
                        arr_49 [i_7] [i_15] [i_7] [i_15] [i_15] [i_7] = ((/* implicit */unsigned char) var_6);
                        arr_50 [i_14] [i_15] [i_13 - 4] [i_15] [i_14] = ((/* implicit */unsigned char) (-(min((((/* implicit */long long int) ((int) var_9))), (((((/* implicit */_Bool) arr_46 [i_15] [i_15] [i_15] [i_7])) ? (var_1) : (var_6)))))));
                    }
                    for (unsigned int i_16 = 0; i_16 < 23; i_16 += 1) /* same iter space */
                    {
                        var_33 = ((/* implicit */long long int) min((var_33), (((/* implicit */long long int) arr_29 [i_7] [i_16]))));
                        var_34 *= ((/* implicit */unsigned int) arr_27 [i_14]);
                    }
                    var_35 = min((((/* implicit */signed char) (!(((/* implicit */_Bool) min((var_8), (var_8))))))), (((signed char) (-(var_12)))));
                    /* LoopSeq 2 */
                    for (unsigned short i_17 = 2; i_17 < 19; i_17 += 2) 
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned int i_18 = 1; i_18 < 21; i_18 += 2) 
                        {
                            arr_60 [i_18] [i_13] [i_13] = ((/* implicit */unsigned int) ((signed char) ((signed char) 4294967259U)));
                            arr_61 [i_7] [i_17] [i_18] [i_17] [i_18] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_45 [i_7] [i_17 + 4] [i_18 - 1]))));
                        }
                        var_36 = ((/* implicit */long long int) min((var_36), (((/* implicit */long long int) (-((((!(((/* implicit */_Bool) arr_40 [i_13 - 2] [i_14])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_54 [i_17] [i_7] [i_7] [i_7])) * (((/* implicit */int) arr_45 [i_17] [i_13 - 4] [i_14]))))) : (min((arr_24 [i_17]), (((/* implicit */unsigned long long int) arr_25 [i_7])))))))))));
                        var_37 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_52 [i_7] [i_13] [i_13] [i_7] [i_17 + 4] [i_13 - 1]) % (((/* implicit */unsigned int) ((/* implicit */int) arr_59 [i_13] [i_13 - 4] [i_14] [i_17] [i_17 + 4] [i_14])))))) && (((/* implicit */_Bool) 12422184713535149818ULL))));
                        var_38 = ((/* implicit */signed char) (+(((unsigned int) var_13))));
                    }
                    for (unsigned int i_19 = 0; i_19 < 23; i_19 += 2) 
                    {
                        var_39 = ((/* implicit */short) var_13);
                        arr_65 [i_13] = ((/* implicit */signed char) (-(((/* implicit */int) (unsigned short)43782))));
                        var_40 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) min((var_0), (((/* implicit */int) var_5))))) ? (((int) var_13)) : (((/* implicit */int) (unsigned char)165))))));
                        var_41 = arr_47 [i_7];
                    }
                }
            } 
        } 
    }
}
