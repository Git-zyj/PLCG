/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114365
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114365 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114365
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
    var_15 = ((/* implicit */unsigned int) (~(((/* implicit */int) var_4))));
    /* LoopSeq 4 */
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        var_16 = ((/* implicit */int) var_8);
        var_17 = ((/* implicit */long long int) min(((!(((/* implicit */_Bool) arr_1 [15ULL] [i_0])))), ((!(((/* implicit */_Bool) arr_0 [i_0] [i_0]))))));
        arr_2 [i_0] [16ULL] = ((/* implicit */signed char) (+((~(min((((/* implicit */unsigned int) (signed char)-99)), (3106140772U)))))));
    }
    for (unsigned int i_1 = 0; i_1 < 12; i_1 += 4) 
    {
        arr_7 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((var_4), (var_3)))) ? (((/* implicit */long long int) (-(((/* implicit */int) arr_0 [i_1] [i_1]))))) : (((var_9) - (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1] [i_1])))))));
        var_18 = ((/* implicit */unsigned short) (+(var_0)));
        var_19 += ((/* implicit */unsigned short) min((min((((((/* implicit */unsigned int) ((/* implicit */int) var_3))) * (var_6))), (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)58738))))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-126)) ? (((/* implicit */int) (signed char)113)) : (((/* implicit */int) (unsigned short)45900)))))));
        arr_8 [i_1] = ((/* implicit */unsigned int) (-(((/* implicit */int) ((unsigned short) var_8)))));
    }
    for (signed char i_2 = 0; i_2 < 21; i_2 += 4) 
    {
        /* LoopSeq 2 */
        for (long long int i_3 = 0; i_3 < 21; i_3 += 4) 
        {
            var_20 = ((/* implicit */unsigned int) arr_9 [i_2] [i_3]);
            var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_3])) ? (var_6) : (max((167375680U), (((/* implicit */unsigned int) var_12))))))) ? (((/* implicit */int) (unsigned short)45899)) : ((-(((/* implicit */int) (signed char)121)))))))));
            arr_14 [i_3] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_2] [i_3])) ? (((((/* implicit */_Bool) 1188826513U)) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) var_4))))) : (((/* implicit */unsigned int) ((((((/* implicit */int) var_12)) + (2147483647))) >> (((((/* implicit */int) (unsigned short)14346)) - (14339))))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-32))) : (((max((3789456859U), (((/* implicit */unsigned int) (short)32627)))) - (((/* implicit */unsigned int) arr_13 [i_2])))));
        }
        /* vectorizable */
        for (unsigned int i_4 = 0; i_4 < 21; i_4 += 3) 
        {
            var_22 = ((/* implicit */unsigned short) ((((/* implicit */int) (signed char)-111)) | (arr_13 [i_2])));
            var_23 = ((/* implicit */unsigned long long int) var_14);
        }
        /* LoopNest 2 */
        for (unsigned int i_5 = 0; i_5 < 21; i_5 += 2) 
        {
            for (unsigned int i_6 = 4; i_6 < 18; i_6 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (signed char i_7 = 0; i_7 < 21; i_7 += 1) 
                    {
                        arr_27 [i_2] &= ((/* implicit */unsigned short) max(((short)-32651), (((/* implicit */short) (_Bool)0))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned long long int i_8 = 2; i_8 < 20; i_8 += 3) 
                        {
                            arr_31 [i_6] [i_6] [i_6] [i_5] [i_6] &= ((((/* implicit */_Bool) var_7)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) var_4))));
                            var_24 = ((/* implicit */unsigned long long int) arr_29 [i_6 - 2] [i_6 - 2] [i_6 + 2]);
                            arr_32 [(short)3] [(unsigned short)18] [(unsigned short)18] [i_7] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)19652)) ? (8616571436344701792LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)81)))));
                        }
                        arr_33 [i_7] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned short) var_7))) ? (((/* implicit */unsigned long long int) 3926505680U)) : (min((((/* implicit */unsigned long long int) (+(var_9)))), (max((((/* implicit */unsigned long long int) var_4)), (arr_12 [i_7] [i_5])))))));
                    }
                    var_25 = ((/* implicit */unsigned int) 12393493631605886879ULL);
                    var_26 += ((/* implicit */long long int) (~(((/* implicit */int) (signed char)-110))));
                    var_27 = ((((/* implicit */_Bool) (~(var_6)))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) + (2246559837893261075ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min(((short)-4255), (((/* implicit */short) (_Bool)0))))) ? ((~(3188730147U))) : (((/* implicit */unsigned int) ((/* implicit */int) (!((_Bool)1)))))))));
                }
            } 
        } 
        var_28 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_14)) ? ((+(min((8522535054111219000LL), (((/* implicit */long long int) 1600073212U)))))) : (var_9)));
        var_29 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (-(1106237140U)))), (((12393493631605886879ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)160)))))));
        arr_34 [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) min((-3613006419414866267LL), (5466078165752885134LL)))) ? (((/* implicit */unsigned long long int) (~(arr_18 [i_2] [6U] [(_Bool)1])))) : (min((max((2246559837893261075ULL), (((/* implicit */unsigned long long int) (unsigned short)55102)))), (((/* implicit */unsigned long long int) (~(var_7))))))));
    }
    for (long long int i_9 = 1; i_9 < 24; i_9 += 3) 
    {
        var_30 = (!(((/* implicit */_Bool) min((6053250442103664726ULL), (((/* implicit */unsigned long long int) arr_36 [i_9 - 1]))))));
        var_31 ^= ((/* implicit */signed char) min((((((/* implicit */_Bool) 660408995U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (3642274324U))), (((/* implicit */unsigned int) (~(((/* implicit */int) arr_35 [i_9 - 1] [i_9 - 1])))))));
        var_32 *= ((/* implicit */_Bool) (~(var_8)));
        arr_38 [15LL] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((arr_37 [i_9 - 1]) | (3188730171U)))), (((((/* implicit */_Bool) (signed char)-124)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)76))) : (12393493631605886874ULL)))));
    }
}
