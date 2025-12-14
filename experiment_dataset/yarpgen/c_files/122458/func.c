/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122458
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122458 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122458
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
    var_10 |= ((/* implicit */unsigned char) ((3333445540U) * (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0)))));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                {
                    arr_8 [24LL] [i_1] = ((/* implicit */short) (((~(((/* implicit */int) (short)14209)))) != (((/* implicit */int) (unsigned char)255))));
                    var_11 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) (short)14209))) : (max((((/* implicit */long long int) var_5)), (var_4))))))));
                    var_12 = ((/* implicit */int) max((var_12), ((-(((/* implicit */int) ((((/* implicit */int) var_7)) == (((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_0] [i_2] [10U]))))))))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned char i_3 = 0; i_3 < 25; i_3 += 1) 
        {
            for (unsigned long long int i_4 = 0; i_4 < 25; i_4 += 2) 
            {
                {
                    arr_15 [i_3] [23ULL] = ((/* implicit */unsigned int) max((15ULL), (((/* implicit */unsigned long long int) max((arr_10 [i_3] [i_3]), (((/* implicit */unsigned short) arr_14 [i_3] [i_3] [i_3])))))));
                    var_13 = ((/* implicit */signed char) (short)14209);
                }
            } 
        } 
        arr_16 [i_0] = ((/* implicit */signed char) min((((/* implicit */long long int) var_6)), (max((arr_7 [i_0] [i_0] [i_0]), (arr_7 [i_0] [i_0] [i_0])))));
        var_14 -= ((unsigned int) (!(((/* implicit */_Bool) ((short) (unsigned char)42)))));
    }
    var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) max((var_3), ((~(max((((/* implicit */long long int) -248479649)), (887324925607932978LL))))))))));
    var_16 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((min((var_9), (var_2))), (max((var_9), (((/* implicit */long long int) (short)-27971)))))))));
}
