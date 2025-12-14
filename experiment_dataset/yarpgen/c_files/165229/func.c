/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165229
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165229 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165229
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
    var_20 = ((/* implicit */int) ((var_19) <= (((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))));
    var_21 = ((/* implicit */unsigned char) (((!(((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) var_18)))))) && (((((/* implicit */_Bool) var_12)) || ((!(((/* implicit */_Bool) var_18))))))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 1; i_0 < 21; i_0 += 2) 
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 1; i_1 < 20; i_1 += 2) /* same iter space */
        {
            var_22 = ((/* implicit */short) (-(var_7)));
            arr_4 [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) (short)-30965))));
        }
        for (unsigned long long int i_2 = 1; i_2 < 20; i_2 += 2) /* same iter space */
        {
            /* LoopSeq 3 */
            /* vectorizable */
            for (long long int i_3 = 0; i_3 < 22; i_3 += 4) 
            {
                arr_11 [(_Bool)1] [i_2] [i_3] = ((/* implicit */int) (!(((/* implicit */_Bool) 3749897272U))));
                /* LoopSeq 3 */
                for (long long int i_4 = 0; i_4 < 22; i_4 += 2) /* same iter space */
                {
                    var_23 = ((/* implicit */int) var_7);
                    var_24 = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_12 [i_0 + 1] [i_2 - 1] [i_3] [i_3]))));
                    arr_15 [i_0] [i_2 + 2] [(unsigned char)10] [i_4] &= ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_12 [i_0] [i_0 + 1] [i_2 + 1] [i_4]))));
                    var_25 = ((/* implicit */unsigned short) (+(arr_14 [20LL] [i_2] [i_3] [i_4] [i_2 + 2])));
                    var_26 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_0] [i_2] [i_3] [i_3])) ? (16596702500824504840ULL) : (16596702500824504859ULL)))) ? (((/* implicit */int) arr_6 [i_0 - 1] [i_2 + 1])) : (((/* implicit */int) arr_3 [i_0 - 1] [i_0 - 1] [i_0 - 1]))));
                }
                for (long long int i_5 = 0; i_5 < 22; i_5 += 2) /* same iter space */
                {
                    var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_0 - 1] [i_0 - 1] [i_0 - 1])) ? (((/* implicit */int) arr_3 [i_0 - 1] [i_0 + 1] [i_0 + 1])) : (((/* implicit */int) var_3))));
                    /* LoopSeq 2 */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
                    {
                        var_28 |= ((/* implicit */unsigned short) arr_8 [i_3]);
                        var_29 = ((/* implicit */unsigned long long int) ((short) var_15));
                        var_30 |= ((/* implicit */unsigned char) var_0);
                    }
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
                    {
                        arr_22 [i_0] = ((/* implicit */_Bool) arr_17 [i_0] [i_0 + 1] [i_0] [i_0] [(unsigned char)0]);
                        arr_23 [i_7] [i_0] [i_3] [i_2 + 2] [i_0] = ((/* implicit */long long int) arr_19 [i_0 + 1] [12U] [i_2 + 1] [i_2] [i_2] [i_7] [15]);
                    }
                }
                for (long long int i_8 = 0; i_8 < 22; i_8 += 2) /* same iter space */
                {
                    var_31 |= ((/* implicit */unsigned long long int) var_18);
                    var_32 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_21 [i_8] [i_2 + 1] [i_3] [i_8] [i_8] [i_3] [i_3])) ? (((/* implicit */int) arr_21 [i_2 + 2] [i_3] [i_3] [i_3] [i_2 + 2] [i_2 - 1] [i_0 + 1])) : (((/* implicit */int) arr_21 [i_0] [i_0 - 1] [i_0 - 1] [i_0] [(unsigned short)14] [i_0 - 1] [i_0]))));
                    var_33 = ((/* implicit */long long int) ((signed char) (-(1850041572885046768ULL))));
                    var_34 = ((/* implicit */signed char) (!(((((/* implicit */int) arr_0 [i_0])) < (((/* implicit */int) (signed char)-115))))));
                }
                var_35 = ((/* implicit */int) (~(1850041572885046778ULL)));
            }
            for (int i_9 = 0; i_9 < 22; i_9 += 2) /* same iter space */
            {
                var_36 = ((/* implicit */int) (signed char)-32);
                var_37 = (signed char)36;
            }
            for (int i_10 = 0; i_10 < 22; i_10 += 2) /* same iter space */
            {
                /* LoopSeq 3 */
                for (long long int i_11 = 3; i_11 < 20; i_11 += 4) /* same iter space */
                {
                    var_38 = ((/* implicit */long long int) arr_26 [i_2]);
                    var_39 = ((/* implicit */short) arr_29 [i_0] [i_0] [(short)2]);
                    var_40 = ((/* implicit */long long int) arr_30 [i_2 + 1] [i_2 + 2]);
                }
                for (long long int i_12 = 3; i_12 < 20; i_12 += 4) /* same iter space */
                {
                    var_41 = ((/* implicit */int) max((var_41), (((/* implicit */int) ((long long int) min((arr_29 [i_0] [i_0] [i_0]), (2846242138U)))))));
                    arr_35 [i_12] = ((/* implicit */unsigned short) var_7);
                }
                for (unsigned short i_13 = 1; i_13 < 20; i_13 += 4) 
                {
                    /* LoopSeq 2 */
                    for (long long int i_14 = 2; i_14 < 20; i_14 += 4) 
                    {
                        var_42 = ((/* implicit */int) min((var_42), (((/* implicit */int) ((((/* implicit */_Bool) arr_13 [i_0] [i_13 - 1] [i_10] [i_0] [i_0 - 1] [i_10])) ? (min((((/* implicit */unsigned long long int) arr_8 [i_0])), (arr_13 [i_0] [i_13 - 1] [i_0 + 1] [i_13] [i_0 - 1] [11ULL]))) : (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) arr_32 [i_0] [i_13 - 1] [i_10] [i_14] [i_0 - 1])), (var_7)))))))));
                        var_43 = ((((/* implicit */_Bool) ((1850041572885046763ULL) ^ (1850041572885046763ULL)))) ? (((/* implicit */long long int) var_10)) : (-6079206548214283174LL));
                    }
                    for (long long int i_15 = 0; i_15 < 22; i_15 += 3) 
                    {
                        var_44 = ((/* implicit */unsigned char) arr_31 [i_0] [1LL] [i_10] [i_15] [i_15] [i_10]);
                        arr_44 [i_15] [i_15] [(unsigned char)20] [i_2] [i_2 + 2] = ((/* implicit */long long int) ((int) arr_24 [i_0 + 1] [i_0]));
                    }
                    var_45 = ((/* implicit */long long int) max((var_45), (((((((min((var_1), (((/* implicit */long long int) arr_31 [i_0] [i_0] [i_2 - 1] [i_10] [i_13] [i_13])))) + (9223372036854775807LL))) >> (((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)0)), (arr_31 [i_13] [i_10] [i_10] [(unsigned short)3] [i_0] [i_0 - 1])))))) << (((((((/* implicit */_Bool) var_12)) ? (((((/* implicit */_Bool) 3462078177877102267ULL)) ? (var_17) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)7551))))) : (((/* implicit */unsigned long long int) (~(arr_7 [i_0] [i_2])))))) - (7853975743435668278ULL)))))));
                }
                var_46 = ((/* implicit */int) min((((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0 + 1] [i_0 - 1]))) : (-1160910592360460272LL))), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_2 [i_0] [i_0 - 1])))))));
                arr_45 [i_0] [i_10] = ((/* implicit */unsigned int) min((arr_32 [i_0 - 1] [i_0] [i_2] [i_10] [i_10]), (((/* implicit */unsigned char) ((signed char) arr_40 [i_0 + 1] [i_2 + 2])))));
                var_47 = ((/* implicit */unsigned short) arr_1 [i_10]);
                var_48 *= ((/* implicit */unsigned short) ((((_Bool) ((((/* implicit */_Bool) (signed char)36)) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) arr_33 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_2] [(unsigned char)20])))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)94)) / (((/* implicit */int) (unsigned char)246))))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-79))) : (min((3213528847440742037LL), (3154151778878969808LL))))) : (((/* implicit */long long int) ((arr_16 [i_0 - 1] [i_2 + 2]) * (((/* implicit */unsigned int) ((/* implicit */int) var_12))))))));
            }
            var_49 = ((/* implicit */long long int) ((unsigned long long int) arr_12 [i_0] [i_2] [i_0] [i_2]));
            var_50 = ((/* implicit */short) (signed char)36);
            var_51 = ((/* implicit */long long int) 1850041572885046752ULL);
        }
        arr_46 [i_0] = ((/* implicit */_Bool) var_11);
    }
    var_52 |= ((/* implicit */_Bool) ((long long int) 424231100));
}
