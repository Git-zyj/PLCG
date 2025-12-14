/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130410
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130410 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130410
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
    for (signed char i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_6 [i_2] [i_1] [i_2] = ((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) (unsigned short)65518)) - (65492)))));
                    var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_0 [i_2])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)20))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0] [i_1])))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [1ULL]))) - (((((/* implicit */_Bool) 2787628929U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_0] [i_0]))) : (2877063540407574757ULL)))))));
                    var_15 -= ((/* implicit */unsigned char) (-(((/* implicit */int) (short)13))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (short)-18700))));
    var_17 &= ((/* implicit */unsigned short) ((var_4) >> (((/* implicit */int) ((((((/* implicit */int) (short)-27530)) ^ (((/* implicit */int) var_2)))) != (((/* implicit */int) ((signed char) var_0))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_3 = 1; i_3 < 13; i_3 += 3) 
    {
        var_18 -= ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_7 [i_3 + 1]))));
        var_19 -= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) arr_7 [i_3 - 1])) > (arr_8 [i_3 + 2])));
        arr_9 [2U] = ((/* implicit */signed char) arr_8 [(signed char)9]);
    }
}
