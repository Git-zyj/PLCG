/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168739
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168739 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168739
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
    var_15 = ((/* implicit */short) ((unsigned long long int) min((((/* implicit */unsigned int) var_7)), (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))) - (4064878469U))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned short i_2 = 3; i_2 < 10; i_2 += 3) 
                {
                    arr_8 [i_0] [i_0] [i_1] [i_2 - 1] = ((/* implicit */signed char) (unsigned short)35164);
                    /* LoopSeq 4 */
                    for (unsigned short i_3 = 2; i_3 < 9; i_3 += 3) 
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                        {
                            var_16 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) > (arr_5 [i_1] [i_3 + 1] [i_4 - 1] [i_4 - 1])));
                            arr_14 [i_0] = ((/* implicit */unsigned int) (short)10681);
                            arr_15 [i_0] [5] [i_2 - 2] [i_3 - 2] [5] = ((/* implicit */unsigned long long int) (_Bool)1);
                        }
                        for (long long int i_5 = 3; i_5 < 10; i_5 += 3) 
                        {
                            var_17 = ((/* implicit */short) (!(min(((_Bool)1), ((!(((/* implicit */_Bool) 7417409753273971307ULL))))))));
                            var_18 = ((/* implicit */unsigned long long int) ((int) max((arr_3 [i_5 - 2] [i_3 - 2] [i_1]), (arr_3 [i_5 - 2] [i_3 - 1] [i_2]))));
                            arr_18 [i_0] [i_1] [i_0] [i_2] [i_3] [i_5] = ((/* implicit */_Bool) ((((956977258064819981ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)47403))))) % (((/* implicit */unsigned long long int) arr_6 [i_0] [i_1] [i_2 - 1]))));
                        }
                        /* LoopSeq 3 */
                        for (unsigned long long int i_6 = 0; i_6 < 11; i_6 += 3) 
                        {
                            var_19 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_20 [i_0] [i_2 - 2] [i_2 - 2])) ? (((/* implicit */int) arr_9 [i_0] [i_2] [i_2] [i_6])) : (((/* implicit */int) ((unsigned short) (_Bool)0)))))) % (arr_5 [i_0] [i_1] [i_3 - 1] [i_2 - 3])));
                            arr_22 [i_0] [i_1] [i_2] [i_3 + 2] [i_6] = ((/* implicit */int) ((((((((/* implicit */_Bool) arr_10 [i_0])) || (var_6))) ? (max((var_4), (((/* implicit */unsigned long long int) arr_3 [i_0] [i_0] [(signed char)10])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))) < (((/* implicit */unsigned long long int) ((((/* implicit */int) var_11)) / (((/* implicit */int) arr_13 [i_3 + 2] [i_3] [i_3] [i_3 + 1])))))));
                            arr_23 [i_6] [i_3 + 1] = ((/* implicit */signed char) -1404215993183284549LL);
                        }
                        for (long long int i_7 = 0; i_7 < 11; i_7 += 3) 
                        {
                            arr_26 [i_3] [i_2] = ((/* implicit */signed char) -9223372036854775798LL);
                            var_20 = ((/* implicit */unsigned short) ((short) -8617151688174675568LL));
                        }
                        for (unsigned char i_8 = 2; i_8 < 10; i_8 += 3) 
                        {
                            var_21 = ((/* implicit */unsigned char) ((956977258064820002ULL) >= (18277578722555936767ULL)));
                            arr_29 [i_0] [i_0] [i_2 + 1] [i_3 - 2] [i_8] = ((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) ((unsigned short) arr_28 [i_0] [i_0] [i_2] [i_0] [i_8]))))));
                        }
                        var_22 = max((((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-7))) < (((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) + (23U))))), (((((/* implicit */int) ((((/* implicit */_Bool) 17524683733159378598ULL)) || ((_Bool)1)))) < (((((/* implicit */_Bool) -209325626498255004LL)) ? (((/* implicit */int) (unsigned short)53904)) : (((/* implicit */int) var_0)))))));
                        var_23 = ((/* implicit */unsigned short) ((((arr_2 [i_3 - 1] [i_2 - 2] [i_1]) == (arr_2 [i_0] [i_1] [i_2 - 2]))) ? (((/* implicit */long long int) ((((/* implicit */int) arr_16 [i_3] [i_3] [i_3 - 2] [i_2 + 1] [i_2 + 1])) + (((/* implicit */int) (unsigned short)53887))))) : (min((((/* implicit */long long int) arr_12 [i_0] [(_Bool)1] [i_0] [i_0] [(_Bool)1] [i_0])), (-1404215993183284534LL)))));
                        var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) ((_Bool) ((long long int) ((unsigned int) 6864769785287591932ULL)))))));
                    }
                    for (unsigned long long int i_9 = 0; i_9 < 11; i_9 += 3) 
                    {
                        var_25 = ((((/* implicit */_Bool) arr_19 [i_0] [i_0] [i_1] [i_1] [i_2] [i_9] [i_9])) ? ((~(((/* implicit */int) arr_31 [i_2 + 1] [i_2 + 1] [i_2 - 3] [i_2 + 1] [5])))) : (((/* implicit */int) ((((((/* implicit */int) (signed char)110)) + (((/* implicit */int) (_Bool)1)))) == (((/* implicit */int) (unsigned short)36062))))));
                        var_26 = ((/* implicit */signed char) ((short) max((((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_9] [i_2] [i_2 + 1] [i_0] [i_0] [i_0]))) : (arr_6 [i_0] [2] [i_0]))), (((/* implicit */long long int) min((((/* implicit */unsigned short) var_9)), (var_14)))))));
                    }
                    for (unsigned short i_10 = 0; i_10 < 11; i_10 += 3) 
                    {
                        arr_35 [i_0] [i_1] [i_2 - 2] [10U] = ((/* implicit */unsigned int) (((_Bool)0) ? (((/* implicit */long long int) (-(((/* implicit */int) var_9))))) : (9109571262224106322LL)));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (short i_11 = 1; i_11 < 9; i_11 += 3) 
                        {
                            arr_38 [i_0] [i_1] [i_11] = ((/* implicit */unsigned int) ((signed char) var_9));
                            arr_39 [i_11] [i_2 - 3] [i_1] [i_11] = ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_1] [i_1] [i_11])))))) : (((((/* implicit */_Bool) 169165351153614849ULL)) ? (arr_36 [i_0] [i_1] [i_2 - 3] [i_11] [i_11 + 2]) : (((/* implicit */long long int) ((/* implicit */int) var_9))))));
                            var_27 = ((/* implicit */short) ((((/* implicit */_Bool) arr_10 [i_0])) ? (((/* implicit */int) (!(arr_1 [i_0])))) : (((/* implicit */int) arr_13 [i_11 + 1] [i_11 + 2] [i_11 + 1] [i_2 - 2]))));
                        }
                        /* vectorizable */
                        for (unsigned short i_12 = 0; i_12 < 11; i_12 += 3) 
                        {
                            var_28 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_33 [i_12] [i_0] [i_2 + 1] [i_1] [i_0]))) % (((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) / (16850869601542983250ULL)))));
                            var_29 ^= ((/* implicit */signed char) var_11);
                            var_30 = ((/* implicit */unsigned char) (-(13106078619027753832ULL)));
                        }
                        var_31 = ((/* implicit */unsigned char) max((var_31), (((/* implicit */unsigned char) ((signed char) (signed char)33)))));
                    }
                    for (unsigned int i_13 = 0; i_13 < 11; i_13 += 3) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned short i_14 = 0; i_14 < 11; i_14 += 3) 
                        {
                            var_32 ^= ((/* implicit */unsigned int) (signed char)32);
                            arr_48 [i_0] [i_13] [(signed char)2] = ((/* implicit */unsigned int) ((((/* implicit */int) var_7)) % ((~(((/* implicit */int) (short)-2323))))));
                            arr_49 [i_0] [i_0] [i_13] [i_13] [i_14] = ((/* implicit */short) var_6);
                        }
                        for (signed char i_15 = 1; i_15 < 10; i_15 += 3) 
                        {
                            var_33 = max((((((((/* implicit */_Bool) (unsigned short)1)) && ((_Bool)1))) ? ((-(((/* implicit */int) var_0)))) : (((((/* implicit */_Bool) 2694273888U)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_0)))))), (((/* implicit */int) var_8)));
                            arr_52 [i_0] [i_13] [i_2] [i_13] [i_15] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) (-(4078993238U)))) ? (((/* implicit */unsigned long long int) max((((/* implicit */int) arr_24 [i_0] [i_0] [i_1] [i_2] [i_13] [i_0])), (801553831)))) : (((unsigned long long int) (unsigned short)47048)))), (((/* implicit */unsigned long long int) var_12))));
                        }
                        arr_53 [i_0] [i_0] [i_13] [i_0] = ((/* implicit */_Bool) max((arr_30 [i_13] [i_1] [i_1] [i_13] [i_13]), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)45180)) * (((/* implicit */int) (!(var_5)))))))));
                        var_34 &= ((/* implicit */unsigned short) arr_51 [i_0]);
                    }
                }
                arr_54 [i_0] &= ((/* implicit */_Bool) max(((~(min((731230496198809483ULL), (((/* implicit */unsigned long long int) arr_27 [i_0] [i_1])))))), (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0] [i_0] [i_1] [i_0]))) & (1006532224829786375ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-60))) : (((var_13) | (((/* implicit */unsigned long long int) 524287LL))))))));
                arr_55 [i_1] [i_0] = ((/* implicit */signed char) max((3385673689U), (((/* implicit */unsigned int) ((unsigned char) ((arr_4 [i_0] [i_1]) ? (arr_2 [i_0] [i_1] [i_1]) : (10677566547610249118ULL)))))));
                var_35 -= ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((short) arr_28 [(unsigned short)10] [i_0] [i_0] [(unsigned short)10] [i_1]))), (((((arr_2 [i_0] [i_1] [i_0]) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_28 [i_0] [i_0] [i_0] [i_0] [i_0]))))) / (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (signed char)125))))))));
                var_36 = ((/* implicit */unsigned long long int) ((unsigned short) (+(((/* implicit */int) (unsigned short)3135)))));
            }
        } 
    } 
    var_37 *= ((/* implicit */unsigned short) (~(((/* implicit */int) (_Bool)0))));
}
