/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161131
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161131 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161131
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
    var_15 ^= ((short) var_14);
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 3; i_0 < 22; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (short i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 23; i_2 += 1) 
            {
                for (short i_3 = 0; i_3 < 23; i_3 += 4) 
                {
                    {
                        arr_13 [i_2] = ((/* implicit */short) (-(((/* implicit */int) (short)5559))));
                        var_16 = ((/* implicit */short) ((((/* implicit */int) var_6)) / (((/* implicit */int) arr_7 [i_0] [i_0 - 2] [i_0 + 1]))));
                        var_17 |= ((/* implicit */short) (~(((/* implicit */int) ((((/* implicit */int) (short)1)) > (((/* implicit */int) var_3)))))));
                    }
                } 
            } 
        } 
        var_18 = (short)32766;
        var_19 = ((/* implicit */short) ((((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) (short)32744)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-32757)) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) (short)26)))))));
    }
    /* LoopNest 2 */
    for (short i_4 = 4; i_4 < 16; i_4 += 2) 
    {
        for (short i_5 = 0; i_5 < 17; i_5 += 2) 
        {
            {
                /* LoopNest 3 */
                for (short i_6 = 0; i_6 < 17; i_6 += 4) 
                {
                    for (short i_7 = 0; i_7 < 17; i_7 += 1) 
                    {
                        for (short i_8 = 0; i_8 < 17; i_8 += 1) 
                        {
                            {
                                arr_27 [i_4] [i_5] [i_7] = ((/* implicit */short) min((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_17 [i_7] [(short)11] [i_6])))), (((/* implicit */int) var_14))));
                                var_20 += max(((short)-1), (arr_5 [i_4 + 1] [i_4 - 1]));
                            }
                        } 
                    } 
                } 
                arr_28 [i_5] [i_5] = (short)-32763;
                var_21 = ((/* implicit */short) max((var_21), (min((((/* implicit */short) ((((/* implicit */int) (short)0)) > (((/* implicit */int) (short)32763))))), (var_6)))));
                /* LoopNest 2 */
                for (short i_9 = 0; i_9 < 17; i_9 += 3) 
                {
                    for (short i_10 = 3; i_10 < 16; i_10 += 1) 
                    {
                        {
                            arr_34 [i_10] [i_5] [i_5] [i_5] [(short)15] = (short)254;
                            var_22 = ((/* implicit */short) max((var_22), (var_0)));
                            var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) (~(((/* implicit */int) min(((short)32767), (arr_12 [i_10 - 2] [i_10 - 1] [(short)22] [i_10 - 3] [i_10 - 1] [i_5])))))))));
                            var_24 ^= ((/* implicit */short) min((((/* implicit */int) ((((/* implicit */int) var_11)) > (((/* implicit */int) var_13))))), ((-(((((((/* implicit */int) var_2)) + (2147483647))) << (((((/* implicit */int) (short)15589)) - (15589)))))))));
                            var_25 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_29 [(short)8] [i_5]))));
                        }
                    } 
                } 
            }
        } 
    } 
}
