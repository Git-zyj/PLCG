/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14419
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14419 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14419
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
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned int i_2 = 0; i_2 < 16; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_17 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (_Bool)0))))) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (var_4)));
                                var_18 = ((((/* implicit */_Bool) max((((/* implicit */long long int) var_1)), (((var_11) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))) ? (max((((/* implicit */long long int) (_Bool)0)), ((((_Bool)1) ? (3099297041983365055LL) : (((/* implicit */long long int) 826388167U)))))) : (((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (var_5))));
                                var_19 += ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_0))))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_5));
                            }
                        } 
                    } 
                } 
                var_20 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((var_6), (((/* implicit */long long int) var_11))))) ? (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_2))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 33554400LL)) ? (var_7) : (((/* implicit */long long int) var_16))))) ? (var_9) : (((((/* implicit */_Bool) -9223372036854775796LL)) ? (5587871348830157762LL) : (var_10)))))));
                arr_16 [i_0] = ((/* implicit */unsigned int) ((var_2) ? (max((var_14), (((/* implicit */long long int) var_0)))) : (max((((/* implicit */long long int) 4519495U)), (var_14)))));
                var_21 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */long long int) (_Bool)1)), (var_9)))) ? (max((var_16), (var_16))) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))) ? (var_10) : (max((-3099297041983365055LL), (((/* implicit */long long int) (_Bool)1)))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned int i_5 = 0; i_5 < 11; i_5 += 1) 
    {
        arr_19 [i_5] = (_Bool)0;
        var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) var_3))));
        /* LoopSeq 3 */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
        {
            arr_22 [i_6] = ((/* implicit */unsigned int) (((_Bool)1) ? (((((/* implicit */_Bool) 1729407419U)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (var_14))) : (var_10)));
            var_23 = ((/* implicit */long long int) max((var_23), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)0))))) ? (max((((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (-3577997467860272824LL))), (((var_8) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (var_3))))) : (var_9)))));
            var_24 -= ((/* implicit */long long int) var_15);
        }
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
        {
            /* LoopSeq 1 */
            for (unsigned int i_8 = 0; i_8 < 11; i_8 += 2) 
            {
                var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (max((var_3), (((/* implicit */long long int) (_Bool)1)))) : (var_6)))) ? (var_14) : ((-9223372036854775807LL - 1LL))));
                var_26 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 9223372036854775796LL)) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (var_5)))) ? (((((/* implicit */_Bool) var_16)) ? (var_9) : (((/* implicit */long long int) var_16)))) : (((/* implicit */long long int) var_16))));
                var_27 = (_Bool)0;
            }
            var_28 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3073040201107722393LL)) ? (var_7) : (var_4)))) ? (((/* implicit */long long int) var_15)) : (((var_1) ? (7515916049466443126LL) : (((/* implicit */long long int) var_12))))))) ? (((var_2) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (var_13) : (0U)))) : (9223372036854775797LL))) : (((((/* implicit */_Bool) var_13)) ? (var_9) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (3722589751U) : (3359744551U))))))));
        }
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (long long int i_10 = 2; i_10 < 8; i_10 += 3) 
            {
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    {
                        var_29 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((var_1) ? (var_3) : (((/* implicit */long long int) 4294967295U)))) : (((((/* implicit */_Bool) var_16)) ? (var_4) : (((var_8) ? (-9223372036854775797LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))))))));
                        var_30 = ((/* implicit */unsigned int) var_5);
                    }
                } 
            } 
            var_31 |= ((((/* implicit */_Bool) max((var_4), (((/* implicit */long long int) (_Bool)0))))) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (var_14));
        }
        /* LoopSeq 2 */
        for (long long int i_12 = 0; i_12 < 11; i_12 += 2) 
        {
            var_32 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */long long int) 3351924965U)) : (var_5)))) ? (var_14) : (8446484598055129214LL)));
            /* LoopSeq 2 */
            /* vectorizable */
            for (long long int i_13 = 0; i_13 < 11; i_13 += 4) 
            {
                arr_46 [i_5] [4U] [i_5] [0LL] = ((/* implicit */_Bool) 8478756376419416617LL);
                var_33 += ((/* implicit */unsigned int) (_Bool)0);
            }
            /* vectorizable */
            for (long long int i_14 = 0; i_14 < 11; i_14 += 3) 
            {
                /* LoopSeq 1 */
                for (long long int i_15 = 3; i_15 < 8; i_15 += 1) 
                {
                    /* LoopSeq 1 */
                    for (long long int i_16 = 2; i_16 < 10; i_16 += 1) 
                    {
                        arr_56 [i_15] [(_Bool)1] [i_15] = ((((/* implicit */_Bool) var_7)) ? (var_7) : (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (_Bool)1))))));
                        arr_57 [i_5] [i_15] [i_14] [i_15] [i_15] = ((/* implicit */unsigned int) var_5);
                    }
                    arr_58 [i_12] [i_12] [i_12] [i_15 + 3] [i_14] &= ((/* implicit */_Bool) 0LL);
                    var_34 = ((/* implicit */_Bool) (((_Bool)1) ? (var_10) : (((/* implicit */long long int) var_15))));
                }
                arr_59 [i_5] = ((/* implicit */long long int) var_15);
                var_35 = ((/* implicit */unsigned int) (_Bool)1);
            }
        }
        for (long long int i_17 = 2; i_17 < 9; i_17 += 2) 
        {
            arr_62 [i_17] = var_6;
            arr_63 [i_5] [i_5] [i_5] = ((/* implicit */unsigned int) var_4);
        }
    }
    for (unsigned int i_18 = 4; i_18 < 13; i_18 += 2) 
    {
        /* LoopSeq 1 */
        for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
        {
            var_36 = ((/* implicit */_Bool) min((var_36), ((_Bool)1)));
            arr_70 [4LL] [i_18] = ((/* implicit */long long int) var_15);
            arr_71 [(_Bool)1] [i_18] = ((((/* implicit */_Bool) ((var_1) ? (var_4) : (-2495055581365162830LL)))) ? (((((/* implicit */_Bool) -9223372036854775797LL)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (var_3))));
        }
        arr_72 [i_18] [i_18 - 1] = 4294967295U;
    }
    var_37 -= ((/* implicit */long long int) max((var_12), (((((/* implicit */_Bool) ((var_1) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_9)))) ? (var_15) : (2899533459U)))));
}
