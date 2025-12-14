/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168748
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168748 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168748
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
    var_18 |= ((/* implicit */signed char) var_11);
    var_19 *= ((/* implicit */short) (~(((/* implicit */int) var_14))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (unsigned int i_1 = 2; i_1 < 23; i_1 += 4) 
        {
            {
                /* LoopSeq 4 */
                for (unsigned short i_2 = 0; i_2 < 25; i_2 += 2) 
                {
                    var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((arr_0 [i_1 - 2]), (((/* implicit */unsigned short) (unsigned char)234))))) ? (((((/* implicit */_Bool) arr_1 [i_1 + 1] [i_1 - 2])) ? (arr_4 [i_1 - 1] [i_1 + 2] [i_1 - 2]) : (arr_4 [i_1 - 2] [i_1 - 2] [i_1 - 2]))) : ((~((~(var_17)))))));
                    var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) ((((/* implicit */_Bool) ((short) ((((/* implicit */int) arr_6 [i_2])) > (arr_3 [i_0]))))) ? (((/* implicit */int) (!(((((/* implicit */int) (short)-5885)) == (arr_3 [i_0])))))) : (((/* implicit */int) min(((short)10044), (((/* implicit */short) arr_2 [i_1 + 2]))))))))));
                    var_22 = ((/* implicit */short) (unsigned short)65535);
                }
                for (unsigned int i_3 = 0; i_3 < 25; i_3 += 2) 
                {
                    arr_12 [i_0] = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) var_16))) | ((~(min((1729382256910270464LL), (((/* implicit */long long int) arr_2 [i_3]))))))));
                    var_23 = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */short) (!(((/* implicit */_Bool) arr_0 [i_0]))))), (var_7)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [7] [i_1]))) : ((-(var_2)))));
                    arr_13 [i_0] [i_0] [7LL] = ((/* implicit */short) ((((/* implicit */_Bool) ((short) var_17))) ? (((((/* implicit */_Bool) arr_7 [i_1] [i_1 - 2] [i_1 + 2])) ? (((((/* implicit */int) arr_0 [i_0])) + (((/* implicit */int) arr_2 [i_3])))) : (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_14)))))) : ((-(((((/* implicit */_Bool) 1147659622)) ? (((/* implicit */int) (short)-10024)) : (((/* implicit */int) (unsigned short)65516))))))));
                    arr_14 [i_0] [i_0] [22LL] [i_3] = ((/* implicit */int) 16888498602639360ULL);
                }
                for (int i_4 = 0; i_4 < 25; i_4 += 4) 
                {
                    var_24 ^= ((/* implicit */_Bool) var_8);
                    arr_17 [i_0] [i_0] [i_4] [i_0] = ((/* implicit */short) ((((arr_8 [i_1 + 1]) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (3018875698U))) : (((/* implicit */unsigned int) ((int) arr_0 [i_4]))))) - (((/* implicit */unsigned int) (-(((var_13) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) var_14)))))))));
                    var_25 = ((/* implicit */long long int) ((_Bool) (((-(((/* implicit */int) (short)-10044)))) - ((+(((/* implicit */int) arr_10 [i_1])))))));
                    arr_18 [i_0] [i_1] = ((/* implicit */short) arr_1 [i_0] [i_1]);
                }
                /* vectorizable */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    arr_22 [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */int) var_8)) ^ (((/* implicit */int) arr_20 [i_0])))) >= (((/* implicit */int) arr_6 [i_0]))));
                    var_26 = ((/* implicit */signed char) var_15);
                    var_27 = ((/* implicit */unsigned short) min((var_27), (((/* implicit */unsigned short) (!(((((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [(unsigned char)24]))) == (1389588975034152015LL))))))));
                }
                var_28 = ((/* implicit */short) min((var_28), (((/* implicit */short) (-(max((0LL), (arr_4 [i_0] [i_1 - 1] [i_0]))))))));
            }
        } 
    } 
    var_29 = ((/* implicit */short) var_4);
}
