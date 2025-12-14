/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162783
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162783 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162783
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */signed char) -70092988);
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned char) ((unsigned int) var_0));
        var_12 = ((/* implicit */int) ((min((((/* implicit */long long int) var_0)), (arr_1 [i_0]))) >= (arr_1 [i_0])));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned int) var_5);
    }
    for (short i_1 = 0; i_1 < 24; i_1 += 2) 
    {
        /* LoopNest 3 */
        for (short i_2 = 0; i_2 < 24; i_2 += 2) 
        {
            for (unsigned char i_3 = 2; i_3 < 22; i_3 += 4) 
            {
                for (unsigned long long int i_4 = 0; i_4 < 24; i_4 += 3) 
                {
                    {
                        var_13 = ((/* implicit */int) max((var_13), (((((/* implicit */_Bool) -451359834)) ? (((/* implicit */int) ((short) ((((/* implicit */_Bool) 2305842871774740480LL)) ? (arr_10 [i_1] [i_2] [i_3]) : (2770164365U))))) : (((/* implicit */int) ((signed char) (+(var_4)))))))));
                        var_14 = ((/* implicit */_Bool) max(((+(((/* implicit */int) (_Bool)1)))), (((((/* implicit */int) var_2)) << (((((/* implicit */int) min((((/* implicit */unsigned char) var_3)), (var_2)))) - (39)))))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (unsigned int i_5 = 0; i_5 < 24; i_5 += 4) 
        {
            for (long long int i_6 = 2; i_6 < 22; i_6 += 1) 
            {
                {
                    arr_20 [i_1] [i_5] = ((/* implicit */short) (-((~(arr_14 [i_6] [i_6 + 2] [i_1] [i_1] [i_5] [i_5])))));
                    /* LoopSeq 2 */
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
                    {
                        var_15 ^= ((/* implicit */_Bool) (((((~(((/* implicit */int) arr_16 [i_1] [i_6 + 1])))) + (2147483647))) >> (((((((/* implicit */int) var_1)) - (((/* implicit */int) arr_16 [i_1] [i_6 - 1])))) + (10856)))));
                        arr_24 [i_1] [i_1] [i_5] [(_Bool)1] [(unsigned short)8] [i_7] = ((/* implicit */int) ((((/* implicit */_Bool) arr_17 [i_1] [i_5] [i_7])) ? ((-(1524802939U))) : (((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */_Bool) -1LL)) && (((/* implicit */_Bool) arr_8 [i_7]))))))))));
                        var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) arr_9 [i_1]))));
                    }
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) /* same iter space */
                    {
                        arr_28 [i_8] = ((/* implicit */unsigned char) (short)32767);
                        var_17 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((unsigned long long int) arr_12 [i_6 + 2] [i_6 + 2] [i_6 - 1] [i_6 - 1])))));
                    }
                    var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) 2770164357U))));
                }
            } 
        } 
        arr_29 [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) (-(max((9LL), (((/* implicit */long long int) 2770164365U))))))) || (((/* implicit */_Bool) (+(arr_5 [i_1]))))));
    }
    /* LoopSeq 3 */
    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
        {
            for (signed char i_11 = 2; i_11 < 21; i_11 += 1) 
            {
                {
                    var_19 += ((/* implicit */unsigned short) arr_30 [i_9]);
                    var_20 = ((/* implicit */_Bool) max((((/* implicit */unsigned int) ((short) 481932362U))), (min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) var_6))))), (max((((/* implicit */unsigned int) (unsigned char)90)), (1374951876U)))))));
                    arr_38 [i_10] [i_10] [i_9] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(35358154)))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_36 [i_11 + 1] [i_11 - 1] [i_11 - 1])) || (((/* implicit */_Bool) arr_36 [i_11 + 1] [i_11 - 1] [i_11 - 1]))))) : (((arr_36 [i_11 + 1] [i_11 - 1] [i_11 - 1]) ^ (arr_36 [i_11 + 1] [i_11 - 1] [i_11 - 1])))));
                    var_21 *= ((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)90))));
                }
            } 
        } 
        arr_39 [i_9] [i_9] = ((/* implicit */short) 1073741312ULL);
    }
    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) /* same iter space */
    {
        var_22 = ((/* implicit */_Bool) arr_37 [i_12] [17LL] [i_12]);
        /* LoopNest 2 */
        for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) 
        {
            for (short i_14 = 3; i_14 < 23; i_14 += 3) 
            {
                {
                    var_23 = ((/* implicit */long long int) 15286453191086325649ULL);
                    /* LoopNest 2 */
                    for (long long int i_15 = 0; i_15 < 25; i_15 += 2) 
                    {
                        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                        {
                            {
                                var_24 = ((/* implicit */unsigned int) max((var_24), (((/* implicit */unsigned int) ((signed char) (-(((long long int) var_9))))))));
                                arr_52 [i_12] [i_13] [i_14] [i_15] [i_13] = ((/* implicit */int) ((((1524802931U) != (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))) || (((/* implicit */_Bool) arr_46 [i_16]))));
                                var_25 = ((max((max((((/* implicit */unsigned long long int) -35358154)), (3160290882623225966ULL))), (((/* implicit */unsigned long long int) var_11)))) == (((/* implicit */unsigned long long int) (-(var_4)))));
                            }
                        } 
                    } 
                    var_26 = ((unsigned short) max((((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)47692))))), (max((-3171346152193418291LL), (1LL)))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (int i_17 = 0; i_17 < 25; i_17 += 3) 
        {
            for (unsigned int i_18 = 1; i_18 < 24; i_18 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_19 = 1; i_19 < 24; i_19 += 3) 
                    {
                        for (unsigned long long int i_20 = 1; i_20 < 23; i_20 += 4) 
                        {
                            {
                                var_27 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((var_10) + (2147483647))) >> (((var_10) + (1148029673)))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_41 [i_12]))) : (((-1LL) | (((/* implicit */long long int) ((/* implicit */int) var_5)))))))), (max((((/* implicit */unsigned long long int) (((_Bool)1) ? (-2438873216262336665LL) : (((/* implicit */long long int) 2770164339U))))), (15286453191086325632ULL)))));
                                var_28 *= ((/* implicit */_Bool) ((int) ((_Bool) ((((/* implicit */_Bool) (signed char)-62)) ? (2583698862U) : (2695462693U)))));
                                arr_65 [i_12] [i_12] [i_18 - 1] [i_19] = ((/* implicit */long long int) (!(((/* implicit */_Bool) 3160290882623225967ULL))));
                            }
                        } 
                    } 
                    arr_66 [i_12] = ((/* implicit */unsigned int) max((((_Bool) ((((/* implicit */_Bool) 2015531634U)) ? (2770164339U) : (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))), ((!(((/* implicit */_Bool) ((((/* implicit */int) (short)-10818)) | (268435455))))))));
                    /* LoopNest 2 */
                    for (unsigned int i_21 = 0; i_21 < 25; i_21 += 1) 
                    {
                        for (unsigned int i_22 = 0; i_22 < 25; i_22 += 2) 
                        {
                            {
                                arr_73 [i_12] = ((/* implicit */_Bool) min((((((var_6) <= (var_9))) ? (max((((/* implicit */int) var_0)), (arr_60 [i_12] [i_12]))) : (((/* implicit */int) arr_62 [i_12] [i_17] [i_18] [i_21] [i_21])))), (((((/* implicit */int) var_5)) * ((+(((/* implicit */int) (unsigned short)17843))))))));
                                arr_74 [i_12] [i_17] [i_17] [i_17] [i_17] [i_17] [20] = ((/* implicit */unsigned short) arr_57 [i_18 - 1] [i_12] [i_18 - 1]);
                                var_29 = ((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)47))))) * ((-(2770164339U))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    for (_Bool i_23 = 1; i_23 < 1; i_23 += 1) 
    {
        arr_78 [i_23] = ((/* implicit */signed char) min(((+(15286453191086325649ULL))), (((/* implicit */unsigned long long int) (((((~(((/* implicit */int) var_0)))) + (2147483647))) << (((((long long int) var_11)) - (615644293LL))))))));
        var_30 = ((/* implicit */unsigned char) ((18446744073709551615ULL) % (((/* implicit */unsigned long long int) (-(min((arr_57 [i_23] [i_23] [i_23]), (((/* implicit */int) var_0)))))))));
        /* LoopNest 3 */
        for (short i_24 = 0; i_24 < 11; i_24 += 3) 
        {
            for (signed char i_25 = 0; i_25 < 11; i_25 += 2) 
            {
                for (unsigned int i_26 = 3; i_26 < 9; i_26 += 3) 
                {
                    {
                        arr_89 [i_23] [i_24] [i_24] [i_26 - 2] [i_25] [i_24] = max((min((arr_25 [i_26 - 1] [i_24] [i_24] [i_23 - 1]), (((/* implicit */unsigned long long int) 1929872177)))), (((/* implicit */unsigned long long int) -789089934)));
                        var_31 = ((/* implicit */short) arr_47 [i_23 - 1] [i_24] [i_24] [i_26 - 2] [i_24] [i_23]);
                    }
                } 
            } 
        } 
        arr_90 [i_23] = ((/* implicit */unsigned int) (-((-(((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))))));
        arr_91 [i_23] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_71 [i_23] [i_23] [i_23] [i_23 - 1] [i_23 - 1] [i_23 - 1]))))) ? (((/* implicit */long long int) var_6)) : ((+(var_7)))))) ? (max((((/* implicit */unsigned long long int) max(((unsigned short)34620), (((/* implicit */unsigned short) arr_6 [i_23 - 1]))))), (min((((/* implicit */unsigned long long int) var_8)), (18446744073709551603ULL))))) : (((/* implicit */unsigned long long int) min((var_11), (((/* implicit */int) ((_Bool) arr_23 [i_23] [i_23 - 1])))))));
    }
}
