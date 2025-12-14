/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120392
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120392 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120392
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
    var_13 = ((((/* implicit */int) (!(((/* implicit */_Bool) var_5))))) << (((unsigned int) ((signed char) var_7))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (short i_1 = 4; i_1 < 22; i_1 += 2) 
        {
            var_14 = ((/* implicit */long long int) (~((-(((/* implicit */int) (short)16383))))));
            /* LoopSeq 2 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                var_15 = ((/* implicit */signed char) arr_2 [i_0]);
                arr_7 [i_0] [i_0] [i_0] [i_0] = arr_2 [i_0];
            }
            for (unsigned long long int i_3 = 0; i_3 < 24; i_3 += 2) 
            {
                /* LoopSeq 1 */
                for (short i_4 = 3; i_4 < 21; i_4 += 2) 
                {
                    var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)19866)) ? (16676065750499102554ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)28528)))));
                    var_17 += ((/* implicit */unsigned short) (-(-161755752)));
                }
                var_18 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_8 [i_3]) ? (((/* implicit */int) (short)-9819)) : (arr_10 [i_0])))) ? (arr_1 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_0 [i_1] [i_1 + 1]))))));
            }
            var_19 = ((/* implicit */_Bool) min((var_19), (arr_5 [22ULL] [i_1])));
        }
        var_20 = ((/* implicit */long long int) ((arr_3 [i_0] [(unsigned short)14] [i_0]) << (((var_6) - (15465843928900063663ULL)))));
        var_21 &= ((/* implicit */long long int) (_Bool)1);
    }
    var_22 += ((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_4) ? (((/* implicit */int) var_9)) : ((+(((/* implicit */int) (_Bool)1))))))) ? ((-(min((((/* implicit */long long int) (_Bool)1)), (-1LL))))) : (((/* implicit */long long int) ((/* implicit */int) var_11)))));
    var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) var_1)))) ? (((/* implicit */int) var_3)) : (((int) ((unsigned short) (_Bool)1))))))));
}
