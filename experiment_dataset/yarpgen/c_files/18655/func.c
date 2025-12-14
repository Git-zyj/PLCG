/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18655
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18655 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18655
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
    var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) (~(((((/* implicit */long long int) var_8)) - (max((var_7), (((/* implicit */long long int) var_6)))))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 8; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            {
                arr_5 [i_1] [(signed char)5] [i_1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [i_0 + 3])))))));
                arr_6 [i_1] = ((/* implicit */short) arr_3 [i_1] [i_0] [i_0]);
                arr_7 [i_1] = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) arr_0 [i_0 + 3])) ? (4094746699911044713ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), (arr_4 [i_1] [i_0] [i_0 - 1])))))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned short i_2 = 0; i_2 < 17; i_2 += 2) 
    {
        arr_10 [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (signed char)76)) : (((((/* implicit */_Bool) 14351997373798506897ULL)) ? (((/* implicit */int) arr_9 [i_2])) : (((/* implicit */int) arr_9 [i_2]))))));
        var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) ((((((/* implicit */_Bool) arr_8 [i_2])) ? (var_4) : (((/* implicit */unsigned long long int) arr_8 [i_2])))) * (((/* implicit */unsigned long long int) ((unsigned int) arr_9 [i_2]))))))));
        var_16 = ((/* implicit */short) max((2771221236U), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) 2530202792545714618ULL)))))));
        var_17 *= ((/* implicit */unsigned long long int) (((~(((/* implicit */int) arr_9 [i_2])))) >= (((/* implicit */int) ((((/* implicit */int) arr_9 [i_2])) < (var_10))))));
    }
}
