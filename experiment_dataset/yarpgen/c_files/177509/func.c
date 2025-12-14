/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177509
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177509 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177509
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
    var_15 = ((/* implicit */short) var_10);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (short i_2 = 2; i_2 < 24; i_2 += 2) 
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 25; i_3 += 3) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 25; i_4 += 2) 
                        {
                            {
                                arr_15 [i_0] [i_1] [i_0] [(unsigned short)8] [i_1] [i_4] [i_4] = ((/* implicit */unsigned int) ((signed char) ((((/* implicit */_Bool) (~(70360154243072LL)))) ? (((/* implicit */int) (signed char)31)) : (((/* implicit */int) (signed char)38)))));
                                arr_16 [i_0] [i_1] [i_0] = ((/* implicit */long long int) (~(((/* implicit */int) max((((/* implicit */short) (signed char)19)), ((short)-24050))))));
                                var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) ((((/* implicit */_Bool) var_0)) && (((((/* implicit */int) (short)32746)) >= (((/* implicit */int) (signed char)-38))))))) : (((/* implicit */int) ((((/* implicit */_Bool) var_13)) && (((/* implicit */_Bool) (short)19390)))))));
                                var_17 = ((/* implicit */signed char) (-(max((((/* implicit */long long int) (signed char)67)), (min((63LL), (((/* implicit */long long int) (unsigned char)254))))))));
                            }
                        } 
                    } 
                    arr_17 [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) (((_Bool)1) ? (((/* implicit */int) (unsigned char)219)) : (((/* implicit */int) (unsigned char)246))));
                }
                for (long long int i_5 = 0; i_5 < 25; i_5 += 1) 
                {
                    arr_20 [i_1] [i_0] = ((/* implicit */unsigned short) var_14);
                    /* LoopSeq 4 */
                    for (unsigned int i_6 = 0; i_6 < 25; i_6 += 4) 
                    {
                        arr_24 [i_0] [(unsigned short)16] [i_5] [i_0] = ((/* implicit */long long int) var_5);
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (unsigned char i_7 = 0; i_7 < 25; i_7 += 1) 
                        {
                            arr_27 [i_0] [i_0] = ((/* implicit */short) (signed char)-38);
                            arr_28 [(short)9] [i_1] [i_0] [12LL] [i_1] = ((/* implicit */short) ((var_6) / (((/* implicit */unsigned int) ((/* implicit */int) var_9)))));
                            var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)219)) + (((/* implicit */int) (unsigned char)255)))))));
                            arr_29 [i_1] [i_1] [i_6] [i_6] &= ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)241)) <= (((/* implicit */int) var_12))));
                        }
                        /* vectorizable */
                        for (unsigned int i_8 = 0; i_8 < 25; i_8 += 2) 
                        {
                            arr_32 [i_0] = ((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (unsigned char)24)) : (((/* implicit */int) (signed char)-67))));
                            var_19 = ((((/* implicit */int) var_12)) < (((/* implicit */int) var_14)));
                            arr_33 [i_0] [i_0] [i_6] [i_8] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_5))));
                            var_20 = ((/* implicit */short) (~(-248518462933450663LL)));
                        }
                        /* vectorizable */
                        for (unsigned char i_9 = 1; i_9 < 23; i_9 += 1) 
                        {
                            arr_36 [i_0] [i_5] [i_9 + 2] = ((/* implicit */long long int) var_2);
                            arr_37 [i_0] [i_0] [i_5] [i_6] [i_9] = ((/* implicit */long long int) (signed char)1);
                        }
                        arr_38 [i_0] [i_0] [i_6] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)248)) ? (((/* implicit */int) (signed char)38)) : (((/* implicit */int) (_Bool)1))))) || (((/* implicit */_Bool) var_10))));
                    }
                    for (signed char i_10 = 0; i_10 < 25; i_10 += 2) 
                    {
                        var_21 -= ((/* implicit */unsigned char) (signed char)-49);
                        var_22 = ((long long int) min((var_14), (var_10)));
                    }
                    /* vectorizable */
                    for (unsigned char i_11 = 2; i_11 < 23; i_11 += 2) 
                    {
                        /* LoopSeq 3 */
                        for (unsigned short i_12 = 4; i_12 < 23; i_12 += 2) 
                        {
                            var_23 = ((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) (signed char)38))));
                            arr_48 [i_0] [i_1] [(unsigned short)20] [i_5] [i_1] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-38)) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) var_14)))));
                        }
                        for (unsigned char i_13 = 0; i_13 < 25; i_13 += 1) 
                        {
                            var_24 = (!(((/* implicit */_Bool) ((var_6) & (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)85)))))));
                            arr_53 [i_0] [i_0] [(unsigned char)20] [(unsigned short)19] [i_11] [i_5] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 8293187980270578052LL)) ? (4121751528987719704LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1))))));
                            arr_54 [i_0] [i_0] [i_5] [i_0] [i_13] = var_1;
                        }
                        for (long long int i_14 = 0; i_14 < 25; i_14 += 1) 
                        {
                            var_25 = ((/* implicit */unsigned int) 0LL);
                            var_26 &= ((/* implicit */short) ((signed char) -2521621954265367431LL));
                            arr_58 [i_0] [i_0] [i_0] [i_0] [(unsigned char)21] [i_0] [i_0] = ((/* implicit */long long int) (signed char)-40);
                            arr_59 [i_0] [i_1] [i_14] [i_11] [i_0] = ((/* implicit */long long int) (~(((((((/* implicit */int) (signed char)-36)) + (2147483647))) << (((2097151LL) - (2097151LL)))))));
                        }
                        var_27 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)14336)) << (((((/* implicit */int) (unsigned char)41)) - (35)))));
                        var_28 ^= ((((/* implicit */_Bool) var_13)) ? (-1LL) : (((/* implicit */long long int) ((/* implicit */int) var_9))));
                    }
                    /* vectorizable */
                    for (long long int i_15 = 0; i_15 < 25; i_15 += 3) 
                    {
                        var_29 = ((/* implicit */unsigned short) ((long long int) -917615217364356074LL));
                        arr_62 [i_5] [i_1] [7LL] [(unsigned char)23] [i_0] [i_0] = ((/* implicit */long long int) ((_Bool) var_5));
                        arr_63 [i_0] [i_0] = ((/* implicit */long long int) (((+(((/* implicit */int) var_10)))) << (((((/* implicit */int) var_2)) - (19747)))));
                        arr_64 [i_5] [i_5] [i_5] [i_0] = ((/* implicit */_Bool) ((unsigned char) var_2));
                        /* LoopSeq 1 */
                        for (short i_16 = 0; i_16 < 25; i_16 += 1) 
                        {
                            arr_68 [i_0] [i_0] [i_0] [(signed char)6] [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) var_5)) >> (((-5144814048156067850LL) + (5144814048156067858LL)))));
                            var_30 = ((/* implicit */unsigned short) var_10);
                        }
                    }
                }
                arr_69 [i_0] [4LL] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (signed char)-67)) : (((/* implicit */int) (unsigned short)51199))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_9)))))));
                arr_70 [i_0] = ((/* implicit */_Bool) var_12);
            }
        } 
    } 
    var_31 &= ((/* implicit */unsigned short) ((((/* implicit */int) (short)19554)) << (((/* implicit */int) (_Bool)1))));
}
