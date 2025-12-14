/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124296
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124296 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124296
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                arr_4 [i_0] [i_1] [i_1] = (_Bool)1;
                var_10 &= ((_Bool) ((var_6) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_2 [i_1 - 1]))));
                var_11 ^= arr_3 [i_1];
                var_12 -= ((((/* implicit */int) ((short) (+(((/* implicit */int) (short)21545)))))) != (((((var_9) ? (((/* implicit */int) arr_1 [i_0] [i_1])) : (((/* implicit */int) (short)1022)))) * (((/* implicit */int) arr_0 [i_1 - 1])))));
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            arr_12 [i_3] [i_1 - 1] [i_2] [i_3] = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */int) min((((/* implicit */short) var_3)), (var_1)))) > ((-(((/* implicit */int) (_Bool)0))))))) - (((/* implicit */int) arr_5 [i_1]))));
                            var_13 |= (!(((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) arr_7 [i_0] [i_2] [i_3]))))));
                            var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) var_8)) <= (((/* implicit */int) var_1))))) % (((/* implicit */int) ((short) var_2)))))) ? ((+(((/* implicit */int) ((short) var_1))))) : (min((((((/* implicit */int) var_8)) + (((/* implicit */int) var_9)))), (((/* implicit */int) ((short) arr_6 [i_1] [i_3]))))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_15 = ((/* implicit */_Bool) ((((((/* implicit */int) ((((/* implicit */int) var_2)) <= (((/* implicit */int) var_2))))) <= (((/* implicit */int) ((short) var_1))))) ? (((((var_5) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_4)))) + (((/* implicit */int) var_3)))) : (((/* implicit */int) min((((_Bool) (_Bool)0)), (((_Bool) var_9)))))));
    var_16 = ((((/* implicit */_Bool) (short)28164)) || (var_0));
    var_17 = ((/* implicit */_Bool) (((+(((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (_Bool)1)))))) - (((/* implicit */int) (short)23492))));
    /* LoopNest 3 */
    for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
    {
        for (short i_5 = 0; i_5 < 25; i_5 += 3) 
        {
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                {
                    arr_20 [i_4] [i_4] [i_4] [i_6] = ((/* implicit */short) min(((_Bool)1), ((_Bool)0)));
                    var_18 &= ((((_Bool) (_Bool)0)) || (((((var_8) && (var_7))) && (((_Bool) (_Bool)1)))));
                }
            } 
        } 
    } 
}
