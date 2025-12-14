/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140532
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140532 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140532
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
    var_17 = ((/* implicit */unsigned long long int) ((unsigned short) var_16));
    /* LoopSeq 1 */
    for (short i_0 = 1; i_0 < 8; i_0 += 3) 
    {
        arr_3 [i_0] = -2882438012845683285LL;
        arr_4 [(short)10] &= ((/* implicit */unsigned int) (+((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) min(((_Bool)1), ((_Bool)1))))) : (min((-3919826756899172015LL), (((/* implicit */long long int) var_7))))))));
    }
    /* LoopNest 3 */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        for (int i_2 = 0; i_2 < 23; i_2 += 2) 
        {
            for (long long int i_3 = 2; i_3 < 20; i_3 += 2) 
            {
                {
                    var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_1] [i_3 + 1] [i_3 - 1])) ? (arr_11 [i_1] [i_3 + 2] [i_3 + 1]) : (arr_11 [i_1] [i_3 - 2] [i_3 + 3])))) ? (((((/* implicit */_Bool) arr_11 [i_1] [i_3 + 1] [i_3 + 3])) ? (arr_11 [i_1] [i_3 + 3] [i_3 + 2]) : (arr_11 [i_1] [i_3 + 3] [i_3 - 2]))) : (((long long int) arr_11 [i_1] [i_3 + 2] [i_3 - 1]))));
                    arr_14 [4] [4U] [i_3] [i_3] &= ((/* implicit */unsigned char) max(((_Bool)1), (arr_12 [i_1] [i_1])));
                    arr_15 [i_2] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) min((arr_10 [i_1] [i_3] [i_1]), (arr_12 [i_2] [(_Bool)1]))))) / (((((/* implicit */_Bool) arr_6 [(short)1])) ? (3451393820U) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [i_1])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_6 [i_1])))))))));
                    arr_16 [i_1] = ((/* implicit */unsigned long long int) (-(16777215U)));
                }
            } 
        } 
    } 
}
