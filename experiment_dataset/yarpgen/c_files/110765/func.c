/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110765
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110765 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110765
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
    var_10 += ((/* implicit */unsigned char) var_4);
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        var_11 = ((/* implicit */unsigned char) arr_2 [i_0] [i_0]);
        var_12 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) min((var_0), (var_1)))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_9))))) : (min((arr_0 [2ULL]), (arr_1 [i_0]))))), (((/* implicit */unsigned long long int) ((unsigned short) arr_1 [i_0])))));
        var_13 = ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_9)), (min((((/* implicit */unsigned long long int) var_6)), (arr_2 [(unsigned short)3] [i_0])))))) ? (((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (arr_1 [i_0]) : (((((/* implicit */_Bool) 15571648630880348707ULL)) ? (var_0) : (((/* implicit */unsigned long long int) var_4)))))) : ((~(min((arr_0 [i_0]), (((/* implicit */unsigned long long int) var_9)))))));
        var_14 = ((/* implicit */_Bool) var_0);
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_7 [i_1] = ((/* implicit */unsigned short) var_4);
        arr_8 [i_1] [i_1] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [5ULL])) ? (arr_3 [i_1]) : (arr_3 [i_1])))) ? (((/* implicit */unsigned long long int) min((((/* implicit */int) var_3)), (arr_3 [i_1])))) : (min((var_1), (((/* implicit */unsigned long long int) arr_3 [i_1])))));
        arr_9 [8] = ((/* implicit */unsigned int) var_5);
        var_15 = ((/* implicit */unsigned long long int) ((unsigned short) min((arr_6 [i_1] [i_1]), (((/* implicit */unsigned long long int) var_2)))));
    }
    var_16 |= ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) var_5))))) ? (((var_2) | (((/* implicit */int) var_3)))) : (((((/* implicit */_Bool) 2875095442829202923ULL)) ? (var_4) : (var_2))))));
    /* LoopSeq 1 */
    for (int i_2 = 4; i_2 < 21; i_2 += 2) 
    {
        var_17 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(arr_10 [i_2 + 3])))) ? (min((arr_10 [i_2 - 1]), (arr_10 [i_2 + 1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((var_7) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (arr_11 [i_2 - 4] [i_2 - 4])))) <= (((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) + (arr_10 [i_2])))))))));
        /* LoopNest 3 */
        for (short i_3 = 0; i_3 < 24; i_3 += 1) 
        {
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                for (short i_5 = 0; i_5 < 24; i_5 += 4) 
                {
                    {
                        var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) arr_18 [i_2] [i_3] [i_4] [i_4]))) ? (((/* implicit */int) min((var_9), (((/* implicit */unsigned char) var_7))))) : (((((/* implicit */int) var_8)) | (var_2)))))) ? (((/* implicit */int) ((min((-952322872), (((/* implicit */int) arr_19 [i_2 - 1] [i_3] [i_3] [i_5] [i_4])))) <= (((/* implicit */int) var_9))))) : (((arr_19 [i_2] [i_2] [i_3] [i_5] [14ULL]) ? ((+(arr_15 [20LL] [20LL] [i_3] [i_5]))) : (((/* implicit */int) ((((/* implicit */int) arr_13 [i_4])) != (((/* implicit */int) arr_18 [i_2] [i_3] [i_4] [i_2])))))))));
                        arr_20 [i_5] [i_4] [i_5] [i_5] |= ((/* implicit */unsigned long long int) arr_16 [i_3] [i_3] [i_5]);
                        var_19 = ((/* implicit */unsigned int) var_9);
                    }
                } 
            } 
        } 
    }
}
