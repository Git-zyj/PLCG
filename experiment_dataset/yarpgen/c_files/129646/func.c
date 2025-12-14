/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129646
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129646 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129646
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
    var_10 = ((/* implicit */unsigned int) (((~(var_1))) >= (max((((/* implicit */unsigned int) var_5)), (min((446100282U), (((/* implicit */unsigned int) var_8))))))));
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) max((((/* implicit */long long int) var_3)), (var_4)));
        var_11 = ((/* implicit */signed char) max((var_11), (((/* implicit */signed char) (!(((/* implicit */_Bool) min((-1073741824), (((/* implicit */int) (signed char)-2))))))))));
    }
    /* vectorizable */
    for (unsigned int i_1 = 0; i_1 < 20; i_1 += 4) 
    {
        arr_6 [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)63768))) == (((arr_4 [i_1]) + (arr_4 [i_1])))));
        /* LoopSeq 2 */
        for (long long int i_2 = 1; i_2 < 18; i_2 += 4) 
        {
            arr_9 [i_1] = var_8;
            /* LoopSeq 3 */
            for (long long int i_3 = 0; i_3 < 20; i_3 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (unsigned short i_4 = 0; i_4 < 20; i_4 += 3) 
                {
                    for (unsigned long long int i_5 = 2; i_5 < 17; i_5 += 1) 
                    {
                        {
                            arr_18 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) arr_11 [i_1]);
                            var_12 += ((/* implicit */unsigned char) (unsigned short)28107);
                        }
                    } 
                } 
                /* LoopSeq 3 */
                for (long long int i_6 = 3; i_6 < 19; i_6 += 2) 
                {
                    var_13 = ((/* implicit */_Bool) (~(arr_5 [i_2 + 2] [i_2 + 2])));
                    arr_22 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) arr_19 [i_6] [i_6 - 1] [i_6 - 1] [i_6 - 3] [i_6 - 3] [i_6])) ? (((/* implicit */int) arr_19 [i_6] [i_6 + 1] [i_6] [i_6 - 1] [i_6 - 2] [i_6])) : (((/* implicit */int) var_2))));
                    arr_23 [i_1] [i_1] [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (arr_17 [i_1] [i_2 + 1] [i_2] [i_2 + 1] [i_3] [i_2] [i_6 - 3]) : (arr_17 [i_1] [i_1] [i_2] [i_3] [i_3] [i_6] [i_6 + 1])));
                    var_14 = ((/* implicit */long long int) max((var_14), (((/* implicit */long long int) ((int) (unsigned char)100)))));
                    arr_24 [i_6] [i_2] [i_3] [i_6] = ((/* implicit */int) (short)-15226);
                }
                for (unsigned short i_7 = 0; i_7 < 20; i_7 += 4) /* same iter space */
                {
                    arr_27 [i_1] = ((/* implicit */signed char) ((((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1))))) * ((+(arr_0 [i_2] [i_2])))));
                    var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_20 [i_1] [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (((((/* implicit */_Bool) var_6)) ? (1153025062U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)118)))))));
                    arr_28 [i_1] [i_2] = ((((/* implicit */int) (unsigned short)60338)) - (((/* implicit */int) var_7)));
                }
                for (unsigned short i_8 = 0; i_8 < 20; i_8 += 4) /* same iter space */
                {
                    arr_32 [i_1] [i_2 - 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) 2452427142U)) || (((/* implicit */_Bool) var_8))));
                    var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) -3283496352239211689LL))));
                }
                arr_33 [i_1] [i_2] [i_3] = ((/* implicit */unsigned char) arr_4 [i_1]);
                /* LoopNest 2 */
                for (unsigned short i_9 = 0; i_9 < 20; i_9 += 3) 
                {
                    for (short i_10 = 0; i_10 < 20; i_10 += 4) 
                    {
                        {
                            var_17 = ((/* implicit */unsigned int) (signed char)83);
                            arr_39 [i_1] [i_1] [i_1] [i_1] [i_1] [i_10] &= ((/* implicit */unsigned short) (~(1384297893)));
                        }
                    } 
                } 
            }
            for (long long int i_11 = 0; i_11 < 20; i_11 += 1) /* same iter space */
            {
                /* LoopSeq 1 */
                for (long long int i_12 = 1; i_12 < 19; i_12 += 4) 
                {
                    var_18 += ((/* implicit */long long int) arr_8 [i_12 - 1] [i_12 + 1]);
                    var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) (_Bool)1))));
                    arr_45 [i_12 - 1] [i_12 - 1] = ((unsigned int) ((18446744073709551603ULL) << (((((/* implicit */int) var_5)) - (195)))));
                    arr_46 [i_2] [i_2] [i_2] = ((/* implicit */int) ((((/* implicit */int) (unsigned char)61)) >= (((/* implicit */int) var_2))));
                    arr_47 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */long long int) arr_41 [i_1] [i_11]);
                }
                arr_48 [i_1] [i_1] [i_11] = ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)65535)) >= (((/* implicit */int) arr_43 [i_2 - 1] [i_2] [i_2] [i_11] [i_1]))));
            }
            for (unsigned long long int i_13 = 2; i_13 < 19; i_13 += 3) 
            {
                var_20 = ((/* implicit */unsigned short) (-(arr_10 [i_13 - 2] [i_13 + 1] [i_2 - 1])));
                var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) ((arr_52 [i_13 + 1] [i_13] [i_1]) - (arr_42 [i_1] [i_2] [i_13] [i_1]))))));
                arr_53 [i_1] [i_13] [i_13] [i_2] = ((/* implicit */unsigned int) var_4);
                /* LoopNest 2 */
                for (unsigned short i_14 = 1; i_14 < 16; i_14 += 4) 
                {
                    for (long long int i_15 = 0; i_15 < 20; i_15 += 2) 
                    {
                        {
                            arr_58 [i_1] [i_1] [i_1] [i_1] [i_13] = ((/* implicit */long long int) arr_30 [i_1] [i_1] [i_13] [i_1] [i_1]);
                            var_22 += ((/* implicit */short) var_1);
                        }
                    } 
                } 
            }
            var_23 = ((((((/* implicit */_Bool) arr_31 [i_2])) && (((/* implicit */_Bool) (signed char)42)))) || (((/* implicit */_Bool) ((signed char) arr_43 [i_2] [i_2] [i_2] [i_2] [i_2]))));
            var_24 = ((/* implicit */unsigned long long int) max((var_24), (((/* implicit */unsigned long long int) 1271486902))));
            arr_59 [i_2 + 1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_34 [i_2 - 1] [i_2])) && (((/* implicit */_Bool) arr_57 [i_2] [i_2 - 1] [i_1] [i_2] [i_1] [i_2 - 1]))));
        }
        for (long long int i_16 = 1; i_16 < 18; i_16 += 3) 
        {
            var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_56 [i_1] [i_16] [i_1] [i_16] [i_1] [i_16] [i_16])) <= (((/* implicit */int) ((((/* implicit */_Bool) arr_19 [i_1] [i_1] [i_1] [i_16] [i_16] [i_16])) && (var_3))))));
            arr_62 [i_16] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1073741823)) ? (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)33))) * (4139886728U)))) : (arr_12 [i_16 - 1] [i_16 - 1] [i_16 - 1])));
            arr_63 [i_16 - 1] [i_16 - 1] [i_16] = -6628001156284397183LL;
            arr_64 [i_1] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) 12881595002697753392ULL)) ? (((((/* implicit */_Bool) arr_4 [i_1])) ? (-231689076560125041LL) : (((/* implicit */long long int) ((/* implicit */int) arr_26 [i_1] [i_16] [i_1] [i_16] [i_16 - 1] [i_1]))))) : (((/* implicit */long long int) ((/* implicit */int) arr_30 [i_16 + 1] [i_16] [i_16 + 2] [i_16 + 1] [i_16 - 1])))));
        }
    }
    var_26 = ((((/* implicit */long long int) (+(201326592)))) - (3283496352239211691LL));
}
