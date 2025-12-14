/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145989
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145989 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145989
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
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        /* LoopSeq 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            /* LoopNest 3 */
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    for (long long int i_4 = 0; i_4 < 10; i_4 += 4) 
                    {
                        {
                            var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) (signed char)-87)) ? (((/* implicit */int) arr_2 [i_4])) : (arr_3 [i_0])))))) ? (((/* implicit */int) min(((unsigned short)32768), ((unsigned short)32767)))) : (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)32744)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (short)32767))))) && (var_14))))));
                            arr_11 [i_0] [i_2] [i_2] [i_3] [i_4] = ((/* implicit */short) ((((/* implicit */int) (unsigned short)32767)) % (((/* implicit */int) (unsigned char)195))));
                        }
                    } 
                } 
            } 
            /* LoopSeq 3 */
            for (unsigned int i_5 = 0; i_5 < 10; i_5 += 3) 
            {
                arr_14 [i_0] [i_1] [i_5] = ((/* implicit */long long int) (+(((((/* implicit */_Bool) 67043328)) ? (((/* implicit */int) (short)32767)) : (657999267)))));
                var_18 &= ((long long int) (unsigned short)16677);
                /* LoopSeq 1 */
                /* vectorizable */
                for (long long int i_6 = 0; i_6 < 10; i_6 += 3) 
                {
                    arr_17 [i_5] [i_1] [i_5] [i_5] = ((/* implicit */unsigned char) ((arr_0 [i_6]) ? (((((/* implicit */_Bool) arr_1 [i_0] [i_6])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_16))) : (arr_4 [i_5] [0LL]))) : (((/* implicit */unsigned int) ((/* implicit */int) var_13)))));
                    var_19 ^= ((/* implicit */unsigned char) ((((/* implicit */int) arr_15 [i_0] [i_0] [i_1] [i_0] [i_1] [i_1])) == (((/* implicit */int) arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))));
                }
            }
            for (unsigned short i_7 = 0; i_7 < 10; i_7 += 2) 
            {
                var_20 = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) (+(((/* implicit */int) var_2))))))) ? (((((8736730020436136565LL) > (((/* implicit */long long int) ((/* implicit */int) (unsigned short)16647))))) ? (((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */int) (unsigned short)39911)) : (((/* implicit */int) (unsigned short)48882)))) : (((/* implicit */int) var_11)))) : (((/* implicit */int) arr_13 [i_0] [i_0]))));
                var_21 ^= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (-((-(((/* implicit */int) (unsigned short)0)))))))));
                /* LoopSeq 2 */
                for (unsigned short i_8 = 1; i_8 < 9; i_8 += 1) 
                {
                    var_22 |= ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 2147483647)) * (var_3))))));
                    /* LoopSeq 4 */
                    for (unsigned char i_9 = 0; i_9 < 10; i_9 += 4) 
                    {
                        var_23 = ((((/* implicit */_Bool) (~(602962430U)))) ? (((/* implicit */int) (signed char)118)) : (((/* implicit */int) (unsigned short)32744)));
                        var_24 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) var_3))) ? (((((/* implicit */_Bool) (short)-4900)) ? (-9223372036854775804LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)3072))))) : (((/* implicit */long long int) ((var_6) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_8)))))))) ? ((-(((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned short)32767)) : (-1521871732))))) : (((/* implicit */int) ((((((/* implicit */_Bool) arr_19 [i_1] [i_1])) ? (864691128455135232LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)7))))) != (((/* implicit */long long int) ((((/* implicit */int) var_14)) + (((/* implicit */int) (signed char)-1))))))))));
                        var_25 = min((((/* implicit */int) min((arr_7 [i_0] [i_1] [i_8]), (arr_7 [0U] [i_8 - 1] [i_8])))), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_7 [i_1] [i_8 - 1] [i_8])) : (((/* implicit */int) (signed char)-1)))));
                    }
                    for (short i_10 = 0; i_10 < 10; i_10 += 3) 
                    {
                        var_26 = ((/* implicit */int) min((var_26), (((max((((/* implicit */int) arr_16 [i_8] [i_8 + 1] [i_8 + 1] [i_8 + 1] [i_0] [i_10])), (((((/* implicit */_Bool) (unsigned short)48858)) ? (((/* implicit */int) arr_1 [i_0] [i_1])) : (((/* implicit */int) arr_15 [i_0] [i_0] [i_1] [i_7] [i_8] [i_10])))))) >> (((13238004272746592004ULL) - (13238004272746591989ULL)))))));
                        var_27 = ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_7 [i_1] [i_8] [i_8]))))) ? (((((/* implicit */_Bool) 7405057887751284544LL)) ? (arr_4 [i_8 + 1] [i_8 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_8 + 1] [i_8 + 1]))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))));
                        var_28 -= ((/* implicit */short) var_6);
                    }
                    for (unsigned int i_11 = 0; i_11 < 10; i_11 += 3) 
                    {
                        arr_32 [i_8] [i_8] [i_8] [i_1] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */int) max((((/* implicit */unsigned char) var_14)), ((unsigned char)135)))) & (((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) var_16)) : (-657999237)))))) ? ((-(((/* implicit */int) (short)32767)))) : (((/* implicit */int) var_6)));
                        var_29 = ((/* implicit */_Bool) min((var_29), (((/* implicit */_Bool) (+(((((/* implicit */_Bool) max((31166120), (657999237)))) ? (((((/* implicit */_Bool) (signed char)-114)) ? (((/* implicit */int) (unsigned short)32792)) : (((/* implicit */int) (short)10130)))) : (((((/* implicit */_Bool) arr_16 [i_0] [i_1] [i_7] [i_8 + 1] [i_7] [i_7])) ? (((/* implicit */int) (unsigned short)32821)) : (arr_28 [i_0] [i_0] [(unsigned short)0]))))))))));
                        var_30 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) (unsigned short)32791)) : (((/* implicit */int) (short)(-32767 - 1)))))) ? (-4615989782468366064LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) (short)32756)) ? (((/* implicit */int) (signed char)-118)) : (-804843399))))));
                    }
                    for (long long int i_12 = 0; i_12 < 10; i_12 += 1) 
                    {
                        arr_35 [(short)3] [i_1] [(signed char)5] [i_8] [i_8] [i_12] = ((/* implicit */unsigned char) (-(((((/* implicit */int) var_2)) << (((var_15) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_6))))))));
                        var_31 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) (unsigned char)34)) : (178513062)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_8 - 1]))) : (((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) + (166788905U)))))) && (((/* implicit */_Bool) var_7))));
                        var_32 = max((((/* implicit */unsigned int) -80796456)), ((((!(((/* implicit */_Bool) -178513063)))) ? (1287273719U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_0] [i_8 - 1] [i_7] [i_8] [i_12]))))));
                        var_33 = ((/* implicit */short) ((((/* implicit */_Bool) arr_30 [i_0] [i_0] [i_0] [i_8 + 1] [i_0] [i_0] [i_8])) ? (min(((+(var_3))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */int) arr_7 [(unsigned short)9] [(unsigned short)9] [i_8])) : (((/* implicit */int) (unsigned short)65523))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)16883)) ? (arr_31 [i_1] [(_Bool)1] [i_8] [i_8 + 1] [i_8]) : (((/* implicit */unsigned int) ((/* implicit */int) var_11))))))));
                    }
                }
                for (unsigned int i_13 = 0; i_13 < 10; i_13 += 3) 
                {
                    var_34 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_10))))));
                    arr_38 [2] [(short)2] [i_0] &= ((/* implicit */unsigned char) var_6);
                }
            }
            for (unsigned short i_14 = 0; i_14 < 10; i_14 += 2) 
            {
                var_35 = ((/* implicit */signed char) min((var_35), (((/* implicit */signed char) (+(((/* implicit */int) var_13)))))));
                /* LoopNest 2 */
                for (short i_15 = 0; i_15 < 10; i_15 += 2) 
                {
                    for (unsigned char i_16 = 0; i_16 < 10; i_16 += 3) 
                    {
                        {
                            var_36 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((var_14) || (((/* implicit */_Bool) 657999237)))) ? (((/* implicit */long long int) ((var_2) ? (arr_27 [(_Bool)1] [i_1] [i_14] [(short)2] [i_16]) : (((/* implicit */int) var_1))))) : (((arr_20 [i_1] [i_1] [i_1] [i_1]) + (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))) ? (((((((/* implicit */_Bool) arr_40 [i_0] [i_1] [i_1])) ? (((/* implicit */int) (unsigned short)32768)) : (((/* implicit */int) arr_37 [i_1] [i_14] [i_15] [i_16])))) ^ (((((/* implicit */int) (_Bool)0)) >> (((((/* implicit */int) (signed char)(-127 - 1))) + (145))))))) : (((/* implicit */int) (unsigned short)54194))));
                            arr_45 [i_16] [i_1] [i_14] [i_1] [i_1] = ((/* implicit */int) min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) (unsigned short)23594)) : (((/* implicit */int) (unsigned short)54194)))))))), (arr_12 [i_0] [i_16] [i_16])));
                            var_37 = ((/* implicit */signed char) max((var_37), (((/* implicit */signed char) (!(((/* implicit */_Bool) ((unsigned char) 1496814547))))))));
                            arr_46 [(_Bool)1] [i_15] [i_14] [i_14] [i_14] &= ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_8)), (var_3)))) ? (min((arr_31 [i_16] [i_16] [i_14] [i_0] [i_0]), (((/* implicit */unsigned int) -1810255588)))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_10)) == (((/* implicit */int) (signed char)126)))))));
                            var_38 *= ((/* implicit */int) (_Bool)1);
                        }
                    } 
                } 
            }
            var_39 = ((/* implicit */long long int) ((signed char) max((1701855939), (((/* implicit */int) arr_40 [i_0] [i_1] [i_1])))));
        }
        for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
        {
            arr_49 [i_0] [i_0] [i_17] = ((/* implicit */unsigned short) (-(((/* implicit */int) ((var_14) || (((/* implicit */_Bool) arr_44 [i_0] [i_0])))))));
            arr_50 [i_0] [i_0] = ((/* implicit */unsigned short) (~(((/* implicit */int) ((((/* implicit */int) arr_15 [i_0] [i_0] [i_0] [i_17] [i_17] [(_Bool)1])) > (((/* implicit */int) max(((short)-26951), (((/* implicit */short) (signed char)(-127 - 1)))))))))));
            arr_51 [(_Bool)1] [(_Bool)1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_26 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) ? (max((-261980319521193889LL), (((/* implicit */long long int) (signed char)0)))) : (((((/* implicit */_Bool) 7203023474449609774LL)) ? (arr_43 [i_0] [(unsigned char)4] [(unsigned char)4] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_4))));
        }
        for (unsigned long long int i_18 = 0; i_18 < 10; i_18 += 4) 
        {
            var_40 = min((((/* implicit */long long int) ((((/* implicit */_Bool) ((signed char) (short)-31711))) && (((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_18] [i_0] [i_18]))))), (((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */long long int) ((/* implicit */int) (short)31721))) : (-8126475588786342168LL))));
            var_41 = ((/* implicit */_Bool) var_4);
        }
        arr_56 [i_0] = ((/* implicit */_Bool) (unsigned short)63488);
    }
    var_42 -= ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */int) var_13)), (((((/* implicit */int) var_1)) + (((/* implicit */int) var_1))))))) ? (((/* implicit */int) ((((/* implicit */_Bool) min(((short)3584), (((/* implicit */short) var_15))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)109)) ? (((/* implicit */int) (unsigned short)84)) : (((/* implicit */int) (unsigned short)63488)))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (short)25204)) : (((/* implicit */int) (unsigned short)63493))))) ? (((/* implicit */int) ((((/* implicit */int) var_7)) > (-1015663829)))) : (((/* implicit */int) var_1))))));
}
