/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136177
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136177 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136177
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
    var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) min((7006195408245508639LL), (((/* implicit */long long int) (short)32764)))))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 3; i_0 < 18; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((((/* implicit */int) var_9)) * (((/* implicit */int) var_12)))) : (((/* implicit */int) ((_Bool) (signed char)-114)))))) ? (((long long int) min((((/* implicit */long long int) var_8)), (var_6)))) : (((/* implicit */long long int) ((((/* implicit */int) var_5)) | (((int) var_1)))))));
        var_17 *= ((/* implicit */unsigned int) ((max((((/* implicit */int) var_12)), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_8)))))) / ((~(((/* implicit */int) var_12))))));
        arr_4 [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */int) var_15)) / (var_4))) != (max(((+(((/* implicit */int) var_12)))), (((/* implicit */int) var_2))))));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 19; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_10 [i_0 - 2] [i_0] = ((/* implicit */signed char) ((long long int) var_0));
                    arr_11 [i_0] [i_1] = ((/* implicit */long long int) max((((int) ((signed char) var_15))), (((/* implicit */int) ((short) var_13)))));
                    /* LoopNest 2 */
                    for (short i_3 = 2; i_3 < 19; i_3 += 4) 
                    {
                        for (long long int i_4 = 0; i_4 < 20; i_4 += 4) 
                        {
                            {
                                var_18 = ((/* implicit */short) (~(((((/* implicit */_Bool) max((((/* implicit */unsigned short) var_0)), (var_15)))) ? (((/* implicit */long long int) max((((/* implicit */int) var_10)), (var_13)))) : (max((((/* implicit */long long int) var_12)), (var_6)))))));
                                var_19 = ((/* implicit */_Bool) var_13);
                            }
                        } 
                    } 
                }
            } 
        } 
    }
}
