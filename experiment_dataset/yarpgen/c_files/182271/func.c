/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182271
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182271 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182271
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
    var_10 = ((unsigned long long int) ((int) 956353778U));
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 4) /* same iter space */
    {
        var_11 = min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_1 [i_0] [i_0]))))), (((unsigned int) arr_1 [i_0] [i_0])));
        var_12 = ((/* implicit */unsigned int) var_5);
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            for (unsigned char i_2 = 1; i_2 < 9; i_2 += 4) 
            {
                {
                    var_13 = ((/* implicit */signed char) ((((/* implicit */unsigned int) arr_6 [i_0] [i_2] [i_2 + 1])) / (((max((var_3), (((/* implicit */unsigned int) arr_7 [i_0] [i_0])))) + (((/* implicit */unsigned int) (+(((/* implicit */int) var_0)))))))));
                    var_14 = ((/* implicit */signed char) arr_0 [i_2 + 1]);
                    var_15 = ((/* implicit */signed char) min((3338613520U), (max((956353789U), (956353778U)))));
                }
            } 
        } 
        arr_9 [i_0] = ((/* implicit */int) arr_8 [i_0] [i_0] [i_0]);
        var_16 = ((/* implicit */unsigned long long int) arr_1 [i_0] [i_0]);
    }
    for (signed char i_3 = 0; i_3 < 10; i_3 += 4) /* same iter space */
    {
        var_17 = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_3] [i_3] [i_3])) ? (((/* implicit */int) arr_11 [i_3] [i_3])) : (((/* implicit */int) arr_11 [i_3] [i_3]))))), (var_2)));
        var_18 *= ((/* implicit */unsigned char) (-((-(((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))))));
        /* LoopNest 2 */
        for (unsigned short i_4 = 0; i_4 < 10; i_4 += 2) 
        {
            for (unsigned short i_5 = 0; i_5 < 10; i_5 += 4) 
            {
                {
                    var_19 = ((/* implicit */int) min((((short) min((((/* implicit */unsigned int) var_4)), (var_3)))), (((/* implicit */short) max((min((arr_1 [i_5] [i_3]), (((/* implicit */unsigned char) arr_5 [i_3] [i_3] [i_5])))), ((unsigned char)57))))));
                    var_20 = ((/* implicit */signed char) ((((/* implicit */int) ((short) arr_1 [i_3] [i_3]))) & (((/* implicit */int) ((((unsigned long long int) arr_16 [i_3] [i_5])) < (((/* implicit */unsigned long long int) var_7)))))));
                }
            } 
        } 
    }
}
