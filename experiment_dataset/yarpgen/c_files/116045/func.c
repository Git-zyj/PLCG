/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116045
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116045 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116045
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
    var_20 = 1414969654U;
    /* LoopSeq 3 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        arr_3 [7U] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_13)) ? (arr_1 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0])))));
        var_21 ^= ((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_0] [i_0])) % (((/* implicit */int) arr_2 [i_0] [i_0]))));
        arr_4 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (unsigned char)180)) : (var_15)));
        var_22 |= ((/* implicit */_Bool) (+((~(var_11)))));
    }
    for (unsigned int i_1 = 0; i_1 < 24; i_1 += 4) 
    {
        var_23 -= ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) arr_6 [i_1])))) ? (((((/* implicit */int) (unsigned char)142)) % (((/* implicit */int) arr_6 [i_1])))) : (((((/* implicit */int) arr_6 [i_1])) + (((/* implicit */int) arr_6 [i_1]))))));
        var_24 += ((4095U) >> (((((/* implicit */int) arr_6 [i_1])) - ((+(((/* implicit */int) arr_6 [i_1])))))));
        var_25 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_5 [i_1])) ? (arr_5 [i_1]) : (arr_5 [i_1]))) > ((-(((/* implicit */int) (unsigned char)252))))));
        arr_7 [i_1] [i_1] = ((/* implicit */signed char) max((((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_1])) && (((/* implicit */_Bool) arr_5 [i_1]))))), (max((((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */int) (unsigned short)23362)) : (((/* implicit */int) var_0)))), (arr_5 [i_1])))));
    }
    for (unsigned int i_2 = 1; i_2 < 21; i_2 += 4) 
    {
        arr_10 [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_18) - (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)129))))))))) ? (((/* implicit */long long int) (-(((((/* implicit */_Bool) arr_9 [i_2] [i_2])) ? (((/* implicit */int) var_0)) : (arr_5 [i_2])))))) : (((((/* implicit */_Bool) arr_9 [(signed char)0] [i_2 + 1])) ? (arr_9 [i_2] [i_2 - 1]) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_2] [i_2 - 1])))))));
        /* LoopNest 3 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            for (unsigned char i_4 = 3; i_4 < 20; i_4 += 2) 
            {
                for (unsigned char i_5 = 0; i_5 < 22; i_5 += 3) 
                {
                    {
                        arr_21 [(unsigned char)2] [(unsigned char)2] [i_4] [i_5] = ((/* implicit */unsigned int) (unsigned char)114);
                        /* LoopSeq 2 */
                        for (int i_6 = 0; i_6 < 22; i_6 += 4) 
                        {
                            var_26 = ((/* implicit */unsigned char) max((max((min((var_19), (((/* implicit */unsigned int) var_12)))), (((/* implicit */unsigned int) (_Bool)1)))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((arr_5 [(unsigned char)7]), (((/* implicit */int) (unsigned char)142))))) ? (((/* implicit */int) ((var_11) > (((/* implicit */long long int) ((/* implicit */int) (unsigned char)142)))))) : ((~(((/* implicit */int) (unsigned char)142)))))))));
                            var_27 = ((/* implicit */unsigned char) arr_8 [i_4 - 3] [i_2 - 1]);
                            var_28 = ((/* implicit */_Bool) ((((/* implicit */long long int) min((1014227471U), (((/* implicit */unsigned int) (unsigned char)148))))) * (((((/* implicit */_Bool) (unsigned char)252)) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_16 [i_2] [i_3] [i_5] [15])))))) : (((var_11) | (((/* implicit */long long int) ((/* implicit */int) arr_24 [i_2] [i_3] [(signed char)0] [(signed char)4] [i_6])))))))));
                        }
                        /* vectorizable */
                        for (short i_7 = 0; i_7 < 22; i_7 += 2) 
                        {
                            var_29 = ((/* implicit */unsigned int) var_10);
                            var_30 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_24 [8U] [i_3] [i_4 - 1] [i_5] [(short)20]))))) ? (((var_10) * (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))) : (((/* implicit */unsigned long long int) arr_13 [i_5]))));
                        }
                        var_31 ^= ((/* implicit */long long int) var_18);
                    }
                } 
            } 
        } 
    }
    /* LoopNest 2 */
    for (signed char i_8 = 0; i_8 < 19; i_8 += 4) 
    {
        for (unsigned int i_9 = 1; i_9 < 17; i_9 += 2) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned int i_10 = 2; i_10 < 17; i_10 += 4) 
                {
                    arr_37 [i_10] [i_9] [i_8] [i_8] = ((/* implicit */unsigned int) (unsigned char)71);
                    arr_38 [(_Bool)1] [i_9] [(_Bool)1] [(_Bool)1] = ((/* implicit */_Bool) ((max((((/* implicit */unsigned long long int) arr_9 [i_9 + 1] [i_9 + 2])), (7012518709433823391ULL))) % (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (signed char)38))))));
                }
                for (int i_11 = 0; i_11 < 19; i_11 += 2) 
                {
                    var_32 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) 694943992821940244LL)) ? (max((((/* implicit */int) min((var_17), ((unsigned char)0)))), (((((/* implicit */_Bool) arr_33 [i_9] [i_9])) ? (((/* implicit */int) arr_34 [i_8] [i_9 + 1] [15U])) : (((/* implicit */int) arr_6 [i_11])))))) : (((/* implicit */int) arr_34 [i_8] [i_8] [(_Bool)1]))));
                    arr_43 [i_8] [i_8] [i_8] [i_8] = ((/* implicit */_Bool) max(((-((-(751757638U))))), (((/* implicit */unsigned int) min(((-(((/* implicit */int) arr_41 [18] [i_9] [6U] [i_11])))), (((/* implicit */int) ((unsigned short) arr_33 [i_11] [(unsigned char)5]))))))));
                    /* LoopSeq 1 */
                    for (short i_12 = 3; i_12 < 18; i_12 += 2) 
                    {
                        var_33 = ((/* implicit */unsigned char) arr_39 [i_9] [(unsigned short)17]);
                        var_34 -= ((/* implicit */int) (unsigned char)114);
                    }
                }
                var_35 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */long long int) ((((/* implicit */int) var_2)) / (((/* implicit */int) arr_15 [i_8] [(unsigned short)4] [i_9]))))) : (((arr_9 [i_8] [i_9 + 2]) + (((/* implicit */long long int) var_18))))))) ? (((/* implicit */unsigned long long int) (+(arr_20 [i_8] [i_8] [i_8] [i_9 + 2] [i_9 + 1])))) : (((((/* implicit */_Bool) max((((/* implicit */unsigned short) (signed char)-101)), ((unsigned short)32767)))) ? (((/* implicit */unsigned long long int) ((var_13) - (3280739824U)))) : (var_10)))));
                var_36 = ((/* implicit */long long int) var_2);
            }
        } 
    } 
    var_37 = ((/* implicit */unsigned long long int) var_13);
    var_38 = ((/* implicit */int) var_9);
}
