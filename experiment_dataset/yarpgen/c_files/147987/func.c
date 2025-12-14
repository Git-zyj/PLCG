/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147987
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147987 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147987
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
    var_11 = ((/* implicit */short) var_10);
    var_12 = ((/* implicit */signed char) var_8);
    var_13 -= var_5;
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        /* LoopSeq 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            arr_5 [i_0] [i_0] = ((/* implicit */signed char) arr_2 [17ULL]);
            arr_6 [i_1] = ((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0])) ^ (((/* implicit */int) arr_0 [i_1]))));
            var_14 = ((/* implicit */long long int) var_4);
            var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_4 [1LL] [i_1])))) != (18446744073709551615ULL))))));
        }
        for (unsigned short i_2 = 0; i_2 < 23; i_2 += 4) 
        {
            var_16 ^= ((/* implicit */short) (signed char)86);
            var_17 = ((/* implicit */short) ((((/* implicit */_Bool) arr_8 [(_Bool)0])) ? (((((/* implicit */_Bool) (unsigned short)49608)) ? (((/* implicit */int) arr_9 [i_0] [i_0])) : (((/* implicit */int) var_5)))) : (((/* implicit */int) arr_3 [i_0] [i_2]))));
            arr_10 [i_0] [16U] = ((/* implicit */_Bool) ((unsigned long long int) 19ULL));
            /* LoopNest 2 */
            for (unsigned int i_3 = 0; i_3 < 23; i_3 += 4) 
            {
                for (unsigned int i_4 = 1; i_4 < 22; i_4 += 4) 
                {
                    {
                        var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_4 - 1] [i_4 - 1] [i_0] [i_4])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (2148166985U))))));
                        var_19 &= ((/* implicit */short) (~((-(((/* implicit */int) arr_1 [i_3]))))));
                        var_20 = ((/* implicit */int) ((unsigned short) (-(1821646011))));
                        var_21 = (unsigned char)128;
                        arr_15 [i_4] [i_2] = ((/* implicit */unsigned short) (~(arr_2 [i_4 - 1])));
                    }
                } 
            } 
        }
        /* LoopSeq 3 */
        for (short i_5 = 0; i_5 < 23; i_5 += 4) /* same iter space */
        {
            var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) (~(((/* implicit */int) arr_1 [i_5])))))));
            var_23 ^= ((/* implicit */_Bool) (~(((/* implicit */int) ((unsigned char) arr_9 [i_5] [i_5])))));
            arr_19 [i_0] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)252)) ? (((/* implicit */int) arr_17 [i_0])) : (((/* implicit */int) (signed char)-116))));
            var_24 = ((/* implicit */unsigned short) arr_14 [i_0]);
        }
        for (short i_6 = 0; i_6 < 23; i_6 += 4) /* same iter space */
        {
            var_25 = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_1 [i_0]))));
            var_26 = ((/* implicit */unsigned short) min((var_26), (((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)48533)) - (((/* implicit */int) (unsigned short)65299)))))));
            var_27 = ((/* implicit */short) ((((/* implicit */_Bool) ((18446744073709551595ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_2)))) : (18446744073709551597ULL)));
            var_28 = ((/* implicit */unsigned short) ((arr_7 [i_6] [i_6] [i_6]) >> (((/* implicit */int) arr_16 [i_0] [i_6] [(short)14]))));
            /* LoopNest 2 */
            for (unsigned short i_7 = 0; i_7 < 23; i_7 += 4) 
            {
                for (unsigned int i_8 = 0; i_8 < 23; i_8 += 4) 
                {
                    {
                        arr_27 [(unsigned short)5] [(unsigned short)15] [13U] [i_6] &= ((/* implicit */short) ((unsigned short) 34ULL));
                        var_29 += ((/* implicit */short) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) (unsigned short)17850))));
                        var_30 = ((/* implicit */unsigned long long int) max((var_30), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 34ULL)))))));
                        var_31 -= ((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)0))));
                    }
                } 
            } 
        }
        for (short i_9 = 0; i_9 < 23; i_9 += 4) /* same iter space */
        {
            arr_31 [(short)17] [(short)17] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_9 [i_9] [i_9])) : (((/* implicit */int) arr_9 [i_0] [(unsigned short)16]))));
            var_32 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_14 [i_0])) << ((((~(((/* implicit */int) var_3)))) + (30126)))));
            arr_32 [i_0] [i_0] [(signed char)22] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 10638669858845552227ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)32747))));
            /* LoopSeq 1 */
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
            {
                arr_36 [i_0] [i_10] [i_0] [17U] = (!(((/* implicit */_Bool) (short)32767)));
                /* LoopSeq 3 */
                for (signed char i_11 = 0; i_11 < 23; i_11 += 4) 
                {
                    var_33 ^= ((/* implicit */unsigned char) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (4647010297202445728ULL)));
                    arr_39 [(_Bool)0] [(short)16] [i_10] = ((/* implicit */unsigned short) (_Bool)1);
                    var_34 = ((/* implicit */_Bool) ((unsigned int) 6ULL));
                }
                for (unsigned short i_12 = 0; i_12 < 23; i_12 += 4) 
                {
                    /* LoopSeq 4 */
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                    {
                        var_35 = ((/* implicit */_Bool) (signed char)6);
                        arr_45 [i_0] [(_Bool)1] [(_Bool)1] [(_Bool)1] [i_0] [i_10] = ((/* implicit */signed char) (!(arr_14 [i_12])));
                    }
                    for (short i_14 = 2; i_14 < 20; i_14 += 4) 
                    {
                        arr_50 [i_9] [(short)22] [(short)22] [i_10] [i_14] [i_14] [(short)18] = ((/* implicit */unsigned long long int) (-(-2147483645)));
                        var_36 -= ((/* implicit */unsigned short) (((_Bool)1) ? (((/* implicit */int) (unsigned short)7453)) : (((/* implicit */int) (_Bool)1))));
                        var_37 *= ((/* implicit */short) (-(((/* implicit */int) (unsigned short)49624))));
                        arr_51 [(short)13] [(short)13] [i_10] [(short)13] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0])) + (((/* implicit */int) (unsigned short)45396))))) ? (((/* implicit */int) (((_Bool)1) || ((_Bool)1)))) : ((((_Bool)1) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned short)65535))))));
                        arr_52 [i_0] [(short)18] [i_10] [(unsigned short)12] [i_10] [(signed char)21] = ((/* implicit */unsigned int) var_4);
                    }
                    for (short i_15 = 4; i_15 < 20; i_15 += 4) 
                    {
                        arr_56 [1LL] [1LL] [i_10] [i_10] [(unsigned short)6] [(unsigned short)5] = ((/* implicit */signed char) (~(((/* implicit */int) (unsigned char)113))));
                        var_38 = ((/* implicit */short) arr_48 [i_0] [3ULL] [3ULL] [i_9] [i_0]);
                        var_39 += ((/* implicit */short) ((long long int) arr_38 [(_Bool)1] [i_0] [i_9] [i_0]));
                        arr_57 [(_Bool)1] [i_10] [i_10] [(unsigned short)12] [i_0] = (!(((/* implicit */_Bool) arr_8 [i_15 + 3])));
                    }
                    for (_Bool i_16 = 1; i_16 < 1; i_16 += 1) 
                    {
                        arr_62 [i_10] = ((/* implicit */signed char) (-(((/* implicit */int) (_Bool)0))));
                        var_40 = ((/* implicit */signed char) (~(((/* implicit */int) (short)25201))));
                        var_41 = ((/* implicit */_Bool) (~(((/* implicit */int) arr_48 [i_16 - 1] [(short)6] [i_16 - 1] [i_16 - 1] [i_16]))));
                    }
                    var_42 = ((/* implicit */signed char) (~(((/* implicit */int) (_Bool)1))));
                }
                for (unsigned char i_17 = 0; i_17 < 23; i_17 += 4) 
                {
                    arr_65 [i_10] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_29 [i_0])) / (arr_7 [i_0] [i_10] [18U])));
                    var_43 *= ((/* implicit */_Bool) ((short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_28 [i_9]))) == (2275868458U))));
                    var_44 += ((/* implicit */signed char) (~(12060374295572234662ULL)));
                }
            }
        }
        var_45 = ((/* implicit */unsigned short) ((18446744073709551595ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1)))));
        var_46 = ((/* implicit */unsigned int) ((arr_35 [6LL]) ? (((/* implicit */int) arr_17 [15U])) : (((/* implicit */int) ((((/* implicit */int) var_2)) != (arr_11 [i_0]))))));
    }
    var_47 |= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) ((var_1) && (((/* implicit */_Bool) 0U))))) << (((((((/* implicit */int) var_2)) | (((/* implicit */int) (unsigned short)33759)))) - (33749))))))));
}
