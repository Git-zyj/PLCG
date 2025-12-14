/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138861
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138861 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138861
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
    var_11 = ((/* implicit */long long int) ((var_3) ? (var_1) : (((/* implicit */int) var_7))));
    /* LoopSeq 3 */
    for (short i_0 = 2; i_0 < 8; i_0 += 2) 
    {
        var_12 = ((arr_1 [i_0 - 1]) & (((/* implicit */long long int) min((-175651325), (((/* implicit */int) var_4))))));
        var_13 = ((/* implicit */short) max((459706392), ((+(((/* implicit */int) var_7))))));
        var_14 -= var_8;
        var_15 = var_8;
        var_16 = ((/* implicit */int) max((var_16), ((+((-(((/* implicit */int) min(((short)14874), (var_7))))))))));
    }
    /* vectorizable */
    for (long long int i_1 = 4; i_1 < 21; i_1 += 2) 
    {
        /* LoopNest 3 */
        for (long long int i_2 = 0; i_2 < 24; i_2 += 2) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                for (int i_4 = 1; i_4 < 22; i_4 += 2) 
                {
                    {
                        arr_11 [(_Bool)1] [i_4] [10LL] [i_4 - 1] = ((/* implicit */short) (+(arr_5 [i_4 - 1])));
                        arr_12 [8LL] [i_4] = ((/* implicit */long long int) (+(((/* implicit */int) (!(var_10))))));
                        var_17 = ((/* implicit */long long int) max((var_17), ((~(arr_9 [i_2])))));
                    }
                } 
            } 
        } 
        var_18 = 533867108377564104LL;
    }
    for (short i_5 = 0; i_5 < 17; i_5 += 2) 
    {
        /* LoopNest 3 */
        for (short i_6 = 1; i_6 < 15; i_6 += 2) 
        {
            for (int i_7 = 0; i_7 < 17; i_7 += 2) 
            {
                for (short i_8 = 0; i_8 < 17; i_8 += 2) 
                {
                    {
                        var_19 -= ((/* implicit */short) max((((/* implicit */int) var_10)), ((+(((((/* implicit */_Bool) (short)-13973)) ? (((/* implicit */int) (short)-4949)) : (((/* implicit */int) (short)-4949))))))));
                        arr_25 [(short)5] [(short)7] [(short)5] [i_8] = ((/* implicit */int) ((((/* implicit */_Bool) max((max((((/* implicit */long long int) arr_23 [i_5] [i_5] [i_6] [12] [6] [i_8])), (var_9))), (((/* implicit */long long int) ((459706388) | (479335600))))))) ? ((~(((long long int) (short)-29475)))) : ((-((+(533867108377564104LL)))))));
                        arr_26 [(_Bool)0] [i_6] [(_Bool)0] [i_6] = arr_21 [i_6 + 1];
                    }
                } 
            } 
        } 
        arr_27 [i_5] = ((/* implicit */_Bool) var_1);
    }
}
