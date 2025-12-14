/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129804
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129804 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129804
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
    var_12 *= ((/* implicit */short) var_7);
    /* LoopNest 3 */
    for (unsigned char i_0 = 2; i_0 < 13; i_0 += 4) 
    {
        for (unsigned int i_1 = 1; i_1 < 14; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 15; i_2 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        arr_8 [i_1] [i_3] = ((/* implicit */unsigned char) arr_4 [i_1] [i_1]);
                        var_13 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_0]))) | (arr_3 [i_0])));
                        var_14 &= ((/* implicit */short) ((((/* implicit */_Bool) arr_0 [i_3])) || (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_2] [i_1])) / (((/* implicit */int) arr_7 [i_0] [i_0] [i_2] [i_3]))))) & (((((/* implicit */unsigned long long int) arr_2 [i_0] [i_0])) + (arr_4 [i_0] [i_0]))))))));
                    }
                    for (long long int i_4 = 0; i_4 < 15; i_4 += 2) 
                    {
                        arr_11 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */short) ((arr_0 [i_2]) > (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_1])))));
                        arr_12 [i_1] = ((/* implicit */_Bool) arr_1 [i_0] [i_0]);
                        arr_13 [i_1] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [i_0] [i_2] [i_4]))) < (((arr_3 [i_2]) << (((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_1] [i_1])) || (((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_2] [i_4])))))))));
                    }
                    arr_14 [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_2] [i_1] [i_2] [i_2])) && (((/* implicit */_Bool) arr_2 [i_1] [i_1]))))) + (((/* implicit */int) arr_10 [i_1] [i_1]))))) >= (((((11U) << (((((/* implicit */int) arr_1 [i_1] [i_2])) + (108))))) + (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)15))) == (1126770760344094643LL)))))))));
                    arr_15 [i_1] [i_1] [i_1] [i_2] = ((/* implicit */short) ((((((arr_3 [i_0]) | (arr_3 [i_1]))) ^ (((((/* implicit */unsigned int) arr_2 [i_1] [i_2])) & (arr_0 [i_0]))))) - (((arr_0 [i_0]) + (((/* implicit */unsigned int) ((((/* implicit */int) arr_9 [i_0] [i_1] [i_0] [i_0] [i_0] [i_0])) | (((/* implicit */int) arr_9 [i_0] [i_1] [i_0] [i_1] [i_2] [i_1])))))))));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */long long int) min((var_15), (((/* implicit */long long int) ((((((var_10) | (((/* implicit */unsigned long long int) var_6)))) & (((/* implicit */unsigned long long int) ((4294967295U) | (((/* implicit */unsigned int) 1349764137))))))) >> (((((((/* implicit */int) var_3)) & (((((/* implicit */int) var_4)) * (((/* implicit */int) var_2)))))) - (14715))))))));
    var_16 = ((/* implicit */signed char) var_1);
}
