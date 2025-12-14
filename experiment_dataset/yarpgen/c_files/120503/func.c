/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120503
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120503 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120503
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
    /* LoopNest 3 */
    for (signed char i_0 = 2; i_0 < 20; i_0 += 4) 
    {
        for (unsigned char i_1 = 3; i_1 < 20; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_8 [i_1] [i_1] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((12444443973154531390ULL), (((6002300100555020237ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [i_0])))))))) ? ((+(((var_5) ? (12444443973154531390ULL) : (var_2))))) : (((((((/* implicit */_Bool) 12444443973154531379ULL)) ? (arr_5 [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_1]))))) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))));
                    /* LoopSeq 1 */
                    for (long long int i_3 = 3; i_3 < 21; i_3 += 4) 
                    {
                        arr_11 [i_1] = ((/* implicit */signed char) (!((!(((/* implicit */_Bool) arr_4 [i_1] [i_1 - 1]))))));
                        arr_12 [i_0] [i_3] |= ((/* implicit */unsigned char) 12444443973154531406ULL);
                        arr_13 [i_3] [i_1] [i_1] [i_0] = ((/* implicit */long long int) arr_3 [i_1]);
                        var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) (!(((/* implicit */_Bool) (((_Bool)1) ? (((((/* implicit */_Bool) (short)-6054)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_3 [i_2])))) : ((-(((/* implicit */int) var_17))))))))))));
                    }
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (+((+(-476877796)))))) ? (((/* implicit */int) var_16)) : (((((/* implicit */_Bool) var_1)) ? ((-(((/* implicit */int) var_0)))) : (((/* implicit */int) var_9)))))))));
}
