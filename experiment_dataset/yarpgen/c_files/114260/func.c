/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114260
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114260 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114260
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
    var_15 = ((/* implicit */unsigned short) var_14);
    /* LoopSeq 3 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            /* LoopNest 2 */
            for (signed char i_2 = 0; i_2 < 25; i_2 += 2) 
            {
                for (unsigned short i_3 = 0; i_3 < 25; i_3 += 4) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned long long int i_4 = 1; i_4 < 22; i_4 += 3) 
                        {
                            arr_10 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */long long int) ((5483982153330724764ULL) <= (((/* implicit */unsigned long long int) arr_8 [i_0] [i_0] [i_4 + 3] [i_4 + 2] [i_0]))));
                            var_16 = ((signed char) arr_1 [i_0]);
                            var_17 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (short)-21422))));
                        }
                        var_18 ^= ((/* implicit */signed char) ((long long int) (unsigned char)249));
                        /* LoopSeq 3 */
                        for (unsigned long long int i_5 = 2; i_5 < 23; i_5 += 1) 
                        {
                            var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_5 + 2])) | (((/* implicit */int) var_0))));
                            var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) (+(3779788408890911371LL))))));
                            var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)238)) ? (((/* implicit */long long int) var_9)) : (arr_11 [i_0] [i_0] [i_5 - 2] [i_3] [i_3] [i_0] [i_5])));
                        }
                        for (signed char i_6 = 0; i_6 < 25; i_6 += 1) 
                        {
                            arr_17 [i_0] = ((/* implicit */signed char) (+(((/* implicit */int) arr_6 [i_0] [(signed char)14] [(signed char)13] [i_6] [i_6] [i_6]))));
                            var_22 *= ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */_Bool) 12962761920378826835ULL)) || (((/* implicit */_Bool) (unsigned char)100))))) / (((/* implicit */int) var_8))));
                            var_23 = ((/* implicit */unsigned long long int) ((arr_0 [i_0] [i_2]) % (var_5)));
                        }
                        for (signed char i_7 = 2; i_7 < 24; i_7 += 4) 
                        {
                            var_24 = ((/* implicit */signed char) min((var_24), (((signed char) ((long long int) var_9)))));
                            var_25 = ((/* implicit */short) (-((-(((/* implicit */int) (signed char)122))))));
                        }
                    }
                } 
            } 
            var_26 = ((/* implicit */unsigned long long int) (+(3779788408890911382LL)));
            arr_21 [i_0] = (~(((long long int) (signed char)58)));
            var_27 = ((/* implicit */long long int) max((var_27), (((-7679967624932360254LL) - (((/* implicit */long long int) var_9))))));
        }
        var_28 = ((/* implicit */short) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) (+(((/* implicit */int) var_7))))) : (arr_13 [i_0] [i_0] [i_0] [i_0] [i_0])));
        arr_22 [i_0] = ((/* implicit */signed char) ((((18446744073709551615ULL) % (((/* implicit */unsigned long long int) var_2)))) == (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_6)))))));
        var_29 = ((((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_0] [i_0] [i_0])) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)55))));
    }
    /* vectorizable */
    for (long long int i_8 = 0; i_8 < 17; i_8 += 3) 
    {
        /* LoopSeq 1 */
        for (long long int i_9 = 3; i_9 < 15; i_9 += 2) 
        {
            var_30 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)31516))))) || (((/* implicit */_Bool) arr_25 [i_8] [i_8]))));
            /* LoopSeq 1 */
            for (short i_10 = 0; i_10 < 17; i_10 += 1) 
            {
                var_31 = ((/* implicit */unsigned short) ((var_9) / (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-16)))));
                arr_29 [i_9] [i_9] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_9 [i_9] [i_9] [i_9] [i_9] [i_9 - 3]))));
            }
            /* LoopSeq 4 */
            for (unsigned long long int i_11 = 0; i_11 < 17; i_11 += 1) /* same iter space */
            {
                arr_33 [i_9] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_32 [i_11] [i_8] [i_9])) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) 18446744073709551615ULL)))))) : (((((/* implicit */_Bool) (unsigned char)206)) ? (-3779788408890911362LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)103)))))));
                var_32 &= ((/* implicit */unsigned int) ((signed char) (unsigned short)7));
            }
            for (unsigned long long int i_12 = 0; i_12 < 17; i_12 += 1) /* same iter space */
            {
                arr_36 [i_9] [i_9] [i_9] = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_7))))) != (((/* implicit */int) (signed char)41))));
                var_33 = ((/* implicit */unsigned short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (short)21826))) & (0ULL))) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))));
            }
            for (unsigned char i_13 = 0; i_13 < 17; i_13 += 4) 
            {
                arr_40 [i_8] [i_13] [4U] &= ((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-4992)) > (((/* implicit */int) (signed char)-123))));
                /* LoopNest 2 */
                for (unsigned long long int i_14 = 0; i_14 < 17; i_14 += 4) 
                {
                    for (long long int i_15 = 0; i_15 < 17; i_15 += 4) 
                    {
                        {
                            var_34 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_5)) ? (arr_25 [i_9 - 1] [i_9 + 1]) : (arr_25 [i_9 + 2] [i_9 - 3])));
                            var_35 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)18569))) >= (arr_32 [i_9] [i_9 + 2] [i_9])));
                            var_36 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)120)) && (((/* implicit */_Bool) var_5))));
                        }
                    } 
                } 
                arr_48 [8ULL] [i_9] [i_13] = ((/* implicit */signed char) ((long long int) ((((/* implicit */int) (signed char)-125)) % (((/* implicit */int) (unsigned short)65527)))));
            }
            for (unsigned long long int i_16 = 0; i_16 < 17; i_16 += 1) 
            {
                var_37 ^= ((/* implicit */signed char) ((((/* implicit */int) ((var_10) != (var_11)))) % (((/* implicit */int) ((-2156996756754647080LL) < (((/* implicit */long long int) ((/* implicit */int) (signed char)71))))))));
                var_38 = ((/* implicit */unsigned char) ((((var_11) != (((/* implicit */long long int) ((/* implicit */int) var_0))))) ? (207232960U) : (((/* implicit */unsigned int) ((/* implicit */int) ((var_1) <= (-8211455382421750003LL)))))));
                arr_53 [i_9] = ((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned char)54))));
                var_39 = ((/* implicit */unsigned char) ((arr_23 [i_16] [i_9]) >= (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-65))))))));
            }
            var_40 ^= ((/* implicit */short) (-(((18446744073709551611ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-82)))))));
        }
        var_41 = ((/* implicit */signed char) max((var_41), (((/* implicit */signed char) (~(((unsigned long long int) var_11)))))));
        var_42 = ((/* implicit */long long int) min((var_42), (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)198)) / (((/* implicit */int) arr_18 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8])))))));
        arr_54 [i_8] = ((/* implicit */unsigned long long int) (-(arr_23 [i_8] [i_8])));
    }
    for (unsigned char i_17 = 0; i_17 < 15; i_17 += 3) 
    {
        var_43 = ((/* implicit */long long int) 10432562783561280224ULL);
        var_44 *= ((/* implicit */unsigned int) ((((((/* implicit */long long int) ((/* implicit */int) var_8))) < (arr_11 [i_17] [i_17] [i_17] [i_17] [i_17] [i_17] [i_17]))) ? ((-(((/* implicit */int) arr_9 [14ULL] [i_17] [(unsigned short)6] [i_17] [14ULL])))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))));
    }
}
