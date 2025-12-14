/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163275
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163275 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163275
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
    var_20 = ((/* implicit */unsigned char) min((var_20), (((unsigned char) ((((/* implicit */_Bool) ((signed char) 1751050860U))) ? (max((1751050860U), (2543916435U))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 1751050873U)))))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_1 = 3; i_1 < 13; i_1 += 2) 
        {
            var_21 = ((/* implicit */unsigned long long int) ((long long int) ((signed char) (signed char)33)));
            arr_5 [i_0] [i_0] = ((1751050854U) < (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))));
        }
        arr_6 [13ULL] [i_0] = ((/* implicit */int) (unsigned char)3);
        var_22 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned int) arr_2 [i_0] [i_0] [i_0]))) && (((/* implicit */_Bool) var_7))));
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        var_23 = ((/* implicit */unsigned short) max((max((arr_7 [i_2] [i_2]), (((/* implicit */unsigned int) min(((unsigned char)0), (((/* implicit */unsigned char) (_Bool)1))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 676129842)) ? (2543916435U) : (((/* implicit */unsigned int) -1))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) var_10)))) : (max((1751050860U), (((/* implicit */unsigned int) (unsigned short)63077))))))));
        var_24 = ((/* implicit */short) ((((1514614475) - (((/* implicit */int) arr_8 [i_2])))) - (((/* implicit */int) (short)-32764))));
    }
}
