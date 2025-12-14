/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181236
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181236 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181236
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
    for (unsigned char i_0 = 3; i_0 < 19; i_0 += 1) 
    {
        arr_3 [i_0 + 2] [i_0 - 3] = ((/* implicit */unsigned char) max((arr_1 [i_0]), (((/* implicit */unsigned long long int) ((short) max((((/* implicit */long long int) var_11)), (0LL)))))));
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            /* LoopSeq 1 */
            for (long long int i_2 = 2; i_2 < 17; i_2 += 2) 
            {
                arr_9 [i_0] [i_0] [i_0 + 1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((unsigned int) ((-1LL) - (((/* implicit */long long int) ((/* implicit */int) var_3))))))) <= (((((/* implicit */_Bool) 0LL)) ? (((/* implicit */long long int) 2305505500U)) : (-6033380625324074091LL)))));
                var_14 -= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (signed char)0))));
            }
            var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) ((((/* implicit */long long int) ((((/* implicit */int) var_6)) % (((/* implicit */int) arr_5 [i_0 - 3] [i_0 - 1] [i_0 - 3]))))) < (((long long int) arr_1 [i_0 - 1])))))));
        }
        var_16 = ((int) arr_7 [i_0] [i_0]);
    }
    /* LoopSeq 1 */
    for (unsigned char i_3 = 0; i_3 < 10; i_3 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned short i_4 = 0; i_4 < 10; i_4 += 2) 
        {
            for (long long int i_5 = 0; i_5 < 10; i_5 += 4) 
            {
                {
                    var_17 = ((/* implicit */long long int) arr_14 [i_3] [i_4] [i_5]);
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (long long int i_6 = 0; i_6 < 10; i_6 += 2) 
                    {
                        var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 355908911)) ? (((/* implicit */int) arr_8 [i_3] [i_4] [i_5] [i_6])) : (((/* implicit */int) var_5))));
                        var_19 *= ((/* implicit */signed char) ((((/* implicit */int) arr_8 [i_3] [i_3] [i_3] [i_3])) - (((/* implicit */int) (short)-1676))));
                        var_20 = ((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)0))));
                    }
                }
            } 
        } 
        var_21 = (+(max(((-(-1LL))), (((/* implicit */long long int) -355908911)))));
    }
}
