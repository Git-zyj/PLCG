/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176467
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176467 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176467
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
    var_16 = ((/* implicit */short) max((((/* implicit */unsigned short) var_13)), (max((var_1), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) -1307309343)))))))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 1; i_0 < 19; i_0 += 3) 
    {
        var_17 = ((/* implicit */unsigned short) var_9);
        var_18 = ((/* implicit */int) max((max((((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0]))) / (var_0))), (((/* implicit */long long int) (signed char)32)))), (((/* implicit */long long int) ((min((((/* implicit */int) var_8)), (arr_1 [i_0] [i_0]))) - (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_2)) : (arr_2 [i_0]))))))));
    }
    for (short i_1 = 2; i_1 < 10; i_1 += 4) 
    {
        var_19 += ((/* implicit */short) arr_4 [i_1]);
        /* LoopNest 3 */
        for (short i_2 = 2; i_2 < 8; i_2 += 4) 
        {
            for (unsigned char i_3 = 4; i_3 < 10; i_3 += 3) 
            {
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    {
                        arr_16 [i_1 + 1] [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 8435810845739641161LL)) ? (3669052292U) : (((/* implicit */unsigned int) 1266035801))))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((((((/* implicit */_Bool) arr_12 [i_1] [i_1] [i_1 - 2])) && (((/* implicit */_Bool) arr_4 [i_1])))), ((_Bool)1))))) : (min((max((((/* implicit */unsigned int) arr_2 [i_4])), (15U))), (((/* implicit */unsigned int) (_Bool)1))))));
                        var_20 = arr_4 [i_1];
                        arr_17 [i_1] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) max((max((((/* implicit */int) arr_3 [i_1])), (arr_10 [i_1] [i_2] [i_3]))), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_4 [i_4])) : (((/* implicit */int) arr_4 [i_2]))))))) != (max((100663296U), (((/* implicit */unsigned int) (unsigned char)128))))));
                        arr_18 [i_4] [i_4] = ((/* implicit */unsigned char) max((arr_1 [i_1] [i_2]), (((/* implicit */int) (short)-24974))));
                        var_21 = ((/* implicit */short) (-(((/* implicit */int) arr_5 [i_3] [i_4]))));
                    }
                } 
            } 
        } 
    }
    /* LoopNest 3 */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        for (unsigned int i_6 = 3; i_6 < 11; i_6 += 4) 
        {
            for (unsigned char i_7 = 1; i_7 < 13; i_7 += 2) 
            {
                {
                    arr_29 [i_5] = var_3;
                    var_22 = ((/* implicit */int) arr_21 [i_5]);
                }
            } 
        } 
    } 
}
