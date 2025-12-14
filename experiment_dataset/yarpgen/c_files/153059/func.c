/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153059
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153059 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153059
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
    var_11 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) (+((-(var_8)))))) - (var_6)));
    var_12 = ((/* implicit */signed char) (-(((unsigned long long int) ((long long int) var_1)))));
    var_13 = ((/* implicit */int) var_3);
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 17; i_0 += 3) /* same iter space */
    {
        arr_3 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)28))))) : (((unsigned long long int) arr_0 [i_0]))));
        arr_4 [i_0] = ((/* implicit */int) ((((long long int) (short)255)) != (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_9))))));
        arr_5 [i_0] = ((/* implicit */unsigned int) ((unsigned long long int) ((((/* implicit */int) arr_0 [i_0])) >> (((arr_2 [i_0]) - (1860591992U))))));
    }
    for (short i_1 = 0; i_1 < 17; i_1 += 3) /* same iter space */
    {
        var_14 = ((/* implicit */int) (!(((/* implicit */_Bool) var_1))));
        arr_9 [i_1] [i_1] = ((/* implicit */int) ((unsigned long long int) arr_8 [i_1]));
        /* LoopNest 2 */
        for (int i_2 = 2; i_2 < 14; i_2 += 1) 
        {
            for (unsigned int i_3 = 3; i_3 < 16; i_3 += 4) 
            {
                {
                    arr_14 [(short)12] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) min((arr_11 [i_3 - 2] [i_3 + 1] [i_2 + 1]), (arr_11 [i_3 - 2] [i_3 + 1] [i_2 + 1]))))));
                    arr_15 [i_1] [i_2] [(signed char)11] = ((/* implicit */unsigned int) arr_10 [i_1] [i_1] [i_3]);
                    arr_16 [i_3] [i_3] = ((/* implicit */unsigned char) arr_10 [i_1] [i_2] [i_3 - 3]);
                    arr_17 [i_1] [i_2] = ((/* implicit */_Bool) min((min((arr_1 [i_2 + 2] [i_3 - 2]), (((/* implicit */unsigned long long int) (unsigned char)228)))), (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) arr_8 [i_1])) ? (((/* implicit */unsigned int) 2147483637)) : (var_9))), ((-(var_2))))))));
                }
            } 
        } 
        arr_18 [i_1] [10U] = ((/* implicit */short) arr_7 [i_1]);
        arr_19 [i_1] = ((/* implicit */int) arr_7 [i_1]);
    }
    for (unsigned char i_4 = 0; i_4 < 15; i_4 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_5 = 2; i_5 < 14; i_5 += 3) 
        {
            for (signed char i_6 = 4; i_6 < 13; i_6 += 3) 
            {
                {
                    var_15 = ((/* implicit */short) ((var_6) / (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)28)))));
                    var_16 = ((/* implicit */short) ((int) ((((/* implicit */_Bool) arr_2 [i_4])) ? (arr_21 [i_6 + 2]) : (((var_5) | (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)28))))))));
                }
            } 
        } 
        arr_30 [i_4] = ((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) arr_1 [(_Bool)1] [i_4])) ? (((/* implicit */int) (unsigned char)227)) : (((/* implicit */int) (unsigned char)228)))));
    }
    var_17 = ((/* implicit */unsigned long long int) var_3);
}
