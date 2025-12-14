/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18438
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18438 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18438
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            for (unsigned char i_2 = 3; i_2 < 19; i_2 += 1) 
            {
                {
                    arr_7 [i_0] [i_1] [i_2 + 2] [i_2] = (((!(((/* implicit */_Bool) (+(var_8)))))) || (((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */signed char) arr_0 [i_0])), (arr_4 [i_0] [i_1] [i_2]))))) ^ (min((arr_1 [i_0]), (((/* implicit */unsigned int) var_1))))))));
                    var_17 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_2 - 1])) ? (((((/* implicit */_Bool) arr_1 [i_2])) ? (2598740161U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [(unsigned short)16]))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))))) * (min((arr_3 [i_0] [(short)10]), (((/* implicit */unsigned int) arr_4 [i_0] [i_2 + 2] [i_2 - 3]))))));
                    var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) min((((((/* implicit */_Bool) var_7)) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_5))) + (arr_1 [i_2]))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_2 + 2] [i_2 + 2] [i_2 + 1]))))), (min((((arr_3 [i_0] [i_0]) / (((/* implicit */unsigned int) ((/* implicit */int) var_16))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) -6205741186142457686LL)) ? (((/* implicit */int) arr_4 [i_0] [i_0] [i_2 + 2])) : (((/* implicit */int) arr_4 [15LL] [15LL] [i_2]))))))))))));
                    arr_8 [(unsigned char)10] [i_1] = ((/* implicit */unsigned char) arr_5 [(unsigned char)12] [i_1] [i_2]);
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned long long int) var_13);
}
