/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122541
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122541 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122541
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
    var_10 -= ((/* implicit */_Bool) ((189712029U) * (((/* implicit */unsigned int) ((/* implicit */int) (!(var_0)))))));
    /* LoopSeq 2 */
    for (int i_0 = 3; i_0 < 17; i_0 += 3) 
    {
        var_11 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((13555246706745037459ULL) != (((/* implicit */unsigned long long int) 1718629524))))) << (((18446744073709551609ULL) - (18446744073709551604ULL)))));
        var_12 = ((/* implicit */short) 18446744073709551609ULL);
        var_13 = 18ULL;
    }
    /* vectorizable */
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
    {
        arr_5 [i_1] [1] |= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */long long int) 1718629529)) / (3413553614740934092LL)))) ? ((((_Bool)1) ? (((/* implicit */unsigned long long int) 1317731960)) : (arr_4 [i_1]))) : (((((/* implicit */_Bool) arr_0 [i_1])) ? (6ULL) : (((/* implicit */unsigned long long int) var_6))))));
        /* LoopSeq 3 */
        for (unsigned short i_2 = 0; i_2 < 11; i_2 += 3) 
        {
            var_14 |= ((/* implicit */int) arr_8 [(_Bool)1] [(_Bool)1]);
            /* LoopSeq 2 */
            for (signed char i_3 = 0; i_3 < 11; i_3 += 2) 
            {
                /* LoopSeq 3 */
                for (long long int i_4 = 0; i_4 < 11; i_4 += 3) 
                {
                    var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_4 [i_1 - 1])) ? (arr_4 [i_1 - 1]) : (arr_4 [i_1 - 1]))))));
                    var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) var_5))));
                    arr_14 [i_1] [i_2] [i_2] [i_3] [i_3] [0U] = ((/* implicit */unsigned char) 2147483635);
                }
                for (short i_5 = 3; i_5 < 9; i_5 += 3) 
                {
                    var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) ((long long int) arr_12 [i_1] [i_1] [i_1] [i_1] [i_1 - 1])))));
                    arr_17 [i_1] [i_2] [i_1] [i_5] = ((/* implicit */signed char) ((unsigned int) (_Bool)0));
                }
                for (unsigned long long int i_6 = 0; i_6 < 11; i_6 += 2) 
                {
                    arr_20 [(unsigned short)5] [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_18 [i_1 - 1])) < (((/* implicit */int) arr_18 [i_1 - 1]))));
                    var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_9 [i_1 - 1] [(unsigned short)7] [i_1] [i_1 - 1])) : (((/* implicit */int) arr_9 [i_1 - 1] [i_1] [(signed char)5] [i_1 - 1])))))));
                }
                var_19 = ((int) arr_16 [i_1 - 1] [i_1] [i_1] [i_1]);
                var_20 ^= ((/* implicit */unsigned char) ((arr_15 [i_3] [i_2] [i_3] [i_3] [i_3]) <= (((/* implicit */long long int) ((/* implicit */int) (!(arr_9 [i_1] [10] [i_2] [5LL])))))));
            }
            for (long long int i_7 = 0; i_7 < 11; i_7 += 2) 
            {
                arr_23 [i_1] [i_2] [i_7] [i_7] = ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) arr_3 [5])) ? (((/* implicit */int) arr_19 [i_2] [i_2] [i_7] [6])) : ((-2147483647 - 1)))));
                arr_24 [i_2] [i_1] [i_2] [i_2] = ((/* implicit */unsigned int) (unsigned char)213);
                /* LoopNest 2 */
                for (short i_8 = 0; i_8 < 11; i_8 += 3) 
                {
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        {
                            arr_31 [i_2] [6U] [7] [i_9] = ((/* implicit */_Bool) (~(arr_6 [i_2] [i_1 - 1])));
                            var_21 = ((/* implicit */unsigned long long int) ((int) arr_19 [i_1] [i_1] [i_1] [i_1 - 1]));
                        }
                    } 
                } 
                var_22 *= ((/* implicit */_Bool) ((short) arr_8 [i_7] [i_1 - 1]));
                arr_32 [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) (!((_Bool)1)));
            }
            arr_33 [i_2] [i_2] [i_2] = ((/* implicit */short) var_5);
            arr_34 [i_1] [i_2] [i_2] = ((/* implicit */unsigned short) ((_Bool) 9ULL));
        }
        for (short i_10 = 0; i_10 < 11; i_10 += 3) 
        {
            arr_38 [i_10] = ((/* implicit */int) ((((/* implicit */_Bool) (short)32745)) ? (arr_13 [i_1] [i_1 - 1] [i_1 - 1] [i_10]) : (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_7))) ^ (var_1))))));
            arr_39 [i_1] [i_10] = ((/* implicit */unsigned long long int) ((long long int) (~(18446744073709551597ULL))));
        }
        for (unsigned int i_11 = 0; i_11 < 11; i_11 += 3) 
        {
            var_23 -= ((/* implicit */short) arr_16 [i_1] [i_1 - 1] [i_11] [i_11]);
            var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) var_2))));
            /* LoopSeq 3 */
            for (long long int i_12 = 2; i_12 < 10; i_12 += 2) 
            {
                /* LoopSeq 1 */
                for (unsigned char i_13 = 0; i_13 < 11; i_13 += 2) 
                {
                    var_25 -= ((/* implicit */short) var_5);
                    arr_48 [i_13] [0U] [6LL] [i_13] [i_11] [i_11] = ((unsigned int) ((((/* implicit */_Bool) var_8)) ? (3726731044U) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))));
                    arr_49 [i_1] [i_11] [i_12] [i_12] [i_13] = ((/* implicit */unsigned long long int) 4294967292U);
                }
                var_26 -= ((/* implicit */short) var_1);
                /* LoopSeq 4 */
                for (int i_14 = 1; i_14 < 10; i_14 += 3) 
                {
                    arr_54 [i_1 - 1] [(unsigned char)1] [i_11] [(unsigned char)1] [i_12] [(unsigned char)1] = ((/* implicit */int) var_3);
                    var_27 = ((/* implicit */short) max((var_27), (((short) -3413553614740934093LL))));
                }
                for (unsigned short i_15 = 0; i_15 < 11; i_15 += 2) /* same iter space */
                {
                    var_28 = ((/* implicit */short) max((var_28), (((/* implicit */short) arr_10 [i_12 - 1] [i_11] [i_1 - 1] [i_15]))));
                    arr_58 [i_11] [(_Bool)1] [i_12 + 1] = ((/* implicit */unsigned int) var_6);
                }
                for (unsigned short i_16 = 0; i_16 < 11; i_16 += 2) /* same iter space */
                {
                    var_29 = ((/* implicit */short) (((_Bool)1) ? (((((/* implicit */_Bool) 4294967292U)) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_57 [i_11]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)6810)))));
                    var_30 = ((/* implicit */unsigned int) (((~(((/* implicit */int) var_3)))) <= (((/* implicit */int) var_5))));
                }
                for (unsigned short i_17 = 0; i_17 < 11; i_17 += 2) /* same iter space */
                {
                    var_31 = ((/* implicit */signed char) (-(((/* implicit */int) (short)-32755))));
                    var_32 = ((/* implicit */signed char) var_8);
                }
                var_33 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 1317731960)) ? (((/* implicit */int) var_2)) : (((int) (_Bool)0))));
                var_34 += ((/* implicit */unsigned long long int) ((short) (short)-32748));
            }
            for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
            {
                var_35 = ((/* implicit */unsigned short) min((var_35), (((/* implicit */unsigned short) -995011619))));
                var_36 = arr_10 [i_1] [i_1] [i_1] [i_1];
            }
            for (signed char i_19 = 2; i_19 < 9; i_19 += 3) 
            {
                /* LoopNest 2 */
                for (unsigned int i_20 = 0; i_20 < 11; i_20 += 2) 
                {
                    for (unsigned char i_21 = 0; i_21 < 11; i_21 += 2) 
                    {
                        {
                            arr_76 [6] [i_21] [(unsigned char)2] [(unsigned char)2] [i_21] |= ((/* implicit */int) var_1);
                            arr_77 [i_1] [(_Bool)1] [i_19] [i_20] [i_11] [(short)0] [i_1] = ((/* implicit */_Bool) arr_59 [i_1] [i_11] [i_20] [i_21]);
                            var_37 = ((/* implicit */int) (_Bool)1);
                            var_38 = ((((0ULL) <= (((/* implicit */unsigned long long int) 1718629528)))) || (((/* implicit */_Bool) arr_71 [i_21] [i_1] [i_1 - 1] [i_20])));
                            arr_78 [i_1] [i_11] [i_11] [(_Bool)1] [i_20] [i_21] = (i_11 % 2 == zero) ? (((/* implicit */_Bool) ((((/* implicit */int) var_8)) << (((arr_25 [i_1 - 1] [i_11] [i_19 + 1]) - (3684941504817750922LL)))))) : (((/* implicit */_Bool) ((((/* implicit */int) var_8)) << (((((arr_25 [i_1 - 1] [i_11] [i_19 + 1]) - (3684941504817750922LL))) + (3616155574237258107LL))))));
                        }
                    } 
                } 
                arr_79 [i_1] [i_11] [i_19] = ((/* implicit */_Bool) 568236277U);
            }
            var_39 -= ((/* implicit */long long int) (short)2016);
        }
    }
    var_40 = ((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 2147483647)) % (18446744073709551605ULL))))))) * (((/* implicit */int) (!(var_0))))));
}
