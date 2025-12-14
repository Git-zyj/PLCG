/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108289
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108289 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108289
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
    /* LoopSeq 1 */
    for (unsigned int i_0 = 2; i_0 < 15; i_0 += 3) 
    {
        var_11 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) 1384282820)) || (((4134076829U) > (((/* implicit */unsigned int) ((/* implicit */int) (short)1)))))));
        var_12 = ((((unsigned int) 4294967295U)) | (((/* implicit */unsigned int) ((int) 3198786U))));
    }
    var_13 = ((unsigned int) var_9);
    /* LoopNest 2 */
    for (unsigned int i_1 = 0; i_1 < 12; i_1 += 2) 
    {
        for (int i_2 = 2; i_2 < 11; i_2 += 1) 
        {
            {
                var_14 = ((((/* implicit */_Bool) 1945386440U)) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (short)19))))) : (((unsigned int) (short)25119)));
                /* LoopNest 2 */
                for (short i_3 = 1; i_3 < 10; i_3 += 2) 
                {
                    for (unsigned int i_4 = 0; i_4 < 12; i_4 += 3) 
                    {
                        {
                            var_15 = ((/* implicit */int) ((((/* implicit */_Bool) 873074645U)) && (((/* implicit */_Bool) 1384282837))));
                            var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) ((int) (short)3)))));
                            arr_17 [i_1] [i_2] [8U] |= ((unsigned int) ((short) 4294967264U));
                        }
                    } 
                } 
                arr_18 [i_2] = ((((/* implicit */_Bool) ((int) 0U))) ? (((((4294967273U) << (((1945386467U) - (1945386450U))))) ^ (3411757490U))) : (268435200U));
            }
        } 
    } 
}
