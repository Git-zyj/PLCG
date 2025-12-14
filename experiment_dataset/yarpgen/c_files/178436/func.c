/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178436
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178436 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178436
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
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            for (unsigned int i_2 = 2; i_2 < 24; i_2 += 3) 
            {
                {
                    arr_9 [i_0] [i_0] [18] [i_2] = ((/* implicit */unsigned char) min((min((((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-8735))) + (12068043019311242061ULL))), (((/* implicit */unsigned long long int) var_9)))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((var_6) || (((/* implicit */_Bool) (short)-8730))))))))));
                    arr_10 [i_0] = ((/* implicit */unsigned char) (signed char)15);
                    arr_11 [i_0] [i_0] = ((/* implicit */unsigned char) var_0);
                }
            } 
        } 
    } 
    var_10 = ((/* implicit */int) var_3);
    /* LoopSeq 1 */
    for (unsigned int i_3 = 4; i_3 < 7; i_3 += 2) 
    {
        /* LoopSeq 3 */
        for (short i_4 = 4; i_4 < 9; i_4 += 4) /* same iter space */
        {
            arr_18 [i_4] [i_3] [i_3] |= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_3 - 1])) * (((/* implicit */int) arr_3 [i_3 + 3]))))) ? (min((var_5), (((/* implicit */unsigned long long int) var_8)))) : (((/* implicit */unsigned long long int) ((((arr_13 [i_4 - 3]) + (2147483647))) << (((((/* implicit */int) (short)10997)) - (10997))))))));
            arr_19 [6] [i_3 - 3] [i_3 - 3] = ((/* implicit */unsigned int) ((((((/* implicit */int) (!(((/* implicit */_Bool) var_0))))) ^ (((((((/* implicit */int) var_8)) + (2147483647))) >> (((var_3) - (17386440404767470701ULL))))))) << (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_15 [i_3] [(_Bool)1])) < (((/* implicit */int) var_1)))))) <= (3254438592316160881LL))))));
            var_11 = ((/* implicit */short) arr_3 [i_3 - 1]);
            /* LoopSeq 3 */
            for (short i_5 = 4; i_5 < 6; i_5 += 3) 
            {
                var_12 = ((/* implicit */unsigned int) ((int) min((((((/* implicit */_Bool) -7413730372288157122LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))) : (arr_21 [i_3 - 4]))), (-9087964282802064425LL))));
                var_13 = ((/* implicit */signed char) min((var_13), (((/* implicit */signed char) (unsigned char)26))));
            }
            for (unsigned char i_6 = 1; i_6 < 6; i_6 += 2) 
            {
                var_14 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (short)-8718))));
                arr_26 [i_6 + 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) && (((/* implicit */_Bool) ((((/* implicit */int) (short)0)) * (((/* implicit */int) arr_14 [i_4 - 2] [i_4] [i_4])))))));
                arr_27 [i_3] [i_3] [i_6] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)25819))));
            }
            for (int i_7 = 0; i_7 < 10; i_7 += 4) 
            {
                var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) ((((/* implicit */int) arr_24 [i_7] [i_4])) <= (((16777215) << (((10312789669671904813ULL) - (10312789669671904807ULL))))))))));
                arr_30 [9LL] [i_4 - 4] [i_4] = ((/* implicit */int) ((((/* implicit */int) var_7)) < (((/* implicit */int) min((var_7), ((short)-8735))))));
            }
        }
        for (short i_8 = 4; i_8 < 9; i_8 += 4) /* same iter space */
        {
            var_16 = ((/* implicit */unsigned char) (((-(((/* implicit */int) arr_33 [i_8])))) & (((/* implicit */int) var_8))));
            var_17 = ((/* implicit */unsigned long long int) var_7);
            /* LoopSeq 4 */
            for (short i_9 = 3; i_9 < 9; i_9 += 2) /* same iter space */
            {
                var_18 += ((/* implicit */int) ((unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -5097442931222872948LL)) ? (12068043019311242043ULL) : (((/* implicit */unsigned long long int) -1877889144))))) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) var_4)))));
                arr_36 [i_3] [i_8] [i_8] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)8730)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) var_6))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)7170))) : (var_0)))) && (((/* implicit */_Bool) ((((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) (unsigned char)0)))) ? (((((/* implicit */_Bool) 268435455ULL)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (7226158347042328328LL))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 5739382530859226879ULL)) || (((/* implicit */_Bool) (signed char)126)))))))))));
            }
            for (short i_10 = 3; i_10 < 9; i_10 += 2) /* same iter space */
            {
                var_19 = ((/* implicit */unsigned char) (short)-1);
                /* LoopNest 2 */
                for (short i_11 = 0; i_11 < 10; i_11 += 3) 
                {
                    for (unsigned long long int i_12 = 0; i_12 < 10; i_12 += 4) 
                    {
                        {
                            var_20 = ((/* implicit */unsigned char) var_6);
                            var_21 = (((~(8945247599990369053ULL))) == (((/* implicit */unsigned long long int) var_2)));
                        }
                    } 
                } 
                arr_44 [i_3] [(signed char)9] [i_3] [i_10] = ((/* implicit */short) ((0LL) << (((((/* implicit */int) (signed char)-79)) + (127)))));
            }
            /* vectorizable */
            for (unsigned long long int i_13 = 0; i_13 < 10; i_13 += 4) 
            {
                arr_47 [i_3] [(short)3] = ((((((/* implicit */int) var_1)) + (2147483647))) << (((/* implicit */int) var_9)));
                /* LoopNest 2 */
                for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                {
                    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                    {
                        {
                            var_22 |= ((/* implicit */unsigned int) arr_20 [i_3 - 3] [i_13] [i_8 + 1] [i_3 - 3]);
                            arr_52 [i_15] [8] [i_15] [i_14] [i_13] [i_8] [i_3] = ((/* implicit */long long int) ((unsigned char) (-(((/* implicit */int) var_4)))));
                            arr_53 [i_3] [i_8] [i_13] [i_14] [i_14] = ((/* implicit */short) (+(var_2)));
                            arr_54 [i_8] [i_15] = ((/* implicit */unsigned char) ((long long int) ((((/* implicit */unsigned long long int) 268435455)) & (16901058456712570978ULL))));
                        }
                    } 
                } 
            }
            for (unsigned char i_16 = 2; i_16 < 9; i_16 += 4) 
            {
                arr_57 [i_8] = ((/* implicit */long long int) (short)25023);
                var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((_Bool) var_4))) + (((/* implicit */int) ((1545685616996980637ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) (short)9547))))))));
                var_24 -= ((/* implicit */short) ((min((min((var_5), (((/* implicit */unsigned long long int) (_Bool)1)))), (((/* implicit */unsigned long long int) min((var_2), (((/* implicit */unsigned int) (_Bool)1))))))) % (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned long long int) 4082432495832609396ULL))) && (((/* implicit */_Bool) arr_50 [i_3 - 3] [i_8 - 2]))))))));
                arr_58 [i_3] [i_8] [i_16] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) / (16901058456712570978ULL)))))))) * (((var_3) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((1545685616996980637ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))))))));
            }
        }
        for (long long int i_17 = 0; i_17 < 10; i_17 += 3) 
        {
            var_25 = ((/* implicit */unsigned long long int) ((((int) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)17))) : (67108863U)))) >> (((var_2) - (2725113525U)))));
            arr_62 [i_17] [i_17] [i_17] = ((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)63))) ^ (12068043019311242061ULL))) >> ((((+(min((1073741823LL), (((/* implicit */long long int) 2824095766U)))))) - (1073741811LL)))));
            var_26 = ((/* implicit */unsigned char) max((var_26), (((/* implicit */unsigned char) var_9))));
            arr_63 [i_17] [i_17] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) var_5)) && (var_6)))))));
            arr_64 [i_17] [i_17] = ((/* implicit */signed char) ((((/* implicit */unsigned int) arr_32 [(short)4])) >= (4294967295U)));
        }
        arr_65 [6LL] = ((/* implicit */unsigned long long int) ((((((/* implicit */int) (unsigned char)15)) << (((1425025896U) - (1425025879U))))) * (((((((/* implicit */int) var_1)) * (((/* implicit */int) var_6)))) * (((((/* implicit */int) arr_16 [i_3] [i_3 + 1] [i_3])) * (((/* implicit */int) (unsigned char)113))))))));
    }
}
