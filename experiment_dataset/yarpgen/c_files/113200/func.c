/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113200
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113200 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113200
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
    var_16 -= ((/* implicit */short) var_14);
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        var_17 = ((/* implicit */short) ((((/* implicit */int) var_8)) < ((~(((/* implicit */int) var_3))))));
        var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) ((long long int) arr_1 [i_0] [i_0])))));
    }
    for (unsigned char i_1 = 1; i_1 < 9; i_1 += 3) 
    {
        var_19 = ((/* implicit */short) ((long long int) 3892119807931974249LL));
        /* LoopSeq 2 */
        /* vectorizable */
        for (short i_2 = 0; i_2 < 10; i_2 += 4) 
        {
            arr_7 [i_2] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_3 [i_1 - 1])) << (((((/* implicit */int) arr_3 [i_1 + 1])) - (9186)))));
            var_20 = ((/* implicit */unsigned long long int) ((short) (short)1));
            var_21 -= ((/* implicit */long long int) ((((((/* implicit */int) (short)-2)) != (((/* implicit */int) (short)-6)))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_6)))) : (((/* implicit */int) var_6))));
            arr_8 [i_1] [i_2] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_1])) - (((/* implicit */int) (short)1))))) || (((/* implicit */_Bool) arr_2 [i_1 - 1] [i_1]))));
        }
        for (long long int i_3 = 2; i_3 < 8; i_3 += 4) 
        {
            arr_11 [i_1] = ((/* implicit */long long int) (_Bool)1);
            var_22 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) | (((arr_2 [i_1 - 1] [i_3 + 2]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (short)(-32767 - 1))))))));
            var_23 *= ((/* implicit */long long int) ((unsigned short) ((short) 0U)));
            arr_12 [i_3] [i_1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_3] [i_3])) ? (max((((/* implicit */unsigned int) (short)(-32767 - 1))), (4294967273U))) : (((/* implicit */unsigned int) ((/* implicit */int) var_11))))))));
        }
    }
    var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) ((short) ((short) var_11))))));
}
