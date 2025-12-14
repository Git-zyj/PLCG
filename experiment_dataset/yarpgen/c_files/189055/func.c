/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189055
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189055 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189055
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
    /* LoopSeq 3 */
    for (unsigned int i_0 = 2; i_0 < 18; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */short) var_10);
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            for (unsigned short i_2 = 1; i_2 < 19; i_2 += 3) 
            {
                {
                    var_14 = max((min((max((arr_0 [i_0 + 2]), ((-2147483647 - 1)))), (arr_1 [(unsigned short)14]))), (((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) max((var_5), (((/* implicit */unsigned short) (_Bool)1))))))));
                    arr_7 [i_0] [i_1] = ((/* implicit */unsigned short) (_Bool)1);
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned short i_3 = 2; i_3 < 11; i_3 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            for (unsigned int i_5 = 0; i_5 < 13; i_5 += 1) 
            {
                {
                    arr_16 [i_3] [i_3] [i_4] [i_5] = ((/* implicit */unsigned int) ((arr_9 [i_5]) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_15 [i_3] [i_3] [i_3] [i_3 - 2])) : (((/* implicit */int) arr_3 [i_3])))))));
                    var_15 = ((var_12) - (((/* implicit */int) (_Bool)1)));
                }
            } 
        } 
        arr_17 [i_3] [i_3] = ((/* implicit */unsigned int) (((!((_Bool)0))) && (((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1)))))));
        arr_18 [i_3] = ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)58827))) + (579097903U));
    }
    for (unsigned short i_6 = 2; i_6 < 11; i_6 += 3) /* same iter space */
    {
        arr_21 [i_6] [11U] = ((/* implicit */unsigned int) (+((+(((/* implicit */int) arr_19 [i_6]))))));
        arr_22 [i_6] = ((/* implicit */unsigned short) ((-588914234) ^ (((/* implicit */int) (_Bool)0))));
    }
    var_16 = ((/* implicit */int) (~(((min((var_11), (((/* implicit */unsigned int) var_2)))) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_13)))))));
}
