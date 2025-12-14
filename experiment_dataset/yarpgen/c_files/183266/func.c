/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183266
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183266 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183266
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
    /* LoopSeq 2 */
    for (short i_0 = 1; i_0 < 22; i_0 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 22; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                {
                    arr_7 [i_0] [i_1 - 1] [i_0] = ((/* implicit */signed char) min((arr_0 [i_0]), (((/* implicit */unsigned long long int) arr_3 [i_2] [i_0] [4LL]))));
                    var_10 = ((/* implicit */unsigned short) arr_3 [i_1 - 1] [i_0] [i_0 + 1]);
                }
            } 
        } 
        var_11 = ((/* implicit */int) ((((/* implicit */unsigned long long int) arr_1 [i_0])) >= (arr_0 [i_0])));
        var_12 = ((/* implicit */unsigned short) (~(((((/* implicit */int) arr_3 [i_0 - 1] [(_Bool)1] [i_0 + 2])) & (arr_2 [12U])))));
    }
    /* vectorizable */
    for (short i_3 = 1; i_3 < 22; i_3 += 2) /* same iter space */
    {
        arr_11 [i_3 + 1] [i_3] = ((/* implicit */long long int) ((signed char) arr_4 [i_3] [i_3 + 1]));
        var_13 = ((/* implicit */unsigned char) arr_10 [i_3]);
        arr_12 [i_3 - 1] |= arr_8 [i_3 + 2] [i_3];
    }
    var_14 = ((/* implicit */unsigned char) var_4);
}
