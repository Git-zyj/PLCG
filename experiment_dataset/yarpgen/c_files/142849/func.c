/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142849
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142849 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142849
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
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            {
                var_14 |= ((/* implicit */short) (unsigned short)40756);
                arr_5 [i_1] [(short)10] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_12))) >= (var_8)))) >> (((/* implicit */int) ((signed char) (unsigned short)0)))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)40766))) : (((((/* implicit */_Bool) (unsigned short)40756)) ? (((/* implicit */long long int) (-(var_8)))) : ((((-9223372036854775807LL - 1LL)) / (((/* implicit */long long int) ((/* implicit */int) (short)27313)))))))));
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 12; i_2 += 2) 
                {
                    for (int i_3 = 1; i_3 < 10; i_3 += 2) 
                    {
                        {
                            /* LoopSeq 1 */
                            /* vectorizable */
                            for (unsigned short i_4 = 0; i_4 < 12; i_4 += 4) 
                            {
                                arr_14 [i_1] = ((/* implicit */unsigned char) (~(var_6)));
                                arr_15 [i_1] = ((/* implicit */unsigned short) (-(11918351802200948127ULL)));
                                arr_16 [i_1] = ((/* implicit */unsigned short) (-(17376990133856532432ULL)));
                            }
                            arr_17 [i_0] [i_1] [0LL] [i_3] = ((/* implicit */unsigned long long int) ((min((((/* implicit */int) var_4)), ((~(((/* implicit */int) var_13)))))) > ((-(((/* implicit */int) var_0))))));
                            /* LoopSeq 3 */
                            for (unsigned char i_5 = 4; i_5 < 10; i_5 += 2) 
                            {
                                var_15 = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)24770)) - (((/* implicit */int) (unsigned short)40766))));
                                arr_21 [i_0] [(short)3] [i_2] [i_1] [i_5] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((signed char) min((var_4), (var_4))))), (((17605913226586661389ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)126)))))));
                                arr_22 [i_5] [i_1] [i_0] = ((/* implicit */long long int) (((!(((((/* implicit */_Bool) 376104613)) || (((/* implicit */_Bool) (signed char)-24)))))) ? ((+(((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_2)))))) : (((/* implicit */int) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) (~(568482028)))))))));
                                arr_23 [(unsigned short)5] [5LL] [i_1] [i_1] [(unsigned short)5] = ((/* implicit */unsigned int) min((((((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) var_6)))) && ((!(((/* implicit */_Bool) 1069753939853019184ULL)))))), (((((/* implicit */int) (unsigned short)24769)) > (((((/* implicit */int) var_9)) << (((((/* implicit */int) var_5)) - (7530)))))))));
                            }
                            /* vectorizable */
                            for (unsigned char i_6 = 0; i_6 < 12; i_6 += 2) 
                            {
                                var_16 = ((/* implicit */unsigned short) ((int) (unsigned short)65535));
                                arr_27 [i_3 + 1] [i_1] [i_2] [i_1] [(unsigned char)10] = (+(1417038004U));
                            }
                            for (int i_7 = 0; i_7 < 12; i_7 += 1) 
                            {
                                var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((unsigned short) (signed char)-25)))))), (((((/* implicit */_Bool) var_3)) ? (((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) - (var_3))) : (((/* implicit */unsigned int) ((((/* implicit */int) var_1)) >> (((/* implicit */int) (signed char)24))))))))))));
                                var_18 = ((/* implicit */unsigned short) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)189)));
                            }
                        }
                    } 
                } 
                arr_32 [i_1] [i_1] = ((/* implicit */int) (((~(1069753939853019184ULL))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_13), (((/* implicit */signed char) var_4))))))));
                arr_33 [i_1] [i_1] = ((/* implicit */unsigned int) (-((+(((/* implicit */int) var_10))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_8 = 3; i_8 < 18; i_8 += 1) 
    {
        for (unsigned short i_9 = 1; i_9 < 17; i_9 += 4) 
        {
            {
                var_19 = ((/* implicit */short) ((((/* implicit */_Bool) max((var_6), (((/* implicit */int) (signed char)-76))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2877929278U)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (1434608153576844763LL)))) : ((~(10935620594698779614ULL)))));
                /* LoopNest 2 */
                for (signed char i_10 = 0; i_10 < 19; i_10 += 2) 
                {
                    for (signed char i_11 = 0; i_11 < 19; i_11 += 2) 
                    {
                        {
                            var_20 = ((/* implicit */unsigned char) ((((((/* implicit */int) var_9)) - (((/* implicit */int) var_0)))) / ((~(((((/* implicit */int) var_0)) * (((/* implicit */int) var_10))))))));
                            /* LoopSeq 1 */
                            for (unsigned char i_12 = 0; i_12 < 19; i_12 += 2) 
                            {
                                arr_47 [i_8] [i_9] [i_9] [i_10] [i_11] [i_9] = ((/* implicit */short) var_5);
                                arr_48 [i_8] [i_8] [i_8] [i_8 - 2] [i_9] [i_8] [i_8] = ((/* implicit */int) ((_Bool) (+(((/* implicit */int) min((var_9), (((/* implicit */unsigned short) var_13))))))));
                                arr_49 [i_8] [i_9] [i_9] [(short)14] [i_10] [i_11] [i_10] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_2))))) ? (((((/* implicit */int) var_12)) * (((/* implicit */int) (signed char)9)))) : (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_1))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((7511123479010772001ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)24780))))))) : (((((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_5)))) * (var_8)))));
                            }
                            arr_50 [i_8] [(signed char)14] [i_9] = ((/* implicit */short) (+((+(((((/* implicit */int) var_2)) * (((/* implicit */int) var_4))))))));
                            var_21 = ((((/* implicit */_Bool) max((var_9), ((unsigned short)40766)))) ? (((/* implicit */int) (((!(((/* implicit */_Bool) 3102192032U)))) || (((/* implicit */_Bool) ((short) var_6)))))) : (((/* implicit */int) (((!(((/* implicit */_Bool) var_6)))) || (((((/* implicit */_Bool) (signed char)24)) && (var_4)))))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (long long int i_13 = 1; i_13 < 17; i_13 += 2) 
                {
                    for (signed char i_14 = 0; i_14 < 19; i_14 += 3) 
                    {
                        for (unsigned int i_15 = 0; i_15 < 19; i_15 += 2) 
                        {
                            {
                                arr_58 [i_8] [i_8] [i_8] [i_9] [(unsigned char)18] [i_15] = ((/* implicit */short) ((_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)0))) != (((7511123479010772002ULL) >> (((/* implicit */int) (signed char)17)))))));
                                arr_59 [i_8] [i_9] [i_8] [i_8] [(unsigned char)15] [i_8] [i_14] = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) (unsigned char)67)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_13))))));
                                arr_60 [1] [1] [i_13] [(_Bool)1] [i_9] = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) var_5))))) * (((/* implicit */int) min((((/* implicit */unsigned char) var_10)), (var_2))))));
                                arr_61 [i_15] [i_9] [i_8] [4ULL] [(unsigned short)14] [i_9] [i_8] = ((/* implicit */long long int) min((((((((/* implicit */int) var_9)) + (((/* implicit */int) (unsigned short)50824)))) + (((((/* implicit */int) (short)-29069)) - (((/* implicit */int) (unsigned short)47309)))))), (((/* implicit */int) var_2))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopSeq 1 */
    for (signed char i_16 = 0; i_16 < 14; i_16 += 2) 
    {
        arr_66 [(unsigned short)2] = ((/* implicit */unsigned char) ((((/* implicit */int) max((((/* implicit */unsigned char) (signed char)-44)), (var_2)))) != ((-(((/* implicit */int) (signed char)84))))));
        /* LoopSeq 3 */
        for (signed char i_17 = 0; i_17 < 14; i_17 += 4) 
        {
            arr_70 [12U] [12U] [12U] = ((/* implicit */_Bool) ((((var_8) * (var_8))) / (((/* implicit */unsigned int) (-(((/* implicit */int) var_12)))))));
            arr_71 [i_16] = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) 2106888333U))))) < ((+(((/* implicit */int) (short)-3684))))));
            var_22 ^= ((/* implicit */unsigned short) min(((~((-(((/* implicit */int) var_10)))))), (((/* implicit */int) var_5))));
            arr_72 [i_16] [i_17] = ((/* implicit */unsigned short) (-((-((-(2877929292U)))))));
            var_23 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((var_11) & (((/* implicit */int) var_4)))), ((+(((/* implicit */int) (unsigned short)40756))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned short) (signed char)127))) + (((/* implicit */int) (short)-3667))))) : (max((((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) (short)6651)), (var_5)))), (((unsigned long long int) (signed char)27))))));
        }
        for (signed char i_18 = 0; i_18 < 14; i_18 += 4) 
        {
            var_24 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */int) (signed char)89)) | (((/* implicit */int) var_9)))))));
            var_25 = ((((/* implicit */_Bool) (signed char)-27)) ? (-1985882271808236233LL) : (-8955300070393798528LL));
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned char i_19 = 0; i_19 < 14; i_19 += 3) 
            {
                /* LoopSeq 1 */
                for (long long int i_20 = 0; i_20 < 14; i_20 += 3) 
                {
                    arr_82 [(unsigned short)9] [i_20] = ((/* implicit */signed char) ((((/* implicit */int) var_1)) + (((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))));
                    var_26 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) var_0))) % (((1073725440U) - (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)24780)))))));
                }
                arr_83 [i_16] [i_18] [i_19] = ((/* implicit */signed char) (~(((/* implicit */int) var_12))));
            }
        }
        for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
        {
            arr_86 [i_16] [i_16] = ((signed char) (-(((/* implicit */int) (unsigned short)15368))));
            arr_87 [i_16] [i_21] [i_21] = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) (short)19900)))) : (((((/* implicit */unsigned int) ((/* implicit */int) var_7))) ^ (var_8)))))));
        }
        arr_88 [i_16] = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)98)) ? (177366091U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)16)))));
        arr_89 [i_16] [i_16] = ((/* implicit */short) var_5);
    }
    var_27 = ((/* implicit */short) ((int) max(((+(((/* implicit */int) (short)16)))), (((/* implicit */int) ((_Bool) (unsigned short)37288))))));
}
