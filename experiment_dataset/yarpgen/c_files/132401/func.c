/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132401
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132401 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132401
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
    var_11 = ((/* implicit */unsigned int) ((unsigned char) (signed char)118));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        var_12 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */int) (short)-8803)) & (((/* implicit */int) arr_0 [i_0] [i_0]))))));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    var_13 -= ((/* implicit */signed char) (~(((/* implicit */int) arr_3 [i_2 - 1] [(_Bool)1]))));
                    var_14 = ((/* implicit */_Bool) (~(((/* implicit */int) arr_3 [i_0] [i_0]))));
                }
            } 
        } 
        var_15 ^= ((/* implicit */unsigned char) (~(((/* implicit */int) arr_7 [i_0] [i_0] [i_0]))));
    }
    /* LoopNest 2 */
    for (unsigned int i_3 = 2; i_3 < 19; i_3 += 1) 
    {
        for (unsigned short i_4 = 0; i_4 < 22; i_4 += 2) 
        {
            {
                var_16 = ((/* implicit */unsigned char) min((var_7), (((((/* implicit */_Bool) -9163246545631319314LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) arr_10 [i_3 - 1])))) : (((((/* implicit */_Bool) arr_10 [(signed char)7])) ? (arr_11 [i_4]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [(_Bool)1] [i_4])))))))));
                var_17 -= ((/* implicit */unsigned short) arr_10 [i_4]);
                var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_4] [i_3 + 2] [i_3 - 2])) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_4 [i_3 + 3] [i_3] [i_3 + 1])) << (((((/* implicit */int) arr_4 [i_3] [i_3 + 2] [i_4])) - (88)))))) : ((~(arr_10 [i_3 + 3])))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) (~(((((((/* implicit */_Bool) 0U)) ? (3149524619U) : (((/* implicit */unsigned int) ((/* implicit */int) var_0))))) / (var_4))))))));
    var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) var_2))));
}
