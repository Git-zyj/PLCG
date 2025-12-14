/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165259
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165259 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165259
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
    var_10 += ((/* implicit */signed char) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) -718087875)), (min((var_6), (((/* implicit */unsigned long long int) -718087882)))))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 3; i_0 < 19; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */signed char) (((!(((/* implicit */_Bool) ((((/* implicit */int) (short)-32762)) ^ (((/* implicit */int) (short)-15678))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_2 [i_0] [i_0]))))) ? (min((4611686018427387904ULL), (((/* implicit */unsigned long long int) arr_1 [i_0] [i_0])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_0]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [(signed char)15])))));
        var_11 = ((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0] [i_0]))))) ^ (((((/* implicit */_Bool) -718087870)) ? (((/* implicit */int) (short)-7209)) : (((/* implicit */int) (short)-32763))))));
        var_12 = ((/* implicit */signed char) min((var_12), (((/* implicit */signed char) ((unsigned short) 718087904)))));
    }
    /* LoopNest 2 */
    for (signed char i_1 = 0; i_1 < 23; i_1 += 4) 
    {
        for (int i_2 = 0; i_2 < 23; i_2 += 4) 
        {
            {
                arr_9 [i_1] [i_2] = ((/* implicit */signed char) max((arr_5 [i_1] [i_1]), (((/* implicit */unsigned long long int) -281588690))));
                /* LoopSeq 1 */
                for (unsigned short i_3 = 1; i_3 < 22; i_3 += 4) 
                {
                    arr_14 [11U] = ((/* implicit */unsigned short) arr_8 [i_1] [i_3] [i_2]);
                    var_13 = ((/* implicit */int) (~(((((/* implicit */_Bool) arr_8 [i_3] [i_3] [i_3 + 1])) ? (arr_8 [i_3] [i_3] [i_3 - 1]) : (((/* implicit */long long int) ((/* implicit */int) var_3)))))));
                    /* LoopSeq 2 */
                    for (int i_4 = 3; i_4 < 22; i_4 += 4) 
                    {
                        var_14 = ((/* implicit */unsigned char) (-2147483647 - 1));
                        var_15 = ((/* implicit */signed char) ((((/* implicit */int) arr_11 [i_1])) & (((((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) arr_17 [i_2] [i_2])))) ? (((/* implicit */int) arr_17 [i_2] [i_2])) : (min((arr_7 [i_1] [i_2] [i_3]), (((/* implicit */int) arr_17 [i_1] [i_2]))))))));
                    }
                    /* vectorizable */
                    for (unsigned char i_5 = 2; i_5 < 20; i_5 += 4) 
                    {
                        var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? ((~(718087904))) : (((/* implicit */int) arr_15 [i_3 + 1] [i_3 - 1] [i_5 - 1]))));
                        var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(-663629010)))) ? (((arr_8 [i_1] [i_2] [i_3]) / (((/* implicit */long long int) ((/* implicit */int) arr_15 [8] [i_2] [i_2]))))) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_1])))));
                        var_18 = ((/* implicit */signed char) (-(((/* implicit */int) (!(((/* implicit */_Bool) 399529944U)))))));
                        arr_20 [i_1] [i_1] [i_3] [i_5] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (243394529U) : (2014842666U)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_2])) ? (((/* implicit */unsigned long long int) arr_13 [i_2])) : (var_6))))));
                    }
                    var_19 = ((/* implicit */unsigned char) ((((/* implicit */int) (short)32761)) >> (((arr_13 [i_1]) - (3609928611U)))));
                }
            }
        } 
    } 
}
