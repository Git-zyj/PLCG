/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107911
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107911 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107911
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
    /* LoopSeq 4 */
    for (short i_0 = 1; i_0 < 18; i_0 += 4) /* same iter space */
    {
        var_15 = ((/* implicit */unsigned int) max(((+(1510680319968755205LL))), (((/* implicit */long long int) min((arr_0 [i_0 + 4] [i_0 + 4]), (arr_0 [i_0 + 4] [i_0 + 1]))))));
        var_16 = ((/* implicit */unsigned short) min((15248858634088380228ULL), (((/* implicit */unsigned long long int) max((arr_0 [i_0 - 1] [i_0 + 1]), (((/* implicit */unsigned int) var_10)))))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((max((196608ULL), (((/* implicit */unsigned long long int) (short)-28548)))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_14)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (-(196605ULL)))))) : (max((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_14)), (arr_0 [i_0 + 1] [i_0 + 1])))), (max((((/* implicit */unsigned long long int) var_2)), (18446744073709355008ULL)))))));
        var_17 = ((/* implicit */short) (((-(((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) 1073741822U)) : (196608ULL))))) >= (((/* implicit */unsigned long long int) (-(min((((/* implicit */unsigned int) var_7)), (arr_0 [i_0 + 2] [i_0 + 4]))))))));
        /* LoopSeq 4 */
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            var_18 -= ((/* implicit */unsigned int) var_1);
            /* LoopSeq 1 */
            for (unsigned int i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                var_19 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) var_11)) : (var_12))), (((/* implicit */unsigned int) ((unsigned char) 8126464U)))))), (min(((~(arr_4 [i_0] [i_0] [i_0]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_0] [i_0] [i_2]))) : (var_13))))))));
                arr_10 [i_0] [i_0 + 1] [i_1] [i_2] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0 + 3] [i_0 + 3])) || (((/* implicit */_Bool) arr_1 [i_0 + 4]))))), (min((min((6138680050913147628ULL), (12308064022796403986ULL))), (((/* implicit */unsigned long long int) (!(arr_6 [i_0 + 2] [i_1] [i_2]))))))));
            }
            var_20 ^= ((/* implicit */long long int) min((((/* implicit */unsigned int) min((((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned char)109))))), (var_14)))), (max((min((((/* implicit */unsigned int) (short)20522)), (var_12))), (var_12)))));
            var_21 -= ((/* implicit */short) ((unsigned char) min((((/* implicit */unsigned short) ((_Bool) var_8))), (arr_9 [2ULL] [i_0 + 1] [i_0 + 4]))));
        }
        for (unsigned char i_3 = 0; i_3 < 22; i_3 += 4) 
        {
            var_22 ^= ((/* implicit */unsigned int) ((((((/* implicit */int) (signed char)(-127 - 1))) + (2147483647))) << (((((/* implicit */int) (unsigned char)126)) - (126)))));
            var_23 -= ((/* implicit */unsigned long long int) ((signed char) var_2));
        }
        for (unsigned int i_4 = 0; i_4 < 22; i_4 += 4) 
        {
            var_24 |= ((/* implicit */unsigned int) min(((+(((/* implicit */int) (signed char)73)))), (min((max((var_5), (((/* implicit */int) var_7)))), (((/* implicit */int) (!(((/* implicit */_Bool) 12308064022796403969ULL)))))))));
            arr_17 [i_0] [i_0] = max((((((/* implicit */_Bool) max((0ULL), (((/* implicit */unsigned long long int) arr_13 [i_0] [i_0] [i_0]))))) ? (max((arr_5 [i_0] [i_0]), (((/* implicit */long long int) arr_12 [i_0])))) : (((((/* implicit */long long int) arr_0 [i_0 + 2] [i_4])) | (-661954256497708555LL))))), (max((arr_5 [i_0] [i_0]), (((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_12 [i_0 + 2])) : (((/* implicit */int) (unsigned char)60))))))));
        }
        for (unsigned int i_5 = 0; i_5 < 22; i_5 += 4) 
        {
            arr_20 [i_0] [i_0] = ((/* implicit */int) arr_13 [i_0] [i_0] [i_0]);
            var_25 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_0] [i_5] [i_0])) ? (((/* implicit */int) (unsigned char)39)) : (((/* implicit */int) var_8))))) ? (((((/* implicit */_Bool) 12308064022796403969ULL)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_9 [i_0] [i_5] [i_5])))) : (((/* implicit */int) (signed char)118))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_8), (((/* implicit */unsigned char) ((signed char) (unsigned char)116))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))) ? (max((((/* implicit */unsigned long long int) arr_7 [i_0] [i_0])), (arr_2 [i_0]))) : (((/* implicit */unsigned long long int) min((var_13), (var_12)))))));
            var_26 = ((/* implicit */int) min((var_26), (((/* implicit */int) max((((/* implicit */unsigned int) arr_8 [i_5] [i_5] [i_5] [i_5])), ((-(min((134086656U), (2936339379U))))))))));
            arr_21 [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max(((short)-14642), (((/* implicit */short) arr_11 [i_0 + 4] [i_0 + 4] [i_0 + 2]))))) ? (((((/* implicit */_Bool) (unsigned char)195)) ? (((/* implicit */int) arr_15 [i_0])) : (((/* implicit */int) arr_9 [i_0] [i_5] [i_5])))) : (((/* implicit */int) max((((/* implicit */unsigned short) var_10)), (arr_9 [i_0] [i_0] [i_0]))))))) ? (((((/* implicit */_Bool) ((var_10) ? (2124308723U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_5] [i_5] [i_0 - 1])))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_10))))) : (((((/* implicit */unsigned long long int) arr_0 [i_0] [i_5])) + (arr_4 [i_5] [i_5] [i_0]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned char)208), (((/* implicit */unsigned char) (signed char)(-127 - 1)))))))));
            var_27 = ((/* implicit */long long int) min((((/* implicit */unsigned int) (unsigned char)106)), (2015710365U)));
        }
    }
    for (short i_6 = 1; i_6 < 18; i_6 += 4) /* same iter space */
    {
        var_28 = ((/* implicit */signed char) ((1007929975187207997ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)147)))));
        var_29 = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */_Bool) 12308064022796403969ULL)) || (((/* implicit */_Bool) ((unsigned int) (unsigned char)126)))))) - (((/* implicit */int) var_14))));
    }
    for (unsigned int i_7 = 0; i_7 < 14; i_7 += 4) 
    {
        var_30 = ((((/* implicit */_Bool) var_11)) ? ((~(((1642732813056453856ULL) % (17088341667833155350ULL))))) : (max((((/* implicit */unsigned long long int) min(((unsigned short)3), (((/* implicit */unsigned short) (signed char)18))))), (((16123639560684339567ULL) | (var_1))))));
        var_31 = ((/* implicit */unsigned short) ((((_Bool) (((_Bool)1) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_7])))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_28 [i_7]))) % (var_1))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_8 [i_7] [i_7] [i_7] [i_7]))))));
    }
    for (unsigned int i_8 = 0; i_8 < 22; i_8 += 3) 
    {
        var_32 = ((/* implicit */signed char) min((((((/* implicit */_Bool) min((6138680050913147638ULL), (((/* implicit */unsigned long long int) (short)-25))))) ? ((-(var_0))) : (((/* implicit */unsigned long long int) arr_22 [i_8] [i_8])))), (((/* implicit */unsigned long long int) (-((-(arr_16 [i_8] [i_8] [i_8]))))))));
        arr_33 [(unsigned char)20] |= ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) (signed char)-118)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-17927))) : (arr_22 [i_8] [(unsigned short)12])))));
        /* LoopNest 2 */
        for (unsigned char i_9 = 0; i_9 < 22; i_9 += 4) 
        {
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_11 = 1; i_11 < 21; i_11 += 4) 
                    {
                        for (unsigned long long int i_12 = 2; i_12 < 21; i_12 += 4) 
                        {
                            {
                                var_33 = ((/* implicit */unsigned char) min((var_33), (((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) ((_Bool) min((3141031899U), (((/* implicit */unsigned int) (unsigned short)31788))))))) - (max((((/* implicit */long long int) 134217728U)), (var_4))))))));
                                arr_46 [i_10] [i_8] = ((/* implicit */signed char) var_4);
                                var_34 = max((((/* implicit */long long int) ((((var_9) + (2147483647))) >> (((/* implicit */int) ((signed char) var_11)))))), (((long long int) (-(((/* implicit */int) (unsigned char)255))))));
                                var_35 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((var_11) == (var_9)))), (max((196578ULL), (((/* implicit */unsigned long long int) (-2147483647 - 1)))))))) ? (((unsigned int) max((((/* implicit */unsigned int) arr_12 [i_12 + 1])), (2753625261U)))) : (((/* implicit */unsigned int) (~(((((/* implicit */_Bool) arr_29 [i_11] [i_10])) ? (((/* implicit */int) (short)-17194)) : (((/* implicit */int) (signed char)-94)))))))));
                            }
                        } 
                    } 
                    var_36 = ((/* implicit */signed char) min((var_36), (((/* implicit */signed char) (~(((/* implicit */int) max(((unsigned short)53572), (((/* implicit */unsigned short) (short)0))))))))));
                }
            } 
        } 
    }
    /* LoopNest 3 */
    for (signed char i_13 = 0; i_13 < 18; i_13 += 1) 
    {
        for (long long int i_14 = 0; i_14 < 18; i_14 += 4) 
        {
            for (int i_15 = 0; i_15 < 18; i_15 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (long long int i_16 = 2; i_16 < 15; i_16 += 3) 
                    {
                        var_37 = ((/* implicit */signed char) min((((/* implicit */unsigned int) (signed char)-42)), (max((3570728463U), (((/* implicit */unsigned int) (signed char)35))))));
                        var_38 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((max((var_3), (((/* implicit */long long int) var_8)))), (((/* implicit */long long int) (~(((/* implicit */int) var_10)))))))) ? (((/* implicit */long long int) ((unsigned int) min((arr_58 [i_13] [i_14] [i_15] [i_16]), (((/* implicit */unsigned int) var_14)))))) : (min((max((-6628619926608888122LL), (((/* implicit */long long int) 1153935397U)))), (((/* implicit */long long int) (+(((/* implicit */int) (signed char)-1)))))))));
                    }
                    var_39 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) min((var_13), (((/* implicit */unsigned int) (_Bool)0))))) ? (((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) (signed char)-119))))) : (((((/* implicit */int) (unsigned char)2)) << (((-3869137817380340499LL) + (3869137817380340523LL))))))) == (((((/* implicit */_Bool) ((var_0) - (((/* implicit */unsigned long long int) 1421644572U))))) ? (((/* implicit */int) max((((/* implicit */short) var_10)), ((short)-25629)))) : (-2013950080)))));
                }
            } 
        } 
    } 
    var_40 = ((/* implicit */_Bool) (+(1421644557U)));
}
