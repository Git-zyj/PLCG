/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165717
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165717 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165717
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
    /* vectorizable */
    for (int i_0 = 1; i_0 < 24; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (int i_1 = 1; i_1 < 24; i_1 += 4) 
        {
            /* LoopSeq 1 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                /* LoopSeq 1 */
                for (int i_3 = 0; i_3 < 25; i_3 += 3) 
                {
                    arr_9 [i_3] [i_0] [i_1] [i_0] [i_0] = ((unsigned long long int) ((62914560) | (((/* implicit */int) var_6))));
                    arr_10 [i_0] [i_1] [i_1 + 1] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) 8229159491693246762LL)) && (((/* implicit */_Bool) 2147483647)))) || (((/* implicit */_Bool) arr_2 [i_0] [i_0]))));
                }
                var_20 = ((/* implicit */short) (-(((long long int) var_13))));
            }
            var_21 = ((/* implicit */int) arr_1 [(unsigned short)18]);
        }
        arr_11 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_2 [i_0] [i_0 - 1])) <= (((/* implicit */int) arr_2 [i_0] [i_0 - 1]))));
    }
    for (int i_4 = 0; i_4 < 24; i_4 += 3) 
    {
        arr_14 [13] [i_4] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) -62914529)) ^ (4035091436726731744ULL)));
        var_22 = max((((/* implicit */long long int) var_2)), (((((/* implicit */long long int) ((/* implicit */int) arr_5 [i_4]))) / (arr_6 [(_Bool)1] [i_4] [i_4] [(_Bool)1]))));
    }
    var_23 = ((((/* implicit */int) (!(((/* implicit */_Bool) max((var_4), (((/* implicit */long long int) (short)-1298)))))))) <= (((/* implicit */int) var_7)));
    var_24 -= ((/* implicit */_Bool) ((unsigned long long int) (~(((((/* implicit */int) (unsigned short)65055)) ^ (((/* implicit */int) (unsigned short)480)))))));
}
