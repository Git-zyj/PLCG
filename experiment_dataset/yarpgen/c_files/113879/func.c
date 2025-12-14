/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113879
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113879 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113879
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        var_12 += ((/* implicit */unsigned char) ((((((/* implicit */_Bool) 9223372036854775800LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (var_2))) * (((/* implicit */unsigned long long int) (-2147483647 - 1)))));
        var_13 = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_1 [i_0]))));
    }
    for (unsigned char i_1 = 1; i_1 < 10; i_1 += 3) 
    {
        var_14 = ((/* implicit */long long int) min((((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32763))) | (3940060429573211901ULL))), (((/* implicit */unsigned long long int) (~((-2147483647 - 1)))))));
        arr_5 [i_1] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (short)32763))) | (((((/* implicit */_Bool) arr_3 [i_1 - 1])) ? (7936674813511165019LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
        arr_6 [i_1] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((2755672632439941888ULL) >> (((((/* implicit */int) (short)-16384)) + (16399)))))) ? (((/* implicit */int) ((var_11) >= (((/* implicit */int) var_3))))) : (((/* implicit */int) (!(((/* implicit */_Bool) -849985217))))))) ^ ((+(((/* implicit */int) ((((/* implicit */_Bool) 12U)) && (((/* implicit */_Bool) var_10)))))))));
        var_15 = ((/* implicit */long long int) max((var_15), (((/* implicit */long long int) ((((/* implicit */_Bool) (~(var_7)))) ? (min((arr_2 [i_1 + 2]), (arr_2 [i_1 - 1]))) : (((arr_2 [i_1 + 1]) & (arr_2 [i_1 + 2]))))))));
        var_16 = ((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65534)) ? (2755672632439941900ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)4097)))))) && (((/* implicit */_Bool) (-2147483647 - 1))))))));
    }
    /* LoopNest 2 */
    for (int i_2 = 2; i_2 < 16; i_2 += 2) 
    {
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned long long int i_4 = 1; i_4 < 16; i_4 += 4) 
                {
                    var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(arr_13 [i_3] [i_3] [i_2 + 1])))) ? (((/* implicit */unsigned long long int) 528903798361286802LL)) : ((-(11ULL)))));
                    var_18 += ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) (~(((((((/* implicit */int) (signed char)-72)) + (2147483647))) << (((((/* implicit */int) var_1)) - (177)))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (var_0) : (var_0)))) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))));
                    var_19 = (unsigned short)65534;
                }
                for (int i_5 = 0; i_5 < 18; i_5 += 4) 
                {
                    arr_18 [i_3] [i_3] [i_5] = ((/* implicit */short) (+(max(((~(((/* implicit */int) (signed char)127)))), (arr_17 [i_2] [i_3] [i_3] [i_5])))));
                    var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(18446744073709551606ULL)))) ? (min((((/* implicit */unsigned long long int) arr_17 [i_2] [i_2 - 1] [i_2] [i_5])), (14751546570928307339ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_2 - 1])) / (((/* implicit */int) (signed char)-22)))))));
                    arr_19 [i_2] [i_2] |= ((/* implicit */unsigned short) ((((arr_9 [i_2 + 2] [i_2 + 2] [i_2]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_3]))) : (2755672632439941898ULL))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_13 [i_5] [i_3] [i_5]))))));
                    var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) (unsigned short)65535))));
                }
                var_22 = ((/* implicit */short) ((unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)11)) | (((/* implicit */int) (unsigned short)0))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 831694785346061211LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)29958))) : (2147483648U)))) : (20ULL))));
                /* LoopSeq 4 */
                for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
                {
                    var_23 = ((/* implicit */unsigned short) (~(((/* implicit */int) (short)22147))));
                    var_24 = ((/* implicit */long long int) ((((/* implicit */int) ((short) arr_20 [i_2] [i_6 + 1] [i_6]))) <= (((/* implicit */int) (!(((/* implicit */_Bool) (short)11700)))))));
                    arr_22 [i_3] [i_3] [i_3] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-10372)) | (((/* implicit */int) var_3))))), (((((/* implicit */_Bool) 2755672632439941888ULL)) ? (((/* implicit */unsigned long long int) 2147483647)) : (var_2)))));
                    var_25 = (((!((!(((/* implicit */_Bool) (unsigned short)65516)))))) ? (((/* implicit */int) ((((/* implicit */_Bool) 3076766369U)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (2755672632439941898ULL) : (((/* implicit */unsigned long long int) var_11)))))))) : (min((((/* implicit */int) arr_12 [i_2] [i_3] [i_6 + 1] [i_6 + 1])), (var_11))));
                }
                for (int i_7 = 0; i_7 < 18; i_7 += 2) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_8 = 1; i_8 < 17; i_8 += 3) 
                    {
                        for (signed char i_9 = 3; i_9 < 15; i_9 += 3) 
                        {
                            {
                                arr_31 [i_2] [i_2] [i_3] [i_7] [i_3] [i_9 - 1] = ((/* implicit */int) ((2755672632439941898ULL) | (12895034290199879593ULL)));
                                arr_32 [i_3] [i_3] [i_3] [i_3] = ((/* implicit */long long int) ((int) max((min((((/* implicit */unsigned long long int) (unsigned char)181)), (3320677907897836931ULL))), (((/* implicit */unsigned long long int) (short)-8239)))));
                                arr_33 [i_2] [i_3] [i_7] [i_7] [i_2] [i_7] [i_9 - 2] = ((/* implicit */unsigned short) (((+(4294967290U))) * (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) arr_26 [i_2 + 1] [i_2] [i_2] [i_2 - 2])) < (arr_14 [i_2 + 1])))))));
                            }
                        } 
                    } 
                    arr_34 [i_2] |= ((/* implicit */unsigned char) min((((/* implicit */unsigned int) (+(arr_17 [i_2] [i_2 + 2] [i_2 + 2] [i_2])))), (var_0)));
                }
                for (int i_10 = 0; i_10 < 18; i_10 += 2) /* same iter space */
                {
                    arr_37 [i_2 - 1] [i_3] [i_3] = ((/* implicit */unsigned short) (~(((/* implicit */int) ((1974414751) != (((/* implicit */int) (!(((/* implicit */_Bool) var_2))))))))));
                    var_26 *= ((/* implicit */short) max((8972175552688552762ULL), (((/* implicit */unsigned long long int) ((((/* implicit */int) (!((_Bool)0)))) * (((((/* implicit */_Bool) arr_16 [i_2 + 1] [i_3] [i_3])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_4)))))))));
                    var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_24 [i_2 - 1] [i_2 - 2] [i_2 - 2] [i_2 - 1])), (15126066165811714699ULL)))) ? (((long long int) arr_24 [i_2 - 1] [i_2 + 1] [i_2 + 1] [i_2 - 1])) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_24 [i_2] [i_2] [i_2] [i_2 + 1])) >= (((/* implicit */int) arr_24 [i_2 - 1] [i_2 - 1] [i_2 - 2] [i_2 + 2]))))))));
                    var_28 = ((/* implicit */int) min((((((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_10] [i_3] [i_2 - 2]))) - (arr_2 [i_10]))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(2147483136U)))) ? ((+(((/* implicit */int) arr_28 [i_3] [i_3] [i_3] [i_3])))) : (((/* implicit */int) arr_25 [i_10] [i_10] [i_3] [i_2 + 1])))))));
                }
                for (unsigned short i_11 = 1; i_11 < 16; i_11 += 1) 
                {
                    var_29 = ((/* implicit */short) min((((((/* implicit */_Bool) arr_15 [i_2 - 1] [i_2 + 2] [i_2 - 2])) ? (((/* implicit */int) (short)4094)) : (arr_8 [i_2 + 1]))), ((~(((/* implicit */int) arr_39 [i_11 + 1] [i_11 + 2] [i_11] [i_11 + 1]))))));
                    /* LoopSeq 2 */
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) /* same iter space */
                    {
                        arr_44 [i_2 - 1] [i_3] [i_11 + 2] [i_11 + 2] [i_12] = ((/* implicit */unsigned int) ((((/* implicit */int) ((signed char) 3412861824863821632LL))) ^ ((~(((/* implicit */int) arr_15 [i_2 + 1] [i_11 + 2] [i_11]))))));
                        arr_45 [i_2 - 1] [i_3] [i_2] [i_11] [i_11 - 1] [i_12] |= ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_1))) | (((((min((-9LL), (((/* implicit */long long int) var_10)))) + (9223372036854775807LL))) << (((min((((/* implicit */unsigned int) (unsigned char)248)), (4294967280U))) - (248U)))))));
                    }
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) /* same iter space */
                    {
                        arr_48 [i_2] [i_3] [i_2] [i_2] |= 495579630609367979LL;
                        arr_49 [i_2 + 1] [i_3] [i_3] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((unsigned short) (-(((/* implicit */int) (_Bool)0))))))));
                        var_30 &= ((/* implicit */_Bool) (~(16858561090789509828ULL)));
                        arr_50 [i_3] [i_3] = ((/* implicit */_Bool) ((((72057594037927935ULL) != (((/* implicit */unsigned long long int) -4603603163757883167LL)))) ? (max(((-(var_7))), (min((((/* implicit */unsigned long long int) var_8)), (arr_14 [i_13]))))) : (((/* implicit */unsigned long long int) (~(((((/* implicit */int) var_3)) + (((/* implicit */int) (unsigned char)0)))))))));
                    }
                    var_31 = ((/* implicit */int) min((min((((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)11702))) != (9474568521020998881ULL)))), (min((((/* implicit */unsigned int) (unsigned short)1008)), (387430518U))))), (((/* implicit */unsigned int) var_1))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_14 = 0; i_14 < 18; i_14 += 4) 
                    {
                        for (signed char i_15 = 0; i_15 < 18; i_15 += 3) 
                        {
                            {
                                arr_56 [i_2] [i_3] [i_15] = ((/* implicit */short) ((((/* implicit */unsigned long long int) (~(arr_51 [i_2 + 2])))) + ((~(2585873093248027797ULL)))));
                                var_32 = ((/* implicit */unsigned short) ((18446744073709551599ULL) * (9474568521020998834ULL)));
                            }
                        } 
                    } 
                }
                arr_57 [i_3] [i_3] [i_3] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)64523))) ^ ((+(arr_52 [i_2 + 2] [i_2 + 1] [i_2 + 1] [i_2 + 2] [i_2 - 1])))));
            }
        } 
    } 
}
