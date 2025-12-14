/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171351
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171351 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171351
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
    var_17 = var_3;
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_1 = 1; i_1 < 9; i_1 += 2) 
        {
            arr_5 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) ((unsigned short) (unsigned short)14557)))))) ? ((+(((/* implicit */int) max((arr_3 [i_1] [(unsigned short)2] [i_0]), (arr_2 [(unsigned short)8] [(unsigned short)6])))))) : ((+(((/* implicit */int) ((unsigned short) (unsigned short)53372)))))));
            /* LoopNest 3 */
            for (unsigned short i_2 = 0; i_2 < 10; i_2 += 1) 
            {
                for (unsigned short i_3 = 0; i_3 < 10; i_3 += 4) 
                {
                    for (unsigned short i_4 = 1; i_4 < 8; i_4 += 3) 
                    {
                        {
                            var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) (~(((/* implicit */int) min((arr_12 [i_3] [i_1] [i_3] [i_3] [(unsigned short)9]), ((unsigned short)30189)))))))));
                            var_19 = max(((unsigned short)30195), ((unsigned short)30195));
                            var_20 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) (unsigned short)58662)) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0] [i_1 - 1]))))) : (((/* implicit */int) (unsigned short)41985))))));
                        }
                    } 
                } 
            } 
        }
        /* LoopNest 2 */
        for (unsigned short i_5 = 3; i_5 < 7; i_5 += 1) 
        {
            for (unsigned short i_6 = 0; i_6 < 10; i_6 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_7 = 0; i_7 < 10; i_7 += 3) 
                    {
                        for (unsigned short i_8 = 0; i_8 < 10; i_8 += 1) 
                        {
                            {
                                var_21 = arr_23 [i_0] [i_5] [i_6] [i_5] [i_8] [(unsigned short)8];
                                arr_26 [i_0] = (unsigned short)48781;
                            }
                        } 
                    } 
                    arr_27 [i_0] [i_0] [i_0] = arr_2 [i_0] [(unsigned short)9];
                    var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) ((unsigned short) arr_11 [i_0])))))) ? (((/* implicit */int) (unsigned short)55883)) : ((+(((/* implicit */int) (unsigned short)64643))))));
                    var_23 |= ((unsigned short) (~(((/* implicit */int) (unsigned short)34820))));
                }
            } 
        } 
    }
    var_24 = (unsigned short)59194;
}
