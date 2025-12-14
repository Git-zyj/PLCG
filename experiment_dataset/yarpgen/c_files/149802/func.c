/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149802
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149802 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149802
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
    for (unsigned int i_0 = 3; i_0 < 17; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 19; i_2 += 2) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 19; i_3 += 4) 
                    {
                        arr_11 [11U] [11U] [7U] [i_0] = (i_0 % 2 == zero) ? (((/* implicit */short) (((~(((var_3) << (((arr_3 [9U] [i_0] [i_0]) - (804138922U))))))) >> (((((unsigned int) arr_0 [i_0 - 1])) - (210U)))))) : (((/* implicit */short) (((~(((var_3) << (((((arr_3 [9U] [i_0] [i_0]) - (804138922U))) - (2028456029U))))))) >> (((((unsigned int) arr_0 [i_0 - 1])) - (210U))))));
                        var_11 = ((/* implicit */short) (+(((/* implicit */int) (!(((/* implicit */_Bool) ((short) var_5))))))));
                    }
                    for (long long int i_4 = 0; i_4 < 19; i_4 += 1) 
                    {
                        arr_15 [i_0] [8U] [i_2] [i_4] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (~(arr_3 [2LL] [i_0] [i_0 - 3]))))));
                        arr_16 [i_0] [i_0 + 2] [i_0] [i_1] [i_0 + 2] [i_0 + 2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((short) arr_4 [(unsigned char)5] [i_0 + 2] [i_0 - 3]))) ? (((unsigned int) (-(((/* implicit */int) arr_5 [i_0 + 2] [i_0 + 2]))))) : (((/* implicit */unsigned int) min(((+(((/* implicit */int) var_1)))), (((/* implicit */int) arr_7 [i_0 - 3] [i_0 - 2] [i_0 + 1])))))));
                    }
                    var_12 -= ((/* implicit */signed char) ((((3390152757U) < (((/* implicit */unsigned int) ((/* implicit */int) ((6363492627335213466ULL) <= (((/* implicit */unsigned long long int) 0U)))))))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) arr_0 [i_2]))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 1131101672U)) ? (3163865623U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)965)))))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) arr_0 [i_0]))))) : (arr_9 [(unsigned char)9] [i_0 + 2] [i_0 - 1] [i_0 + 2])))));
                }
            } 
        } 
    } 
    var_13 += ((/* implicit */unsigned int) -7684511505091528139LL);
    var_14 = ((/* implicit */unsigned char) var_9);
}
