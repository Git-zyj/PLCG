/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184297
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184297 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184297
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
    var_12 = ((/* implicit */signed char) var_6);
    var_13 -= ((/* implicit */long long int) var_3);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            {
                var_14 = ((/* implicit */signed char) (~(((/* implicit */int) (!(var_1))))));
                arr_5 [i_0] = ((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_2 [i_0] [i_0])) ^ (((/* implicit */int) (unsigned short)65535)))) > (((/* implicit */int) arr_1 [i_0]))));
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) min((((/* implicit */long long int) ((((/* implicit */int) max((((/* implicit */short) var_10)), (arr_4 [i_0])))) ^ (var_11)))), (max((((((/* implicit */long long int) ((/* implicit */int) var_1))) * (1470929441545285476LL))), (((/* implicit */long long int) arr_3 [i_0] [i_1] [i_0]))))));
                var_15 *= ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) 3725010316U)), (70300024700928ULL)));
                /* LoopSeq 1 */
                for (unsigned short i_2 = 0; i_2 < 22; i_2 += 2) 
                {
                    /* LoopSeq 2 */
                    for (unsigned int i_3 = 0; i_3 < 22; i_3 += 3) 
                    {
                        /* LoopSeq 4 */
                        for (long long int i_4 = 0; i_4 < 22; i_4 += 2) 
                        {
                            var_16 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) max(((unsigned short)1), (((/* implicit */unsigned short) ((((/* implicit */int) var_2)) <= (((/* implicit */int) (unsigned short)65521)))))))) ? (((/* implicit */long long int) (-(3725010344U)))) : (arr_0 [i_0])));
                            var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_4 [i_2])) : (((/* implicit */int) arr_2 [i_2] [i_2])))), (arr_7 [i_0] [i_0] [i_0] [i_0])))) ? (((((/* implicit */_Bool) (+(((/* implicit */int) var_3))))) ? (((((/* implicit */int) var_1)) >> (((/* implicit */int) var_8)))) : (((((/* implicit */_Bool) (unsigned short)1)) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) (_Bool)0)))))) : (((((/* implicit */_Bool) arr_8 [i_4] [i_2] [i_1] [i_0])) ? (((/* implicit */int) arr_3 [i_4] [i_2] [i_1])) : (((/* implicit */int) arr_3 [i_0] [i_1] [i_2]))))));
                            var_18 *= ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_0] [i_1] [i_0] [i_3] [i_4])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_3))))) ? (((var_8) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_7)))) : (((/* implicit */int) var_1)))), (var_11)));
                            var_19 *= ((/* implicit */unsigned short) ((min((((_Bool) var_8)), (((((/* implicit */_Bool) arr_0 [i_0])) || (var_8))))) ? (((((/* implicit */int) var_1)) >> (((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [i_0])))) : (((/* implicit */int) ((_Bool) (signed char)127)))));
                            var_20 *= ((/* implicit */unsigned char) ((min((max((var_6), (((/* implicit */unsigned int) var_5)))), (var_0))) << (((((arr_10 [i_4]) ? ((+(var_9))) : (arr_0 [i_0]))) - (5957025780791534468LL)))));
                        }
                        for (unsigned int i_5 = 0; i_5 < 22; i_5 += 3) 
                        {
                            var_21 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_3])) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) var_5))));
                            var_22 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((long long int) arr_0 [i_1]))) || (((/* implicit */_Bool) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)208))))));
                            var_23 = ((/* implicit */long long int) ((arr_15 [i_3] [i_3] [i_3] [i_3] [i_3]) >> (((/* implicit */int) ((arr_15 [i_5] [i_5] [i_5] [i_5] [i_5]) == (var_0))))));
                            var_24 = ((/* implicit */int) arr_13 [i_0] [i_1] [i_1] [i_1] [i_2] [i_2] [i_0]);
                            var_25 = ((/* implicit */unsigned int) (+(((((arr_1 [i_2]) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_3 [i_0] [i_0] [i_0])))) ^ (((/* implicit */int) var_1))))));
                        }
                        /* vectorizable */
                        for (short i_6 = 1; i_6 < 20; i_6 += 3) 
                        {
                            var_26 *= ((/* implicit */long long int) ((_Bool) var_2));
                            var_27 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_15 [i_3] [i_3] [i_3] [i_3] [i_6 - 1]))));
                            var_28 *= ((/* implicit */short) (-(arr_18 [i_6 - 1] [i_2] [i_2] [i_3] [i_6])));
                            arr_19 [i_2] [i_1] [i_2] [i_0] [i_3] = ((/* implicit */signed char) ((unsigned short) arr_11 [i_0] [i_0] [i_2] [i_2] [i_6 + 2]));
                        }
                        for (unsigned short i_7 = 0; i_7 < 22; i_7 += 2) 
                        {
                            var_29 = ((/* implicit */_Bool) (-((~(var_6)))));
                            var_30 *= ((/* implicit */signed char) arr_7 [i_0] [i_0] [i_2] [i_7]);
                        }
                        arr_22 [i_0] [i_0] [i_0] [i_3] = ((/* implicit */unsigned int) var_1);
                    }
                    for (signed char i_8 = 0; i_8 < 22; i_8 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned long long int i_9 = 2; i_9 < 21; i_9 += 4) 
                        {
                            var_31 ^= ((/* implicit */signed char) (~(((/* implicit */int) ((arr_23 [i_9 - 1] [i_1] [i_2] [i_9 - 1] [i_9 - 1] [i_8]) && (arr_23 [i_9 + 1] [i_9 + 1] [i_2] [i_1] [i_9 + 1] [i_9 - 2]))))));
                            var_32 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65535)) ? (569956967U) : (491556953U)));
                        }
                        for (unsigned short i_10 = 0; i_10 < 22; i_10 += 3) 
                        {
                            var_33 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) (short)4962)) ? (576460752303423488ULL) : (((/* implicit */unsigned long long int) 3318601052U)))), (((/* implicit */unsigned long long int) ((var_4) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_3)))))))) && (((/* implicit */_Bool) var_5))));
                            var_34 = ((/* implicit */unsigned long long int) ((signed char) (!(((/* implicit */_Bool) arr_24 [i_0] [i_0] [i_0] [i_8] [i_10])))));
                        }
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned short i_11 = 0; i_11 < 22; i_11 += 4) 
                        {
                            var_35 *= ((/* implicit */_Bool) arr_29 [i_0]);
                            var_36 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_9)) ? (arr_27 [i_11] [i_8] [i_2] [i_1] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_1)))));
                            var_37 = ((/* implicit */unsigned short) ((int) 1722216715U));
                        }
                        for (int i_12 = 3; i_12 < 20; i_12 += 2) 
                        {
                            var_38 = ((/* implicit */unsigned short) arr_28 [i_0] [i_2] [i_8]);
                            arr_34 [i_8] [i_8] = arr_12 [i_0] [i_0] [i_2] [i_2];
                        }
                        var_39 = ((/* implicit */short) var_9);
                        var_40 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_4)))) : (arr_21 [i_0] [i_0] [i_0] [i_8] [i_1] [i_1] [i_0])))));
                    }
                    /* LoopSeq 3 */
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                    {
                        var_41 = max((((/* implicit */long long int) ((((arr_28 [i_13] [i_1] [i_1]) % (((/* implicit */unsigned int) arr_7 [i_0] [i_0] [i_2] [i_2])))) & (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_10 [i_0])) : (((/* implicit */int) (_Bool)0)))))))), (((((/* implicit */_Bool) var_11)) ? (3245455258044529006LL) : (1048575LL))));
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (unsigned int i_14 = 0; i_14 < 22; i_14 += 4) 
                        {
                            var_42 = ((/* implicit */unsigned char) (+(arr_27 [i_2] [i_2] [i_2] [i_1] [i_0])));
                            var_43 = ((/* implicit */unsigned short) var_8);
                            var_44 -= ((/* implicit */long long int) var_6);
                        }
                        for (unsigned char i_15 = 0; i_15 < 22; i_15 += 2) 
                        {
                            arr_44 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((+(((/* implicit */int) arr_3 [i_0] [i_1] [i_1])))) << (((((/* implicit */int) arr_39 [i_1] [i_2] [i_13] [i_15])) - (37555)))))) ? (((long long int) arr_23 [i_15] [i_13] [i_2] [i_1] [i_0] [i_0])) : ((((_Bool)1) ? (1048575LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)38604)))))));
                            var_45 = ((/* implicit */unsigned short) min((((long long int) (unsigned short)0)), (((/* implicit */long long int) max((((((/* implicit */_Bool) arr_11 [i_0] [i_1] [i_2] [i_1] [i_1])) ? (((/* implicit */int) arr_37 [i_1] [i_13] [i_15])) : (((/* implicit */int) arr_39 [i_0] [i_0] [i_0] [i_0])))), (((/* implicit */int) (unsigned char)90)))))));
                        }
                        for (unsigned short i_16 = 0; i_16 < 22; i_16 += 3) 
                        {
                            arr_48 [i_16] [i_16] [i_16] [i_16] [i_16] = ((/* implicit */unsigned short) ((3493900760U) / (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535)))));
                            arr_49 [i_0] [i_1] [i_2] [i_16] [i_1] = ((/* implicit */unsigned short) max(((signed char)124), (((/* implicit */signed char) (_Bool)1))));
                        }
                    }
                    for (int i_17 = 4; i_17 < 21; i_17 += 4) 
                    {
                        arr_53 [i_0] = ((/* implicit */unsigned int) (-((-(((/* implicit */int) ((unsigned short) var_10)))))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned int i_18 = 0; i_18 < 22; i_18 += 3) 
                        {
                            var_46 -= ((/* implicit */_Bool) ((((((((/* implicit */_Bool) -7821713959901404531LL)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_52 [i_0] [i_2])))) + (2147483647))) >> (((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))));
                            var_47 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)1)) && (((/* implicit */_Bool) 8U))));
                            var_48 *= ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)38604)) >> (8U)));
                            var_49 = ((/* implicit */short) ((unsigned long long int) var_5));
                        }
                        for (unsigned short i_19 = 0; i_19 < 22; i_19 += 3) 
                        {
                            arr_60 [i_0] [i_0] [i_0] [i_1] [i_0] = ((/* implicit */long long int) (-(((((/* implicit */_Bool) min((var_6), (((/* implicit */unsigned int) -1089715819))))) ? (((/* implicit */int) var_1)) : ((~(((/* implicit */int) var_2))))))));
                            var_50 -= ((/* implicit */long long int) (+((+(((/* implicit */int) arr_32 [i_0] [i_2]))))));
                            var_51 = ((/* implicit */unsigned short) max((max((max((arr_16 [i_0] [i_17]), (((/* implicit */unsigned long long int) var_7)))), (((/* implicit */unsigned long long int) arr_17 [i_17 + 1] [i_2] [i_17 - 4] [i_2] [i_1] [i_1])))), (((/* implicit */unsigned long long int) arr_46 [i_17] [i_17] [i_17] [i_17] [i_17 + 1] [i_17 - 4]))));
                        }
                    }
                    for (long long int i_20 = 0; i_20 < 22; i_20 += 2) 
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (signed char i_21 = 4; i_21 < 21; i_21 += 4) 
                        {
                            arr_65 [i_0] [i_1] [i_0] [i_20] [i_20] [i_21 - 3] = ((/* implicit */_Bool) ((unsigned long long int) (unsigned short)22529));
                            var_52 *= arr_8 [i_2] [i_2] [i_0] [i_0];
                        }
                        for (unsigned short i_22 = 0; i_22 < 22; i_22 += 2) 
                        {
                            var_53 ^= ((/* implicit */_Bool) ((unsigned int) (short)(-32767 - 1)));
                            var_54 = ((/* implicit */_Bool) max(((short)-21164), (((/* implicit */short) (!(((arr_10 [i_20]) && (((/* implicit */_Bool) var_9)))))))));
                            var_55 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_37 [i_1] [i_20] [i_1])) : ((-(((/* implicit */int) var_3)))))), (((((/* implicit */_Bool) var_5)) ? (((((/* implicit */int) (signed char)96)) & (((/* implicit */int) (unsigned short)28032)))) : (((/* implicit */int) min((arr_45 [i_1] [i_2] [i_0]), (((/* implicit */unsigned short) arr_61 [i_0] [i_0] [i_0] [i_0] [i_0])))))))));
                        }
                        var_56 = ((/* implicit */signed char) max((max((((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */unsigned long long int) 3885737315U)) : (2305843009213693951ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2305280059260272640LL)) ? (((/* implicit */int) (unsigned short)34295)) : (((/* implicit */int) (short)-21157))))))), (((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */int) arr_2 [i_1] [i_0])) & (((/* implicit */int) var_5))))))));
                        var_57 = ((/* implicit */unsigned long long int) var_0);
                    }
                    var_58 *= ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)65535))))) >> (((((/* implicit */int) max((arr_8 [i_0] [i_1] [i_2] [i_0]), (((/* implicit */short) arr_9 [i_2] [i_1] [i_1] [i_0]))))) - (5026)))));
                    var_59 = ((/* implicit */long long int) max((((/* implicit */short) (signed char)-124)), ((short)-21164)));
                }
            }
        } 
    } 
}
