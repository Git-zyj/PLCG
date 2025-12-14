/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186015
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186015 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186015
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_13 = ((/* implicit */_Bool) ((var_9) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))));
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            var_14 = ((/* implicit */int) min((var_14), (((/* implicit */int) min(((short)-8192), (((/* implicit */short) (signed char)29)))))));
            /* LoopSeq 1 */
            for (int i_2 = 0; i_2 < 11; i_2 += 1) 
            {
                arr_8 [i_2] [i_2] = ((/* implicit */_Bool) ((signed char) (~(((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_2)))))));
                var_15 = ((/* implicit */short) (~(min((((/* implicit */int) ((short) var_12))), (-594462322)))));
                var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((unsigned long long int) min((arr_0 [i_0]), (((/* implicit */unsigned long long int) (_Bool)1))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_1])) % (((/* implicit */int) arr_5 [i_2] [i_0]))))) && (((/* implicit */_Bool) max((var_10), (-1343991104))))))))));
                var_17 = ((/* implicit */signed char) ((((/* implicit */int) max((arr_2 [i_0]), (((/* implicit */signed char) var_7))))) <= (((/* implicit */int) var_7))));
            }
            /* LoopSeq 2 */
            for (short i_3 = 4; i_3 < 9; i_3 += 2) 
            {
                var_18 = ((/* implicit */int) (_Bool)1);
                var_19 = ((/* implicit */short) min((var_19), (((short) min((arr_0 [i_0]), (((unsigned long long int) arr_6 [i_0] [i_3] [i_0] [i_3])))))));
            }
            for (signed char i_4 = 0; i_4 < 11; i_4 += 3) 
            {
                arr_14 [i_0] [i_0] [i_0] [i_4] = ((/* implicit */short) max(((~((-(arr_13 [i_0] [i_1]))))), (arr_13 [i_0] [i_0])));
                arr_15 [i_4] = ((/* implicit */short) ((int) arr_6 [i_0] [i_1] [i_4] [i_4]));
                var_20 = (~(((/* implicit */int) ((_Bool) var_2))));
                var_21 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_10))));
            }
        }
    }
    for (signed char i_5 = 0; i_5 < 13; i_5 += 3) 
    {
        var_22 = ((/* implicit */short) max((var_22), ((short)-8202)));
        var_23 = ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (short)-8175)) : (var_4)));
        var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_16 [i_5] [(signed char)12])) * (((/* implicit */int) arr_16 [i_5] [12]))))) ? (((/* implicit */int) ((short) 4850609829598247385ULL))) : (var_4))))));
        arr_18 [i_5] = ((/* implicit */_Bool) (short)-8203);
    }
    var_25 = ((/* implicit */short) min((var_11), (((/* implicit */int) var_2))));
}
