/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132443
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132443 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132443
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
    var_14 = ((/* implicit */int) ((long long int) (((!(((/* implicit */_Bool) var_12)))) ? (var_2) : (((/* implicit */unsigned long long int) -8)))));
    /* LoopSeq 1 */
    for (short i_0 = 3; i_0 < 10; i_0 += 3) 
    {
        /* LoopSeq 2 */
        for (int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            var_15 ^= ((/* implicit */unsigned short) 7);
            /* LoopNest 3 */
            for (short i_2 = 2; i_2 < 9; i_2 += 1) 
            {
                for (short i_3 = 0; i_3 < 12; i_3 += 1) 
                {
                    for (signed char i_4 = 0; i_4 < 12; i_4 += 1) 
                    {
                        {
                            arr_11 [(unsigned short)2] [(unsigned char)2] [i_0] [i_2] [i_0] [(short)5] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_6 [i_0 - 3] [i_0 - 2] [i_0])), (arr_2 [i_0])))) ? (((/* implicit */int) ((unsigned short) min((arr_2 [i_3]), (((/* implicit */unsigned int) arr_8 [i_4])))))) : (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned char)1))))))));
                            var_16 = ((/* implicit */unsigned long long int) var_11);
                        }
                    } 
                } 
            } 
            var_17 = (+((-(((((/* implicit */int) (unsigned char)140)) / (3))))));
        }
        /* vectorizable */
        for (short i_5 = 0; i_5 < 12; i_5 += 2) 
        {
            var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)43250)) * (((/* implicit */int) (_Bool)1)))))));
            var_19 = ((((/* implicit */_Bool) arr_9 [i_0 + 1] [(short)2] [(unsigned char)5] [i_0 + 1] [i_0 - 1])) && (((/* implicit */_Bool) (short)-19902)));
            var_20 = ((/* implicit */unsigned short) (~(((var_12) & (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0 + 1])))))));
            arr_15 [i_0] = ((/* implicit */int) ((((((/* implicit */_Bool) arr_8 [i_0])) && ((_Bool)1))) ? (((/* implicit */unsigned long long int) var_0)) : (((var_2) / (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-19917)))))));
            var_21 -= ((/* implicit */unsigned short) arr_12 [i_5] [i_5]);
        }
        arr_16 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) -8)) ? (((/* implicit */int) ((unsigned char) min((9), (((/* implicit */int) (signed char)125)))))) : (((/* implicit */int) ((((/* implicit */_Bool) (signed char)56)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 806622997U)) ? (((/* implicit */int) (short)28721)) : (((/* implicit */int) (signed char)117))))))))));
    }
    var_22 = ((/* implicit */unsigned int) min((var_22), (var_4)));
    var_23 = (short)-19902;
    var_24 = ((/* implicit */unsigned short) ((((/* implicit */int) var_10)) + (((/* implicit */int) (unsigned char)155))));
}
