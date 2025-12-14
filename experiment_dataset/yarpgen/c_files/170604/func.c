/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170604
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170604 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170604
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
    var_14 = ((/* implicit */unsigned short) ((unsigned long long int) ((unsigned int) ((var_12) + (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))));
    var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned int) (short)182))) ? (max((var_13), (((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) + (var_13))))) : (((/* implicit */unsigned int) (-(((/* implicit */int) (short)-182)))))));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        arr_3 [7ULL] = ((/* implicit */unsigned short) arr_2 [i_0]);
        /* LoopSeq 1 */
        for (unsigned char i_1 = 3; i_1 < 10; i_1 += 4) 
        {
            var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((((/* implicit */int) arr_1 [(unsigned char)13])) * (((/* implicit */int) arr_1 [i_0])))) - (((((/* implicit */int) arr_4 [9LL] [i_1])) / (((/* implicit */int) (short)-189))))))) ? (max((((/* implicit */int) arr_1 [i_0])), (((((/* implicit */int) (short)205)) & (var_3))))) : ((~(((/* implicit */int) arr_0 [i_1] [i_1]))))));
            /* LoopSeq 1 */
            for (int i_2 = 0; i_2 < 14; i_2 += 3) 
            {
                var_17 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) (unsigned char)3)) ? (((((/* implicit */_Bool) (short)-184)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_0]))))) : (((((/* implicit */_Bool) arr_5 [i_1] [i_1])) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0] [4] [4])))))))));
                var_18 = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */int) (short)157)) + (((/* implicit */int) (short)-182))))) && (((/* implicit */_Bool) (+(((/* implicit */int) arr_6 [i_1]))))))) ? (((/* implicit */long long int) (-(((/* implicit */int) arr_6 [i_1]))))) : (((((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [5LL])) ? (((/* implicit */int) arr_6 [i_1])) : (((/* implicit */int) arr_0 [i_1] [i_2]))))) / (((var_0) | (((/* implicit */long long int) var_13))))))));
            }
        }
        var_19 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)163)) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned char) (unsigned char)223))))))) : (((long long int) max((((/* implicit */unsigned int) (short)157)), (162464683U))))));
    }
}
