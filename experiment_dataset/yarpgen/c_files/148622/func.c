/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148622
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148622 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148622
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
    var_14 = ((/* implicit */unsigned int) var_2);
    var_15 = ((/* implicit */unsigned int) ((((/* implicit */long long int) var_9)) & ((~((-(var_12)))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned short) ((arr_1 [2] [i_0]) << (((arr_0 [i_0]) - (1592945878)))));
        arr_4 [i_0] [i_0] = ((/* implicit */int) (!(((((/* implicit */_Bool) arr_2 [i_0])) && (((/* implicit */_Bool) arr_0 [i_0]))))));
        var_16 = ((/* implicit */unsigned short) arr_0 [i_0]);
        /* LoopNest 3 */
        for (unsigned short i_1 = 4; i_1 < 12; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 3) 
            {
                for (unsigned int i_3 = 0; i_3 < 16; i_3 += 3) 
                {
                    {
                        var_17 = ((/* implicit */_Bool) ((arr_6 [(unsigned short)1] [(unsigned short)1] [i_1 + 2]) >> (((/* implicit */int) arr_8 [13] [i_1]))));
                        arr_12 [i_2] [i_2] [i_1] [(short)3] [i_2] = ((/* implicit */long long int) (+(arr_1 [i_1] [i_1 + 1])));
                        var_18 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_7 [i_0] [i_1 + 1])) || (((/* implicit */_Bool) arr_7 [i_0] [i_1 + 1]))));
                    }
                } 
            } 
        } 
        arr_13 [10U] [i_0] = (+((-2147483647 - 1)));
    }
    for (int i_4 = 0; i_4 < 25; i_4 += 3) 
    {
        /* LoopNest 2 */
        for (signed char i_5 = 3; i_5 < 23; i_5 += 4) 
        {
            for (int i_6 = 0; i_6 < 25; i_6 += 1) 
            {
                {
                    var_19 += ((/* implicit */unsigned int) (+(((1181009548) ^ (((/* implicit */int) (unsigned short)65434))))));
                    var_20 = ((/* implicit */short) arr_14 [i_5 + 1]);
                }
            } 
        } 
        arr_22 [i_4] = (!(((/* implicit */_Bool) arr_18 [i_4] [i_4] [i_4])));
        var_21 += ((/* implicit */unsigned short) (((~(((((/* implicit */unsigned int) arr_21 [(signed char)8] [(signed char)8] [i_4] [(short)13])) % (arr_14 [i_4]))))) != ((+(arr_16 [i_4])))));
    }
}
