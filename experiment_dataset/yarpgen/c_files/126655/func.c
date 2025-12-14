/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126655
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126655 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126655
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
    for (int i_0 = 3; i_0 < 22; i_0 += 1) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            var_10 = arr_0 [i_0];
            /* LoopSeq 2 */
            for (unsigned int i_2 = 0; i_2 < 24; i_2 += 4) 
            {
                arr_8 [i_2] [i_2] [i_2] |= var_0;
                var_11 = ((/* implicit */unsigned int) max((var_11), (((/* implicit */unsigned int) var_3))));
                var_12 = ((/* implicit */long long int) max((var_12), (((/* implicit */long long int) ((((/* implicit */_Bool) 0LL)) && (((/* implicit */_Bool) (short)-20007)))))));
            }
            for (short i_3 = 3; i_3 < 22; i_3 += 1) 
            {
                var_13 = ((/* implicit */long long int) (~((-2147483647 - 1))));
                var_14 = ((/* implicit */signed char) (~(arr_9 [i_1] [i_1])));
                var_15 = ((/* implicit */signed char) 9223372036854775807LL);
            }
        }
        arr_11 [3U] [3U] = ((/* implicit */int) arr_5 [i_0] [i_0] [i_0 - 3]);
        arr_12 [(short)1] = ((/* implicit */long long int) (short)31209);
        arr_13 [i_0] = ((((((/* implicit */int) arr_0 [i_0 - 1])) - (((/* implicit */int) arr_4 [i_0] [i_0] [i_0 + 2] [i_0 + 2])))) - (((/* implicit */int) (short)31219)));
        arr_14 [i_0 - 3] = ((/* implicit */signed char) max((((/* implicit */int) arr_5 [i_0] [i_0] [i_0])), (arr_9 [18LL] [i_0])));
    }
    var_16 = ((/* implicit */unsigned char) var_2);
    /* LoopSeq 2 */
    for (unsigned char i_4 = 2; i_4 < 18; i_4 += 4) 
    {
        arr_18 [i_4 - 1] [i_4 + 2] |= ((/* implicit */short) max((((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_15 [i_4]))))) % (max((arr_2 [i_4] [i_4] [i_4]), (((/* implicit */unsigned int) arr_17 [9] [i_4 - 2])))))), (((/* implicit */unsigned int) (~(((/* implicit */int) max((((/* implicit */short) var_4)), (arr_10 [i_4] [i_4] [i_4])))))))));
        arr_19 [i_4] [i_4] = ((/* implicit */short) (+(arr_9 [i_4] [i_4 - 2])));
        arr_20 [i_4] = ((/* implicit */signed char) max((max(((short)-1), ((short)31210))), (((/* implicit */short) arr_3 [i_4] [i_4 + 3]))));
        var_17 = ((/* implicit */int) min((var_17), ((((!(((/* implicit */_Bool) max((var_5), (((/* implicit */unsigned int) var_6))))))) ? (((/* implicit */int) (short)1946)) : (((/* implicit */int) ((signed char) arr_10 [i_4] [i_4] [i_4])))))));
        var_18 = max(((~(((/* implicit */int) var_8)))), (((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) arr_6 [i_4 + 1] [i_4 + 1] [i_4])) : (var_0))));
    }
    for (short i_5 = 0; i_5 < 21; i_5 += 1) 
    {
        var_19 -= ((((((/* implicit */_Bool) var_1)) && ((!(((/* implicit */_Bool) arr_21 [i_5])))))) ? (((((/* implicit */int) arr_5 [i_5] [i_5] [i_5])) >> (((((/* implicit */int) (signed char)59)) - (32))))) : (((((/* implicit */int) min(((short)-31211), ((short)-1)))) | (((/* implicit */int) arr_6 [i_5] [i_5] [i_5])))));
        arr_23 [i_5] = var_3;
    }
}
