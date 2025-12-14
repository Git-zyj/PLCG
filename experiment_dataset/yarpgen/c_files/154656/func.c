/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154656
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154656 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154656
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
    var_20 = ((/* implicit */short) var_14);
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 19; i_2 += 1) 
            {
                {
                    var_21 = ((/* implicit */short) ((((/* implicit */_Bool) ((int) max((var_8), (-487136243))))) && (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-18595)) ? (((/* implicit */int) (short)-18595)) : (((/* implicit */int) (short)18609))))) || (((/* implicit */_Bool) ((short) 1081007839)))))));
                    arr_9 [(short)9] [0] = ((/* implicit */short) (!(((/* implicit */_Bool) ((short) min((var_18), (arr_6 [i_0])))))));
                    var_22 = ((/* implicit */short) 1985940264);
                }
            } 
        } 
        arr_10 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_7 [i_0] [i_0])) ? (((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */int) arr_2 [i_0] [i_0])) : (((/* implicit */int) arr_2 [i_0] [i_0])))) : ((((((-2147483647 - 1)) - (((/* implicit */int) (short)-10420)))) + ((+(-16)))))));
        var_23 ^= (short)29063;
        arr_11 [i_0] = ((/* implicit */short) (~((~((~(((/* implicit */int) var_12))))))));
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 19; i_3 += 4) 
        {
            for (int i_4 = 0; i_4 < 19; i_4 += 1) 
            {
                for (short i_5 = 0; i_5 < 19; i_5 += 1) 
                {
                    {
                        var_24 -= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_7 [i_0] [i_5])) : (((/* implicit */int) (short)24))))) ? (max((((/* implicit */int) arr_18 [i_3] [i_4])), (arr_12 [i_3] [i_3] [i_5]))) : (((/* implicit */int) ((short) -39)))));
                        var_25 += ((short) ((((/* implicit */_Bool) arr_3 [i_4])) && (((/* implicit */_Bool) arr_3 [i_0]))));
                        var_26 -= ((/* implicit */short) min(((~(((/* implicit */int) (short)-17607)))), (((max((((/* implicit */int) (short)-1)), (var_15))) + (-19)))));
                        arr_23 [i_5] [i_5] [i_5] = ((/* implicit */short) max(((+(((/* implicit */int) var_2)))), ((+(((var_14) + (arr_21 [i_0] [i_3] [i_4] [i_5])))))));
                        var_27 = ((((-1081007839) + (2147483647))) << (((95367424) - (95367424))));
                    }
                } 
            } 
        } 
    }
    var_28 = ((/* implicit */int) max((var_28), (21)));
    var_29 = (~(max(((~(((/* implicit */int) var_2)))), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (short)-26040)) : (((/* implicit */int) (short)32741)))))));
    var_30 = ((var_1) ^ (((/* implicit */int) var_3)));
}
