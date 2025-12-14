/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123204
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123204 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123204
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
    for (long long int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        var_11 = ((/* implicit */unsigned short) max((var_11), (((/* implicit */unsigned short) 1697347606U))));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            for (unsigned char i_2 = 3; i_2 < 19; i_2 += 2) 
            {
                {
                    arr_7 [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) (unsigned char)95);
                    var_12 -= ((/* implicit */unsigned long long int) arr_4 [i_0]);
                }
            } 
        } 
        /* LoopNest 2 */
        for (int i_3 = 3; i_3 < 18; i_3 += 2) 
        {
            for (signed char i_4 = 0; i_4 < 20; i_4 += 2) 
            {
                {
                    arr_15 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) min((max((max((((/* implicit */unsigned int) (unsigned char)216)), (arr_13 [i_3 + 1] [i_3 + 1]))), (((/* implicit */unsigned int) arr_2 [i_0] [i_3 - 1])))), (min((arr_11 [i_3 - 1] [i_3 - 2] [i_3 - 1]), (var_10)))));
                    arr_16 [i_4] = ((/* implicit */short) var_7);
                    var_13 ^= ((/* implicit */int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0] [i_3 + 1] [i_4])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)251))) : (arr_11 [i_0] [i_0] [(unsigned char)1])))) ? ((~(arr_14 [9U] [i_3] [(signed char)2]))) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)18))))) - (((/* implicit */unsigned int) ((/* implicit */int) ((short) min((((/* implicit */short) var_5)), (var_0))))))));
                    var_14 ^= ((/* implicit */unsigned char) 3389433380U);
                    arr_17 [12] [i_0] = ((/* implicit */unsigned short) max((((var_7) * (((/* implicit */unsigned int) var_8)))), (arr_14 [(_Bool)1] [i_3 + 2] [i_4])));
                }
            } 
        } 
        var_15 &= ((/* implicit */int) min((((/* implicit */long long int) min((((/* implicit */int) (signed char)71)), ((-(((/* implicit */int) (signed char)-18))))))), (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)94))) / (((((/* implicit */_Bool) var_1)) ? (7570117856382809669LL) : (((/* implicit */long long int) var_3))))))));
        arr_18 [i_0] [i_0] = ((/* implicit */unsigned char) var_7);
    }
    var_16 = var_1;
    var_17 |= ((/* implicit */unsigned char) min(((~(var_3))), (((/* implicit */unsigned int) var_1))));
    var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((var_7) % (var_7)))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (unsigned short)11794))));
}
