/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162859
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162859 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162859
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
    var_14 = ((/* implicit */unsigned char) var_2);
    /* LoopSeq 1 */
    for (signed char i_0 = 1; i_0 < 19; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            /* LoopSeq 3 */
            for (signed char i_2 = 0; i_2 < 20; i_2 += 3) 
            {
                arr_10 [i_0] [i_1] [i_2] = ((((((/* implicit */_Bool) -75961100203058315LL)) ? (((/* implicit */int) arr_2 [i_0 - 1] [i_1])) : (var_2))) > ((~(((/* implicit */int) var_4)))));
                var_15 -= ((/* implicit */short) ((((/* implicit */int) ((short) (unsigned char)255))) >= (((((/* implicit */_Bool) 2305843009213693951LL)) ? (((/* implicit */int) min((arr_2 [i_1] [i_2]), (((/* implicit */unsigned char) arr_4 [i_0 - 1] [i_0 - 1] [i_0 + 1]))))) : (((/* implicit */int) arr_4 [i_0] [i_0] [i_0 - 1]))))));
                var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) ((long long int) ((((/* implicit */_Bool) ((unsigned char) -75961100203058315LL))) ? (((((/* implicit */_Bool) (unsigned short)65533)) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (9223372036854775781LL))) : (((/* implicit */long long int) ((((/* implicit */int) var_6)) + (((/* implicit */int) (signed char)127)))))))))));
            }
            for (unsigned int i_3 = 0; i_3 < 20; i_3 += 3) 
            {
                arr_13 [i_0] [i_1] = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) arr_2 [i_0 + 1] [i_0 + 1])) ? (((/* implicit */int) max((((/* implicit */short) var_1)), (var_13)))) : (arr_5 [i_0 + 1] [i_0 - 1]))), (((/* implicit */int) ((_Bool) var_8)))));
                /* LoopSeq 1 */
                for (unsigned int i_4 = 0; i_4 < 20; i_4 += 1) 
                {
                    var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) max((((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_7 [i_0] [i_0] [15])))) << (((((((/* implicit */_Bool) arr_12 [i_4])) ? (4294967290U) : (2254036634U))) - (4294967281U))))), (((/* implicit */int) ((262143U) > (min((arr_6 [i_0] [i_0]), (506511153U)))))))))));
                    /* LoopSeq 1 */
                    for (unsigned char i_5 = 1; i_5 < 18; i_5 += 3) 
                    {
                        var_18 *= ((/* implicit */int) ((_Bool) (~(((/* implicit */int) arr_17 [i_0 - 1] [i_4] [i_5] [i_5] [i_5])))));
                        var_19 += ((/* implicit */signed char) (!(((/* implicit */_Bool) 28672LL))));
                        var_20 = ((/* implicit */signed char) ((unsigned int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_14 [i_0] [i_0] [i_0] [i_0 + 1])))));
                    }
                }
                var_21 = ((((max((28664LL), (((/* implicit */long long int) var_8)))) != (((long long int) var_7)))) ? (var_7) : (((/* implicit */int) ((((((/* implicit */_Bool) arr_14 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) (signed char)125)) : (((/* implicit */int) arr_15 [i_0] [i_0] [i_1] [i_1] [i_0])))) == (((/* implicit */int) var_10))))));
                arr_18 [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)99))) : (((((/* implicit */long long int) ((/* implicit */int) (signed char)15))) * (arr_1 [i_0])))))) ? (((((/* implicit */unsigned int) (-(((/* implicit */int) var_10))))) * (((((/* implicit */_Bool) (unsigned char)139)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)1))) : (2040930661U))))) : (((/* implicit */unsigned int) (-(((((/* implicit */int) arr_4 [i_0] [(short)9] [(short)9])) * (((/* implicit */int) (signed char)99)))))))));
                var_22 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_3))))) : (((/* implicit */int) arr_16 [i_0] [i_0 - 1] [i_1] [i_0 - 1] [i_3])))))));
            }
            for (unsigned int i_6 = 0; i_6 < 20; i_6 += 2) 
            {
                var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned int) arr_16 [i_0] [i_0 - 1] [i_0] [i_0] [i_0 + 1]))) ? (((/* implicit */int) ((((/* implicit */int) ((signed char) (unsigned char)1))) >= (((/* implicit */int) arr_7 [i_0 + 1] [i_0 - 1] [i_0 - 1]))))) : (((((/* implicit */int) var_1)) >> (((var_1) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_15 [i_0 - 1] [(_Bool)1] [i_0 + 1] [i_0 + 1] [i_0])))))))))));
                arr_21 [i_0] [i_0] [i_0] [i_0] = (~(((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_6]))) / (var_5)))) ? (((/* implicit */int) ((unsigned char) 4611686018427371520LL))) : (((/* implicit */int) arr_2 [i_0 + 1] [i_0 - 1])))));
                var_24 *= ((/* implicit */signed char) min((min(((~(var_2))), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (short)-16384)))))), (((/* implicit */int) min((((/* implicit */signed char) arr_4 [i_0] [i_1] [i_0])), (var_6))))));
            }
            var_25 = max((((/* implicit */unsigned int) ((signed char) (_Bool)1))), ((-(arr_6 [i_0 - 1] [i_0 - 1]))));
            /* LoopSeq 1 */
            for (signed char i_7 = 2; i_7 < 17; i_7 += 1) 
            {
                var_26 = ((/* implicit */int) ((((2254036657U) / (((/* implicit */unsigned int) ((/* implicit */int) var_0))))) < (((/* implicit */unsigned int) ((/* implicit */int) min((((signed char) var_13)), (((/* implicit */signed char) arr_16 [i_0 + 1] [i_0 + 1] [i_0] [i_0] [i_0]))))))));
                arr_25 [0U] [i_1] [(signed char)19] = ((/* implicit */unsigned long long int) min((arr_1 [i_1]), (((/* implicit */long long int) (~((~(((/* implicit */int) (signed char)31)))))))));
                var_27 = ((/* implicit */_Bool) arr_2 [i_1] [i_7]);
                arr_26 [14LL] [i_1] [i_7] [i_7] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_4 [i_1] [(unsigned short)8] [i_7 + 1])))))));
            }
        }
        var_28 *= ((/* implicit */_Bool) (-((-(((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0])) ? (9223372036854775792LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))));
    }
}
