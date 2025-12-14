/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122385
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122385 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122385
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
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 19; i_0 += 2) 
    {
        for (short i_1 = 2; i_1 < 19; i_1 += 2) 
        {
            {
                arr_5 [(unsigned char)0] [(unsigned char)0] [(unsigned short)8] = ((short) (-(((/* implicit */int) min((((/* implicit */short) (unsigned char)109)), (var_0))))));
                var_16 -= ((/* implicit */short) (unsigned char)109);
                arr_6 [i_0] [(unsigned char)9] [i_0] = ((/* implicit */unsigned char) (-((-(((/* implicit */int) arr_3 [i_1 + 1] [i_1 + 1]))))));
                arr_7 [i_0] = ((/* implicit */short) (((~((-(((/* implicit */int) (unsigned char)109)))))) + (((/* implicit */int) ((unsigned short) arr_1 [i_0 + 1])))));
            }
        } 
    } 
    var_17 = ((unsigned short) ((((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned char)109)))) | (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned short)8))))));
    /* LoopNest 2 */
    for (unsigned short i_2 = 1; i_2 < 19; i_2 += 1) 
    {
        for (unsigned short i_3 = 1; i_3 < 19; i_3 += 3) 
        {
            {
                arr_13 [i_2] [i_3] = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned short) arr_11 [(unsigned short)10])))))) % (min((((/* implicit */int) (!(((/* implicit */_Bool) var_2))))), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (short)-23531)) : (((/* implicit */int) (unsigned char)240))))))));
                arr_14 [i_2] = ((/* implicit */unsigned short) max(((~(((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [(short)9]))))))), (((((/* implicit */int) arr_0 [i_2 + 1] [i_3 + 1])) / (((/* implicit */int) (short)256))))));
            }
        } 
    } 
    var_18 &= ((/* implicit */unsigned char) (~(((/* implicit */int) min((((((/* implicit */int) var_10)) != (((/* implicit */int) (short)-23531)))), ((!(((/* implicit */_Bool) (short)-255)))))))));
}
