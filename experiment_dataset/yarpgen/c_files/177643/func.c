/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177643
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177643 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177643
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
    for (int i_0 = 4; i_0 < 24; i_0 += 4) 
    {
        for (short i_1 = 2; i_1 < 22; i_1 += 3) 
        {
            {
                var_14 -= ((/* implicit */_Bool) ((((((int) var_6)) + (2147483647))) >> (((((/* implicit */int) ((signed char) var_12))) - (74)))));
                arr_4 [i_1] = ((unsigned int) ((((/* implicit */_Bool) var_13)) ? (((((/* implicit */_Bool) 8701303383674335790LL)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned short)13999)))) : (((/* implicit */int) arr_2 [i_1] [i_0]))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        for (short i_3 = 0; i_3 < 10; i_3 += 1) 
        {
            {
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned int i_4 = 2; i_4 < 7; i_4 += 3) 
                {
                    var_15 = ((/* implicit */int) max((var_15), (((/* implicit */int) ((var_3) | (((/* implicit */long long int) ((/* implicit */int) var_0))))))));
                    /* LoopNest 2 */
                    for (long long int i_5 = 0; i_5 < 10; i_5 += 4) 
                    {
                        for (short i_6 = 0; i_6 < 10; i_6 += 4) 
                        {
                            {
                                var_16 = ((/* implicit */short) ((var_8) | (var_9)));
                                var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_15 [i_4] [i_4] [i_5] [i_6])) ? (((/* implicit */int) arr_8 [i_4] [i_4 + 1] [i_5])) : (((/* implicit */int) ((((/* implicit */int) var_1)) != (945798717))))));
                                var_18 = var_9;
                                var_19 = ((/* implicit */long long int) 5060893989642332037ULL);
                            }
                        } 
                    } 
                }
                for (unsigned short i_7 = 1; i_7 < 6; i_7 += 4) 
                {
                    var_20 &= ((/* implicit */unsigned int) ((((((/* implicit */int) ((short) 63LL))) << (((((var_10) ? (var_5) : (((/* implicit */int) var_12)))) - (929154397))))) / (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) ((signed char) var_11))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_17 [(short)2]))))))));
                    var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) arr_17 [4LL]))));
                }
                for (long long int i_8 = 0; i_8 < 10; i_8 += 1) 
                {
                    /* LoopSeq 1 */
                    for (long long int i_9 = 0; i_9 < 10; i_9 += 3) 
                    {
                        /* LoopSeq 4 */
                        for (int i_10 = 0; i_10 < 10; i_10 += 1) 
                        {
                            var_22 ^= ((/* implicit */long long int) var_4);
                            arr_25 [i_2] [i_3] [i_8] [i_9] [(signed char)6] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) 8701303383674335802LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (var_8)));
                            var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) (~((-(((/* implicit */int) arr_0 [i_2] [i_3])))))))));
                        }
                        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                        {
                            var_24 = (~(-8424799254230347634LL));
                            var_25 -= ((/* implicit */unsigned long long int) min((((((/* implicit */long long int) ((/* implicit */int) ((short) arr_6 [i_2] [i_2])))) + (min((var_9), (((/* implicit */long long int) var_11)))))), (((/* implicit */long long int) arr_1 [i_8]))));
                            arr_28 [i_2] [i_3] [i_8] [i_9] [i_9] [i_11] = ((/* implicit */signed char) min((((((/* implicit */_Bool) arr_17 [i_9])) ? (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_9]))) : (var_3))), (max((8557052877176179634LL), (arr_20 [i_2] [i_2] [i_2] [i_2])))));
                        }
                        for (signed char i_12 = 0; i_12 < 10; i_12 += 4) 
                        {
                            arr_32 [i_9] = ((/* implicit */int) (((~(((long long int) (short)20579)))) / (((/* implicit */long long int) ((/* implicit */int) var_10)))));
                            arr_33 [i_2] [i_2] [i_9] [i_2] = ((/* implicit */short) ((945798717) & (((/* implicit */int) (_Bool)1))));
                            arr_34 [(_Bool)1] [i_2] [(unsigned short)0] [i_8] [i_9] [i_12] = ((/* implicit */_Bool) arr_12 [7ULL] [i_9] [i_9] [i_2]);
                        }
                        for (_Bool i_13 = 0; i_13 < 0; i_13 += 1) 
                        {
                            arr_38 [i_2] [i_9] [i_2] = ((/* implicit */_Bool) var_13);
                            var_26 = ((/* implicit */_Bool) max((var_26), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((int) var_9))) & (((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) -945798718)) : (var_3)))))) ? (1150669704793161728ULL) : (((/* implicit */unsigned long long int) max((-8424799254230347637LL), (((/* implicit */long long int) var_12))))))))));
                            var_27 = ((/* implicit */int) var_7);
                            arr_39 [i_9] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_2)), (7345316657089137352ULL)))) ? (arr_16 [i_3] [i_13 + 1] [i_13] [i_13] [i_13 + 1] [i_13] [(_Bool)1]) : (max((((41LL) >> (((((/* implicit */int) arr_21 [i_2] [i_2] [i_2] [i_8] [3] [i_9])) - (1640))))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_35 [i_9])) ? (((/* implicit */int) (unsigned short)65534)) : (((/* implicit */int) var_4)))))))));
                            var_28 = ((/* implicit */unsigned short) max((((((((/* implicit */int) var_0)) << (((((/* implicit */int) var_0)) - (20259))))) % (((int) var_12)))), (max((((/* implicit */int) (unsigned short)2)), (((((/* implicit */int) var_4)) >> (((((/* implicit */int) var_2)) - (12395)))))))));
                        }
                        var_29 ^= ((/* implicit */_Bool) ((long long int) ((((/* implicit */int) var_10)) | (((((/* implicit */_Bool) (short)-256)) ? (((/* implicit */int) (unsigned short)19154)) : (((/* implicit */int) (signed char)126)))))));
                    }
                    /* LoopSeq 2 */
                    for (long long int i_14 = 0; i_14 < 10; i_14 += 1) /* same iter space */
                    {
                        var_30 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-820)) ? (((/* implicit */int) arr_2 [i_14] [i_14])) : (((/* implicit */int) arr_2 [i_14] [i_14]))))) && (((((/* implicit */_Bool) (signed char)0)) || (((/* implicit */_Bool) arr_2 [i_14] [i_14]))))));
                        arr_43 [i_2] [i_8] [i_14] [i_3] [i_14] = ((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */_Bool) -8424799254230347637LL)) ? (min((4630525140576245040LL), (((/* implicit */long long int) var_4)))) : (((/* implicit */long long int) max((-884778020), (((/* implicit */int) var_2))))))));
                    }
                    for (long long int i_15 = 0; i_15 < 10; i_15 += 1) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (signed char i_16 = 1; i_16 < 8; i_16 += 3) 
                        {
                            arr_48 [i_2] [i_2] [i_2] [1LL] [i_2] = ((/* implicit */_Bool) 8701303383674335790LL);
                            arr_49 [i_2] [i_3] = ((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */int) (unsigned short)26308)) & (((/* implicit */int) (_Bool)1))))) | (((var_9) | (((/* implicit */long long int) ((/* implicit */int) (short)28392)))))));
                            var_31 = ((/* implicit */short) min((var_8), (max((((((/* implicit */_Bool) var_8)) ? (-3423974639508196401LL) : (var_8))), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_31 [i_2] [i_3] [8U] [i_15])))))))));
                            arr_50 [i_16 - 1] [i_2] [i_8] [i_2] [i_2] = ((/* implicit */unsigned long long int) 113185926447421411LL);
                        }
                        arr_51 [i_2] [i_2] [i_8] [i_15] [i_8] [(unsigned short)5] = ((/* implicit */short) (~(((/* implicit */int) var_1))));
                    }
                }
                var_32 = ((/* implicit */long long int) max(((!(((/* implicit */_Bool) (signed char)-95)))), (var_10)));
                var_33 = ((/* implicit */long long int) (+(((((((/* implicit */int) arr_46 [i_3] [i_3] [i_3] [i_3] [i_3])) != (((/* implicit */int) (unsigned char)40)))) ? (((/* implicit */int) max((var_0), (((/* implicit */unsigned short) arr_37 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2]))))) : (((((/* implicit */int) (short)-25631)) & (((/* implicit */int) var_11))))))));
                arr_52 [i_3] = ((/* implicit */short) ((((((/* implicit */int) (short)(-32767 - 1))) + (2147483647))) >> (((177336813U) - (177336798U)))));
            }
        } 
    } 
    var_34 -= ((/* implicit */long long int) (-(((/* implicit */int) (signed char)-1))));
    var_35 ^= ((/* implicit */unsigned long long int) var_4);
}
