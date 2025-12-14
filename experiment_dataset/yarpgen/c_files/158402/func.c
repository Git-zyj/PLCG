/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158402
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158402 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158402
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
    for (int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (unsigned int i_1 = 4; i_1 < 17; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 1; i_2 < 17; i_2 += 4) 
                {
                    for (int i_3 = 0; i_3 < 18; i_3 += 2) 
                    {
                        {
                            arr_13 [(short)11] = ((/* implicit */signed char) ((((/* implicit */unsigned int) (~(((/* implicit */int) arr_7 [i_0]))))) & (((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_0] [i_1] [i_2] [i_3]))) : (3221225472U)))));
                            arr_14 [i_2] [i_0] = ((/* implicit */unsigned int) arr_11 [i_0] [i_2] [i_3]);
                            arr_15 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (-(4294967295U)))) ? (max((((/* implicit */unsigned int) arr_8 [i_1 - 1] [i_1 - 4] [i_1] [i_1 - 3])), (((1073741828U) - (((/* implicit */unsigned int) -1008717884)))))) : (((/* implicit */unsigned int) max((((((/* implicit */_Bool) (short)32759)) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_10 [i_0] [(_Bool)1])))), (((/* implicit */int) var_15)))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        {
                            arr_23 [i_0] [i_1] [i_1] [i_5] [i_5] [i_5] = ((/* implicit */short) (signed char)-37);
                            arr_24 [i_0] [i_1] [7U] = ((/* implicit */short) ((unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-32757)) ? (((/* implicit */int) arr_7 [i_0])) : (2147483647)))) ? (((((/* implicit */_Bool) 2290647290U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)11142)))) : (((/* implicit */int) ((((/* implicit */_Bool) (signed char)-1)) && (((/* implicit */_Bool) (signed char)88))))))));
                            arr_25 [(_Bool)1] [(_Bool)1] [i_4] [(_Bool)1] [i_1] = ((/* implicit */unsigned int) (-(((/* implicit */int) var_2))));
                        }
                    } 
                } 
                arr_26 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */short) (signed char)25)), (max((arr_21 [i_0] [(short)13] [(signed char)12] [(short)10] [i_1] [i_1]), (((/* implicit */short) (signed char)13))))))) ? (((/* implicit */int) ((((/* implicit */int) max(((short)-32766), (arr_2 [i_0])))) > (((/* implicit */int) ((signed char) 1U)))))) : (((/* implicit */int) min((((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) var_10))) > (3221225472U)))), (min((arr_6 [i_1]), (((/* implicit */short) var_10)))))))));
            }
        } 
    } 
    var_19 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) ((short) ((((/* implicit */_Bool) (signed char)81)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (signed char)10))))))) / (((unsigned int) var_16))));
}
