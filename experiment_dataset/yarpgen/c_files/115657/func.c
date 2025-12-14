/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115657
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115657 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115657
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
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (short i_1 = 1; i_1 < 15; i_1 += 4) 
        {
            {
                var_10 = ((/* implicit */unsigned short) max((((/* implicit */short) ((signed char) ((((/* implicit */_Bool) arr_3 [i_0] [i_1])) ? (((/* implicit */unsigned long long int) arr_1 [i_0])) : (arr_2 [i_0] [i_0]))))), (((short) max((((/* implicit */short) (_Bool)1)), (var_1))))));
                var_11 = ((/* implicit */_Bool) arr_0 [i_0]);
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned short i_2 = 2; i_2 < 23; i_2 += 1) 
    {
        arr_7 [i_2 + 1] [i_2] = ((/* implicit */unsigned int) (((+(16777152U))) == ((((_Bool)1) ? (max((arr_4 [i_2]), (((/* implicit */unsigned int) (_Bool)1)))) : (((/* implicit */unsigned int) ((((/* implicit */int) var_8)) * (((/* implicit */int) (signed char)85)))))))));
        /* LoopSeq 4 */
        /* vectorizable */
        for (short i_3 = 0; i_3 < 25; i_3 += 2) 
        {
            var_12 = ((((long long int) var_2)) >= (((/* implicit */long long int) arr_8 [i_2] [i_2 + 1])));
            var_13 = ((/* implicit */short) 970392935);
        }
        /* vectorizable */
        for (int i_4 = 2; i_4 < 24; i_4 += 3) 
        {
            arr_14 [i_2] [i_4] = ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_5 [i_2 + 2] [i_4 - 2])));
            var_14 = ((/* implicit */int) (~(arr_4 [i_4])));
            /* LoopNest 2 */
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    {
                        var_15 += ((/* implicit */unsigned int) ((((/* implicit */int) arr_5 [i_2 - 2] [i_4])) >> (((((var_6) + (2013265920))) - (1010769605)))));
                        var_16 += ((/* implicit */short) ((arr_20 [i_2 + 1] [i_2 + 1]) && (arr_20 [i_2 + 1] [i_2 - 1])));
                    }
                } 
            } 
            arr_21 [i_2 - 1] [i_2] [i_2 - 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_17 [i_2 - 2] [i_2 - 2] [i_2 + 2])) ? (arr_8 [(signed char)9] [i_2 + 2]) : (((/* implicit */int) var_9))));
        }
        /* vectorizable */
        for (short i_7 = 1; i_7 < 24; i_7 += 4) 
        {
            arr_25 [i_2] [i_2] = ((/* implicit */short) -2013265920);
            arr_26 [i_2] [i_2] = ((/* implicit */int) (signed char)-96);
        }
        for (unsigned int i_8 = 3; i_8 < 23; i_8 += 3) 
        {
            arr_29 [i_2] [i_8] [i_2] = ((/* implicit */_Bool) arr_4 [i_2 + 1]);
            var_17 = ((/* implicit */signed char) ((unsigned int) arr_18 [i_2 - 2] [i_8] [i_8 + 2] [i_2 - 2]));
        }
        var_18 |= ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-86)) ? (var_7) : (((/* implicit */int) var_4)))))))));
        arr_30 [10U] &= ((/* implicit */unsigned short) ((short) var_0));
    }
    var_19 = ((/* implicit */unsigned short) 2013265920);
    var_20 = ((/* implicit */short) var_2);
    var_21 = ((/* implicit */int) min((var_21), (((1032192) * (((int) (_Bool)0))))));
}
