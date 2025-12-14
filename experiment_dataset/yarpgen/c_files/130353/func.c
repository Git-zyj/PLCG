/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130353
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130353 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130353
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
    for (signed char i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            arr_4 [i_0] [i_1 + 1] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_3 [i_1 + 1])) - (((/* implicit */int) ((unsigned char) 492581209243648ULL)))));
            /* LoopNest 2 */
            for (unsigned short i_2 = 2; i_2 < 23; i_2 += 3) 
            {
                for (unsigned int i_3 = 0; i_3 < 24; i_3 += 1) 
                {
                    {
                        var_12 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) 18446744073709551607ULL)) ? (((/* implicit */int) arr_1 [i_2])) : (((/* implicit */int) (unsigned short)41713))));
                        var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_2 [i_1] [i_1 + 1] [i_1 + 1])) ? (((/* implicit */int) arr_9 [i_1] [i_0] [i_1 + 1] [i_1] [i_0])) : (((/* implicit */int) (!(arr_7 [i_1] [i_2] [i_2]))))));
                        arr_10 [i_3] [i_1] [i_3] [(_Bool)0] [i_2 + 1] [i_0] = ((/* implicit */unsigned int) arr_2 [i_1 + 1] [i_2 + 1] [i_2 - 1]);
                    }
                } 
            } 
        }
        for (unsigned char i_4 = 0; i_4 < 24; i_4 += 1) 
        {
            arr_13 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((min((((/* implicit */unsigned int) arr_9 [i_0] [i_0] [i_0] [i_4] [i_0])), (arr_12 [i_0] [i_4] [i_0]))), (((/* implicit */unsigned int) (_Bool)1))))) ? (((((/* implicit */_Bool) (unsigned char)67)) ? (((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0] [8])) : (((/* implicit */int) arr_7 [i_0] [14] [(signed char)21])))) : ((-((-(((/* implicit */int) var_3))))))));
            /* LoopSeq 1 */
            for (signed char i_5 = 0; i_5 < 24; i_5 += 1) 
            {
                var_14 = ((/* implicit */signed char) max((var_14), (((/* implicit */signed char) (-(((/* implicit */int) (_Bool)1)))))));
                var_15 = ((/* implicit */unsigned long long int) ((short) ((((/* implicit */_Bool) 3256565392049633459LL)) ? (18446251492500307955ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))));
            }
        }
        var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) ((short) (!(((/* implicit */_Bool) ((unsigned long long int) var_7)))))))));
    }
    var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~((~(var_10)))))) ? ((~(-1002389189))) : (((((/* implicit */_Bool) ((((/* implicit */int) var_7)) << (((((-1294915420) + (1294915440))) - (13)))))) ? (((/* implicit */int) var_2)) : ((+(((/* implicit */int) (signed char)97))))))));
    var_18 = ((/* implicit */long long int) var_0);
    var_19 ^= ((var_4) ? (((/* implicit */int) var_11)) : (((int) min((var_2), (((/* implicit */unsigned short) var_11))))));
}
