/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178106
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178106 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178106
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
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        arr_2 [i_0] [i_0] |= ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)18109))) < (((((((/* implicit */_Bool) arr_1 [i_0])) && (((/* implicit */_Bool) arr_1 [i_0])))) ? (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-8590))) : (arr_1 [8U]))) : (arr_1 [i_0])))));
        /* LoopSeq 1 */
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            var_11 = max(((short)16514), ((short)25688));
            var_12 += arr_1 [i_0];
            arr_6 [i_1] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0])) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-7168))) : (arr_0 [i_0]))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-7709)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (1487636690U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_1 [(short)1]) : (3620017245U))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_3 [i_1])) < (((/* implicit */int) arr_3 [i_1])))))));
        }
        var_13 = ((/* implicit */short) ((((/* implicit */_Bool) ((((3012731421U) <= (((/* implicit */unsigned int) ((/* implicit */int) var_9))))) ? (((/* implicit */int) arr_4 [i_0])) : (((/* implicit */int) (short)5575))))) ? (((/* implicit */int) (short)-21657)) : (((/* implicit */int) ((((/* implicit */int) (short)-5547)) <= (((/* implicit */int) ((1282235874U) > (459094231U)))))))));
    }
    var_14 = (((!(((/* implicit */_Bool) min((((/* implicit */unsigned int) var_9)), (var_6)))))) ? (var_0) : (max((var_0), (((/* implicit */unsigned int) ((short) var_3))))));
    /* LoopNest 3 */
    for (unsigned int i_2 = 1; i_2 < 20; i_2 += 4) 
    {
        for (unsigned int i_3 = 0; i_3 < 21; i_3 += 4) 
        {
            for (short i_4 = 1; i_4 < 19; i_4 += 3) 
            {
                {
                    var_15 = ((((((/* implicit */_Bool) ((unsigned int) arr_9 [i_2 - 1]))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)7159))) : (493221040U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_14 [i_2] [i_4])) : (((/* implicit */int) arr_12 [i_4]))))))) & (((((/* implicit */_Bool) arr_13 [i_4 - 1] [(short)11])) ? (max((arr_9 [i_2]), (arr_10 [i_2]))) : (((((/* implicit */_Bool) var_4)) ? (var_8) : (arr_15 [i_4]))))));
                    var_16 += ((/* implicit */short) arr_15 [i_3]);
                }
            } 
        } 
    } 
}
