/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168395
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168395 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168395
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
    var_17 = ((/* implicit */short) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) min(((short)17), (min(((short)-29), ((short)-14679))))))));
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 11; i_0 += 4) 
    {
        for (short i_1 = 2; i_1 < 11; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (short i_2 = 1; i_2 < 9; i_2 += 3) 
                {
                    for (short i_3 = 0; i_3 < 12; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 12; i_4 += 4) 
                        {
                            {
                                var_18 = ((short) (((-(((/* implicit */int) var_12)))) - (((/* implicit */int) min(((short)224), ((short)-24702))))));
                                arr_16 [i_3] [i_3] [i_1] = ((/* implicit */short) min((((((/* implicit */_Bool) (short)-24692)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_6)))), (((((/* implicit */_Bool) arr_10 [i_1] [i_1])) ? (((/* implicit */int) arr_10 [i_1] [i_1])) : (((/* implicit */int) arr_10 [i_1] [i_1]))))));
                            }
                        } 
                    } 
                } 
                var_19 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) ((short) var_0))) & (((/* implicit */int) min(((short)40), ((short)-3629))))))) || (((/* implicit */_Bool) (-(((/* implicit */int) min(((short)7267), ((short)8958)))))))));
                /* LoopSeq 2 */
                for (short i_5 = 0; i_5 < 12; i_5 += 4) /* same iter space */
                {
                    var_20 = ((/* implicit */short) min((((/* implicit */int) min(((short)30720), ((short)3432)))), ((((+(((/* implicit */int) (short)24682)))) / (((/* implicit */int) var_6))))));
                    /* LoopSeq 1 */
                    for (short i_6 = 0; i_6 < 12; i_6 += 1) 
                    {
                        var_21 -= ((short) ((((/* implicit */int) arr_8 [i_0 - 1] [i_0 - 1] [i_5] [i_1 - 2])) == (((/* implicit */int) arr_8 [i_0 - 1] [i_1] [i_5] [i_1 - 2]))));
                        var_22 = ((/* implicit */short) ((((/* implicit */_Bool) arr_14 [i_6] [i_6] [i_0] [i_1] [i_0] [i_0])) ? (((/* implicit */int) arr_21 [i_1])) : (((/* implicit */int) arr_4 [i_0]))));
                        var_23 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_18 [i_1] [i_0 - 1] [i_0 - 1] [i_0 - 1])) : (((/* implicit */int) var_6)))))));
                        var_24 = arr_2 [i_5];
                        arr_22 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_1)))) / (((((/* implicit */_Bool) (short)-25239)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (short)24715))))))) ? (((/* implicit */int) ((short) var_0))) : ((+(((/* implicit */int) arr_3 [i_1 - 1] [i_1 - 2] [i_1]))))));
                    }
                }
                for (short i_7 = 0; i_7 < 12; i_7 += 4) /* same iter space */
                {
                    var_25 = ((/* implicit */short) ((((((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_1])) ? ((-(((/* implicit */int) var_5)))) : (((/* implicit */int) var_6)))) * ((-(((((/* implicit */int) var_4)) & (((/* implicit */int) var_10))))))));
                    var_26 = ((/* implicit */short) max((var_26), (min(((short)-24715), ((short)26905)))));
                }
                /* LoopNest 2 */
                for (short i_8 = 2; i_8 < 10; i_8 += 1) 
                {
                    for (short i_9 = 0; i_9 < 12; i_9 += 4) 
                    {
                        {
                            arr_31 [i_1] [i_8] [i_0] [i_1] = var_2;
                            arr_32 [i_1] [i_1] [i_8] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)11)) ? (((/* implicit */int) arr_13 [i_0] [i_1] [i_8] [i_8] [i_9])) : (((/* implicit */int) var_6))))) ? (((((/* implicit */int) (short)24702)) & (((/* implicit */int) var_0)))) : (((/* implicit */int) var_7)))) : ((~(((((/* implicit */_Bool) arr_28 [i_0] [i_1] [i_1] [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) var_9))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_27 = ((/* implicit */short) (!((!(((/* implicit */_Bool) var_5))))));
}
