/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177065
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177065 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177065
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
    var_13 = ((/* implicit */unsigned int) max((((/* implicit */int) var_9)), ((~(((/* implicit */int) var_6))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (signed char i_2 = 1; i_2 < 15; i_2 += 3) 
                {
                    for (int i_3 = 1; i_3 < 15; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 4; i_4 < 14; i_4 += 1) 
                        {
                            {
                                arr_16 [i_0] [i_0] [i_0] [i_0] = ((((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_15 [i_3] [i_3 - 1] [i_3] [i_3] [i_2])), (var_9)))) ? (((((/* implicit */_Bool) arr_14 [i_3 + 1] [i_3 + 1] [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_3 + 1])) ? (((/* implicit */int) arr_14 [i_3 + 1] [i_3 + 1] [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_3 + 1])) : (((/* implicit */int) arr_14 [i_3 + 1] [i_3 + 1] [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_3 + 1])))) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)246))) >= (arr_9 [i_4 - 4] [i_4 + 2] [i_0] [i_4])))));
                                var_14 = ((/* implicit */_Bool) (~((+(((/* implicit */int) (short)3993))))));
                            }
                        } 
                    } 
                } 
                arr_17 [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_1] [i_0] [i_0] [(unsigned short)14])) ? (((/* implicit */int) (short)14986)) : (((/* implicit */int) arr_15 [3U] [i_0] [i_1] [i_1] [i_1]))))) ? (max((arr_8 [(unsigned char)12] [i_1] [(_Bool)1] [i_1]), (((/* implicit */unsigned long long int) (unsigned short)4873)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)4010)) ? (arr_3 [i_0] [(signed char)8]) : (arr_1 [i_1])))))) * (((/* implicit */unsigned long long int) ((348769535U) / (arr_11 [i_0] [i_1] [i_0] [i_1] [i_1]))))));
                arr_18 [3U] [i_0] [i_1] = (~(arr_8 [i_1] [(_Bool)1] [(_Bool)1] [i_0]));
                /* LoopNest 3 */
                for (unsigned char i_5 = 0; i_5 < 16; i_5 += 3) 
                {
                    for (signed char i_6 = 0; i_6 < 16; i_6 += 1) 
                    {
                        for (unsigned int i_7 = 1; i_7 < 15; i_7 += 2) 
                        {
                            {
                                var_15 = ((/* implicit */int) (((+(var_5))) | (((/* implicit */unsigned int) ((/* implicit */int) var_9)))));
                                var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) ((((((/* implicit */_Bool) arr_24 [i_7] [i_7] [i_7 + 1] [i_7 + 1] [(unsigned char)15])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_0] [i_0] [3] [i_0] [i_0] [(unsigned char)11]))) : (arr_24 [i_0] [i_1] [i_5] [(unsigned short)13] [i_7 - 1]))) == (min((((arr_1 [15U]) & (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_6] [i_1] [i_6] [i_6]))))), (((/* implicit */unsigned int) (unsigned char)51)))))))));
                                arr_27 [i_0] [i_0] = ((/* implicit */unsigned char) (+(((((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0] [i_0]))) | (max((4133178539U), (((/* implicit */unsigned int) (short)10238))))))));
                                var_17 = ((/* implicit */short) (((!(((/* implicit */_Bool) arr_24 [i_7 - 1] [i_7 + 1] [i_7] [i_7] [i_7])))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 149800816)) ? (arr_9 [12ULL] [12ULL] [i_0] [12ULL]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)117))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
