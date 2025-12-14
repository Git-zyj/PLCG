/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169934
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169934 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169934
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
    var_19 = ((/* implicit */int) ((unsigned short) (short)(-32767 - 1)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 21; i_2 += 3) 
            {
                {
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (short i_3 = 1; i_3 < 20; i_3 += 1) 
                    {
                        arr_9 [i_0] [i_1] [i_2] [i_3] [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned long long int) 0LL))) ? (((/* implicit */unsigned long long int) arr_0 [i_0] [i_0])) : (var_6)));
                        var_20 = ((/* implicit */int) ((((/* implicit */_Bool) var_7)) ? (var_0) : (((/* implicit */unsigned int) ((((/* implicit */int) (short)127)) % (((/* implicit */int) arr_5 [11U] [i_1] [i_1] [i_1])))))));
                        var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_10))))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (_Bool)0)))))));
                    }
                    for (unsigned int i_4 = 0; i_4 < 21; i_4 += 4) 
                    {
                        var_22 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) var_0)), (((unsigned long long int) arr_4 [(_Bool)1] [i_1] [i_4]))));
                        var_23 += ((/* implicit */short) ((((/* implicit */_Bool) max((var_0), (((/* implicit */unsigned int) (short)8649))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (((((((/* implicit */_Bool) 0ULL)) || (((/* implicit */_Bool) -67962090)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [i_1] [i_2] [i_4]))) : (((((/* implicit */unsigned int) ((/* implicit */int) var_10))) ^ (434679113U)))))));
                        var_24 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) min((var_5), (((/* implicit */unsigned long long int) (short)13829))))) ? (min((((/* implicit */unsigned long long int) var_8)), (18446744073709551615ULL))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)6213))))))), (var_6)));
                    }
                    for (unsigned int i_5 = 0; i_5 < 21; i_5 += 2) 
                    {
                        var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_16))) : (var_8)))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_14 [i_0] [i_1] [i_0] [i_1])))))));
                        /* LoopSeq 4 */
                        for (short i_6 = 0; i_6 < 21; i_6 += 1) 
                        {
                            var_26 = ((/* implicit */unsigned long long int) ((((arr_8 [i_0] [i_0]) & (((/* implicit */unsigned int) var_14)))) & (((arr_8 [i_0] [i_0]) - (arr_8 [i_5] [i_1])))));
                            arr_18 [i_0] [i_1] [i_2] [i_5] [i_1] [i_6] = (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_4)), (var_5)))));
                            var_27 += ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_2)) ? (2249989081U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-6214))))) % (((/* implicit */unsigned int) var_14))));
                            arr_19 [i_0] [i_1] [i_2] [i_2] [i_0] [i_5] [i_6] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_3))));
                        }
                        for (unsigned short i_7 = 3; i_7 < 17; i_7 += 1) 
                        {
                            var_28 = ((/* implicit */int) (_Bool)0);
                            var_29 = ((/* implicit */unsigned char) min((((unsigned int) ((((/* implicit */_Bool) 0U)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)29)))))), (((/* implicit */unsigned int) max((((/* implicit */unsigned short) var_10)), (var_3))))));
                        }
                        for (unsigned int i_8 = 4; i_8 < 19; i_8 += 1) 
                        {
                            var_30 = ((/* implicit */unsigned char) max((var_30), (((/* implicit */unsigned char) (~(max((((/* implicit */unsigned int) (_Bool)0)), (2859337571U))))))));
                            var_31 += ((/* implicit */_Bool) ((unsigned char) (+(((((/* implicit */_Bool) 331296529)) ? (1ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_17))))))));
                        }
                        for (unsigned int i_9 = 0; i_9 < 21; i_9 += 1) 
                        {
                            var_32 = ((/* implicit */_Bool) var_9);
                            var_33 = ((/* implicit */long long int) max((((((/* implicit */int) (short)8653)) % (((/* implicit */int) var_10)))), (((/* implicit */int) (short)8649))));
                            var_34 = ((/* implicit */unsigned short) var_17);
                        }
                    }
                    for (unsigned long long int i_10 = 0; i_10 < 21; i_10 += 4) 
                    {
                        var_35 = ((/* implicit */unsigned long long int) ((((((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) 2581238824U)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)35305)))))))) ? (max(((+(((/* implicit */int) var_3)))), ((((_Bool)1) ? (((/* implicit */int) (unsigned char)9)) : (var_14))))) : (((/* implicit */int) arr_5 [i_0] [i_0] [3ULL] [i_0]))));
                        /* LoopSeq 3 */
                        for (short i_11 = 0; i_11 < 21; i_11 += 3) 
                        {
                            var_36 = ((((/* implicit */_Bool) var_9)) ? (((18446744073709551612ULL) & (((/* implicit */unsigned long long int) ((unsigned int) var_16))))) : (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)32767))) % ((+(var_9)))))));
                            var_37 = ((/* implicit */unsigned long long int) var_15);
                            var_38 ^= ((/* implicit */unsigned short) (~(var_8)));
                        }
                        for (unsigned short i_12 = 0; i_12 < 21; i_12 += 4) /* same iter space */
                        {
                            var_39 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_14 [i_0] [i_0] [i_0] [i_1]))));
                            var_40 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(arr_24 [i_0] [i_1] [i_1] [i_2] [i_10] [11ULL] [i_1])))) || (((/* implicit */_Bool) min((((/* implicit */unsigned int) (_Bool)1)), (((var_2) & (((/* implicit */unsigned int) ((/* implicit */int) var_18))))))))));
                            arr_35 [i_0] [i_1] [i_1] [i_1] [i_12] [(unsigned short)13] [i_2] = ((short) ((short) 4ULL));
                            var_41 = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((var_14) % (((/* implicit */int) arr_5 [i_0] [5LL] [i_10] [(unsigned short)19]))))), ((((_Bool)1) ? (3ULL) : (((/* implicit */unsigned long long int) 904229272))))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_10))))) ? (((/* implicit */int) arr_17 [i_0] [i_1] [i_1] [i_10] [i_12])) : (((/* implicit */int) (!(((/* implicit */_Bool) 18446744073709551615ULL))))))))));
                            arr_36 [9LL] [i_1] [i_2] [i_1] [i_0] = ((/* implicit */unsigned int) var_18);
                        }
                        /* vectorizable */
                        for (unsigned short i_13 = 0; i_13 < 21; i_13 += 4) /* same iter space */
                        {
                            var_42 = ((/* implicit */int) min((var_42), (((/* implicit */int) (!(((/* implicit */_Bool) ((short) -904229280))))))));
                            var_43 = ((/* implicit */_Bool) (+(-1675111347)));
                        }
                        var_44 = ((/* implicit */int) var_2);
                        var_45 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_16)), (arr_31 [0ULL] [i_10] [17] [i_0] [i_0] [i_0])))) ? (((/* implicit */unsigned int) max((892936248), (0)))) : (max((var_0), (((/* implicit */unsigned int) var_4))))))) - (min((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)4789)) & (((/* implicit */int) (_Bool)1))))), (((((/* implicit */_Bool) var_7)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))))))));
                    }
                    var_46 = ((/* implicit */int) min((var_46), (((/* implicit */int) 4610560118520545280LL))));
                }
            } 
        } 
    } 
}
