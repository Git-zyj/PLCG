/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163297
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163297 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163297
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
    /* LoopSeq 3 */
    for (signed char i_0 = 3; i_0 < 24; i_0 += 2) 
    {
        var_16 = arr_0 [i_0];
        var_17 += ((/* implicit */unsigned int) var_2);
        arr_2 [i_0] = ((/* implicit */int) (~(((((/* implicit */_Bool) (~(arr_0 [i_0])))) ? (5ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_6))))))))));
    }
    /* vectorizable */
    for (unsigned int i_1 = 0; i_1 < 12; i_1 += 2) 
    {
        arr_7 [i_1] = ((/* implicit */unsigned long long int) var_2);
        var_18 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) | (var_9)));
        arr_8 [i_1] = ((/* implicit */signed char) var_7);
    }
    for (short i_2 = 1; i_2 < 9; i_2 += 4) 
    {
        /* LoopSeq 1 */
        for (int i_3 = 3; i_3 < 9; i_3 += 3) 
        {
            var_19 = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) var_3))))) ? (((/* implicit */long long int) -1605065667)) : (3540893708193105000LL)));
            var_20 = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_15 [i_2] [i_2] [i_3]))));
        }
        /* LoopSeq 2 */
        for (unsigned int i_4 = 3; i_4 < 10; i_4 += 4) 
        {
            var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) 3895381945U)), (var_14))))));
            var_22 = ((/* implicit */_Bool) arr_16 [i_2] [i_2] [i_4 - 3]);
            var_23 *= ((/* implicit */unsigned short) (-((-(((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)12581))) : (var_7)))))));
        }
        for (int i_5 = 0; i_5 < 11; i_5 += 1) 
        {
            var_24 *= ((/* implicit */short) (signed char)-1);
            arr_20 [i_5] [i_5] = ((/* implicit */short) 7993265228631453138ULL);
            var_25 = ((/* implicit */unsigned long long int) arr_1 [i_2 + 2] [i_2 + 2]);
            /* LoopNest 2 */
            for (unsigned short i_6 = 0; i_6 < 11; i_6 += 2) 
            {
                for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                {
                    {
                        var_26 = ((/* implicit */unsigned char) (((~(((/* implicit */int) (signed char)-94)))) > (((/* implicit */int) arr_17 [7U] [i_5] [(short)2]))));
                        arr_25 [i_6] [i_6] |= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_21 [i_2 + 2] [i_6] [i_2 + 2]))));
                        arr_26 [i_2] [i_5] [i_5] [i_7 - 1] = var_12;
                    }
                } 
            } 
        }
        arr_27 [i_2 + 1] = ((/* implicit */unsigned short) var_12);
    }
    var_27 = ((/* implicit */int) max((var_27), (((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) 888857115U)), (((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) var_13)) : (var_10)))))) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (var_14))))));
}
