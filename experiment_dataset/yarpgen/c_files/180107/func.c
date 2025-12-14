/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180107
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180107 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180107
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
    var_13 = ((/* implicit */long long int) (((-(4294967295U))) < (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)8949)))));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 1; i_1 < 7; i_1 += 4) 
        {
            for (unsigned int i_2 = 3; i_2 < 10; i_2 += 2) 
            {
                {
                    arr_8 [i_0] [i_1] [i_0] [i_2] = ((/* implicit */int) ((min((arr_2 [i_2 + 1] [i_1 + 2]), (((/* implicit */unsigned long long int) arr_7 [i_1] [i_2] [i_2] [i_1 + 2])))) >> (((max((max((((/* implicit */unsigned int) arr_0 [i_0])), (1002448375U))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)56587)) && (((/* implicit */_Bool) arr_2 [i_2] [i_2]))))))) - (4294957092U)))));
                    arr_9 [i_0] [i_2] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */int) arr_4 [i_2] [i_0] [i_0])) >= (((/* implicit */int) arr_1 [i_1])))) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (((((/* implicit */_Bool) (unsigned short)8975)) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [i_1 + 2] [i_2] [i_2]))) : (var_10)))))) ? ((((~(var_10))) + (((((/* implicit */_Bool) arr_5 [7] [i_1] [i_2])) ? (arr_3 [i_1]) : (((/* implicit */long long int) var_12)))))) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_0 [i_1 + 4]))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 11; i_3 += 4) 
        {
            for (int i_4 = 0; i_4 < 11; i_4 += 2) 
            {
                {
                    var_14 += ((/* implicit */int) arr_7 [i_4] [i_4] [i_4] [i_0]);
                    arr_15 [i_3] [i_0] = ((/* implicit */long long int) arr_7 [i_0] [i_0] [i_4] [i_4]);
                }
            } 
        } 
        var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) ((min((((/* implicit */int) (signed char)78)), (var_0))) != (((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))))) : (((((/* implicit */int) (unsigned short)8949)) + ((+(((/* implicit */int) (unsigned short)56587))))))));
    }
    var_16 = var_7;
}
