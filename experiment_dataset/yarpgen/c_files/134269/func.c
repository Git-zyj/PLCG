/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134269
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134269 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134269
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
    var_14 = ((/* implicit */unsigned long long int) max((var_14), (((/* implicit */unsigned long long int) var_10))));
    var_15 = ((/* implicit */unsigned long long int) var_3);
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((arr_1 [i_0]) & (((/* implicit */unsigned long long int) arr_0 [i_0])))) != (arr_1 [i_0])))))))));
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 23; i_2 += 2) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        var_17 += ((/* implicit */int) ((min(((_Bool)1), ((_Bool)1))) ? (min((((/* implicit */unsigned long long int) (_Bool)1)), (((((/* implicit */_Bool) 811475204U)) ? (((/* implicit */unsigned long long int) 4083638300U)) : (arr_4 [11U] [11U] [i_3]))))) : (((/* implicit */unsigned long long int) ((arr_9 [i_0] [i_1] [i_2] [i_3]) | (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)174))))))));
                        var_18 = ((/* implicit */long long int) (+(((/* implicit */int) ((((((/* implicit */unsigned long long int) arr_9 [i_0] [i_0] [i_2] [i_3])) / (arr_6 [i_0] [i_1] [i_3]))) != (((/* implicit */unsigned long long int) (~(arr_9 [i_0] [i_3] [i_2] [i_3])))))))));
                        var_19 = ((/* implicit */_Bool) ((3483492092U) - (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                        var_20 = ((/* implicit */short) max(((!(((/* implicit */_Bool) ((((/* implicit */int) arr_5 [0ULL] [i_2] [i_3])) | (((/* implicit */int) (short)2104))))))), ((!(((/* implicit */_Bool) -894286817177752976LL))))));
                    }
                } 
            } 
        } 
    }
}
