/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128113
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128113 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128113
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
    var_13 = var_6;
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        var_14 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (unsigned char)121)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)94))))) <= (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (unsigned short)13786)))))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            for (unsigned char i_2 = 1; i_2 < 23; i_2 += 4) 
            {
                {
                    arr_8 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */unsigned short) arr_2 [i_0] [15LL]);
                    var_15 = ((/* implicit */unsigned long long int) ((-1LL) > (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (short)-29433))) : (arr_4 [i_1])))));
                }
            } 
        } 
        arr_9 [i_0] = ((/* implicit */unsigned long long int) ((((((/* implicit */int) (unsigned char)197)) | (((/* implicit */int) var_10)))) * ((+(((/* implicit */int) var_11))))));
        arr_10 [15LL] = ((/* implicit */unsigned int) arr_7 [i_0]);
    }
    for (short i_3 = 4; i_3 < 15; i_3 += 3) 
    {
        var_16 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned char)121))));
        arr_13 [(unsigned char)12] = ((arr_4 [i_3]) / (((((/* implicit */_Bool) (unsigned char)142)) ? (arr_11 [i_3 - 1] [i_3 + 1]) : (arr_7 [i_3 - 1]))));
        arr_14 [i_3] [i_3] = ((/* implicit */unsigned short) (~((~(arr_11 [5LL] [i_3])))));
        arr_15 [5ULL] = ((/* implicit */short) max(((~(((/* implicit */int) ((((/* implicit */int) (unsigned short)18)) < (((/* implicit */int) arr_3 [(unsigned short)5] [i_3]))))))), (min((arr_0 [i_3] [i_3 - 4]), (((/* implicit */int) var_6))))));
    }
}
