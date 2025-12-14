/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169665
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169665 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169665
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
    var_19 = ((/* implicit */signed char) var_7);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 18; i_1 += 3) 
        {
            {
                var_20 &= ((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1 - 3]))) : ((~(arr_3 [i_0] [i_0]))));
                var_21 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)93))))) ? (max((((/* implicit */unsigned int) arr_0 [i_1 - 1])), (4294967272U))) : (((/* implicit */unsigned int) (+(((/* implicit */int) (short)-3329)))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_2 = 1; i_2 < 19; i_2 += 3) 
    {
        var_22 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_7 [i_2 - 1] [i_2]))));
        /* LoopNest 2 */
        for (unsigned long long int i_3 = 0; i_3 < 20; i_3 += 3) 
        {
            for (unsigned short i_4 = 1; i_4 < 19; i_4 += 3) 
            {
                {
                    var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)18102))) : (arr_5 [i_2])));
                    var_24 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)48151)) ? (((/* implicit */int) arr_9 [i_2 - 1])) : (((/* implicit */int) arr_9 [i_2 - 1]))));
                }
            } 
        } 
        var_25 = ((/* implicit */unsigned short) (signed char)30);
        arr_13 [i_2 + 1] = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_7 [(unsigned short)7] [i_2 + 1]))));
        var_26 += ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)255)) + (((/* implicit */int) (_Bool)1))))) && (((/* implicit */_Bool) (+(arr_5 [(_Bool)1]))))));
    }
    var_27 -= ((/* implicit */int) var_15);
}
