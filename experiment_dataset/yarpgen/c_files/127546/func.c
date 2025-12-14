/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127546
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127546 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127546
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
    var_19 = ((/* implicit */unsigned char) min((min((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_3))))), (((((/* implicit */_Bool) var_12)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))))))), (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) 6440284382335930350ULL)))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_4)))))));
    var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (signed char)32)) : (min(((~(((/* implicit */int) (signed char)59)))), (((/* implicit */int) var_0)))))))));
    var_21 = ((/* implicit */signed char) ((short) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_3)) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_17)))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (short i_1 = 4; i_1 < 16; i_1 += 4) 
        {
            for (signed char i_2 = 1; i_2 < 15; i_2 += 1) 
            {
                {
                    var_22 = arr_4 [i_0] [(signed char)17] [(signed char)17];
                    arr_8 [i_0] [i_2] [i_2 + 4] = arr_3 [i_1];
                }
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned long long int i_3 = 0; i_3 < 19; i_3 += 4) 
        {
            arr_12 [i_0] [i_3] = ((/* implicit */short) arr_7 [i_0]);
            /* LoopNest 2 */
            for (short i_4 = 0; i_4 < 19; i_4 += 3) 
            {
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    {
                        arr_18 [i_3] [i_3] [i_3] [(signed char)12] [(signed char)12] = ((/* implicit */short) ((((((/* implicit */_Bool) 18002639133731025714ULL)) || (((/* implicit */_Bool) arr_2 [i_0])))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_14))));
                        var_23 &= ((/* implicit */short) arr_4 [i_0] [i_4] [i_0]);
                    }
                } 
            } 
        }
    }
}
