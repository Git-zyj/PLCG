/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122684
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122684 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122684
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
    var_11 = ((/* implicit */long long int) min((((/* implicit */short) var_1)), (var_7)));
    var_12 = ((/* implicit */unsigned char) var_3);
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) arr_1 [i_0]))) ? (((((var_8) - (((/* implicit */long long int) ((/* implicit */int) arr_1 [8U]))))) + (((/* implicit */long long int) arr_0 [i_0])))) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) var_2)) : (var_8))))))));
        arr_2 [i_0] = ((/* implicit */short) (+((+(((var_9) / (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0])))))))));
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            arr_6 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned short) arr_0 [i_0]))) > (((arr_3 [i_1] [i_0] [i_0]) << (((arr_3 [i_0] [i_1] [i_0]) - (1084514018)))))));
            /* LoopSeq 1 */
            for (long long int i_2 = 2; i_2 < 7; i_2 += 4) 
            {
                var_14 += ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_5 [i_2 + 1])))))));
                /* LoopNest 2 */
                for (unsigned long long int i_3 = 0; i_3 < 10; i_3 += 1) 
                {
                    for (signed char i_4 = 0; i_4 < 10; i_4 += 2) 
                    {
                        {
                            var_15 = ((/* implicit */short) ((long long int) (((+(var_9))) != (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [8U]))) < (arr_11 [i_0] [(signed char)3] [(signed char)3] [(signed char)3] [i_3] [i_3] [(signed char)3]))))))));
                            var_16 *= ((/* implicit */unsigned short) arr_0 [i_0]);
                            var_17 *= ((/* implicit */unsigned long long int) ((var_8) / (((/* implicit */long long int) var_9))));
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (short i_5 = 0; i_5 < 10; i_5 += 2) 
                {
                    var_18 *= ((/* implicit */unsigned long long int) ((unsigned char) max((((/* implicit */unsigned long long int) 6471051178936596825LL)), (arr_11 [(unsigned char)4] [i_2] [i_2 + 2] [i_2] [i_2 + 1] [i_2] [i_2 + 1]))));
                    arr_15 [i_5] [i_5] [i_2 + 2] [i_0] [i_0] [7ULL] = ((/* implicit */long long int) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_2] [i_2 - 2])) ? (arr_9 [5ULL] [i_1] [i_2] [i_2] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_1])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_4 [i_0] [i_0])))) : (((unsigned long long int) arr_14 [(unsigned short)0] [7U] [i_1] [i_2 + 1] [i_5]))))));
                    var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) (+((+(arr_10 [i_2] [i_2 + 1] [i_2 + 2] [i_2 - 1]))))))));
                }
                for (short i_6 = 0; i_6 < 10; i_6 += 1) 
                {
                    var_20 ^= ((/* implicit */long long int) ((((/* implicit */int) ((short) var_3))) * ((+(((/* implicit */int) arr_16 [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_2 + 3] [i_2 + 1] [9ULL]))))));
                    var_21 = ((/* implicit */unsigned short) arr_1 [i_6]);
                }
            }
            var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 6471051178936596804LL)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_7 [i_0] [i_1] [i_0] [i_1]))))) ? (((/* implicit */int) ((unsigned short) var_10))) : (((((/* implicit */_Bool) 15113010261896470124ULL)) ? (((/* implicit */int) (signed char)48)) : (((/* implicit */int) arr_5 [i_0]))))))) ? (((/* implicit */int) ((short) ((((/* implicit */_Bool) arr_10 [i_0] [4] [i_1] [i_0])) || (((/* implicit */_Bool) var_6)))))) : (((/* implicit */int) max((arr_18 [i_1] [i_1] [i_0] [i_0]), (arr_18 [i_0] [i_0] [i_1] [i_1]))))));
            var_23 = ((/* implicit */signed char) ((((((/* implicit */_Bool) (signed char)29)) ? (((/* implicit */int) (unsigned short)62921)) : (2147483647))) - (((/* implicit */int) ((((/* implicit */_Bool) ((arr_17 [i_0] [6] [i_0] [i_1] [i_1]) ^ (((/* implicit */unsigned long long int) var_4))))) || (((/* implicit */_Bool) ((((((/* implicit */int) (short)-12965)) + (2147483647))) << (((((/* implicit */int) arr_1 [i_0])) - (99)))))))))));
        }
        for (long long int i_7 = 0; i_7 < 10; i_7 += 3) 
        {
            arr_21 [i_7] = ((/* implicit */unsigned long long int) ((unsigned char) (-(((/* implicit */int) (short)32758)))));
            arr_22 [i_0] [i_0] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_16 [7ULL] [(unsigned char)2] [i_7] [i_7] [i_7] [0ULL])) ? (((((/* implicit */_Bool) arr_16 [i_7] [i_7] [i_0] [i_0] [i_0] [i_0])) ? (16325637517548441139ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min(((signed char)-88), (arr_16 [i_0] [i_0] [i_0] [i_7] [i_7] [i_7])))))));
        }
        var_24 = ((/* implicit */signed char) var_7);
    }
}
