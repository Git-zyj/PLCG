/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140799
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140799 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140799
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
    var_10 &= ((short) var_5);
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (short i_1 = 2; i_1 < 11; i_1 += 1) 
        {
            for (short i_2 = 1; i_2 < 9; i_2 += 4) 
            {
                {
                    var_11 -= var_0;
                    var_12 = ((/* implicit */short) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-29695)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_6 [i_2]))))) ? (((((/* implicit */_Bool) (short)29705)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_2 [i_0])))) : (((((/* implicit */_Bool) (short)-29695)) ? (((/* implicit */int) (short)-29709)) : (((/* implicit */int) (short)511)))))), (((((/* implicit */_Bool) max((var_0), ((short)-11249)))) ? (((/* implicit */int) (short)-29688)) : ((~(((/* implicit */int) (short)29705))))))));
                    arr_8 [(short)4] [(short)8] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((short) var_5))) ? (((((/* implicit */_Bool) (short)-11249)) ? (((/* implicit */int) arr_5 [i_1 - 2])) : (((/* implicit */int) arr_5 [i_1 - 1])))) : (((/* implicit */int) max(((short)-4780), (arr_5 [i_1 + 1]))))));
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 12; i_3 += 4) 
                    {
                        for (short i_4 = 2; i_4 < 8; i_4 += 4) 
                        {
                            {
                                arr_14 [i_0] [i_1] [i_2 + 1] [i_0] [i_4 - 2] [i_4 + 3] [i_2 - 1] = ((/* implicit */short) ((((/* implicit */_Bool) arr_5 [i_2 + 1])) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_11 [i_0] [i_1] [i_2] [i_2] [i_4 - 2])) : (((/* implicit */int) arr_12 [i_0] [i_1] [i_2] [i_3] [i_3]))))) ? (((/* implicit */int) var_8)) : (((((/* implicit */_Bool) (short)7749)) ? (((/* implicit */int) (short)-4801)) : (((/* implicit */int) (short)19702)))))) : (((/* implicit */int) min((min(((short)1), ((short)-29677))), (max((arr_3 [(short)7]), (var_7))))))));
                                arr_15 [i_1 - 1] [i_1 - 1] [(short)9] = arr_3 [(short)3];
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
