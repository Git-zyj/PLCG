/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108643
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108643 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108643
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_0 = 4; i_0 < 11; i_0 += 2) 
    {
        arr_2 [i_0 + 1] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0 - 2]))) / (((68719476608ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0 - 4])))))));
        var_13 = ((/* implicit */long long int) ((18446744073709551615ULL) >> (((((/* implicit */int) arr_0 [i_0 + 1] [i_0 - 1])) + (9589)))));
        arr_3 [10U] = (-(1078824925U));
    }
    for (short i_1 = 2; i_1 < 14; i_1 += 1) 
    {
        var_14 = ((/* implicit */long long int) var_5);
        /* LoopSeq 1 */
        for (unsigned long long int i_2 = 1; i_2 < 14; i_2 += 2) 
        {
            var_15 = ((/* implicit */unsigned short) ((17309627428972153507ULL) * (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) * (arr_8 [i_2])))) ? (((((/* implicit */_Bool) 68719476608ULL)) ? (((/* implicit */unsigned long long int) -209822649610900214LL)) : (68719476608ULL))) : (((/* implicit */unsigned long long int) -3972178724552156083LL))))));
            var_16 ^= ((/* implicit */short) ((max((min((var_9), (((/* implicit */int) arr_7 [i_1] [i_2] [i_2 + 1])))), (((((/* implicit */_Bool) 68719476606ULL)) ? (((/* implicit */int) arr_7 [10ULL] [2ULL] [i_1 - 1])) : (((/* implicit */int) arr_7 [i_1 - 1] [i_2 - 1] [(short)12])))))) == ((+(((/* implicit */int) (_Bool)1))))));
            arr_10 [i_1] = ((/* implicit */unsigned short) arr_5 [i_1 - 2]);
        }
        arr_11 [i_1 - 2] = ((/* implicit */short) (-(((arr_5 [3]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [(short)7] [(signed char)12] [i_1]))) : (max((((/* implicit */unsigned long long int) arr_6 [12] [i_1 - 1])), (1137116644737398109ULL)))))));
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 10; i_3 += 1) 
    {
        for (short i_4 = 2; i_4 < 9; i_4 += 2) 
        {
            {
                arr_19 [i_4] = ((/* implicit */unsigned char) ((15445315396351024353ULL) / (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_2)))))));
                var_17 = ((/* implicit */unsigned short) ((long long int) (-(((/* implicit */int) min(((unsigned char)214), (((/* implicit */unsigned char) (_Bool)1))))))));
            }
        } 
    } 
    var_18 = ((/* implicit */long long int) ((17309627428972153482ULL) != (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) 334802610U)), (-8011540390629952189LL)))) ? (((((/* implicit */long long int) ((/* implicit */int) var_2))) + (-2267594832340497097LL))) : (((/* implicit */long long int) ((/* implicit */int) var_2))))))));
}
