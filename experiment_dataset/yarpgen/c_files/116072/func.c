/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116072
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116072 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116072
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            for (int i_2 = 1; i_2 < 17; i_2 += 1) 
            {
                {
                    arr_8 [0U] [i_1] [i_0] = ((/* implicit */signed char) arr_5 [i_1]);
                    var_10 = ((/* implicit */signed char) arr_1 [i_2 + 1] [i_2]);
                    arr_9 [i_0] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((max((((/* implicit */unsigned long long int) var_5)), (arr_1 [i_2] [i_0]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)16632)) ? (var_6) : (((/* implicit */int) arr_6 [i_0] [i_1] [i_1] [i_2])))))))) ? (((/* implicit */int) (short)16618)) : (((/* implicit */int) ((((/* implicit */_Bool) (signed char)127)) && (((/* implicit */_Bool) ((unsigned short) arr_1 [i_0] [i_1]))))))));
                    arr_10 [i_0] [i_1] [(_Bool)1] = ((/* implicit */long long int) (~(((((/* implicit */_Bool) ((unsigned char) var_0))) ? (((/* implicit */int) ((_Bool) arr_1 [i_0] [(signed char)16]))) : (((/* implicit */int) ((unsigned char) arr_1 [(signed char)5] [i_1])))))));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (int i_3 = 0; i_3 < 22; i_3 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned char i_4 = 0; i_4 < 22; i_4 += 3) 
        {
            for (unsigned char i_5 = 1; i_5 < 20; i_5 += 3) 
            {
                {
                    var_11 = ((/* implicit */unsigned short) min((var_11), (((/* implicit */unsigned short) ((arr_12 [(unsigned char)3]) + (((/* implicit */unsigned int) ((int) ((unsigned char) arr_19 [i_3])))))))));
                    var_12 = ((/* implicit */long long int) (~(((/* implicit */int) (signed char)124))));
                    /* LoopNest 2 */
                    for (signed char i_6 = 0; i_6 < 22; i_6 += 3) 
                    {
                        for (signed char i_7 = 0; i_7 < 22; i_7 += 2) 
                        {
                            {
                                var_13 ^= ((/* implicit */short) ((((/* implicit */_Bool) min((var_9), (((/* implicit */unsigned long long int) var_2))))) ? (((/* implicit */unsigned long long int) ((arr_15 [i_5 - 1] [i_6] [i_7]) >> (((arr_15 [i_5 + 2] [i_6] [i_7]) - (2687920963U)))))) : ((((~(var_9))) & (((/* implicit */unsigned long long int) arr_12 [i_3]))))));
                                var_14 = ((/* implicit */long long int) max((var_14), (((/* implicit */long long int) ((((/* implicit */_Bool) (-((-(2147483647)))))) ? (((((/* implicit */int) (signed char)127)) >> (((arr_18 [i_3] [2LL] [i_7] [i_7]) - (819876013))))) : (((int) ((((/* implicit */_Bool) 658313893779433552LL)) ? (((/* implicit */int) (unsigned short)0)) : (2147483647)))))))));
                                arr_25 [i_3] [i_4] [i_3] [i_6] [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) (signed char)-119)) ? (((/* implicit */int) arr_24 [i_3] [i_3] [i_3] [i_3])) : (((/* implicit */int) arr_24 [i_3] [i_3] [i_3] [i_3])))))) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_3) < (((/* implicit */int) ((_Bool) (signed char)-127)))))))));
                                arr_26 [i_3] [i_4] [i_5 + 2] [i_6] [i_7] [11LL] = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) min(((short)16632), (var_0))))))) ? ((-(((/* implicit */int) arr_16 [i_5 - 1] [i_4] [i_5] [i_6])))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_19 [i_5 - 1])))))));
                                var_15 = ((/* implicit */unsigned int) (short)16637);
                            }
                        } 
                    } 
                }
            } 
        } 
        var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) max(((!(((/* implicit */_Bool) ((((/* implicit */_Bool) -909514115210394305LL)) ? (((/* implicit */int) (short)-16638)) : (var_6)))))), ((!((!(((/* implicit */_Bool) var_5)))))))))));
        /* LoopNest 2 */
        for (signed char i_8 = 0; i_8 < 22; i_8 += 3) 
        {
            for (unsigned short i_9 = 1; i_9 < 21; i_9 += 2) 
            {
                {
                    var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) arr_12 [7LL]))));
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (long long int i_10 = 0; i_10 < 22; i_10 += 2) 
                    {
                        var_18 = ((/* implicit */unsigned char) ((((_Bool) var_0)) ? (((/* implicit */unsigned int) (-(((/* implicit */int) var_4))))) : ((+(arr_12 [i_8])))));
                        var_19 = ((/* implicit */unsigned long long int) var_1);
                    }
                    for (unsigned int i_11 = 4; i_11 < 21; i_11 += 2) /* same iter space */
                    {
                        arr_38 [i_3] [i_11] &= ((/* implicit */signed char) max((((/* implicit */long long int) ((int) ((((/* implicit */_Bool) -2147483647)) ? (((/* implicit */int) var_0)) : (var_6))))), (var_8)));
                        var_20 = ((/* implicit */short) min((var_20), (min(((short)-16638), ((short)-25682)))));
                    }
                    /* vectorizable */
                    for (unsigned int i_12 = 4; i_12 < 21; i_12 += 2) /* same iter space */
                    {
                        arr_41 [i_3] [i_8] [i_9] [(unsigned char)10] = ((/* implicit */short) (-(9970939176108202444ULL)));
                        var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) var_3))));
                        arr_42 [i_3] [i_3] [i_3] [i_3] = ((/* implicit */unsigned char) arr_23 [i_12] [i_12] [i_12 - 1] [i_12]);
                        var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_18 [i_9] [i_12 - 1] [i_12] [i_9 - 1])) ? (((/* implicit */int) arr_24 [i_3] [i_12 + 1] [i_12] [i_9 + 1])) : (arr_18 [i_3] [i_12 - 3] [i_12] [i_9 - 1])));
                    }
                    /* vectorizable */
                    for (short i_13 = 0; i_13 < 22; i_13 += 2) 
                    {
                        arr_45 [i_3] [i_8] = ((/* implicit */long long int) (((!(((/* implicit */_Bool) -658313893779433555LL)))) ? (((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_28 [(unsigned char)15] [i_8] [i_8])) + (2147483647))) >> (((var_3) - (1379645752)))))) : ((+(arr_37 [i_3] [5LL] [i_3] [i_3])))));
                        arr_46 [i_3] [i_8] [i_9] [i_13] = (~((+(var_7))));
                        var_23 = ((/* implicit */unsigned short) arr_19 [i_3]);
                    }
                    var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) (+(min((((/* implicit */long long int) var_6)), (var_8)))))) > ((~(((unsigned long long int) 941868899)))))))));
                }
            } 
        } 
    }
    var_25 = max((((/* implicit */long long int) ((_Bool) var_4))), (((((/* implicit */_Bool) (signed char)-114)) ? (max((var_1), (((/* implicit */long long int) var_5)))) : (((/* implicit */long long int) ((((/* implicit */int) var_4)) % (((/* implicit */int) var_4))))))));
    var_26 = ((/* implicit */signed char) var_4);
}
