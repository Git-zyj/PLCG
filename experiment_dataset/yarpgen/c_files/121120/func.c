/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121120
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121120 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121120
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
    var_10 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~((+(-3)))))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_4))));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        var_11 |= ((/* implicit */short) (-(((/* implicit */int) ((((/* implicit */_Bool) -3)) && (((/* implicit */_Bool) 3732036034U)))))));
        /* LoopSeq 2 */
        for (unsigned char i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            arr_6 [i_0] = max(((-(((/* implicit */int) arr_1 [i_0])))), (min((-7), (((((/* implicit */_Bool) -15)) ? ((-2147483647 - 1)) : (-3))))));
            var_12 = ((/* implicit */unsigned char) -3);
        }
        /* vectorizable */
        for (unsigned int i_2 = 0; i_2 < 18; i_2 += 2) 
        {
            /* LoopSeq 1 */
            for (short i_3 = 0; i_3 < 18; i_3 += 4) 
            {
                var_13 = ((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) arr_7 [i_0])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_3 [i_0] [i_3] [i_3])))));
                /* LoopSeq 1 */
                for (unsigned char i_4 = 0; i_4 < 18; i_4 += 1) 
                {
                    var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 144115188075855871ULL)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_3 [i_0] [i_0] [i_0]))));
                    var_15 = ((/* implicit */short) (+((+(var_3)))));
                    arr_14 [i_0] [i_0] [i_3] [i_4] = arr_4 [i_2] [i_2];
                }
            }
            arr_15 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)24)) / (((/* implicit */int) arr_2 [i_0]))));
            var_16 = ((/* implicit */long long int) (+(((/* implicit */int) (signed char)89))));
        }
    }
    var_17 = (-(4273286251766510270LL));
    var_18 = ((/* implicit */unsigned long long int) min((var_2), (((/* implicit */signed char) (_Bool)1))));
}
