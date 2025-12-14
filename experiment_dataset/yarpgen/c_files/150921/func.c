/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150921
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150921 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150921
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
    /* LoopSeq 1 */
    for (short i_0 = 1; i_0 < 20; i_0 += 4) 
    {
        arr_3 [i_0 - 1] = ((/* implicit */unsigned char) ((((((/* implicit */int) (unsigned char)0)) << (((((/* implicit */int) var_16)) - (63768))))) << (((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)0))))));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)45810)) / (((/* implicit */int) (unsigned short)4))));
        var_20 = ((/* implicit */unsigned short) min(((-(((/* implicit */int) arr_2 [i_0 + 1] [i_0 + 1])))), (((((/* implicit */int) max((arr_2 [i_0 + 2] [i_0]), (((/* implicit */unsigned short) arr_0 [i_0]))))) >> (((((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_0 [i_0 + 1])))) - (12333)))))));
        var_21 = ((/* implicit */unsigned long long int) (!(((var_1) <= (((/* implicit */unsigned int) ((/* implicit */int) var_13)))))));
    }
    var_22 = var_9;
    var_23 &= ((/* implicit */short) var_12);
    /* LoopNest 3 */
    for (unsigned short i_1 = 1; i_1 < 11; i_1 += 3) 
    {
        for (unsigned short i_2 = 0; i_2 < 13; i_2 += 4) 
        {
            for (long long int i_3 = 0; i_3 < 13; i_3 += 3) 
            {
                {
                    var_24 = ((/* implicit */unsigned char) ((((((/* implicit */int) (unsigned char)111)) <= (((/* implicit */int) (unsigned short)43635)))) ? (((arr_12 [i_1] [i_3] [i_1 - 1]) + (((/* implicit */unsigned int) ((/* implicit */int) var_14))))) : (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)0)))))));
                    var_25 = ((/* implicit */unsigned short) min(((((-(((/* implicit */int) (_Bool)1)))) | (((/* implicit */int) min(((unsigned char)145), (((/* implicit */unsigned char) arr_9 [(unsigned char)3] [(unsigned char)3]))))))), (((((/* implicit */_Bool) min((((/* implicit */unsigned char) var_10)), (arr_6 [i_1])))) ? (((/* implicit */int) var_19)) : ((((_Bool)1) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_1 [10U]))))))));
                    arr_13 [i_3] [i_2] [i_3] = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) (unsigned char)111)) ? (((/* implicit */int) (unsigned char)88)) : (((/* implicit */int) (unsigned char)0))))));
                    arr_14 [i_3] = ((/* implicit */short) (+(((((/* implicit */_Bool) ((var_5) - (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) ? (((((/* implicit */int) arr_11 [i_3])) + (((/* implicit */int) var_9)))) : (((/* implicit */int) arr_5 [i_1 - 1] [i_3]))))));
                }
            } 
        } 
    } 
}
