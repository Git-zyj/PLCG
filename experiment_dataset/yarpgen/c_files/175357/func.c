/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175357
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175357 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175357
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
    var_14 = ((/* implicit */short) max((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (short)-26767))))) : ((-(((/* implicit */int) var_12)))))), (min((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_6)))), (((/* implicit */int) var_1))))));
    /* LoopSeq 1 */
    for (short i_0 = 1; i_0 < 21; i_0 += 4) 
    {
        var_15 = ((/* implicit */short) ((((/* implicit */int) var_12)) - (((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? (((/* implicit */int) arr_1 [i_0 + 3] [i_0 + 3])) : (((/* implicit */int) arr_1 [i_0 + 3] [i_0 + 1]))))));
        /* LoopNest 3 */
        for (short i_1 = 3; i_1 < 22; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 24; i_2 += 2) 
            {
                for (short i_3 = 1; i_3 < 21; i_3 += 3) 
                {
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned char i_4 = 0; i_4 < 24; i_4 += 2) 
                        {
                            var_16 -= ((/* implicit */unsigned char) var_10);
                            arr_12 [i_3] [i_3] [i_2] [i_1 + 1] [i_3] = ((/* implicit */short) arr_7 [i_0 - 1]);
                            var_17 = ((/* implicit */short) ((((/* implicit */_Bool) ((short) (short)26766))) ? (((((/* implicit */_Bool) (unsigned char)89)) ? (((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_1] [i_3 - 1])) : (((/* implicit */int) arr_7 [i_0])))) : (((/* implicit */int) arr_9 [i_1 - 2] [i_1 - 3] [i_1 + 2]))));
                            arr_13 [i_3] = arr_5 [i_3];
                        }
                        for (short i_5 = 0; i_5 < 24; i_5 += 2) 
                        {
                            var_18 &= ((/* implicit */unsigned char) ((((/* implicit */int) (short)-8439)) - (((/* implicit */int) arr_7 [i_5]))));
                            arr_16 [i_5] [i_5] [i_2] [i_5] [i_0 - 1] |= (short)26763;
                        }
                        arr_17 [i_0 + 1] [i_2] |= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_3])) | (((((/* implicit */int) arr_11 [i_0] [i_1 + 2] [i_0] [i_0] [i_2])) | (((/* implicit */int) var_4))))))) ? (((((/* implicit */int) ((unsigned char) (unsigned char)245))) | (((/* implicit */int) ((short) var_0))))) : (((/* implicit */int) ((unsigned char) arr_1 [i_1] [i_1])))));
                        var_19 = ((/* implicit */unsigned char) (~(((/* implicit */int) var_7))));
                        var_20 -= ((/* implicit */short) (~((~(((/* implicit */int) var_10))))));
                    }
                } 
            } 
        } 
    }
    var_21 = ((/* implicit */short) var_0);
    var_22 = ((/* implicit */short) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) max((var_13), (min((((/* implicit */short) (unsigned char)43)), ((short)-21681))))))));
}
