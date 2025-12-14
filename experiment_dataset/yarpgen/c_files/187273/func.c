/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187273
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187273 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187273
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
    var_17 ^= ((/* implicit */int) ((signed char) (short)-28));
    var_18 = ((/* implicit */short) var_11);
    /* LoopSeq 4 */
    for (long long int i_0 = 0; i_0 < 11; i_0 += 2) /* same iter space */
    {
        arr_3 [(signed char)6] = ((/* implicit */long long int) ((signed char) (+(((/* implicit */int) arr_2 [i_0] [i_0])))));
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            var_19 = ((/* implicit */int) var_11);
            arr_7 [i_1] = ((/* implicit */unsigned short) var_9);
            arr_8 [i_1] = ((/* implicit */unsigned char) (-(((unsigned int) arr_0 [i_1]))));
        }
        var_20 *= ((/* implicit */unsigned long long int) arr_0 [(signed char)4]);
    }
    for (long long int i_2 = 0; i_2 < 11; i_2 += 2) /* same iter space */
    {
        arr_12 [i_2] = ((/* implicit */unsigned char) (short)-7);
        var_21 = ((/* implicit */unsigned long long int) var_14);
    }
    for (long long int i_3 = 0; i_3 < 11; i_3 += 2) /* same iter space */
    {
        var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((short) arr_6 [i_3] [3]))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((short) var_5))) ? (((((/* implicit */_Bool) arr_11 [i_3] [i_3])) ? (((/* implicit */int) arr_2 [(unsigned short)8] [i_3])) : (((/* implicit */int) arr_2 [i_3] [(short)10])))) : (((/* implicit */int) arr_2 [i_3] [i_3]))))) : (min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_2 [i_3] [i_3]))))), (arr_15 [i_3] [i_3])))));
        arr_16 [i_3] [i_3] = ((/* implicit */short) (signed char)73);
    }
    /* vectorizable */
    for (short i_4 = 1; i_4 < 18; i_4 += 3) 
    {
        arr_21 [(unsigned short)17] [(unsigned short)17] = ((/* implicit */unsigned int) ((arr_19 [i_4]) ? (((arr_18 [i_4]) ? (-1526006476) : (((/* implicit */int) arr_19 [i_4])))) : (((var_11) ? (((/* implicit */int) arr_19 [i_4 - 1])) : (((/* implicit */int) var_5))))));
        /* LoopSeq 2 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
        {
            arr_24 [i_4] [i_4 + 1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) 2137605746)) : (((((/* implicit */_Bool) 774486999)) ? (3787782687U) : (((/* implicit */unsigned int) 2137605746))))));
            /* LoopSeq 4 */
            for (short i_6 = 0; i_6 < 19; i_6 += 4) 
            {
                var_23 ^= ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_26 [17] [i_5] [8ULL] [i_6]))))) ? (((/* implicit */int) ((((/* implicit */int) var_3)) == (var_4)))) : (((/* implicit */int) var_15))));
                arr_27 [15] [15] [(unsigned short)14] = ((unsigned short) 507184620U);
                var_24 = ((/* implicit */long long int) max((var_24), (((/* implicit */long long int) arr_19 [i_4 - 1]))));
            }
            for (short i_7 = 1; i_7 < 18; i_7 += 3) 
            {
                /* LoopSeq 2 */
                for (short i_8 = 0; i_8 < 19; i_8 += 2) /* same iter space */
                {
                    var_25 = ((/* implicit */unsigned short) ((unsigned long long int) arr_23 [i_7] [i_8]));
                    var_26 = ((/* implicit */int) (!(var_11)));
                }
                for (short i_9 = 0; i_9 < 19; i_9 += 2) /* same iter space */
                {
                    arr_35 [i_4] [16] [i_7] [i_9] = ((/* implicit */int) var_15);
                    var_27 = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) (unsigned char)31))))));
                }
                arr_36 [i_4] [i_7] = ((/* implicit */int) ((((/* implicit */_Bool) var_8)) ? ((+(-9223372036854775807LL))) : (((/* implicit */long long int) (~(((/* implicit */int) var_2)))))));
            }
            for (unsigned int i_10 = 0; i_10 < 19; i_10 += 2) 
            {
                arr_39 [i_10] [i_4] [i_4] = ((/* implicit */int) (unsigned short)11);
                /* LoopSeq 1 */
                for (int i_11 = 1; i_11 < 18; i_11 += 1) 
                {
                    var_28 += ((/* implicit */unsigned char) 3489436227U);
                    var_29 = ((/* implicit */short) var_4);
                    var_30 = ((/* implicit */signed char) ((unsigned char) arr_26 [i_4 + 1] [i_11 - 1] [15ULL] [i_11 + 1]));
                }
                var_31 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_11))))) && (((/* implicit */_Bool) arr_28 [i_4] [i_4 + 1] [i_4 - 1]))));
                /* LoopNest 2 */
                for (unsigned short i_12 = 0; i_12 < 19; i_12 += 1) 
                {
                    for (int i_13 = 1; i_13 < 18; i_13 += 3) 
                    {
                        {
                            var_32 = ((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) arr_40 [i_4] [(signed char)4] [i_4 - 1] [i_4 - 1] [i_4 - 1])) ? (((/* implicit */int) arr_31 [i_4] [i_5] [6] [i_10] [i_12] [7])) : (((/* implicit */int) var_11)))));
                            arr_47 [i_13] [i_5] [i_10] [i_5] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 5478807127336465664LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)31))) : (4141987494U)))) ? (((((/* implicit */_Bool) (signed char)-11)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0))) : (3319118760U))) : (((/* implicit */unsigned int) ((/* implicit */int) var_14)))));
                        }
                    } 
                } 
            }
            for (int i_14 = 4; i_14 < 18; i_14 += 4) 
            {
                arr_52 [i_4] [(short)14] [i_14 - 4] = ((/* implicit */int) arr_49 [i_5] [i_5] [i_14 - 2]);
                var_33 *= ((/* implicit */unsigned long long int) (!(arr_18 [i_4 + 1])));
            }
            arr_53 [i_4 - 1] [(unsigned short)4] [i_5] &= ((/* implicit */short) 3319118760U);
            var_34 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_50 [i_4] [i_5] [i_5] [i_5])) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) (short)(-32767 - 1))))))) ? (((/* implicit */int) ((_Bool) (unsigned short)34835))) : (((/* implicit */int) var_3))));
            var_35 = (unsigned char)170;
        }
        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) /* same iter space */
        {
            arr_57 [i_15] = ((/* implicit */unsigned short) ((int) arr_42 [i_4] [4LL] [(_Bool)1] [i_4] [i_4] [i_4 - 1]));
            var_36 = ((/* implicit */_Bool) ((short) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)28503))) % (6026183527562593046LL))));
            arr_58 [i_15] [i_15] = ((/* implicit */int) arr_29 [i_15] [i_15] [(signed char)16]);
        }
        arr_59 [i_4 - 1] [i_4] = ((/* implicit */short) ((var_8) / (((/* implicit */unsigned int) ((/* implicit */int) arr_28 [i_4 - 1] [i_4 - 1] [i_4])))));
        var_37 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_38 [(short)14] [i_4 - 1] [i_4 - 1] [i_4 - 1])) ? (((/* implicit */int) arr_31 [i_4 + 1] [i_4 - 1] [(short)2] [i_4] [i_4 + 1] [i_4])) : (((/* implicit */int) arr_51 [i_4 + 1]))));
    }
}
