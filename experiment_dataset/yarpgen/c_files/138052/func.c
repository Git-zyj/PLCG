/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138052
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138052 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138052
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
    for (short i_0 = 2; i_0 < 9; i_0 += 4) 
    {
        var_13 |= ((/* implicit */short) (_Bool)1);
        arr_3 [i_0] [i_0] = ((/* implicit */short) (~(((/* implicit */int) (!(arr_0 [i_0 - 1] [i_0 - 1]))))));
    }
    /* vectorizable */
    for (short i_1 = 1; i_1 < 16; i_1 += 4) 
    {
        arr_6 [i_1] [i_1] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_1])) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1])))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)58572))))) : ((-(12556197393404224002ULL))));
        /* LoopSeq 1 */
        for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 4) 
        {
            var_14 = ((/* implicit */long long int) min((var_14), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)6964)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_0)))))));
            var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) var_2))));
            var_16 = ((/* implicit */unsigned long long int) (((_Bool)1) ? ((-(((/* implicit */int) var_5)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))));
            var_17 *= ((/* implicit */long long int) ((unsigned char) ((short) arr_10 [i_2] [i_1] [i_1])));
        }
        var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) (_Bool)1))));
        /* LoopNest 2 */
        for (unsigned short i_3 = 4; i_3 < 17; i_3 += 4) 
        {
            for (signed char i_4 = 2; i_4 < 17; i_4 += 4) 
            {
                {
                    var_19 = ((unsigned long long int) var_10);
                    arr_15 [i_1] [i_3] [i_1] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_7 [i_4] [i_3] [i_1])) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_3] [i_4]))))) % (((long long int) arr_8 [i_1] [2ULL] [i_4]))));
                    var_20 = ((/* implicit */long long int) 12556197393404224002ULL);
                }
            } 
        } 
        var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) ((long long int) arr_8 [18LL] [i_1 + 3] [i_1 + 2])))));
    }
    var_22 = ((/* implicit */short) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)244)));
}
