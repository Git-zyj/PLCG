/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171838
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171838 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171838
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
    var_19 = ((/* implicit */_Bool) (+(var_9)));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            {
                var_20 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) == (((max((((/* implicit */unsigned long long int) var_7)), (var_14))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (short)(-32767 - 1))))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (int i_2 = 0; i_2 < 25; i_2 += 2) 
                {
                    var_21 |= ((/* implicit */unsigned int) (-(((/* implicit */int) (short)32767))));
                    var_22 -= ((/* implicit */int) var_7);
                    arr_8 [i_0] [9ULL] [i_2] [i_2] = ((/* implicit */unsigned long long int) var_7);
                    /* LoopSeq 1 */
                    for (unsigned short i_3 = 3; i_3 < 23; i_3 += 2) 
                    {
                        var_23 = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)17261)) ? (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */unsigned long long int) -102044810)) : (arr_5 [(_Bool)1] [i_1] [i_2]))) : (var_2)));
                        var_24 = ((/* implicit */short) ((((/* implicit */_Bool) arr_9 [i_3 - 1] [i_1] [i_1] [i_1] [i_2])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (short)12194))));
                        /* LoopSeq 2 */
                        for (signed char i_4 = 1; i_4 < 24; i_4 += 1) 
                        {
                            var_25 |= ((/* implicit */long long int) (-(((((/* implicit */_Bool) (unsigned short)38922)) ? (((/* implicit */int) (unsigned short)26180)) : (((/* implicit */int) (unsigned char)179))))));
                            var_26 *= ((/* implicit */_Bool) var_9);
                            var_27 = ((/* implicit */int) min((var_27), (((/* implicit */int) arr_10 [i_1]))));
                            var_28 = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_4 [i_0]))));
                            arr_14 [i_0] [i_1] [i_3] [i_4 - 1] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_15)) ? (var_8) : (((/* implicit */int) var_7))));
                        }
                        for (signed char i_5 = 0; i_5 < 25; i_5 += 2) 
                        {
                            var_29 = ((/* implicit */int) (-(arr_15 [i_0] [i_1] [i_2] [i_3 - 3] [i_1])));
                            var_30 = ((/* implicit */unsigned char) min((var_30), (((/* implicit */unsigned char) (~(var_2))))));
                            var_31 = ((/* implicit */_Bool) (short)32767);
                            arr_17 [i_3] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_10 [i_0]))))) ? (((((/* implicit */_Bool) var_10)) ? (var_4) : (((/* implicit */unsigned long long int) var_5)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_17)))));
                            var_32 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [i_0] [i_2] [i_2] [i_3 - 3])) ? (((/* implicit */int) arr_7 [i_2] [i_1] [9] [i_3 - 3])) : (((/* implicit */int) arr_7 [i_1] [i_3 - 3] [i_0] [i_3 + 1]))));
                        }
                        var_33 = ((((/* implicit */int) var_18)) >= (((/* implicit */int) arr_7 [i_1] [i_3 + 2] [i_1] [i_3 + 2])));
                        var_34 = ((/* implicit */int) ((var_16) ? (((/* implicit */unsigned long long int) var_11)) : (((6770441813213713714ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)223)))))));
                    }
                }
            }
        } 
    } 
}
