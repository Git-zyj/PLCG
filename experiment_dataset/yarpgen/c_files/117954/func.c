/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117954
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117954 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117954
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
    for (unsigned int i_0 = 4; i_0 < 19; i_0 += 3) 
    {
        var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) min(((+(((/* implicit */int) arr_1 [i_0 - 1])))), (((/* implicit */int) max((arr_1 [i_0 - 4]), (arr_1 [i_0 - 4])))))))));
        arr_2 [i_0 + 2] = ((/* implicit */int) ((((/* implicit */_Bool) (~(((((/* implicit */int) (signed char)-108)) + (((/* implicit */int) (signed char)-113))))))) ? ((+(min((((/* implicit */long long int) (_Bool)1)), (1867229050062813313LL))))) : (((/* implicit */long long int) ((/* implicit */int) max(((signed char)109), (((/* implicit */signed char) (!(((/* implicit */_Bool) 9223372035781033984ULL)))))))))));
    }
    /* LoopNest 3 */
    for (unsigned int i_1 = 0; i_1 < 24; i_1 += 1) 
    {
        for (unsigned short i_2 = 0; i_2 < 24; i_2 += 1) 
        {
            for (short i_3 = 1; i_3 < 23; i_3 += 3) 
            {
                {
                    arr_13 [i_1] [i_1] [i_3] [i_3 + 1] = ((/* implicit */unsigned int) min(((~((~(((/* implicit */int) (short)-13714)))))), (((/* implicit */int) var_5))));
                    var_18 = 4439820353066477198LL;
                    var_19 -= ((/* implicit */_Bool) (((!(((/* implicit */_Bool) 239559282)))) ? (((/* implicit */int) ((_Bool) arr_9 [i_3 - 1] [i_3 - 1] [i_3 + 1]))) : (((/* implicit */int) min((((/* implicit */unsigned short) (signed char)-13)), (arr_9 [i_3 - 1] [i_3 - 1] [i_3 + 1]))))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) (signed char)-108)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (var_12))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-121)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_5)))))))) ? (max((var_1), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 794851943)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (short)22436))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))));
}
