/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113971
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113971 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113971
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
    for (short i_0 = 3; i_0 < 13; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            {
                arr_6 [i_1] [0U] [i_1] = var_3;
                var_12 = ((/* implicit */unsigned short) max((var_12), (((/* implicit */unsigned short) var_6))));
                var_13 = ((/* implicit */unsigned long long int) min((min((((/* implicit */long long int) arr_5 [i_1] [i_1])), (((((/* implicit */_Bool) var_8)) ? (arr_1 [i_0]) : (var_10))))), (((((/* implicit */_Bool) -142770841398195658LL)) ? (arr_1 [i_0 - 2]) : (((/* implicit */long long int) ((/* implicit */int) var_5)))))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (short i_2 = 2; i_2 < 9; i_2 += 4) 
    {
        arr_9 [i_2] = ((/* implicit */int) arr_2 [(short)9]);
        var_14 = ((/* implicit */_Bool) arr_5 [i_2] [i_2]);
    }
    for (int i_3 = 0; i_3 < 17; i_3 += 4) 
    {
        var_15 = var_2;
        arr_13 [i_3] = ((/* implicit */signed char) max((max((((((/* implicit */_Bool) -1153992022)) ? (((/* implicit */int) arr_10 [i_3] [i_3])) : (((/* implicit */int) arr_10 [i_3] [i_3])))), (((/* implicit */int) (unsigned char)255)))), (((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)0)), (max((((/* implicit */unsigned short) var_2)), (arr_11 [i_3]))))))));
        var_16 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_0)), (((((/* implicit */_Bool) var_4)) ? (7146555769846408130LL) : (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_3] [i_3])))))))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (unsigned char)251))));
    }
}
