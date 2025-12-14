/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119400
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119400 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119400
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
    var_20 = ((/* implicit */signed char) var_1);
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        arr_3 [5U] = ((/* implicit */long long int) var_7);
        /* LoopNest 3 */
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            for (unsigned char i_2 = 3; i_2 < 18; i_2 += 4) 
            {
                for (unsigned short i_3 = 0; i_3 < 20; i_3 += 4) 
                {
                    {
                        arr_11 [i_3] [i_2] [18] [i_0] = ((/* implicit */long long int) var_12);
                        /* LoopSeq 4 */
                        /* vectorizable */
                        for (short i_4 = 2; i_4 < 18; i_4 += 4) 
                        {
                            var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) ((((/* implicit */_Bool) ((unsigned char) arr_2 [i_4]))) ? (arr_4 [i_2 - 1] [i_4 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_1] [i_4])))))))))));
                            var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) ((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_7 [i_3] [i_1] [i_2])))) / (((/* implicit */int) arr_12 [i_0] [0LL] [2U] [(unsigned short)13] [i_0] [8LL])))))));
                            var_23 = ((/* implicit */int) ((unsigned long long int) arr_6 [i_2 - 3] [i_2 + 1] [i_2 + 2]));
                            var_24 = ((/* implicit */unsigned short) arr_8 [i_2] [i_2 - 3] [i_4 - 1]);
                        }
                        for (unsigned short i_5 = 0; i_5 < 20; i_5 += 1) 
                        {
                            var_25 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 10364170437156680534ULL))));
                            var_26 = ((/* implicit */long long int) var_11);
                            var_27 *= ((/* implicit */unsigned long long int) min(((-(((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-5377))) : (arr_4 [i_5] [i_0]))))), (((/* implicit */unsigned int) ((((16182305954687309986ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_16))))) ? (((/* implicit */int) max((var_15), (((/* implicit */unsigned short) arr_12 [i_5] [i_0] [i_0] [i_0] [i_1] [i_0]))))) : ((-(((/* implicit */int) var_1)))))))));
                        }
                        for (short i_6 = 1; i_6 < 18; i_6 += 1) 
                        {
                            arr_19 [i_0] [i_1] [i_2 - 1] [i_1] = ((/* implicit */unsigned short) arr_18 [(short)13] [i_3] [(_Bool)0] [(_Bool)0] [(short)13]);
                            var_28 = ((/* implicit */short) var_2);
                        }
                        /* vectorizable */
                        for (int i_7 = 0; i_7 < 20; i_7 += 4) 
                        {
                            var_29 = ((/* implicit */unsigned int) ((((/* implicit */int) var_15)) == (((/* implicit */int) arr_12 [i_2 - 3] [i_2 - 3] [i_2] [i_2] [i_2] [i_2 - 3]))));
                            var_30 = ((/* implicit */short) ((((/* implicit */_Bool) arr_10 [i_0] [(unsigned char)3] [i_0] [i_3])) ? ((~(arr_13 [i_3] [i_3] [i_3] [i_3] [14ULL]))) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))));
                            var_31 = ((/* implicit */long long int) (unsigned short)0);
                            arr_22 [i_0] [9ULL] [i_2] [i_3] [i_7] = ((/* implicit */long long int) ((2264438119022241629ULL) << (((arr_13 [i_2 + 2] [i_2 - 2] [i_2 + 1] [i_7] [i_7]) - (462353391U)))));
                        }
                    }
                } 
            } 
        } 
        arr_23 [i_0] = ((/* implicit */int) arr_16 [(unsigned char)12] [(unsigned char)12]);
        arr_24 [i_0] = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) (-(-831748094)))) ? (((/* implicit */long long int) min((1920169762), (((/* implicit */int) var_15))))) : (((arr_5 [i_0] [i_0]) / (arr_0 [i_0] [i_0])))))));
    }
}
