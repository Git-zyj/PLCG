/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118282
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118282 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118282
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
    for (short i_0 = 2; i_0 < 21; i_0 += 4) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (signed char i_1 = 1; i_1 < 21; i_1 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 4) 
            {
                for (unsigned int i_3 = 2; i_3 < 21; i_3 += 2) 
                {
                    {
                        arr_11 [(unsigned short)9] [i_3 - 1] [i_1] [i_1] [i_0] [i_0] = ((/* implicit */unsigned short) (~((-(var_1)))));
                        arr_12 [i_1] [i_3 + 1] [i_0 - 2] [i_1 - 1] [i_1] = ((/* implicit */int) arr_5 [i_3 - 1] [i_3 - 1]);
                        arr_13 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))) ^ (((arr_6 [2ULL] [i_1] [i_3 - 1]) ? (arr_7 [i_0 + 2] [i_1] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)45)))))));
                    }
                } 
            } 
            arr_14 [i_0 + 2] [i_1] [i_1] = var_10;
            var_11 -= ((/* implicit */_Bool) var_3);
        }
        arr_15 [i_0] = ((/* implicit */short) arr_0 [i_0]);
        var_12 = ((/* implicit */signed char) ((short) var_1));
    }
    var_13 = ((/* implicit */int) -9223372036854775804LL);
}
