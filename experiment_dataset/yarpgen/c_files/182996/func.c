/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182996
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182996 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182996
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
    var_17 -= ((/* implicit */short) min((((((/* implicit */int) (unsigned short)51951)) | (((/* implicit */int) var_5)))), (((/* implicit */int) ((_Bool) var_15)))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                arr_4 [i_0] [i_1 - 1] [i_0] = ((/* implicit */_Bool) var_10);
                /* LoopNest 2 */
                for (unsigned short i_2 = 1; i_2 < 19; i_2 += 2) 
                {
                    for (short i_3 = 0; i_3 < 23; i_3 += 4) 
                    {
                        {
                            arr_9 [i_0] [i_1] [i_2 - 1] [i_0] = ((/* implicit */short) (-(((((((/* implicit */int) var_9)) * (((/* implicit */int) var_6)))) * (((/* implicit */int) min((var_4), (((/* implicit */unsigned short) arr_5 [i_0] [i_0] [i_0])))))))));
                            var_18 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)-32152)) ? (((var_0) ? (((/* implicit */int) min((((/* implicit */unsigned short) var_5)), ((unsigned short)8900)))) : (((/* implicit */int) (unsigned short)51951)))) : (((/* implicit */int) ((((/* implicit */int) arr_7 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1])) == (((/* implicit */int) arr_0 [i_1 - 1])))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_4 = 0; i_4 < 11; i_4 += 4) 
    {
        for (short i_5 = 2; i_5 < 10; i_5 += 2) 
        {
            {
                arr_16 [i_4] [i_4] [i_5] = ((/* implicit */_Bool) ((unsigned short) ((unsigned short) (unsigned short)13607)));
                var_19 = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)13581)))) || (((/* implicit */_Bool) (+(((/* implicit */int) arr_5 [i_4] [i_5] [i_5])))))))) - ((-(((/* implicit */int) (unsigned short)13570))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
    {
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                {
                    var_20 = ((/* implicit */_Bool) max((((/* implicit */int) min((((/* implicit */unsigned short) ((_Bool) var_6))), ((unsigned short)51954)))), (((((/* implicit */int) arr_21 [i_6 - 1] [i_6 - 1] [i_6 - 1])) << (((/* implicit */int) arr_3 [i_6] [i_6 - 1] [i_6 - 1]))))));
                    var_21 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) var_1))) ? (((((/* implicit */int) var_12)) | (((/* implicit */int) arr_3 [i_6 - 1] [i_6 - 1] [i_6 - 1])))) : (((arr_18 [i_6 - 1] [(_Bool)0]) ? (((/* implicit */int) arr_25 [i_6 - 1] [i_6])) : (((/* implicit */int) var_8))))));
                }
            } 
        } 
    } 
}
