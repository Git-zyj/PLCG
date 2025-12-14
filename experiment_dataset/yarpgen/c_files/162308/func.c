/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162308
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162308 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162308
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
    var_18 = ((/* implicit */unsigned short) var_13);
    /* LoopSeq 1 */
    for (unsigned int i_0 = 1; i_0 < 11; i_0 += 2) 
    {
        arr_2 [0U] [i_0] = ((/* implicit */unsigned int) ((unsigned short) ((unsigned int) max((var_4), (var_5)))));
        /* LoopNest 3 */
        for (unsigned short i_1 = 1; i_1 < 10; i_1 += 2) 
        {
            for (unsigned short i_2 = 3; i_2 < 11; i_2 += 4) 
            {
                for (unsigned short i_3 = 2; i_3 < 8; i_3 += 3) 
                {
                    {
                        arr_12 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+((+(511U)))))) ? ((~(arr_7 [i_1] [i_1 + 2] [i_1 - 1]))) : (((((/* implicit */_Bool) max((arr_9 [1U] [i_1] [i_1] [9U] [i_3]), ((unsigned short)14489)))) ? (((unsigned int) var_3)) : (12U)))));
                        var_19 = ((((/* implicit */_Bool) (-(((/* implicit */int) arr_8 [i_1] [i_2 - 3] [i_3 + 1]))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_8 [i_1] [i_2 - 3] [i_3 + 1])) ? (((/* implicit */int) arr_8 [i_1] [i_2 - 3] [i_3 + 1])) : (((/* implicit */int) arr_8 [i_1] [i_2 - 3] [i_3 + 1]))))) : (((unsigned int) (unsigned short)65531)));
                    }
                } 
            } 
        } 
        /* LoopNest 3 */
        for (unsigned short i_4 = 1; i_4 < 9; i_4 += 3) 
        {
            for (unsigned short i_5 = 1; i_5 < 9; i_5 += 1) 
            {
                for (unsigned short i_6 = 1; i_6 < 10; i_6 += 4) 
                {
                    {
                        arr_22 [8U] [i_4 + 3] [i_4] [i_4] [i_4 + 1] = ((/* implicit */unsigned short) (((!(((arr_7 [i_4] [i_4] [i_4]) < (((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_4] [i_5] [i_5] [i_4 + 2] [i_4]))))))) ? ((+(var_16))) : (((/* implicit */unsigned int) (+(((/* implicit */int) arr_6 [i_0])))))));
                        var_20 = ((/* implicit */unsigned int) var_7);
                    }
                } 
            } 
        } 
        var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_17 [i_0])) ? (((/* implicit */int) ((((323748952U) & (3500829605U))) >= (1203057679U)))) : (((/* implicit */int) var_9)))))));
    }
    var_22 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) (unsigned short)6201))));
}
