/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108169
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108169 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108169
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
    var_10 = ((/* implicit */signed char) ((var_6) * (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_8)) > (((((((/* implicit */int) var_9)) + (2147483647))) >> (((((/* implicit */int) var_9)) + (23431)))))))))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (short i_1 = 2; i_1 < 23; i_1 += 1) 
        {
            arr_5 [i_1] = ((/* implicit */unsigned int) ((((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)-12429)))))) & (var_1))) == (((/* implicit */long long int) min((((/* implicit */int) (!(((/* implicit */_Bool) (short)-575))))), (-857713861))))));
            /* LoopSeq 1 */
            for (unsigned int i_2 = 1; i_2 < 21; i_2 += 1) 
            {
                arr_9 [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) (((((((-(var_1))) + (9223372036854775807LL))) << (((((((/* implicit */int) arr_6 [i_0] [i_0] [i_2])) + (((/* implicit */int) (short)-2344)))) - (41010))))) >= (((/* implicit */long long int) ((/* implicit */int) min((var_8), ((short)-2344)))))));
                arr_10 [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */int) arr_2 [i_0])) * ((-(((/* implicit */int) (unsigned char)236)))))) ^ (((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_1] [i_1]))))) != (((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_1] [i_1] [i_2] [i_2]))))))))));
                /* LoopSeq 2 */
                for (signed char i_3 = 0; i_3 < 24; i_3 += 3) 
                {
                    /* LoopSeq 2 */
                    for (unsigned char i_4 = 1; i_4 < 23; i_4 += 1) 
                    {
                        var_11 = ((/* implicit */signed char) max((var_11), (((/* implicit */signed char) (!((!(((/* implicit */_Bool) max(((unsigned char)66), (((/* implicit */unsigned char) (signed char)-90))))))))))));
                        arr_16 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)238)) ? (((/* implicit */int) ((unsigned char) ((arr_1 [i_3]) > (((/* implicit */int) arr_14 [i_3] [i_3] [i_2] [(unsigned char)15] [i_4] [i_4] [i_2])))))) : (((((((/* implicit */int) (signed char)-90)) + (2147483647))) >> (((((/* implicit */int) ((short) var_3))) + (32217)))))));
                    }
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 24; i_5 += 2) 
                    {
                        arr_20 [i_1] [i_1] [i_1] [i_1] [i_0] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((arr_3 [i_1] [i_3]) ^ (((/* implicit */long long int) ((/* implicit */int) (unsigned char)19)))))) != (((unsigned long long int) arr_7 [i_1] [i_1]))));
                        arr_21 [(signed char)20] [i_1] [(unsigned char)6] [i_1] [i_0] = ((/* implicit */unsigned char) (~(((((/* implicit */long long int) 0U)) | (arr_8 [i_1] [(unsigned short)17] [(signed char)0] [i_3])))));
                        arr_22 [i_0] [i_5] [i_1] [i_3] [i_5] [i_5] [i_5] = ((/* implicit */unsigned short) (~(((/* implicit */int) ((unsigned char) arr_12 [i_0] [i_0] [i_1] [i_0])))));
                    }
                    arr_23 [i_0] [i_1] [i_2 + 2] = ((/* implicit */int) (unsigned short)7);
                    arr_24 [i_1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((unsigned char) (~(((/* implicit */int) (unsigned char)60))))))));
                    arr_25 [i_0] [i_0] [i_1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((((/* implicit */long long int) ((/* implicit */int) var_8))) - (var_6))) & (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))))))));
                    var_12 = ((/* implicit */unsigned short) ((unsigned int) max((((/* implicit */long long int) (~(((/* implicit */int) var_7))))), (((arr_15 [i_1] [i_1] [i_1] [23U] [i_0]) | (((/* implicit */long long int) arr_4 [i_1] [6LL])))))));
                }
                for (unsigned long long int i_6 = 1; i_6 < 22; i_6 += 2) 
                {
                    arr_28 [i_1] = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_18 [i_1] [i_2] [i_1] [i_0] [i_1]))));
                    var_13 *= ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)2345))))) <= (((16060212368888179891ULL) & (((/* implicit */unsigned long long int) var_1))))))) ^ (((/* implicit */int) ((max((var_5), (((/* implicit */unsigned long long int) 2617823623U)))) == (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)69)) - (((/* implicit */int) var_7))))))))));
                }
                var_14 = ((/* implicit */unsigned int) max((var_14), (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((1276543294U), (((/* implicit */unsigned int) (unsigned char)212))))) && ((!(((/* implicit */_Bool) var_9)))))))));
            }
            var_15 = (i_1 % 2 == 0) ? (((/* implicit */unsigned char) (~(((((((/* implicit */int) (short)-32126)) + (2147483647))) >> (((((/* implicit */int) arr_12 [i_0] [i_1] [i_1] [i_1 + 1])) - (109)))))))) : (((/* implicit */unsigned char) (~(((((((/* implicit */int) (short)-32126)) + (2147483647))) >> (((((((/* implicit */int) arr_12 [i_0] [i_1] [i_1] [i_1 + 1])) - (109))) + (165))))))));
            var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) var_3))));
        }
        var_17 = ((/* implicit */long long int) var_7);
    }
    var_18 = ((/* implicit */unsigned char) var_4);
}
