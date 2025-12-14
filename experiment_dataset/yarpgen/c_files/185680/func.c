/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185680
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185680 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185680
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
    for (unsigned char i_0 = 4; i_0 < 8; i_0 += 1) 
    {
        var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((arr_0 [i_0 + 2]), (arr_0 [i_0 - 1])))) ? (max((arr_0 [i_0 - 4]), (arr_0 [i_0 - 1]))) : (max((arr_0 [i_0 - 4]), (((/* implicit */long long int) (unsigned short)65533))))));
        /* LoopSeq 2 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) /* same iter space */
        {
            arr_6 [i_0] [(signed char)1] [(unsigned short)3] = ((/* implicit */short) ((unsigned char) max(((unsigned short)48500), (((/* implicit */unsigned short) (unsigned char)128)))));
            var_20 ^= ((/* implicit */short) ((_Bool) (!((!(((/* implicit */_Bool) (unsigned char)128)))))));
            var_21 = ((/* implicit */signed char) (unsigned char)115);
        }
        for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) /* same iter space */
        {
            var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) (+(((/* implicit */int) (signed char)2)))))));
            arr_9 [(_Bool)1] [i_2] = ((/* implicit */unsigned short) (-(arr_8 [i_2 - 1])));
            arr_10 [i_2] = arr_0 [i_0 + 1];
        }
        arr_11 [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (~(((/* implicit */int) (signed char)24)))))));
        /* LoopSeq 1 */
        for (short i_3 = 0; i_3 < 10; i_3 += 3) 
        {
            var_23 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_9))));
            /* LoopSeq 1 */
            for (int i_4 = 0; i_4 < 10; i_4 += 2) 
            {
                var_24 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)58))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)62438)) ? (((/* implicit */int) (unsigned short)14385)) : (((/* implicit */int) (unsigned char)128))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_17))) & (arr_15 [i_0] [i_4])))))));
                arr_18 [6ULL] [(short)9] [i_3] [i_4] = ((/* implicit */signed char) var_5);
            }
        }
        var_25 = ((/* implicit */int) min((var_25), (((/* implicit */int) ((_Bool) (~(23U)))))));
    }
    var_26 = ((/* implicit */short) (!(((/* implicit */_Bool) var_0))));
}
