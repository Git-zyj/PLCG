/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138310
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138310 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138310
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
    for (int i_0 = 3; i_0 < 11; i_0 += 2) 
    {
        arr_3 [i_0 - 2] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [7ULL])) ? (arr_2 [i_0 + 1]) : (arr_2 [i_0 + 3])))) % (((((/* implicit */_Bool) ((arr_1 [i_0]) ^ (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) ? (max((18425134120894017679ULL), (((/* implicit */unsigned long long int) (signed char)24)))) : (((/* implicit */unsigned long long int) arr_1 [i_0 + 3]))))));
        arr_4 [i_0] [i_0] = ((/* implicit */short) arr_1 [i_0 + 1]);
        arr_5 [(_Bool)1] = ((/* implicit */_Bool) arr_0 [i_0 - 2]);
        arr_6 [i_0] = max((((((/* implicit */_Bool) arr_0 [i_0 + 2])) && (((/* implicit */_Bool) arr_0 [i_0 + 2])))), (((((/* implicit */_Bool) arr_0 [i_0 + 2])) || (((/* implicit */_Bool) arr_0 [i_0 - 1])))));
        arr_7 [i_0] [7U] = ((/* implicit */short) max((arr_0 [i_0 - 1]), (((unsigned int) (+(1045748908))))));
    }
    /* LoopNest 3 */
    for (int i_1 = 0; i_1 < 25; i_1 += 2) 
    {
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (int i_3 = 0; i_3 < 25; i_3 += 2) 
            {
                {
                    arr_16 [i_2] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((unsigned int) ((var_7) + (21609952815533937ULL))))), (((((/* implicit */unsigned long long int) max((arr_14 [21U] [i_2] [i_2]), (((/* implicit */unsigned int) arr_8 [i_3]))))) - (min((18425134120894017676ULL), (((/* implicit */unsigned long long int) arr_15 [i_2] [i_2] [i_3] [i_3]))))))));
                    arr_17 [i_2] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((arr_12 [i_1]), ((+(((/* implicit */int) arr_9 [i_1] [i_2]))))))) && (((/* implicit */_Bool) min((18425134120894017685ULL), (((/* implicit */unsigned long long int) (signed char)23)))))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */unsigned long long int) var_1);
}
