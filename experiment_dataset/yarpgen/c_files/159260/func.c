/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159260
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159260 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159260
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
    for (short i_0 = 2; i_0 < 19; i_0 += 3) 
    {
        /* LoopSeq 4 */
        for (signed char i_1 = 2; i_1 < 18; i_1 += 1) 
        {
            arr_6 [i_0] [i_1 + 1] [i_1] = ((/* implicit */short) min((min((((/* implicit */long long int) arr_4 [i_0 - 1])), (var_2))), (((/* implicit */long long int) (+(((/* implicit */int) (signed char)-65)))))));
            /* LoopSeq 1 */
            for (signed char i_2 = 0; i_2 < 20; i_2 += 4) 
            {
                var_13 = ((/* implicit */int) ((((/* implicit */_Bool) arr_7 [9] [i_0] [i_0] [i_1])) ? (((/* implicit */long long int) ((min((((/* implicit */int) (signed char)0)), (885729360))) << (((((/* implicit */int) max(((short)-16654), (((/* implicit */short) (signed char)-65))))) + (77)))))) : (min((((/* implicit */long long int) arr_4 [i_1 - 2])), ((~(var_12)))))));
                /* LoopSeq 1 */
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    var_14 = ((/* implicit */long long int) (+((+(((/* implicit */int) ((((/* implicit */int) (signed char)(-127 - 1))) >= (((/* implicit */int) (unsigned short)65529)))))))));
                    var_15 = ((/* implicit */unsigned long long int) min((var_15), (((unsigned long long int) (_Bool)0))));
                }
            }
        }
        for (short i_4 = 0; i_4 < 20; i_4 += 4) 
        {
            var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) max((((/* implicit */long long int) (signed char)-65)), ((~(((long long int) (signed char)-65)))))))));
            var_17 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */int) (unsigned short)0)) <= (((/* implicit */int) (signed char)-85)))) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) min((arr_8 [i_0] [i_0] [i_0]), (((/* implicit */short) (signed char)64))))))))) ? (((arr_1 [i_0 + 1]) ? (((/* implicit */int) arr_9 [i_0 - 2] [i_0] [i_0 - 1])) : (((/* implicit */int) ((short) (signed char)65))))) : (((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */short) (_Bool)0)), (var_10)))))))));
        }
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
        {
            var_18 = ((/* implicit */_Bool) (+(((/* implicit */int) arr_9 [i_0 + 1] [i_0 + 1] [i_0 + 1]))));
            var_19 = ((/* implicit */long long int) arr_16 [i_0 - 2]);
        }
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
        {
            var_20 ^= ((/* implicit */short) (~(((/* implicit */int) var_10))));
            var_21 = ((((/* implicit */_Bool) max((((/* implicit */short) var_7)), (arr_16 [i_0 + 1])))) ? (((/* implicit */int) arr_16 [i_0 + 1])) : ((~(((/* implicit */int) arr_16 [i_0 - 2])))));
            /* LoopSeq 1 */
            for (short i_7 = 0; i_7 < 20; i_7 += 4) 
            {
                var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((arr_19 [i_6] [i_6] [i_6]), (arr_19 [i_0] [i_6] [i_7])))) ? (((long long int) arr_19 [17] [i_6] [i_0 + 1])) : (min((arr_19 [i_7] [i_6] [i_7]), (arr_19 [i_0 - 2] [i_0] [i_0 - 2])))));
                arr_22 [i_0] [i_0] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)0)) | ((((+(((/* implicit */int) (signed char)85)))) + (((/* implicit */int) (unsigned short)65512))))));
            }
            var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+((~(((/* implicit */int) var_6))))))) ? ((+((+(var_5))))) : (((/* implicit */int) ((var_1) != (((/* implicit */long long int) ((((/* implicit */int) (signed char)-85)) % (var_5)))))))));
        }
        /* LoopSeq 2 */
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) /* same iter space */
        {
            /* LoopSeq 4 */
            for (long long int i_9 = 1; i_9 < 18; i_9 += 4) 
            {
                arr_29 [i_8] [i_8] [i_9 - 1] = ((/* implicit */long long int) 29);
                var_24 += ((/* implicit */short) ((((long long int) arr_5 [i_8] [i_8])) & (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-65)) ? (29) : (((/* implicit */int) (signed char)-65))))) ? (min((arr_18 [i_9] [i_9] [i_9]), (((/* implicit */long long int) (signed char)-121)))) : (min((35184372088831LL), (((/* implicit */long long int) var_9))))))));
                arr_30 [i_0] [i_8] [i_8] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(35184372088835LL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_25 [i_9 + 1] [i_9 + 1] [i_9])) && (((/* implicit */_Bool) arr_25 [i_9 + 2] [i_9 + 2] [i_9])))))) : (((((/* implicit */_Bool) arr_27 [i_9] [i_9 + 1] [i_9 + 1])) ? (arr_27 [i_9 + 2] [i_9] [i_9]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
                arr_31 [i_0] [i_8] = ((/* implicit */unsigned short) ((((/* implicit */int) var_6)) >= ((+(((/* implicit */int) max(((short)32766), (((/* implicit */short) arr_0 [i_8] [i_8])))))))));
            }
            for (long long int i_10 = 0; i_10 < 20; i_10 += 3) /* same iter space */
            {
                var_25 = ((/* implicit */short) ((((/* implicit */long long int) ((((/* implicit */int) (signed char)-65)) + (((/* implicit */int) var_6))))) - (arr_12 [i_0 - 2] [i_0 - 2] [i_10])));
                arr_35 [i_0] [i_8] [i_8] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3844374601U)) ? (35184372088838LL) : (31LL)))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */int) (unsigned short)43126)) <= (((/* implicit */int) (short)(-32767 - 1))))))))) : (((((/* implicit */_Bool) (signed char)85)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_0] [i_0 - 1] [i_0]))) : (var_11)))));
            }
            for (long long int i_11 = 0; i_11 < 20; i_11 += 3) /* same iter space */
            {
                var_26 = ((/* implicit */int) 9223372036854775807LL);
                var_27 = ((/* implicit */unsigned short) max((var_27), (((/* implicit */unsigned short) (+((~(((/* implicit */int) arr_25 [i_0 + 1] [i_0 - 1] [i_0 + 1])))))))));
            }
            for (int i_12 = 0; i_12 < 20; i_12 += 4) 
            {
                arr_41 [i_8] [i_8] = max(((~(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) ((signed char) arr_7 [i_0 - 2] [i_0 - 2] [i_0 + 1] [i_0 - 2]))));
                var_28 += ((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) ((((/* implicit */int) (signed char)17)) < (((/* implicit */int) var_3))))) : (((/* implicit */int) (signed char)-85)))) != (var_8));
                arr_42 [i_8] [i_12] &= ((/* implicit */signed char) (((+(((/* implicit */int) min((arr_15 [i_0]), (((/* implicit */short) (signed char)84))))))) << (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)82)))))));
                /* LoopNest 2 */
                for (long long int i_13 = 0; i_13 < 20; i_13 += 2) 
                {
                    for (signed char i_14 = 0; i_14 < 20; i_14 += 4) 
                    {
                        {
                            var_29 *= (+(arr_33 [i_14] [i_8] [i_8]));
                            var_30 &= ((/* implicit */signed char) ((((/* implicit */_Bool) var_9)) ? (((unsigned long long int) 2983723094U)) : (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-18))) / (max((((/* implicit */long long int) var_7)), (arr_47 [i_14]))))))));
                        }
                    } 
                } 
            }
            /* LoopSeq 1 */
            for (unsigned char i_15 = 0; i_15 < 20; i_15 += 4) 
            {
                var_31 = (((+(((/* implicit */int) (signed char)-123)))) == (((/* implicit */int) (short)32767)));
                var_32 = ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((min((((/* implicit */short) (signed char)17)), ((short)27))), (((/* implicit */short) (unsigned char)241)))))) : ((+(arr_17 [i_0 - 1])))));
            }
            arr_50 [i_8] [i_8] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)85))));
            var_33 -= ((/* implicit */unsigned int) var_10);
            /* LoopNest 3 */
            for (signed char i_16 = 0; i_16 < 20; i_16 += 4) 
            {
                for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                {
                    for (unsigned short i_18 = 0; i_18 < 20; i_18 += 1) 
                    {
                        {
                            var_34 = ((/* implicit */int) arr_36 [5] [i_17]);
                            arr_61 [i_0] [i_8] [i_0 + 1] = ((/* implicit */_Bool) min((var_0), (((((/* implicit */_Bool) max((((/* implicit */int) arr_25 [i_0] [i_8] [19])), (var_8)))) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) min((((/* implicit */int) arr_39 [i_0] [i_0] [i_0] [i_0])), (var_5))))))));
                            var_35 &= ((/* implicit */unsigned int) max((((/* implicit */long long int) (~(((/* implicit */int) (signed char)24))))), (min((arr_47 [i_0 - 1]), (var_4)))));
                        }
                    } 
                } 
            } 
        }
        for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) /* same iter space */
        {
            var_36 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) min((859055070), (((/* implicit */int) min((var_3), (((/* implicit */unsigned short) var_7)))))))) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((((/* implicit */_Bool) ((var_1) * (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_60 [i_0]))))) : (((((/* implicit */int) var_6)) ^ (((/* implicit */int) (unsigned short)0))))))));
            var_37 = ((/* implicit */_Bool) arr_7 [i_0] [(_Bool)1] [i_19] [i_19]);
        }
        var_38 ^= ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */_Bool) var_0)) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)43))))) <= (((/* implicit */long long int) ((((((/* implicit */int) var_6)) + (2147483647))) << (((((((/* implicit */int) (short)(-32767 - 1))) + (32785))) - (17)))))))))) ^ (min((((/* implicit */long long int) ((((/* implicit */int) arr_1 [i_0 - 1])) > (((/* implicit */int) (short)32745))))), ((~(arr_18 [i_0] [i_0] [i_0])))))));
    }
    /* LoopSeq 4 */
    for (unsigned short i_20 = 2; i_20 < 21; i_20 += 2) /* same iter space */
    {
        var_39 &= ((/* implicit */unsigned long long int) (~(((9223372036854775807LL) & (((/* implicit */long long int) ((((/* implicit */_Bool) 35184372088816LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)81))) : (arr_64 [i_20]))))))));
        var_40 += ((/* implicit */int) var_0);
        arr_66 [i_20] = ((/* implicit */unsigned short) (-(min((((((/* implicit */_Bool) 4294967274U)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-26))) : ((-9223372036854775807LL - 1LL)))), (((/* implicit */long long int) (signed char)-75))))));
    }
    for (unsigned short i_21 = 2; i_21 < 21; i_21 += 2) /* same iter space */
    {
        arr_70 [i_21] [i_21] = ((/* implicit */int) max((max((max((((/* implicit */unsigned long long int) var_2)), (arr_69 [i_21]))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_67 [i_21])) != (((/* implicit */int) arr_67 [i_21]))))))), (((/* implicit */unsigned long long int) max((-35184372088833LL), (35184372088833LL))))));
        arr_71 [i_21] = ((/* implicit */unsigned char) (+(((/* implicit */int) var_6))));
    }
    for (unsigned short i_22 = 2; i_22 < 21; i_22 += 2) /* same iter space */
    {
        var_41 = ((/* implicit */_Bool) arr_65 [i_22 - 2] [i_22]);
        /* LoopNest 2 */
        for (long long int i_23 = 3; i_23 < 20; i_23 += 2) 
        {
            for (short i_24 = 1; i_24 < 21; i_24 += 4) 
            {
                {
                    arr_79 [i_22] [i_23] [(signed char)21] = ((/* implicit */int) min(((+(((((/* implicit */_Bool) (signed char)-123)) ? (18446744073709551615ULL) : (18446744073709551612ULL))))), (((/* implicit */unsigned long long int) ((arr_64 [i_24 + 1]) + (((/* implicit */unsigned int) ((/* implicit */int) var_10))))))));
                    var_42 = ((/* implicit */signed char) min((((((((((/* implicit */int) (signed char)-24)) ^ (((/* implicit */int) arr_75 [i_24] [i_23])))) + (2147483647))) >> (((var_4) - (154269155209910821LL))))), (var_8)));
                }
            } 
        } 
        var_43 = ((/* implicit */_Bool) var_7);
    }
    for (unsigned short i_25 = 2; i_25 < 21; i_25 += 2) /* same iter space */
    {
        /* LoopSeq 1 */
        for (_Bool i_26 = 0; i_26 < 1; i_26 += 1) 
        {
            arr_84 [i_25] |= ((/* implicit */_Bool) max(((-(((((/* implicit */_Bool) arr_68 [i_25] [i_25])) ? (arr_69 [i_25]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32758))))))), (((/* implicit */unsigned long long int) ((((((/* implicit */long long int) ((/* implicit */int) arr_65 [i_25 + 1] [i_25 + 1]))) + (var_4))) > (((/* implicit */long long int) ((/* implicit */int) ((arr_77 [i_25 - 1] [i_25 - 1] [i_25 - 1] [i_26]) && (arr_67 [i_25]))))))))));
            var_44 = ((/* implicit */_Bool) min((var_44), (arr_77 [i_25] [i_25] [i_25] [i_25 + 1])));
            var_45 = ((/* implicit */unsigned short) min((var_45), (((/* implicit */unsigned short) ((((/* implicit */_Bool) max((-1998253086), ((+(((/* implicit */int) (unsigned short)11372))))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_77 [i_25] [i_25] [i_25] [i_26]))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_76 [i_25])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_12)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (short)12117)) > (((/* implicit */int) (_Bool)1)))))) : (((18446744073709551614ULL) ^ (((/* implicit */unsigned long long int) -7637713337152848526LL)))))))))));
        }
        arr_85 [(short)6] [i_25] = ((/* implicit */int) ((((/* implicit */unsigned int) (+(((/* implicit */int) ((1688849860263936LL) > (var_2))))))) * (min((((((/* implicit */_Bool) var_3)) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) (short)27442))))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_65 [i_25] [i_25])) > (((/* implicit */int) var_7)))))))));
        var_46 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */long long int) max((arr_83 [i_25] [i_25] [i_25]), (((/* implicit */short) arr_82 [i_25]))))), (((((/* implicit */_Bool) var_5)) ? (-4308956077545562630LL) : (((/* implicit */long long int) ((/* implicit */int) arr_80 [i_25])))))))) ? (((((/* implicit */_Bool) ((4294967287U) | (((/* implicit */unsigned int) var_5))))) ? (((/* implicit */unsigned long long int) max((var_5), (((/* implicit */int) arr_77 [i_25] [i_25 - 1] [i_25] [i_25 - 2]))))) : (arr_69 [i_25]))) : (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) (short)1)))), (((arr_82 [i_25]) ? (((/* implicit */int) arr_82 [(short)16])) : (((/* implicit */int) (signed char)127)))))))));
        /* LoopNest 2 */
        for (unsigned short i_27 = 0; i_27 < 22; i_27 += 3) 
        {
            for (signed char i_28 = 4; i_28 < 20; i_28 += 4) 
            {
                {
                    var_47 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) var_7)) + (((/* implicit */int) (_Bool)0))))) ? (((/* implicit */unsigned long long int) var_4)) : (max((18446744073709551604ULL), (((/* implicit */unsigned long long int) 6137010677745691145LL))))));
                    var_48 = ((/* implicit */short) 7637713337152848517LL);
                    var_49 = ((/* implicit */signed char) max((var_49), (((/* implicit */signed char) ((((/* implicit */int) (_Bool)1)) > ((-2147483647 - 1)))))));
                }
            } 
        } 
    }
}
