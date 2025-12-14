/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185394
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185394 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185394
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
    var_14 ^= ((/* implicit */short) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) (unsigned char)253)) ? (((/* implicit */unsigned long long int) var_8)) : (18446744073709551605ULL)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) var_8)) ? (var_8) : (-4581437777576249863LL)))))) : ((-(((var_2) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) var_6)))))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_15 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0 - 1] [i_0 - 1])) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) var_2)))));
        /* LoopNest 2 */
        for (long long int i_1 = 2; i_1 < 21; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                {
                    var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_0 - 1])) ? (arr_4 [i_0 - 1]) : (arr_4 [i_0 - 1])));
                    var_17 = ((/* implicit */unsigned short) ((signed char) 739810118U));
                }
            } 
        } 
    }
    for (short i_3 = 3; i_3 < 12; i_3 += 4) 
    {
        var_18 = ((/* implicit */unsigned short) ((((((var_2) ? (((/* implicit */unsigned long long int) arr_2 [i_3])) : (arr_4 [i_3]))) != (((/* implicit */unsigned long long int) arr_6 [i_3])))) ? (((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_3 - 2] [i_3 + 1]))) : (arr_1 [2ULL] [(signed char)10]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [4LL] [4LL])) ? (var_12) : (((/* implicit */int) var_6)))))));
        /* LoopNest 3 */
        for (unsigned int i_4 = 0; i_4 < 13; i_4 += 1) 
        {
            for (long long int i_5 = 1; i_5 < 10; i_5 += 3) 
            {
                for (signed char i_6 = 4; i_6 < 10; i_6 += 1) 
                {
                    {
                        var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_5 - 1] [i_6 + 1])) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_5 + 2] [i_6 - 1])))))) ? (max((var_10), (((/* implicit */long long int) arr_8 [i_5 + 3] [i_6 + 1])))) : (((/* implicit */long long int) ((/* implicit */int) min((arr_8 [i_5 + 1] [i_6 - 4]), (((/* implicit */unsigned short) var_0)))))))))));
                        /* LoopSeq 3 */
                        for (int i_7 = 0; i_7 < 13; i_7 += 4) /* same iter space */
                        {
                            var_20 = ((/* implicit */unsigned short) var_9);
                            arr_21 [i_3] [i_4] [i_5 + 1] [i_6 + 3] = ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */short) var_0)), (var_6))))) * ((-(-1LL)))))) ? (((((/* implicit */_Bool) 6154435129091497988ULL)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)241))) != (6477415498703644357LL))))) : (-1LL))) : (((/* implicit */long long int) max((((/* implicit */int) ((arr_0 [i_3] [9LL]) != (((/* implicit */int) var_2))))), ((-(var_12)))))));
                            arr_22 [(_Bool)0] [i_4] [i_5 + 3] [3LL] [6LL] [i_7] = ((((((/* implicit */_Bool) (-(0U)))) ? (max((((/* implicit */long long int) 4294967279U)), (var_11))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (var_8))))) != (((/* implicit */long long int) (~(4294967295U)))));
                            arr_23 [i_3] [i_3 - 2] [i_3] [i_3 - 2] [i_3] = ((/* implicit */long long int) ((unsigned long long int) 476075512));
                        }
                        for (int i_8 = 0; i_8 < 13; i_8 += 4) /* same iter space */
                        {
                            arr_26 [i_3 + 1] [i_3 + 1] [i_3 + 1] [(unsigned short)3] [i_3 + 1] [i_3 + 1] = ((/* implicit */unsigned char) ((((_Bool) ((((/* implicit */_Bool) var_11)) ? (-1LL) : (var_11)))) ? ((~(((/* implicit */int) ((unsigned short) var_1))))) : (((/* implicit */int) (!(((/* implicit */_Bool) min((var_1), (((/* implicit */int) arr_18 [i_4] [i_4] [i_5 - 1]))))))))));
                            var_21 = max((((/* implicit */long long int) (short)-22868)), (arr_9 [i_4]));
                            var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) (~(((((/* implicit */_Bool) arr_4 [i_3 - 1])) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) arr_6 [i_8])) != (arr_4 [i_3])))) : ((-(((/* implicit */int) arr_24 [i_3] [i_3] [i_3] [6U] [6U] [i_8] [6U])))))))))));
                        }
                        for (unsigned short i_9 = 0; i_9 < 13; i_9 += 3) 
                        {
                            var_23 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 1256570218486289822ULL)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (var_7)))) ? (((/* implicit */long long int) var_12)) : (max((var_4), (9223372036854775807LL))))) != (((/* implicit */long long int) ((int) arr_1 [i_3] [12])))));
                            arr_29 [i_9] [i_6 - 3] [i_5 + 1] [7U] [i_3] = ((/* implicit */int) (~(((((/* implicit */_Bool) max((3555157172U), (((/* implicit */unsigned int) (_Bool)0))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -805447506085080912LL)) ? (739810117U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_3 - 3] [i_3 - 3] [i_6 + 2])))))) : (((((/* implicit */_Bool) arr_19 [i_3] [i_3])) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))))));
                            var_24 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) (~(arr_9 [i_3 - 2])))) != (arr_4 [(short)4])));
                            arr_30 [i_3 - 2] [i_3 - 3] [8LL] [7U] [8LL] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_28 [i_5] [12] [i_3 - 3] [i_5 + 2] [i_6 + 2])) : (((/* implicit */int) arr_28 [i_5] [2ULL] [i_3 - 1] [i_5 - 1] [i_6 + 2]))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967289U)) ? (((/* implicit */long long int) ((/* implicit */int) arr_18 [(signed char)7] [i_6] [(signed char)7]))) : (var_5)))) ? (((unsigned long long int) 2062886603228239120LL)) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) != (11831294384685052100ULL))))))) : (((/* implicit */unsigned long long int) max((max((((/* implicit */long long int) var_9)), (-7010853623628313921LL))), (((/* implicit */long long int) max((((/* implicit */unsigned int) arr_6 [i_5 + 3])), (1601536485U))))))));
                        }
                        arr_31 [i_3] [i_3] [i_5] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) ((short) 2062886603228239120LL)))) != (((((8521215115264LL) != (-22LL))) ? (min((((/* implicit */unsigned int) arr_12 [6ULL] [6ULL] [0U] [i_6])), (6U))) : (((((/* implicit */_Bool) (unsigned char)254)) ? (7U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)33569)))))))));
                        arr_32 [6ULL] [6ULL] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_0))))) != ((~(arr_1 [i_3 - 3] [(signed char)0])))));
                        var_25 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((var_8) != (((/* implicit */long long int) ((/* implicit */int) var_0))))) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (var_11))) : (((/* implicit */long long int) max((2147483647), (((/* implicit */int) var_6)))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((var_3) != (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)-20299)))))))))) : (min((((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_9)) : (-511236008)))), (var_11)))));
                    }
                } 
            } 
        } 
        arr_33 [6LL] = ((/* implicit */long long int) arr_28 [i_3] [i_3] [10LL] [i_3 - 3] [i_3]);
    }
    /* vectorizable */
    for (int i_10 = 0; i_10 < 10; i_10 += 3) 
    {
        arr_36 [i_10] [7U] = ((/* implicit */long long int) (~(4632351535198419010ULL)));
        arr_37 [(unsigned short)0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (arr_35 [i_10]) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))));
        arr_38 [i_10] [i_10] = ((/* implicit */_Bool) (+(arr_25 [4LL] [i_10] [i_10] [i_10] [(unsigned short)2])));
        arr_39 [i_10] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_10] [i_10] [i_10] [i_10])) ? (((/* implicit */long long int) var_12)) : (var_7)))) ? (((((/* implicit */_Bool) arr_27 [i_10] [i_10] [i_10] [i_10] [i_10])) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_10] [i_10] [i_10] [i_10]))))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)31958)))));
    }
    var_26 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_13), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned short)33578)) : (((/* implicit */int) var_6)))))))) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (var_8)));
}
