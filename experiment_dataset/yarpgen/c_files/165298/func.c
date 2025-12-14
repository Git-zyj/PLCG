/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165298
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165298 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165298
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_0 = 2; i_0 < 12; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 14; i_2 += 3) 
            {
                {
                    arr_10 [i_2] [i_1] [i_1] [i_1] = ((/* implicit */_Bool) ((short) (!(((/* implicit */_Bool) var_8)))));
                    arr_11 [i_0] [i_2] [i_2] [i_2] = ((/* implicit */int) var_11);
                    arr_12 [i_2] [i_1] [i_2] = ((/* implicit */unsigned short) var_14);
                    arr_13 [i_2] [i_1] = ((/* implicit */short) (-(((/* implicit */int) var_0))));
                }
            } 
        } 
        arr_14 [i_0] [i_0] = ((/* implicit */signed char) arr_0 [i_0 - 1]);
        var_16 += ((/* implicit */unsigned short) arr_0 [i_0 - 1]);
    }
    for (signed char i_3 = 0; i_3 < 20; i_3 += 3) 
    {
        var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) (+(((/* implicit */int) arr_15 [i_3] [i_3])))))));
        var_18 ^= ((/* implicit */unsigned short) (+(((((/* implicit */int) arr_18 [i_3])) | (((/* implicit */int) arr_18 [i_3]))))));
        var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) arr_18 [i_3]))));
        /* LoopNest 3 */
        for (unsigned short i_4 = 3; i_4 < 19; i_4 += 3) 
        {
            for (unsigned short i_5 = 0; i_5 < 20; i_5 += 3) 
            {
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    {
                        var_20 = ((/* implicit */int) arr_26 [(_Bool)1] [i_4] [i_4] [i_6]);
                        var_21 ^= ((/* implicit */signed char) (unsigned char)184);
                    }
                } 
            } 
        } 
        var_22 = var_2;
    }
    var_23 = ((/* implicit */short) ((((/* implicit */int) var_9)) & (((/* implicit */int) (short)5482))));
}
