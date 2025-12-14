/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179220
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179220 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179220
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
    for (int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */short) min((((/* implicit */unsigned int) 2025047423)), (((524287U) | (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0])) || (((/* implicit */_Bool) (unsigned short)19457))))))))));
        var_18 = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 524308U)) ? (min((((/* implicit */int) (short)17401)), (2147483646))) : (max((((/* implicit */int) arr_0 [i_0])), (var_11)))))), (((max((((/* implicit */unsigned long long int) (unsigned short)32752)), (2490822142326038164ULL))) | (2490822142326038159ULL)))));
    }
    /* LoopSeq 2 */
    for (int i_1 = 0; i_1 < 10; i_1 += 1) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (short i_2 = 0; i_2 < 10; i_2 += 2) /* same iter space */
        {
            /* LoopSeq 1 */
            for (short i_3 = 0; i_3 < 10; i_3 += 1) 
            {
                var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (15079898116818600906ULL) : (((/* implicit */unsigned long long int) var_15))))) ? (arr_7 [i_3] [i_2]) : (((/* implicit */unsigned long long int) arr_6 [i_1] [i_2] [6U])))))));
                var_20 -= ((/* implicit */unsigned int) arr_9 [i_3] [(unsigned short)6]);
                var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) (unsigned short)46071))));
            }
            var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) (-2147483647 - 1)))));
        }
        for (short i_4 = 0; i_4 < 10; i_4 += 2) /* same iter space */
        {
            var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2147483647)) ? (var_0) : (((/* implicit */int) (short)9018))))) > (var_13)))) << (((((int) 131056U)) - (131036))))))));
            arr_13 [i_4] [i_4] [i_1] = ((/* implicit */int) ((unsigned short) max((arr_1 [i_1]), (((/* implicit */unsigned long long int) (short)4479)))));
            var_24 = ((/* implicit */int) ((short) -1740096553));
        }
        var_25 = ((/* implicit */short) 1073741823);
        /* LoopNest 2 */
        for (short i_5 = 0; i_5 < 10; i_5 += 1) 
        {
            for (unsigned long long int i_6 = 0; i_6 < 10; i_6 += 4) 
            {
                {
                    /* LoopSeq 3 */
                    for (short i_7 = 0; i_7 < 10; i_7 += 1) 
                    {
                        arr_23 [i_1] [i_5] [0ULL] [i_6] [i_6] [i_7] = (-((+(arr_19 [i_1] [i_5] [i_6] [i_7]))));
                        arr_24 [i_7] [i_6] = ((/* implicit */unsigned int) (unsigned short)46072);
                        arr_25 [3] [i_7] [2U] [i_1] = ((/* implicit */int) max((1658385758544333446ULL), (((/* implicit */unsigned long long int) (short)4095))));
                        arr_26 [i_7] [i_5] [i_7] [i_7] = ((max((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) arr_11 [6] [i_5] [4U])) != (4294967274U)))), (16471546098176891755ULL))) << (((arr_19 [i_1] [i_5] [i_6] [i_7]) - (3311642263U))));
                    }
                    for (short i_8 = 2; i_8 < 7; i_8 += 1) 
                    {
                        arr_30 [7ULL] [9] [(unsigned short)9] = ((((((/* implicit */_Bool) arr_22 [i_1] [i_8 + 2] [2ULL] [i_8] [i_5])) ? (((/* implicit */unsigned int) arr_22 [2] [i_8 + 3] [i_6] [i_8] [6ULL])) : (arr_17 [i_1] [i_8 + 3] [(short)4] [1ULL]))) << (((/* implicit */int) ((((/* implicit */_Bool) arr_22 [i_1] [i_8 - 2] [4U] [i_8] [3U])) && (((/* implicit */_Bool) arr_22 [i_1] [i_8 - 2] [i_8] [i_8] [i_6]))))));
                        /* LoopSeq 3 */
                        for (int i_9 = 0; i_9 < 10; i_9 += 2) /* same iter space */
                        {
                            arr_33 [i_5] = ((/* implicit */unsigned int) (-(((/* implicit */int) min((((/* implicit */unsigned short) (short)-13424)), (((unsigned short) (short)-4759)))))));
                            var_26 = ((/* implicit */short) ((unsigned long long int) -1174408591));
                        }
                        for (int i_10 = 0; i_10 < 10; i_10 += 2) /* same iter space */
                        {
                            arr_36 [i_1] [i_1] [i_1] = ((/* implicit */short) (+(((/* implicit */int) var_14))));
                            var_27 = (((-((+(var_9))))) << (((/* implicit */int) min(((!(((/* implicit */_Bool) 144114638320041984ULL)))), ((!(((/* implicit */_Bool) 15506720937223406977ULL))))))));
                            var_28 ^= min((min((((/* implicit */unsigned int) ((204187240U) != (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))), (arr_12 [i_8 + 1] [0]))), (((/* implicit */unsigned int) arr_31 [1ULL] [6ULL] [i_6] [i_8] [2U])));
                        }
                        /* vectorizable */
                        for (int i_11 = 0; i_11 < 10; i_11 += 2) /* same iter space */
                        {
                            arr_39 [i_1] = ((/* implicit */int) (!(((/* implicit */_Bool) (short)-20693))));
                            var_29 *= ((/* implicit */short) ((35184372072448ULL) <= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_28 [0ULL])) ? (arr_28 [(unsigned short)1]) : (arr_14 [i_11]))))));
                        }
                    }
                    for (unsigned short i_12 = 2; i_12 < 9; i_12 += 3) 
                    {
                        arr_43 [i_12] [3ULL] [i_12] = ((/* implicit */short) 1051484299);
                        var_30 = ((/* implicit */short) ((unsigned int) ((((/* implicit */_Bool) (short)32748)) ? (((/* implicit */unsigned int) arr_28 [i_12 - 1])) : (3513383363U))));
                        arr_44 [i_12] [i_12] [i_6] [i_12] [i_1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_14))));
                    }
                    /* LoopSeq 1 */
                    for (short i_13 = 3; i_13 < 7; i_13 += 4) 
                    {
                        arr_48 [3ULL] [4ULL] [i_6] = ((/* implicit */int) (-(((unsigned int) max((arr_38 [i_5] [3U]), (((/* implicit */unsigned int) arr_28 [i_1])))))));
                        var_31 = ((/* implicit */unsigned int) max((((unsigned short) 3366845956890950715ULL)), (((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_4)), (arr_10 [3U] [3ULL])))) < ((+(arr_34 [3] [i_13] [i_13] [i_6] [5U] [i_1] [i_1]))))))));
                    }
                }
            } 
        } 
        /* LoopNest 3 */
        for (unsigned long long int i_14 = 0; i_14 < 10; i_14 += 4) 
        {
            for (unsigned short i_15 = 0; i_15 < 10; i_15 += 4) 
            {
                for (unsigned int i_16 = 0; i_16 < 10; i_16 += 2) 
                {
                    {
                        arr_57 [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) (short)5684);
                        var_32 = ((/* implicit */short) ((((((/* implicit */_Bool) arr_9 [i_15] [i_16])) ? (arr_18 [(unsigned short)5] [8ULL]) : (arr_17 [i_1] [i_14] [8] [(short)1]))) ^ (var_7)));
                    }
                } 
            } 
        } 
        arr_58 [(unsigned short)0] = ((/* implicit */unsigned long long int) var_8);
    }
    for (unsigned long long int i_17 = 0; i_17 < 24; i_17 += 3) 
    {
        var_33 = ((/* implicit */unsigned int) var_11);
        arr_62 [i_17] = ((/* implicit */unsigned int) var_6);
        arr_63 [i_17] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) 16181649132736079232ULL)) ? (-308014124) : (((/* implicit */int) (short)32756)))) <= (((/* implicit */int) (short)-29765))));
        var_34 ^= ((/* implicit */short) ((unsigned long long int) 3584));
    }
    var_35 = 3581416697U;
    var_36 += ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) var_4)) ? (var_4) : (var_5)))));
}
