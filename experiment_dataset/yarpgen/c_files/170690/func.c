/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170690
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170690 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170690
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            for (unsigned char i_2 = 2; i_2 < 9; i_2 += 2) 
            {
                {
                    var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */int) ((((/* implicit */long long int) var_7)) != (arr_6 [i_0] [i_1] [i_0])))), (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_4 [i_0] [i_0])) : (((/* implicit */int) var_14))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_9)) || (arr_3 [i_0]))))) : (((((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_1] [i_2] [i_2]))) : (var_11))) + (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (var_5) : (var_7))))))));
                    arr_9 [i_0] [i_1] [i_2] [(unsigned short)5] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)12486))))), (((((/* implicit */_Bool) (short)-12486)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) 5912096347473986253LL))))));
                }
            } 
        } 
    } 
    var_17 = (!((_Bool)1));
    var_18 = ((/* implicit */_Bool) min((var_18), (((((/* implicit */_Bool) 62579080)) && (((/* implicit */_Bool) (unsigned short)35508))))));
    var_19 = ((/* implicit */unsigned int) ((((/* implicit */int) var_10)) < (((/* implicit */int) var_4))));
    var_20 = ((/* implicit */unsigned short) var_4);
}
