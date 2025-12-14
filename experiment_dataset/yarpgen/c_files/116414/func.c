/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116414
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116414 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116414
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
    var_10 = var_8;
    var_11 = ((/* implicit */unsigned char) max((((/* implicit */int) var_7)), (((((/* implicit */_Bool) (unsigned char)15)) ? (((/* implicit */int) (unsigned char)0)) : ((~(((/* implicit */int) (unsigned char)1))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 2; i_0 < 8; i_0 += 4) 
    {
        for (unsigned char i_1 = 4; i_1 < 9; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 11; i_2 += 4) 
                {
                    for (unsigned char i_3 = 0; i_3 < 11; i_3 += 4) 
                    {
                        {
                            var_12 |= ((/* implicit */unsigned char) ((((/* implicit */int) max(((unsigned char)12), (arr_2 [i_1 + 2])))) + (((/* implicit */int) arr_2 [i_1 - 4]))));
                            var_13 = (unsigned char)247;
                            var_14 = ((unsigned char) ((((/* implicit */_Bool) ((unsigned char) (unsigned char)0))) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)2)))))));
                        }
                    } 
                } 
                arr_12 [i_0 + 3] [i_1] [i_0] = arr_3 [i_0 - 2] [i_1];
                var_15 += arr_11 [i_0] [(unsigned char)3] [(unsigned char)9] [i_0 - 2] [i_1];
            }
        } 
    } 
}
