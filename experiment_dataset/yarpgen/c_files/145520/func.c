/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145520
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145520 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145520
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
    /* LoopSeq 1 */
    for (unsigned short i_0 = 4; i_0 < 22; i_0 += 4) 
    {
        var_13 = ((/* implicit */unsigned int) max((var_13), (((/* implicit */unsigned int) (-(((((/* implicit */_Bool) 12U)) ? (((/* implicit */unsigned long long int) arr_2 [i_0 - 3])) : (arr_0 [i_0 - 2]))))))));
        var_14 = ((/* implicit */unsigned char) ((long long int) max((-2563300644359880075LL), (((/* implicit */long long int) var_2)))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 2) /* same iter space */
        {
            /* LoopSeq 1 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                var_15 |= (-(((((/* implicit */int) (short)32755)) | (((/* implicit */int) arr_9 [i_0] [i_0])))));
                var_16 *= (~(((/* implicit */int) ((((/* implicit */int) arr_3 [i_0] [i_1] [i_0])) >= (((/* implicit */int) arr_7 [i_1] [i_1] [12U] [i_0 - 1]))))));
                var_17 ^= arr_6 [i_0 + 1];
            }
            arr_10 [i_1] [i_1] [i_0] = ((/* implicit */unsigned int) -1306242893);
        }
        for (unsigned short i_3 = 0; i_3 < 24; i_3 += 2) /* same iter space */
        {
            arr_14 [i_0] = ((/* implicit */unsigned short) ((max((((_Bool) arr_7 [i_3] [i_3] [(unsigned char)7] [(unsigned char)7])), (((((/* implicit */int) var_0)) > (((/* implicit */int) arr_13 [i_0] [i_0])))))) ? (((((/* implicit */_Bool) (+(981368246)))) ? (arr_2 [i_0]) : (((unsigned int) var_6)))) : (((/* implicit */unsigned int) min((((arr_8 [i_0 - 2] [i_0 - 2] [i_0] [i_0]) ? (((/* implicit */int) arr_12 [i_0] [9LL])) : (((/* implicit */int) arr_4 [(_Bool)1])))), ((+(((/* implicit */int) arr_3 [i_0] [i_3] [i_0])))))))));
            arr_15 [9] = max((arr_3 [i_0] [6U] [6U]), (((/* implicit */short) ((((((/* implicit */_Bool) arr_0 [i_3])) ? (((/* implicit */int) arr_6 [i_3])) : (((/* implicit */int) arr_1 [i_0])))) == (((/* implicit */int) var_6))))));
        }
        var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 928654115U)) ? (13598092030344545413ULL) : (((/* implicit */unsigned long long int) -1306242868))));
    }
    var_19 = ((/* implicit */short) (((+((+(((/* implicit */int) (signed char)-101)))))) ^ (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_1))))) ? ((-(((/* implicit */int) var_11)))) : (((/* implicit */int) var_7))))));
}
