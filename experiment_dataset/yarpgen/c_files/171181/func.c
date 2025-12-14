/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171181
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171181 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171181
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
    var_12 = min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((9042123798367925446LL) | (var_7)))) ? (var_0) : (((var_11) / (((/* implicit */int) var_4))))))), (min((((/* implicit */unsigned long long int) var_9)), (((var_8) + (((/* implicit */unsigned long long int) -782179926)))))));
    var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (((-(var_5))) >= (((((/* implicit */_Bool) var_11)) ? (var_11) : (((/* implicit */int) (signed char)-99))))))) * (var_5)));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        var_14 = ((/* implicit */_Bool) min((var_14), (((/* implicit */_Bool) (+(((min((arr_1 [9ULL]), (((/* implicit */unsigned long long int) -2061868418)))) / (((/* implicit */unsigned long long int) arr_0 [i_0])))))))));
        var_15 = ((min((((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)15688))))), (((((/* implicit */unsigned long long int) arr_0 [i_0])) ^ (arr_1 [i_0]))))) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))));
        arr_2 [i_0] [i_0] = ((/* implicit */signed char) (+((-(arr_1 [i_0])))));
        var_16 = ((/* implicit */int) (-(((long long int) (~(arr_0 [i_0]))))));
    }
    for (signed char i_1 = 2; i_1 < 15; i_1 += 2) 
    {
        var_17 |= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) arr_0 [12ULL])) | (((arr_3 [i_1 - 2]) | ((~(arr_3 [i_1])))))));
        arr_5 [i_1 + 2] [i_1 + 2] = max((max((((/* implicit */unsigned long long int) arr_4 [i_1 - 2])), (arr_3 [i_1 - 1]))), (((((/* implicit */unsigned long long int) arr_0 [i_1 + 2])) / (arr_3 [i_1 - 2]))));
        var_18 -= ((/* implicit */unsigned long long int) arr_4 [i_1 - 1]);
        /* LoopNest 2 */
        for (long long int i_2 = 0; i_2 < 17; i_2 += 3) 
        {
            for (int i_3 = 0; i_3 < 17; i_3 += 3) 
            {
                {
                    var_19 = ((/* implicit */unsigned long long int) min((var_19), (((arr_10 [(_Bool)1] [i_2] [i_2]) << (((/* implicit */int) (!(((/* implicit */_Bool) (((_Bool)1) ? (arr_3 [i_1 + 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_1] [i_1])))))))))))));
                    var_20 = ((/* implicit */int) (~(min((((/* implicit */unsigned long long int) ((8658654068736LL) / (((/* implicit */long long int) -1261407643))))), (((arr_3 [i_1]) * (((/* implicit */unsigned long long int) var_0))))))));
                    var_21 -= (-(((min((arr_1 [i_1]), (14779661097872861912ULL))) | (((/* implicit */unsigned long long int) arr_0 [i_1 - 1])))));
                }
            } 
        } 
    }
}
