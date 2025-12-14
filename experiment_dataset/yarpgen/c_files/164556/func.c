/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164556
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164556 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164556
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
    var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : ((-(((((/* implicit */_Bool) 12699695564887791521ULL)) ? (((/* implicit */long long int) 125829120)) : (5947492961018227870LL))))))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        /* LoopSeq 2 */
        for (short i_1 = 2; i_1 < 19; i_1 += 3) 
        {
            var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) arr_3 [i_1 - 1] [i_1 - 1]))));
            /* LoopSeq 1 */
            for (unsigned long long int i_2 = 0; i_2 < 20; i_2 += 1) 
            {
                /* LoopSeq 1 */
                for (int i_3 = 0; i_3 < 20; i_3 += 3) 
                {
                    arr_13 [i_1] [i_1] = ((/* implicit */unsigned long long int) arr_2 [i_3] [1ULL]);
                    arr_14 [i_0] [i_0] [i_1] [i_0] = ((/* implicit */int) ((((/* implicit */int) arr_3 [i_1 + 1] [i_1])) != (((/* implicit */int) (short)-32410))));
                    var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) (~(((((/* implicit */_Bool) -5839604221653949537LL)) ? (((/* implicit */long long int) -691595831)) : (385860510900197463LL))))))));
                }
                var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) arr_7 [i_0]))));
            }
        }
        for (unsigned long long int i_4 = 0; i_4 < 20; i_4 += 1) 
        {
            var_22 = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-91))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (short)15265)) ? (-446942876) : (-499740904))))));
            arr_19 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) 1758700472)) < (18446744073709551615ULL)));
            /* LoopSeq 1 */
            for (unsigned long long int i_5 = 1; i_5 < 19; i_5 += 2) 
            {
                /* LoopSeq 3 */
                for (unsigned char i_6 = 0; i_6 < 20; i_6 += 2) 
                {
                    arr_24 [i_5] [i_4] = ((((((/* implicit */_Bool) (signed char)-87)) && (((/* implicit */_Bool) (signed char)48)))) ? (((long long int) arr_1 [i_0] [i_0])) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (short)32409)) != (((/* implicit */int) (short)(-32767 - 1))))))));
                    arr_25 [i_5] [(short)4] [i_5] [i_6] [i_6] = ((/* implicit */long long int) ((((((/* implicit */int) arr_21 [i_0] [i_0])) ^ (((/* implicit */int) arr_18 [i_6] [i_6] [i_6])))) / (((/* implicit */int) ((short) 1769757923)))));
                    arr_26 [i_6] [0] [i_5] [i_6] [i_6] = ((/* implicit */unsigned long long int) (+(arr_20 [i_5] [i_5] [i_5] [17LL])));
                }
                for (int i_7 = 0; i_7 < 20; i_7 += 3) /* same iter space */
                {
                    arr_30 [i_0] [(signed char)7] [i_5] [i_0] = ((/* implicit */int) (signed char)46);
                    var_23 ^= ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_4] [3ULL] [i_4]))))) & (arr_27 [i_0] [i_0] [i_0] [i_0])));
                }
                for (int i_8 = 0; i_8 < 20; i_8 += 3) /* same iter space */
                {
                    /* LoopSeq 2 */
                    for (int i_9 = 0; i_9 < 20; i_9 += 3) 
                    {
                        arr_35 [i_0] [i_0] [i_0] [i_0] [i_5] [i_0] = ((/* implicit */unsigned char) (short)-32740);
                        arr_36 [i_9] [i_9] [i_9] [1] [i_9] [i_9] [i_5] = ((/* implicit */signed char) arr_9 [i_0] [i_0] [i_0]);
                        arr_37 [i_5] = arr_1 [i_9] [i_9];
                        arr_38 [i_9] [i_9] [i_9] [i_9] [i_5] [i_5] [i_9] = ((/* implicit */int) ((short) ((short) 2147483647)));
                        var_24 -= arr_31 [i_5 - 1] [i_5 + 1] [i_5 + 1] [6];
                    }
                    for (unsigned char i_10 = 0; i_10 < 20; i_10 += 3) 
                    {
                        arr_41 [i_5] = ((/* implicit */unsigned char) ((short) (short)-22284));
                        var_25 = ((/* implicit */signed char) arr_39 [14] [i_4] [i_5] [i_4]);
                        var_26 = ((signed char) arr_10 [i_0] [i_0] [i_5] [i_0]);
                    }
                    arr_42 [i_0] [i_5] [i_0] = ((/* implicit */unsigned char) ((short) arr_9 [i_0] [8LL] [i_0]));
                }
                arr_43 [i_0] [(signed char)10] &= ((/* implicit */int) (!(((0ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_0] [i_0] [i_0])))))));
            }
            arr_44 [i_0] [i_0] [i_0] = arr_32 [i_0] [18ULL] [i_0];
            /* LoopSeq 1 */
            for (long long int i_11 = 1; i_11 < 16; i_11 += 3) 
            {
                var_27 -= ((/* implicit */unsigned char) ((((((/* implicit */int) (signed char)-104)) > (((/* implicit */int) (unsigned char)54)))) ? (((((/* implicit */long long int) (-2147483647 - 1))) / (2809472317879781330LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_34 [i_11] [i_11 + 4] [i_11 - 1])))));
                var_28 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)250)) ? (2115352985U) : (((/* implicit */unsigned int) arr_20 [(unsigned char)0] [(unsigned char)0] [(signed char)8] [i_11]))));
            }
        }
        arr_48 [i_0] = ((short) arr_1 [i_0] [i_0]);
        var_29 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_6 [(signed char)18]))) < (16777215U)));
        arr_49 [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [10U] [i_0])) ? (((/* implicit */int) arr_16 [i_0] [i_0] [i_0])) : (587491969)))) ? (((((/* implicit */_Bool) 814523193)) ? (-4104452604237244623LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-26517))))) : (3725500691283753680LL)));
        var_30 = ((/* implicit */signed char) max((var_30), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_0])) ? (arr_22 [i_0] [0ULL] [0ULL] [i_0] [i_0]) : (((/* implicit */int) arr_12 [i_0] [i_0] [(signed char)11] [i_0] [i_0]))))) ? (((/* implicit */int) arr_33 [i_0] [i_0] [i_0] [(signed char)12] [18U] [i_0])) : (arr_0 [i_0] [i_0]))))));
    }
    /* vectorizable */
    for (short i_12 = 0; i_12 < 14; i_12 += 3) 
    {
        arr_54 [i_12] [i_12] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_34 [i_12] [i_12] [i_12])) ? ((~(((/* implicit */int) (short)17243)))) : ((-(arr_4 [i_12] [(signed char)8] [i_12])))));
        /* LoopSeq 1 */
        for (int i_13 = 0; i_13 < 14; i_13 += 3) 
        {
            arr_57 [i_13] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_12 [i_12] [i_12] [i_12] [i_12] [i_12])) ? (-1119015789443558234LL) : (((/* implicit */long long int) 336829443)))) | (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_12] [i_12])))));
            /* LoopNest 2 */
            for (signed char i_14 = 0; i_14 < 14; i_14 += 2) 
            {
                for (signed char i_15 = 2; i_15 < 11; i_15 += 1) 
                {
                    {
                        arr_62 [i_13] = ((/* implicit */signed char) ((short) (short)16976));
                        var_31 = ((/* implicit */signed char) (+(((/* implicit */int) ((short) 16515072)))));
                        var_32 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_21 [i_15 + 3] [i_15 + 2])) ? (((/* implicit */int) (signed char)-10)) : (((/* implicit */int) (signed char)79))));
                    }
                } 
            } 
            arr_63 [i_13] [i_13] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_5 [i_13] [i_13]))));
            var_33 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1905373754)) ? (((/* implicit */int) arr_56 [i_12])) : (arr_4 [i_12] [i_13] [i_12])))) ? (arr_32 [i_12] [i_13] [i_12]) : (((/* implicit */int) (short)32409))));
        }
        var_34 = ((/* implicit */short) ((-1731637137) | (arr_22 [i_12] [(short)12] [i_12] [(short)12] [i_12])));
        var_35 = ((/* implicit */short) max((var_35), (((/* implicit */short) (~(((-1641147166) | (((/* implicit */int) (signed char)115)))))))));
    }
    /* vectorizable */
    for (unsigned char i_16 = 0; i_16 < 10; i_16 += 1) 
    {
        arr_66 [i_16] = ((/* implicit */signed char) arr_4 [i_16] [i_16] [i_16]);
        arr_67 [i_16] = ((/* implicit */int) arr_52 [2LL] [i_16]);
    }
    /* LoopSeq 1 */
    for (signed char i_17 = 0; i_17 < 24; i_17 += 3) 
    {
        var_36 &= ((/* implicit */long long int) ((short) (short)9349));
        var_37 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -581235998)) ? (1057875543272258299LL) : (((/* implicit */long long int) (-2147483647 - 1)))));
        var_38 -= ((/* implicit */unsigned long long int) (-((-(((/* implicit */int) ((short) -1319460990771662698LL)))))));
    }
}
