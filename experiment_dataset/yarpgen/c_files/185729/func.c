/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185729
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185729 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185729
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
    var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) (unsigned char)162))));
    var_18 = ((/* implicit */long long int) var_12);
    /* LoopSeq 1 */
    for (unsigned short i_0 = 1; i_0 < 12; i_0 += 1) 
    {
        /* LoopSeq 3 */
        for (unsigned short i_1 = 1; i_1 < 13; i_1 += 4) 
        {
            arr_4 [5LL] [(unsigned short)8] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) var_1)) - (((/* implicit */int) arr_3 [i_0]))));
            /* LoopSeq 1 */
            for (unsigned short i_2 = 0; i_2 < 14; i_2 += 1) 
            {
                arr_9 [i_0] [i_1] [i_0] [i_2] = ((/* implicit */unsigned char) (unsigned short)24027);
                arr_10 [i_0] [i_1] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) max(((unsigned short)58278), (min((arr_6 [i_0] [i_0] [i_0]), (((/* implicit */unsigned short) arr_8 [i_0] [i_1] [i_2] [i_2])))))))));
            }
            arr_11 [i_0] [i_0] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)235))))) ? ((+(((/* implicit */int) arr_7 [i_1 + 1] [i_0] [i_0 - 1])))) : (((/* implicit */int) arr_7 [i_1 + 1] [i_0] [i_0 + 1]))));
            /* LoopNest 2 */
            for (unsigned char i_3 = 0; i_3 < 14; i_3 += 1) 
            {
                for (unsigned char i_4 = 0; i_4 < 14; i_4 += 2) 
                {
                    {
                        var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) max((((((/* implicit */_Bool) (unsigned char)94)) ? (((/* implicit */int) ((((/* implicit */int) (unsigned short)7)) >= (((/* implicit */int) arr_1 [i_0] [i_4]))))) : (((/* implicit */int) min((arr_16 [2LL] [i_4] [i_3] [i_4]), (var_3)))))), (((/* implicit */int) (unsigned char)48)))))));
                        var_20 = ((/* implicit */unsigned short) var_11);
                        arr_18 [i_0] [i_1] [i_1] [(unsigned char)1] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)240))))) ? (((((/* implicit */_Bool) (unsigned short)53325)) ? (((/* implicit */int) arr_13 [(unsigned short)7])) : (((/* implicit */int) min((arr_1 [i_0] [i_0]), (((/* implicit */unsigned short) (unsigned char)78))))))) : (((/* implicit */int) min((arr_0 [i_0]), (arr_0 [i_0]))))));
                        arr_19 [i_0 + 1] [i_0] [i_1] [i_0] [i_0 + 1] [i_4] = arr_6 [i_0 - 1] [i_1 + 1] [i_1];
                        var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) (~(((/* implicit */int) arr_7 [i_0 + 2] [i_4] [i_0 + 2])))))));
                    }
                } 
            } 
            arr_20 [i_1] [i_0] [i_0] = arr_3 [i_0];
        }
        for (unsigned short i_5 = 1; i_5 < 13; i_5 += 4) 
        {
            var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) var_6))));
            arr_23 [i_0] [i_5 + 1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */long long int) (unsigned short)21704)), (arr_22 [i_5])))) ? (((((/* implicit */int) (unsigned short)52716)) + (((/* implicit */int) arr_1 [i_0] [i_0])))) : ((+(((/* implicit */int) (unsigned short)217))))))) ? (((((/* implicit */_Bool) (unsigned char)160)) ? (((/* implicit */int) (unsigned char)90)) : (((/* implicit */int) (unsigned short)45762)))) : (((((/* implicit */_Bool) (unsigned short)28058)) ? (((/* implicit */int) arr_16 [i_0] [i_0] [(unsigned char)12] [i_5])) : (((/* implicit */int) min((arr_8 [i_5 - 1] [i_5 - 1] [i_5] [i_0]), (arr_17 [12LL] [i_0]))))))));
        }
        for (long long int i_6 = 0; i_6 < 14; i_6 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned short i_7 = 0; i_7 < 14; i_7 += 4) 
            {
                for (unsigned short i_8 = 0; i_8 < 14; i_8 += 2) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_9 = 0; i_9 < 14; i_9 += 1) 
                        {
                            arr_34 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_31 [i_0])) ? (arr_31 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)123)))))) ? (arr_31 [i_0]) : (min((arr_31 [i_0]), (arr_31 [i_0])))));
                            arr_35 [i_0] = ((/* implicit */long long int) var_12);
                            arr_36 [i_0] [i_6] [i_7] [i_6] [i_7] [i_9] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_16)) ? (max((((/* implicit */long long int) arr_16 [i_0 + 2] [i_0] [i_7] [i_7])), (arr_31 [i_0]))) : (((/* implicit */long long int) (+(((/* implicit */int) min(((unsigned short)15), (((/* implicit */unsigned short) (unsigned char)241))))))))));
                            var_23 = ((/* implicit */unsigned char) min((var_23), ((unsigned char)165)));
                            arr_37 [i_0] [i_0] [i_6] [i_7] [(unsigned short)10] [i_0] = ((unsigned short) ((unsigned short) (+(((/* implicit */int) arr_3 [i_0])))));
                        }
                        /* LoopSeq 3 */
                        for (long long int i_10 = 1; i_10 < 13; i_10 += 1) 
                        {
                            var_24 = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_5 [i_0]))));
                            arr_40 [i_0] [i_8] [i_7] [i_6] [i_0] = ((/* implicit */unsigned short) max((((/* implicit */long long int) (!(((/* implicit */_Bool) max((-3035062318567869001LL), (((/* implicit */long long int) var_13)))))))), (min((((long long int) 22LL)), (((/* implicit */long long int) ((((/* implicit */int) var_10)) / (((/* implicit */int) var_13)))))))));
                            var_25 = ((/* implicit */unsigned char) ((max((((((/* implicit */long long int) ((/* implicit */int) var_1))) + (arr_26 [i_0] [i_6] [i_0]))), (max((-859879444966385696LL), (((/* implicit */long long int) (unsigned char)163)))))) != (((/* implicit */long long int) ((((/* implicit */_Bool) arr_8 [i_6] [i_10 - 1] [i_10 - 1] [12LL])) ? (((/* implicit */int) (unsigned short)31572)) : (((/* implicit */int) arr_8 [i_8] [i_10 + 1] [i_8] [i_10])))))));
                            arr_41 [i_0] [i_6] [i_0] [i_8] [i_10] = ((/* implicit */long long int) var_3);
                        }
                        for (long long int i_11 = 0; i_11 < 14; i_11 += 2) 
                        {
                            arr_44 [(unsigned short)5] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -2632238141435180802LL)) && (((/* implicit */_Bool) 1830471758627878246LL))));
                            var_26 = ((/* implicit */unsigned short) arr_17 [i_0] [i_6]);
                        }
                        for (long long int i_12 = 0; i_12 < 14; i_12 += 2) 
                        {
                            arr_47 [i_0] [i_8] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_39 [i_0] [(unsigned short)3] [i_8] [i_7] [11LL] [i_6] [i_0])) / (((((/* implicit */_Bool) (unsigned char)19)) ? (((/* implicit */int) (unsigned short)21684)) : (((/* implicit */int) (unsigned short)45371))))))) ? (max((((((/* implicit */long long int) ((/* implicit */int) arr_17 [i_0] [(unsigned short)13]))) / (7640289428971968711LL))), (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)16384)) / (((/* implicit */int) (unsigned short)49030))))))) : (((arr_25 [i_0] [(unsigned short)3]) / (min((((/* implicit */long long int) var_2)), (arr_14 [i_0] [i_6] [i_6] [i_6])))))));
                            arr_48 [i_12] [i_0] [i_7] [i_6] [i_0] [(unsigned short)12] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_21 [i_0 + 1] [i_0 + 1]) / (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_0 + 1] [i_0 + 1])))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)61672)) > (((/* implicit */int) arr_17 [i_0 - 1] [i_6])))))) : (0LL)));
                        }
                    }
                } 
            } 
            arr_49 [i_0] [i_6] [i_0] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) (unsigned short)65521)) ? (((((/* implicit */int) (unsigned short)11636)) * (((/* implicit */int) arr_7 [i_0] [i_0] [i_0])))) : ((-(((/* implicit */int) var_0)))))), (((/* implicit */int) (unsigned short)32768))));
            arr_50 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) arr_13 [i_0 - 1])) || (((/* implicit */_Bool) arr_13 [i_0 + 1])))), ((!(((/* implicit */_Bool) arr_13 [i_0 + 1]))))));
        }
        arr_51 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((arr_14 [i_0] [i_0 + 2] [i_0] [i_0]), (((((/* implicit */_Bool) (unsigned char)0)) ? (arr_14 [i_0] [i_0] [i_0] [7LL]) : (((/* implicit */long long int) ((/* implicit */int) var_3)))))))) ? (((/* implicit */int) (unsigned short)34501)) : (((/* implicit */int) arr_27 [i_0] [i_0] [i_0 - 1] [i_0]))));
    }
}
