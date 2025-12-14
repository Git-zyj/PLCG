/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172523
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172523 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172523
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
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (unsigned short i_1 = 3; i_1 < 7; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 11; i_2 += 4) 
            {
                {
                    var_17 = ((/* implicit */unsigned long long int) (unsigned char)153);
                    var_18 = ((long long int) ((((/* implicit */_Bool) arr_4 [i_1 + 2] [i_1 + 4])) || (((/* implicit */_Bool) arr_4 [i_1 + 2] [i_1 + 4]))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */short) ((((/* implicit */int) ((unsigned char) (unsigned char)194))) <= (((((/* implicit */_Bool) 9U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))));
    /* LoopSeq 3 */
    for (unsigned short i_3 = 0; i_3 < 14; i_3 += 4) 
    {
        var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned short) var_11))) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_10 [i_3] [i_3])) != (((/* implicit */int) arr_10 [i_3] [i_3]))))))));
        /* LoopSeq 1 */
        for (unsigned char i_4 = 0; i_4 < 14; i_4 += 4) 
        {
            var_21 = ((/* implicit */signed char) ((short) 0U));
            var_22 = ((/* implicit */long long int) (+(((/* implicit */int) min(((_Bool)1), (arr_10 [i_3] [i_4]))))));
        }
        var_23 += ((/* implicit */short) arr_10 [i_3] [i_3]);
        var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_9 [i_3] [i_3]) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [(unsigned char)0])))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_12 [i_3]))));
    }
    for (unsigned short i_5 = 0; i_5 < 21; i_5 += 3) 
    {
        var_25 = ((/* implicit */unsigned long long int) min(((unsigned char)201), ((unsigned char)169)));
        /* LoopSeq 2 */
        for (long long int i_6 = 0; i_6 < 21; i_6 += 4) 
        {
            var_26 = ((/* implicit */long long int) (-(((/* implicit */int) max(((_Bool)1), ((_Bool)1))))));
            var_27 = ((unsigned short) ((unsigned int) ((short) (short)-19620)));
        }
        /* vectorizable */
        for (long long int i_7 = 3; i_7 < 20; i_7 += 4) 
        {
            var_28 = ((/* implicit */unsigned int) (short)12827);
            /* LoopNest 2 */
            for (signed char i_8 = 1; i_8 < 19; i_8 += 2) 
            {
                for (long long int i_9 = 0; i_9 < 21; i_9 += 2) 
                {
                    {
                        var_29 = ((/* implicit */long long int) arr_17 [i_9] [i_7 - 1]);
                        var_30 = ((/* implicit */long long int) (_Bool)1);
                        var_31 &= ((/* implicit */signed char) arr_17 [i_7] [i_7 - 3]);
                        /* LoopSeq 2 */
                        for (unsigned char i_10 = 1; i_10 < 19; i_10 += 2) 
                        {
                            var_32 = ((/* implicit */short) ((((/* implicit */int) ((unsigned char) (_Bool)1))) >= (((/* implicit */int) (short)-14483))));
                            var_33 += ((/* implicit */unsigned char) var_3);
                            var_34 *= ((/* implicit */unsigned char) (-9223372036854775807LL - 1LL));
                            var_35 = ((/* implicit */unsigned int) ((unsigned long long int) arr_17 [i_7] [i_8 + 2]));
                        }
                        for (unsigned short i_11 = 4; i_11 < 18; i_11 += 4) 
                        {
                            var_36 = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_20 [i_11] [i_11 + 2]))));
                            var_37 = ((/* implicit */unsigned long long int) arr_23 [i_7] [i_7] [i_7] [i_8]);
                        }
                        var_38 = ((/* implicit */long long int) ((short) ((unsigned short) arr_20 [i_7] [i_9])));
                    }
                } 
            } 
        }
    }
    for (short i_12 = 1; i_12 < 17; i_12 += 2) 
    {
        var_39 = (+(min((((/* implicit */unsigned long long int) ((unsigned char) (_Bool)1))), (var_7))));
        var_40 = ((/* implicit */unsigned short) ((signed char) arr_18 [i_12 + 1]));
        var_41 = ((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */_Bool) min((18446744073709551613ULL), (var_4)))) ? (((((/* implicit */int) arr_24 [i_12] [i_12] [i_12])) >> (((var_5) - (118801185070638008ULL))))) : (((/* implicit */int) var_12)))));
        var_42 = ((/* implicit */long long int) (-(((/* implicit */int) max((arr_32 [i_12 + 1] [i_12 + 1] [i_12 - 1] [(unsigned char)19] [i_12]), (arr_32 [i_12] [i_12 + 1] [(short)6] [i_12 - 1] [i_12 - 1]))))));
        var_43 = ((/* implicit */long long int) min((((((/* implicit */_Bool) arr_24 [i_12 + 1] [i_12 + 1] [i_12 - 1])) ? (((/* implicit */int) arr_20 [i_12 + 1] [i_12 - 1])) : (((/* implicit */int) arr_24 [i_12 - 1] [i_12 - 1] [i_12 - 1])))), (((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) arr_24 [i_12 + 1] [i_12 + 1] [i_12 - 1]))))));
    }
    var_44 += ((/* implicit */short) var_12);
}
