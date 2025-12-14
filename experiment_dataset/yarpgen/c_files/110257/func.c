/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110257
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110257 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110257
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
    var_11 = ((/* implicit */unsigned int) var_6);
    var_12 = ((/* implicit */unsigned char) var_3);
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 3; i_1 < 18; i_1 += 3) 
        {
            for (unsigned char i_2 = 4; i_2 < 18; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 21; i_4 += 1) 
                        {
                            {
                                var_13 = ((/* implicit */long long int) (+(((((/* implicit */_Bool) ((unsigned char) arr_0 [i_0] [i_0]))) ? (((/* implicit */int) ((unsigned char) (unsigned char)10))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (_Bool)1)) : (var_6)))))));
                                arr_11 [i_0 + 1] [i_0 + 1] [i_0] [i_0 + 1] = ((/* implicit */unsigned short) var_3);
                            }
                        } 
                    } 
                    arr_12 [i_0] [i_0 + 1] [i_1 + 2] [i_2 - 4] = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)-75)) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) var_7)))) : (var_7)));
                    arr_13 [i_2 - 4] = ((/* implicit */short) (signed char)-52);
                }
            } 
        } 
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 21; i_5 += 2) 
        {
            for (int i_6 = 0; i_6 < 21; i_6 += 3) 
            {
                {
                    var_14 &= ((/* implicit */short) ((((((/* implicit */_Bool) arr_4 [i_6])) ? (min((((/* implicit */long long int) (unsigned short)54236)), (-9197977569349853676LL))) : (((/* implicit */long long int) ((/* implicit */int) var_10))))) >= (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0)))));
                    arr_21 [i_0 + 1] [i_5] [i_6] &= ((/* implicit */signed char) var_6);
                    /* LoopSeq 4 */
                    for (short i_7 = 1; i_7 < 20; i_7 += 1) 
                    {
                        var_15 = ((/* implicit */long long int) (short)10392);
                        var_16 = ((/* implicit */signed char) 4611123068473966592LL);
                        var_17 = ((/* implicit */long long int) (unsigned char)4);
                    }
                    for (unsigned short i_8 = 0; i_8 < 21; i_8 += 3) 
                    {
                        var_18 ^= ((/* implicit */unsigned short) max((((/* implicit */unsigned int) var_6)), (min((var_4), (((/* implicit */unsigned int) (-(((/* implicit */int) var_3)))))))));
                        arr_26 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0] = ((/* implicit */_Bool) var_8);
                        arr_27 [i_8] [i_8] [i_6] [i_8] [i_8] [i_6] &= ((/* implicit */signed char) (((!(((/* implicit */_Bool) ((2855163382U) >> (((1491617404) - (1491617389)))))))) ? (max((((/* implicit */long long int) (short)-1)), (((((/* implicit */_Bool) var_6)) ? (arr_25 [i_0] [i_0] [i_6] [i_8]) : (((/* implicit */long long int) ((/* implicit */int) var_1))))))) : (var_7)));
                    }
                    for (short i_9 = 0; i_9 < 21; i_9 += 3) 
                    {
                        var_19 &= ((/* implicit */long long int) 380792145);
                        arr_30 [i_0] [i_5] [i_6] [i_9] = ((/* implicit */signed char) (~(136902082560ULL)));
                    }
                    for (signed char i_10 = 2; i_10 < 19; i_10 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (signed char i_11 = 0; i_11 < 21; i_11 += 3) 
                        {
                            var_20 = ((/* implicit */unsigned int) var_2);
                            var_21 ^= ((/* implicit */unsigned int) arr_7 [i_11]);
                            arr_35 [i_0] [i_0] [i_5] [i_10] [i_0] [i_10] [i_11] = ((/* implicit */signed char) arr_14 [i_0 + 1] [i_0 + 1] [i_0 + 1]);
                        }
                        arr_36 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_6] [i_6] [i_10] = ((/* implicit */signed char) ((unsigned long long int) ((unsigned long long int) arr_29 [i_0] [i_0 + 1] [i_0] [i_0 + 1] [i_0])));
                        /* LoopSeq 1 */
                        for (unsigned short i_12 = 0; i_12 < 21; i_12 += 3) 
                        {
                            var_22 ^= ((/* implicit */signed char) ((((_Bool) max((((/* implicit */signed char) (_Bool)1)), (var_2)))) ? (var_4) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_8 [i_10 + 2] [i_10 - 2] [i_0 + 1] [i_0 + 1] [i_0 + 1])) ? (((/* implicit */int) arr_2 [i_0 + 1] [i_0 + 1])) : (((/* implicit */int) var_8)))))));
                            var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) ((unsigned long long int) ((short) arr_18 [i_10 + 1]))))));
                        }
                        var_24 = ((/* implicit */signed char) max((((/* implicit */long long int) (-(((/* implicit */int) ((short) var_9)))))), ((-(5845262088417062304LL)))));
                    }
                    /* LoopNest 2 */
                    for (signed char i_13 = 0; i_13 < 21; i_13 += 3) 
                    {
                        for (signed char i_14 = 0; i_14 < 21; i_14 += 1) 
                        {
                            {
                                arr_46 [i_14] [i_13] [i_0] [i_0] [i_14] = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_1 [i_0 + 1]))))) ? (((/* implicit */unsigned int) ((var_6) - (((/* implicit */int) arr_1 [i_0 + 1]))))) : (((((/* implicit */_Bool) arr_1 [i_0 + 1])) ? (var_4) : (2855163387U)))));
                                arr_47 [i_0 + 1] [i_0 + 1] [i_14] [i_0 + 1] [i_0] [i_0] = (short)2048;
                                var_25 ^= ((/* implicit */long long int) ((short) (_Bool)0));
                                var_26 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_9 [i_0 + 1] [i_0 + 1] [i_0] [i_0])))), (((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_0))))) || (((/* implicit */_Bool) 2U)))))));
                                var_27 = ((/* implicit */unsigned char) max((var_27), (((/* implicit */unsigned char) ((_Bool) max((arr_41 [i_0] [i_5] [i_5] [i_13] [i_14]), ((short)-1)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_28 = ((/* implicit */int) max((((/* implicit */short) ((signed char) ((unsigned int) var_1)))), (((short) (unsigned short)15316))));
    }
    for (unsigned char i_15 = 2; i_15 < 22; i_15 += 3) 
    {
        arr_51 [i_15] = ((/* implicit */short) ((int) ((((/* implicit */long long int) ((/* implicit */int) var_5))) | (((-7469667787264036591LL) - (((/* implicit */long long int) ((/* implicit */int) (signed char)74))))))));
        var_29 = ((/* implicit */signed char) -1491617386);
        var_30 = ((/* implicit */unsigned int) arr_48 [i_15 + 1]);
        arr_52 [i_15 - 2] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_7)))) / ((+(arr_48 [i_15 - 1])))));
    }
    var_31 = ((/* implicit */signed char) (-(((/* implicit */int) ((short) (unsigned char)255)))));
}
