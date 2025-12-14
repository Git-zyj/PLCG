/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142080
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142080 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142080
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
    var_17 = ((/* implicit */unsigned short) (-(((/* implicit */int) var_7))));
    var_18 = ((/* implicit */unsigned char) ((signed char) max(((short)32761), ((short)32761))));
    var_19 = ((/* implicit */unsigned int) var_13);
    /* LoopSeq 3 */
    for (signed char i_0 = 3; i_0 < 19; i_0 += 4) /* same iter space */
    {
        var_20 = ((/* implicit */unsigned char) var_15);
        var_21 = ((/* implicit */unsigned char) (~(0ULL)));
        var_22 = ((/* implicit */int) max((((/* implicit */long long int) (_Bool)1)), (-9223372036854775805LL)));
    }
    /* vectorizable */
    for (signed char i_1 = 3; i_1 < 19; i_1 += 4) /* same iter space */
    {
        arr_5 [i_1] = ((/* implicit */unsigned int) ((short) 4124413930183088566LL));
        arr_6 [i_1] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_1])) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551611ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))) : (18092105574638578830ULL)))));
        var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) ((arr_3 [i_1 + 4]) & (arr_3 [i_1 + 4]))))));
        var_24 = ((/* implicit */unsigned short) arr_4 [i_1]);
    }
    /* vectorizable */
    for (signed char i_2 = 3; i_2 < 19; i_2 += 4) /* same iter space */
    {
        /* LoopSeq 3 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            var_25 = (_Bool)1;
            arr_11 [i_2] = ((/* implicit */short) arr_0 [i_2 + 3] [i_2]);
            var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) arr_10 [i_2 - 1]))));
        }
        for (long long int i_4 = 0; i_4 < 23; i_4 += 2) /* same iter space */
        {
            arr_14 [i_2] [i_2] [i_2] = (-(((((/* implicit */unsigned int) ((/* implicit */int) var_8))) % (var_4))));
            /* LoopSeq 2 */
            for (unsigned short i_5 = 0; i_5 < 23; i_5 += 4) 
            {
                var_27 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1))));
                arr_18 [i_2] [i_2] = ((/* implicit */unsigned short) ((unsigned long long int) arr_9 [i_2] [i_2] [i_2 + 2]));
            }
            for (signed char i_6 = 0; i_6 < 23; i_6 += 4) 
            {
                /* LoopSeq 2 */
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    arr_23 [i_2] [i_2] [i_2] = ((/* implicit */_Bool) ((signed char) arr_19 [i_4] [i_4] [i_6] [i_7]));
                    arr_24 [i_2] [i_4] [i_6] [i_7] = ((/* implicit */unsigned short) ((var_5) == (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) (unsigned short)0))))));
                    var_28 = ((/* implicit */unsigned int) ((unsigned char) (unsigned char)0));
                }
                for (unsigned short i_8 = 0; i_8 < 23; i_8 += 3) 
                {
                    arr_28 [i_8] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 666917701408381531LL)) ? (((/* implicit */int) (unsigned char)17)) : (((/* implicit */int) (unsigned short)61793))));
                    var_29 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_20 [i_2] [i_2 + 1] [i_2] [i_2])) ? (((/* implicit */int) (signed char)-109)) : (((/* implicit */int) arr_8 [i_6] [i_4]))));
                }
                var_30 = ((/* implicit */unsigned long long int) var_2);
                arr_29 [i_2] = ((/* implicit */unsigned short) var_13);
            }
            arr_30 [i_2] |= ((/* implicit */short) arr_3 [i_2 + 4]);
            var_31 = ((/* implicit */unsigned long long int) ((var_15) == (((/* implicit */long long int) arr_4 [i_2]))));
        }
        for (long long int i_9 = 0; i_9 < 23; i_9 += 2) /* same iter space */
        {
            var_32 = ((/* implicit */unsigned int) var_0);
            var_33 *= ((/* implicit */unsigned char) arr_31 [i_2 + 3]);
            /* LoopSeq 2 */
            for (unsigned long long int i_10 = 4; i_10 < 21; i_10 += 3) 
            {
                var_34 = ((unsigned short) (+(((/* implicit */int) arr_1 [i_10]))));
                arr_35 [i_2] [i_2] [i_10] = ((/* implicit */unsigned int) var_10);
                var_35 ^= ((/* implicit */signed char) ((unsigned char) arr_34 [i_2 + 4] [i_10 - 2] [i_10 - 2] [i_10]));
                /* LoopSeq 3 */
                for (long long int i_11 = 0; i_11 < 23; i_11 += 2) 
                {
                    arr_38 [i_2] [i_9] [i_10] [i_10] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)238))));
                    var_36 = ((/* implicit */unsigned int) (((_Bool)1) && (((var_11) == (var_11)))));
                    var_37 = ((/* implicit */unsigned short) var_6);
                }
                for (short i_12 = 0; i_12 < 23; i_12 += 2) /* same iter space */
                {
                    var_38 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_37 [i_9] [i_10] [i_10] [i_10] [i_10] [i_10 - 3])) ^ (((/* implicit */int) ((short) arr_39 [i_2] [i_2])))));
                    var_39 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)238)) ? (arr_4 [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))));
                    arr_41 [i_10] [i_9] [i_10] = ((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned char)232))));
                    arr_42 [i_2] [i_10] [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) >> (((/* implicit */int) (unsigned char)10))))) ? (arr_4 [i_10 - 4]) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_1))))))));
                }
                for (short i_13 = 0; i_13 < 23; i_13 += 2) /* same iter space */
                {
                    var_40 |= ((/* implicit */unsigned short) (_Bool)1);
                    /* LoopSeq 2 */
                    for (unsigned long long int i_14 = 1; i_14 < 21; i_14 += 4) 
                    {
                        var_41 = arr_7 [i_2];
                        arr_47 [i_10] [i_10] [i_13] [i_14] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */unsigned long long int) arr_17 [i_13] [i_13] [i_10 - 1] [i_10])) : (var_3)));
                    }
                    for (short i_15 = 0; i_15 < 23; i_15 += 2) 
                    {
                        arr_51 [i_10] [i_15] [i_15] [i_15] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) var_13))) - (((((/* implicit */_Bool) arr_1 [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : (arr_27 [i_15] [i_13] [i_10] [i_2])))));
                        arr_52 [i_2] [i_9] [i_10] [i_13] [i_15] [i_9] |= ((/* implicit */unsigned char) (unsigned short)3743);
                    }
                    var_42 = ((/* implicit */unsigned long long int) ((var_11) & (((/* implicit */unsigned int) ((/* implicit */int) arr_33 [i_10] [i_10] [i_10] [i_10 - 2])))));
                    arr_53 [i_13] [i_10] [i_10] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_45 [i_10])) ? (((/* implicit */unsigned long long int) 0U)) : (var_3)));
                }
            }
            for (unsigned char i_16 = 4; i_16 < 22; i_16 += 3) 
            {
                var_43 = ((/* implicit */long long int) var_7);
                /* LoopNest 2 */
                for (unsigned char i_17 = 0; i_17 < 23; i_17 += 3) 
                {
                    for (signed char i_18 = 1; i_18 < 22; i_18 += 2) 
                    {
                        {
                            var_44 = ((/* implicit */unsigned long long int) (+(arr_13 [i_2] [i_16 - 1])));
                            var_45 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 18092105574638578830ULL)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1))));
                        }
                    } 
                } 
                arr_63 [i_2] [i_2] [i_16] [i_16] = ((((/* implicit */_Bool) arr_0 [i_2] [i_9])) ? (((/* implicit */long long int) ((/* implicit */int) arr_61 [i_2] [i_2] [i_2] [i_9] [i_16] [i_16]))) : ((((-9223372036854775807LL - 1LL)) + (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_9] [i_16]))))));
            }
        }
        arr_64 [i_2] = ((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)32))));
        var_46 &= ((/* implicit */unsigned char) ((unsigned int) arr_8 [i_2 - 1] [i_2 - 1]));
        var_47 = ((/* implicit */unsigned long long int) ((0ULL) != (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_2] [i_2])) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) var_8)))))));
        var_48 = ((/* implicit */_Bool) max((var_48), (((/* implicit */_Bool) (short)(-32767 - 1)))));
    }
}
