/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106645
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106645 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106645
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
    var_13 &= ((/* implicit */unsigned int) ((((unsigned long long int) ((var_11) ^ (var_9)))) << (((((/* implicit */int) var_3)) - (88)))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 2; i_0 < 19; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 20; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 2) 
            {
                {
                    var_14 = ((/* implicit */unsigned long long int) max((var_14), (((((/* implicit */_Bool) max((var_8), (((/* implicit */unsigned short) arr_6 [i_0] [i_0]))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_2 [i_1] [i_1]) < (arr_3 [i_0] [i_0]))))) / (((unsigned long long int) (unsigned short)45478)))) : (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)144)) ? (((/* implicit */int) arr_6 [i_1] [i_1])) : (((/* implicit */int) arr_6 [i_0] [i_0]))))) * (((var_2) << (((var_10) - (8834725880027115547ULL)))))))))));
                    arr_8 [i_0] [i_0] [i_0] |= ((((((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)39930))))) - ((~(arr_4 [i_0] [i_0] [i_0]))))) % (((((((/* implicit */unsigned long long int) var_7)) + (arr_0 [i_0]))) | (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)39934)) - (((/* implicit */int) var_3))))))));
                    var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) ((var_1) > (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) ((unsigned short) arr_5 [i_0] [i_0] [i_0] [i_0]))))))))));
                }
            } 
        } 
    } 
    var_16 |= ((/* implicit */unsigned char) (-(var_4)));
    var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)217)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))) : (2412113170U))))));
}
