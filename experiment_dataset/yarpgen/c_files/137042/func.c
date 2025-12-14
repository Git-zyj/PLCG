/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137042
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137042 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137042
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
    var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_10)))))));
    /* LoopSeq 4 */
    for (signed char i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((8388607U) / (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)4095))))) / (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)4076)))))) || (((/* implicit */_Bool) ((var_9) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (((((/* implicit */unsigned int) ((/* implicit */int) var_15))) | (var_6))))))));
        arr_5 [i_0] [i_0] = (((-(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_15))) != (var_6)))))) > (((/* implicit */int) ((short) var_3))));
        var_17 = ((/* implicit */unsigned short) ((unsigned char) -3531147233113996966LL));
        /* LoopSeq 1 */
        /* vectorizable */
        for (signed char i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            var_18 = ((/* implicit */long long int) ((((var_12) / (var_12))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) var_8))))))));
            /* LoopSeq 3 */
            for (signed char i_2 = 0; i_2 < 19; i_2 += 1) /* same iter space */
            {
                /* LoopSeq 2 */
                for (int i_3 = 2; i_3 < 16; i_3 += 4) 
                {
                    var_19 -= ((/* implicit */unsigned long long int) ((3739232129U) / (((/* implicit */unsigned int) ((/* implicit */int) (short)-32136)))));
                    var_20 ^= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_12))));
                    var_21 |= ((/* implicit */signed char) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (var_6)));
                    /* LoopSeq 1 */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        var_22 ^= ((/* implicit */int) (((_Bool)0) || (((/* implicit */_Bool) (unsigned short)4100))));
                        arr_15 [i_0] [i_0] [i_0] [(short)2] [(short)2] [i_0] [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) var_5)))) ? (((/* implicit */int) var_11)) : (((var_9) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_3))))));
                        arr_16 [(signed char)6] [i_2] [i_3] [i_2] [i_2] [i_1] [(unsigned short)17] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_10))))));
                        arr_17 [i_1] [i_4] [i_4] [i_3] [i_4] = ((/* implicit */unsigned int) ((_Bool) var_3));
                        arr_18 [i_3 + 1] [i_3 + 1] = ((/* implicit */signed char) ((long long int) var_1));
                    }
                    var_23 = ((/* implicit */_Bool) ((((/* implicit */int) var_1)) / (((/* implicit */int) var_0))));
                }
                for (int i_5 = 0; i_5 < 19; i_5 += 4) 
                {
                    var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) : (var_7)));
                    /* LoopSeq 1 */
                    for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
                    {
                        arr_23 [i_0] [i_1] [i_2] [i_5] [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) ((var_12) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))))));
                        var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) var_2))) | (((var_2) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (var_6))))))));
                    }
                }
                var_26 = ((/* implicit */_Bool) ((((/* implicit */int) var_3)) / (((/* implicit */int) var_9))));
                arr_24 [(_Bool)1] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_5))));
            }
            for (signed char i_7 = 0; i_7 < 19; i_7 += 1) /* same iter space */
            {
                var_27 |= ((/* implicit */unsigned long long int) (~(var_6)));
                var_28 = ((/* implicit */unsigned char) (~(var_8)));
            }
            for (unsigned int i_8 = 0; i_8 < 19; i_8 += 2) 
            {
                /* LoopSeq 2 */
                for (unsigned short i_9 = 0; i_9 < 19; i_9 += 2) 
                {
                    arr_35 [11U] [i_1] [(unsigned short)11] [i_1] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (unsigned short)4095)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)4095))) : (1818778859U))) + (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_2)))))));
                    var_29 = ((/* implicit */_Bool) var_7);
                    arr_36 [i_0] [(_Bool)1] [i_8] [1ULL] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((var_6) % (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(var_2))))) : (var_7)));
                }
                for (int i_10 = 0; i_10 < 19; i_10 += 3) 
                {
                    arr_40 [i_0] [8U] [8U] [i_1] [i_10] = var_11;
                    arr_41 [i_10] [i_1] [i_1] [i_8] [i_8] [i_8] = ((/* implicit */unsigned long long int) (-(((unsigned int) (unsigned short)61440))));
                    var_30 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((signed char) var_6))) ? (((((/* implicit */unsigned long long int) var_8)) / (var_12))) : (((/* implicit */unsigned long long int) (-(var_8))))));
                    arr_42 [i_10] [i_10] [i_10] [13LL] = ((/* implicit */long long int) var_2);
                    var_31 = ((/* implicit */unsigned int) ((((var_13) != (((/* implicit */unsigned int) ((/* implicit */int) var_11))))) || (((/* implicit */_Bool) ((var_2) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_5)))))));
                }
                var_32 *= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_11)) < (((/* implicit */int) var_15)))))) | (var_12)));
            }
            var_33 += ((/* implicit */short) (+(((/* implicit */int) var_3))));
            var_34 = ((/* implicit */unsigned int) ((unsigned long long int) (!(((/* implicit */_Bool) 555735166U)))));
        }
        var_35 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((var_2) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) var_10)))))) ? (((/* implicit */unsigned long long int) max((var_8), (((/* implicit */long long int) var_2))))) : (max((((/* implicit */unsigned long long int) (short)-26524)), (1718918131211844635ULL)))));
    }
    for (unsigned int i_11 = 0; i_11 < 16; i_11 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned int i_12 = 0; i_12 < 16; i_12 += 1) 
        {
            for (unsigned long long int i_13 = 0; i_13 < 16; i_13 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (long long int i_14 = 0; i_14 < 16; i_14 += 4) 
                    {
                        var_36 = ((/* implicit */signed char) max((var_36), (((/* implicit */signed char) ((((/* implicit */int) var_15)) - (((/* implicit */int) var_4)))))));
                        var_37 &= ((/* implicit */unsigned int) ((((/* implicit */int) var_15)) != (((/* implicit */int) var_14))));
                        var_38 = (-(((/* implicit */int) var_0)));
                    }
                    for (short i_15 = 3; i_15 < 14; i_15 += 4) 
                    {
                        arr_55 [i_12] [i_13] [i_15] = ((/* implicit */unsigned int) min((((((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) var_8)) : (var_12))) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) var_13))))) != (((((/* implicit */int) var_4)) - (((/* implicit */int) var_11)))))))));
                        arr_56 [i_11] [i_11] [i_11] [i_12] [(unsigned char)10] [i_15] |= ((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_11)))));
                        arr_57 [i_11] [i_12] [i_15] = ((/* implicit */unsigned char) min((max((var_7), (((/* implicit */unsigned long long int) var_1)))), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) : (((var_11) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))))));
                    }
                    var_39 = ((/* implicit */unsigned long long int) ((int) (short)21687));
                    /* LoopNest 2 */
                    for (unsigned char i_16 = 0; i_16 < 16; i_16 += 3) 
                    {
                        for (unsigned long long int i_17 = 0; i_17 < 16; i_17 += 4) 
                        {
                            {
                                var_40 |= ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) && (var_11)))), (var_13)))), (((((/* implicit */unsigned long long int) min((var_13), (((/* implicit */unsigned int) var_9))))) & (((var_12) >> (((var_8) + (1965116759780409132LL)))))))));
                                arr_62 [i_11] [(unsigned char)8] [i_11] [(unsigned char)8] [i_16] = ((unsigned int) ((((((/* implicit */int) var_10)) * (((/* implicit */int) var_5)))) > (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_14))))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (signed char i_18 = 2; i_18 < 14; i_18 += 1) 
                    {
                        var_41 = ((/* implicit */int) max((((/* implicit */unsigned int) (+(((((/* implicit */int) (unsigned char)231)) << (((555735160U) - (555735155U)))))))), (555735167U)));
                        var_42 ^= ((((_Bool) (signed char)126)) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_14)) | (((/* implicit */int) ((short) var_8)))))) : ((+((((_Bool)1) ? (560780176U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)4095))))))));
                    }
                    var_43 = ((/* implicit */signed char) ((((/* implicit */unsigned int) min(((~(((/* implicit */int) (unsigned short)61440)))), (((/* implicit */int) (unsigned char)0))))) & (3530970593U)));
                }
            } 
        } 
        var_44 = ((/* implicit */short) ((long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_9)) * (((/* implicit */int) var_5))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (((var_7) >> (((/* implicit */int) var_14)))))));
    }
    for (unsigned short i_19 = 0; i_19 < 11; i_19 += 4) 
    {
        var_45 = ((/* implicit */unsigned short) (+(min((var_12), (((/* implicit */unsigned long long int) var_8))))));
        arr_70 [i_19] = ((/* implicit */unsigned int) min((((var_9) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_11)))), (((((/* implicit */int) max((var_3), (((/* implicit */signed char) var_14))))) >> (((var_7) - (809867176845360864ULL)))))));
    }
    for (unsigned short i_20 = 0; i_20 < 14; i_20 += 1) 
    {
        arr_73 [i_20] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) var_11)) / (((/* implicit */int) var_14))))) ? (((2717729921U) >> (((555735166U) - (555735164U))))) : (((/* implicit */unsigned int) ((/* implicit */int) min((var_15), (((/* implicit */unsigned short) var_5))))))));
        var_46 = ((1511056345) << (((1577237374U) - (1577237374U))));
    }
}
