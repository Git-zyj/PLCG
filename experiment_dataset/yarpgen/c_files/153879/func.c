/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153879
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153879 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153879
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
    for (int i_0 = 3; i_0 < 14; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (signed char i_2 = 0; i_2 < 16; i_2 += 3) 
                {
                    arr_7 [i_2] [i_1] [i_2] = ((/* implicit */short) arr_2 [i_0]);
                    arr_8 [i_0] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((signed char) var_15))), (var_2)))) ? (((arr_2 [i_0 - 2]) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1] [i_2] [i_2]))))) : (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) (short)31020)) ? (((/* implicit */int) (short)480)) : (((/* implicit */int) arr_0 [i_0 + 2])))), (min((((/* implicit */int) (short)6930)), (var_4))))))));
                    var_20 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) (-(((((/* implicit */int) var_16)) >> (((((/* implicit */int) (unsigned short)17629)) - (17629)))))))) < ((-(arr_2 [i_0 + 2])))));
                    arr_9 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */_Bool) min((((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_2])) >> (((var_5) - (4906064261718336749LL)))))) ? (((/* implicit */int) arr_1 [i_0 - 1])) : (((/* implicit */int) (unsigned char)243)))), (((/* implicit */int) ((short) (signed char)(-127 - 1))))));
                    var_21 = ((/* implicit */short) ((((((/* implicit */_Bool) ((-9223372036854775804LL) ^ (((/* implicit */long long int) ((/* implicit */int) var_15)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)6930))) : (((var_9) & (((/* implicit */unsigned int) ((/* implicit */int) var_15))))))) & (((/* implicit */unsigned int) ((((/* implicit */int) arr_3 [i_0] [i_0 - 3] [i_2])) & (var_10))))));
                }
                arr_10 [(short)0] = ((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) var_14)) ? (var_8) : (((/* implicit */unsigned long long int) ((var_1) ? (((/* implicit */int) (signed char)-106)) : (((/* implicit */int) arr_0 [i_1]))))))));
            }
        } 
    } 
    /* LoopSeq 4 */
    for (int i_3 = 4; i_3 < 20; i_3 += 2) 
    {
        var_22 = ((/* implicit */short) (+(((/* implicit */int) ((signed char) 3183508792119237905ULL)))));
        arr_13 [i_3] = ((/* implicit */short) arr_11 [i_3]);
    }
    for (unsigned char i_4 = 0; i_4 < 10; i_4 += 2) 
    {
        var_23 ^= ((/* implicit */unsigned char) (-(min((var_14), (((/* implicit */long long int) var_1))))));
        var_24 = ((/* implicit */int) max((var_24), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_15)) & (((/* implicit */int) arr_16 [i_4]))))) ? (((((/* implicit */_Bool) -3494386417806389697LL)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_13)))) : (((/* implicit */int) var_19))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_4]))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [(_Bool)1]))) | (max((var_2), (((/* implicit */unsigned long long int) var_1)))))))))));
    }
    for (unsigned long long int i_5 = 0; i_5 < 11; i_5 += 3) 
    {
        arr_19 [i_5] = ((((/* implicit */unsigned int) ((/* implicit */int) ((9223372036854775799LL) <= (((/* implicit */long long int) (-(((/* implicit */int) (_Bool)0))))))))) * (max((4088U), (((/* implicit */unsigned int) (short)32759)))));
        var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_1 [i_5])) ? (3995549384U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)103))))), (((/* implicit */unsigned int) var_10)))))));
    }
    /* vectorizable */
    for (unsigned char i_6 = 3; i_6 < 11; i_6 += 1) 
    {
        /* LoopSeq 1 */
        for (int i_7 = 2; i_7 < 14; i_7 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned short i_8 = 1; i_8 < 12; i_8 += 2) 
            {
                for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
                {
                    {
                        arr_32 [i_8] [i_6 - 2] [i_8] [i_9] = ((arr_2 [i_6 - 3]) < (((/* implicit */unsigned long long int) ((int) arr_27 [i_8] [(short)8]))));
                        arr_33 [i_8] [(signed char)3] [i_7] [i_7] [i_7] [i_8] = ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_19)) != (((/* implicit */int) var_12)))))) % (((((/* implicit */_Bool) var_19)) ? (var_5) : (var_14))));
                    }
                } 
            } 
            /* LoopNest 3 */
            for (signed char i_10 = 0; i_10 < 15; i_10 += 2) 
            {
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    for (_Bool i_12 = 0; i_12 < 0; i_12 += 1) 
                    {
                        {
                            var_26 = (~(arr_26 [i_6 - 1] [i_7] [i_6 + 4] [i_12 + 1]));
                            var_27 = ((/* implicit */unsigned short) var_11);
                            arr_43 [i_6] [i_7] [i_10] [i_11] [i_11] [i_12] [i_12] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_20 [i_7 - 1] [i_12 + 1])) >> (((((/* implicit */int) arr_25 [i_6 + 4])) - (4716)))));
                            arr_44 [i_6 + 3] [14U] [11ULL] [i_11] [i_12] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(-9223372036854775804LL)))) ? (((/* implicit */int) arr_25 [i_6])) : (((((/* implicit */int) var_1)) | (((/* implicit */int) var_7))))));
                        }
                    } 
                } 
            } 
            arr_45 [i_7] [(_Bool)1] |= ((/* implicit */signed char) var_7);
        }
        arr_46 [i_6] = ((/* implicit */int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (arr_21 [i_6 + 1])));
    }
    var_28 = ((/* implicit */_Bool) min((var_3), (((/* implicit */unsigned long long int) var_4))));
    var_29 = ((/* implicit */_Bool) (~(min((((((/* implicit */int) (signed char)-106)) | (((/* implicit */int) (signed char)110)))), (((((((/* implicit */int) (signed char)-121)) + (2147483647))) >> (((((/* implicit */int) var_19)) + (121)))))))));
}
