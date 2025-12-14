/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114362
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114362 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114362
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
    var_12 = ((/* implicit */_Bool) (~(var_2)));
    var_13 += ((/* implicit */unsigned short) ((unsigned char) ((short) ((((/* implicit */_Bool) 9248378674803466746ULL)) ? (((/* implicit */int) (short)-26880)) : (var_8)))));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        var_14 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((arr_1 [i_0]) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_0 [(unsigned short)18])))), (((/* implicit */int) arr_0 [i_0]))))) ? (((/* implicit */int) arr_0 [i_0])) : (var_8)));
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 21; i_2 += 3) 
            {
                {
                    var_15 = ((/* implicit */_Bool) ((((int) min((2800811377U), (((/* implicit */unsigned int) (unsigned short)51168))))) >> (((max((((/* implicit */unsigned long long int) (!(arr_1 [i_1])))), (((arr_2 [i_2] [20U]) ^ (((/* implicit */unsigned long long int) arr_3 [i_0] [4ULL] [i_0])))))) - (9841680650566200885ULL)))));
                    var_16 += ((/* implicit */unsigned short) ((unsigned int) ((((/* implicit */_Bool) ((arr_4 [i_0] [i_0] [i_0]) >> (((arr_4 [i_0] [i_0] [i_0]) - (638635452U)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) arr_4 [i_2] [i_1] [i_0])))))) : (arr_3 [i_0] [(short)3] [i_0]))));
                }
            } 
        } 
        /* LoopNest 3 */
        for (long long int i_3 = 0; i_3 < 21; i_3 += 3) 
        {
            for (long long int i_4 = 4; i_4 < 19; i_4 += 3) 
            {
                for (unsigned char i_5 = 3; i_5 < 19; i_5 += 3) 
                {
                    {
                        var_17 = ((/* implicit */_Bool) var_10);
                        var_18 = ((/* implicit */short) min((max(((-(arr_8 [i_5 + 2] [i_4]))), (((/* implicit */unsigned long long int) max(((unsigned short)14366), (((/* implicit */unsigned short) arr_9 [i_5] [i_4]))))))), (((/* implicit */unsigned long long int) ((((((/* implicit */int) var_7)) >= (((/* implicit */int) (unsigned short)9122)))) ? (((/* implicit */int) arr_11 [i_3] [i_5] [i_5 + 1] [i_5])) : (((/* implicit */int) var_4)))))));
                    }
                } 
            } 
        } 
    }
}
