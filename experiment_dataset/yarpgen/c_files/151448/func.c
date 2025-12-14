/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151448
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151448 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151448
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
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */_Bool) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)36707)));
        arr_3 [6LL] = ((/* implicit */unsigned int) 18269424912562880607ULL);
        arr_4 [(_Bool)1] = arr_0 [i_0];
    }
    for (unsigned int i_1 = 4; i_1 < 17; i_1 += 2) /* same iter space */
    {
        arr_8 [i_1] = ((/* implicit */unsigned int) (+((+(((/* implicit */int) arr_6 [i_1 - 3]))))));
        /* LoopNest 2 */
        for (unsigned int i_2 = 4; i_2 < 18; i_2 += 2) 
        {
            for (unsigned long long int i_3 = 1; i_3 < 16; i_3 += 4) 
            {
                {
                    arr_13 [7U] [i_3] [i_1 - 3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) 0U))) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_1 - 2]))) : ((+(9030721428488632315LL)))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_11 [14LL] [i_1 - 1] [i_3 + 1]))))) : (((unsigned long long int) (+(((/* implicit */int) (_Bool)0)))))));
                    arr_14 [i_3] = ((/* implicit */unsigned long long int) (unsigned short)28857);
                }
            } 
        } 
        arr_15 [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_6 [(_Bool)1]) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned short)36699))))) ? (arr_5 [i_1 + 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1] [i_1 - 4])))))) ? (((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */long long int) -1540881715)) : (arr_12 [i_1 + 1] [i_1] [i_1 - 2] [i_1]))) : ((-9223372036854775807LL - 1LL))));
    }
    /* vectorizable */
    for (unsigned int i_4 = 4; i_4 < 17; i_4 += 2) /* same iter space */
    {
        arr_20 [i_4] = ((/* implicit */_Bool) ((arr_19 [i_4 - 3]) ? (((/* implicit */int) arr_1 [i_4 - 2] [i_4 - 3])) : (((/* implicit */int) (unsigned char)23))));
        arr_21 [i_4 - 1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_11 [i_4] [i_4] [(unsigned char)18])))))));
        arr_22 [i_4] = ((/* implicit */_Bool) var_3);
        arr_23 [i_4] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_9 [i_4 + 2] [i_4 - 3] [i_4 - 1]))));
    }
    var_20 = ((/* implicit */unsigned int) var_1);
    var_21 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) * (0U)));
}
