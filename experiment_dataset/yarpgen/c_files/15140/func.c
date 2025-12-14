/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15140
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15140 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15140
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
    var_18 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((long long int) (+(((/* implicit */int) (unsigned short)34313)))))), (((((/* implicit */_Bool) (+(8LL)))) ? (((/* implicit */unsigned long long int) 22LL)) : (var_17)))));
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (short i_1 = 1; i_1 < 13; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 14; i_2 += 2) 
            {
                {
                    arr_7 [i_1] [i_1] [i_2] = ((/* implicit */signed char) min((((/* implicit */int) ((unsigned char) (+(14934601488241695113ULL))))), (arr_6 [i_0])));
                    var_19 = ((/* implicit */signed char) ((arr_6 [i_2]) ^ (((int) (+(26LL))))));
                }
            } 
        } 
        arr_8 [10U] = ((/* implicit */_Bool) (~((((!(((/* implicit */_Bool) 3587965536453321052LL)))) ? (min((var_7), (((/* implicit */unsigned long long int) var_4)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_6 [i_0]))))))));
        var_20 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))))) ? ((((-(((/* implicit */int) arr_4 [i_0])))) - (((/* implicit */int) ((short) 576160591))))) : (((/* implicit */int) ((signed char) 117440512U)))));
    }
    /* vectorizable */
    for (short i_3 = 4; i_3 < 19; i_3 += 3) 
    {
        var_21 = ((arr_9 [i_3 - 4]) | (arr_9 [i_3 - 4]));
        /* LoopSeq 1 */
        for (int i_4 = 0; i_4 < 21; i_4 += 3) 
        {
            var_22 ^= ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)16515)) ? (((/* implicit */int) arr_11 [i_4] [i_3])) : (2047)));
            /* LoopSeq 1 */
            for (int i_5 = 0; i_5 < 21; i_5 += 3) 
            {
                var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)65434)) ? (((((/* implicit */int) arr_11 [i_4] [i_3])) & (var_8))) : (arr_9 [i_3 - 2])));
                var_24 ^= ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */int) arr_10 [i_3] [i_3])) != (((/* implicit */int) (unsigned char)53))))) - (((/* implicit */int) arr_11 [i_3 - 1] [i_3 + 2]))));
            }
            var_25 = ((/* implicit */unsigned long long int) max((var_25), (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-13062))) == (var_17)))))))));
            arr_15 [i_3 - 4] [i_3] [i_3 - 2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_9 [i_3 - 4])) ? (((/* implicit */long long int) (-2147483647 - 1))) : (3587965536453321047LL)));
            arr_16 [i_3] [i_4] = ((/* implicit */long long int) (+(117440489U)));
        }
        arr_17 [i_3] [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_13 [(_Bool)0])) ? (((((/* implicit */_Bool) (short)16780)) ? (((/* implicit */int) (unsigned short)16500)) : (((/* implicit */int) (unsigned short)38569)))) : ((~(((/* implicit */int) arr_10 [(unsigned char)20] [(unsigned char)20]))))));
    }
    var_26 = ((/* implicit */int) ((((int) (short)1918)) != (((/* implicit */int) (!(((/* implicit */_Bool) (short)24576)))))));
}
