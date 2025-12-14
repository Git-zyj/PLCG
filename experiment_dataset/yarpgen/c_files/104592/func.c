/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104592
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104592 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104592
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
    var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_14)), (((((/* implicit */_Bool) (signed char)-79)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)117))) : (var_2)))))) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (var_7)));
    /* LoopSeq 1 */
    for (signed char i_0 = 3; i_0 < 23; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (long long int i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            for (unsigned char i_2 = 2; i_2 < 20; i_2 += 3) 
            {
                for (unsigned int i_3 = 0; i_3 < 24; i_3 += 3) 
                {
                    {
                        var_16 -= ((/* implicit */_Bool) min((max((arr_6 [i_0 + 1]), (arr_6 [i_0 - 3]))), ((short)-28603)));
                        arr_13 [i_3] [i_2 + 3] [i_1] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_6 [i_0 - 1])) + (((/* implicit */int) var_14))))) ? (((((/* implicit */_Bool) (signed char)-118)) ? (((/* implicit */int) arr_6 [i_0])) : (((/* implicit */int) (signed char)-118)))) : (((((/* implicit */int) arr_6 [i_1])) & (((/* implicit */int) var_14))))));
                        var_17 = ((/* implicit */_Bool) ((min((((/* implicit */long long int) arr_0 [i_0 - 3] [i_0 - 3])), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (var_0))))) * (((/* implicit */long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) (short)-28598))) / (var_8))) * (arr_11 [i_0 - 1] [i_3]))))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (signed char i_4 = 0; i_4 < 24; i_4 += 2) 
        {
            for (unsigned int i_5 = 0; i_5 < 24; i_5 += 3) 
            {
                {
                    arr_19 [i_0 + 1] [i_0 + 1] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)-106)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (((((/* implicit */unsigned long long int) ((var_13) & (((/* implicit */unsigned int) ((/* implicit */int) (signed char)64)))))) & (min((arr_4 [i_0] [i_0 - 3]), (((/* implicit */unsigned long long int) (unsigned char)92))))))));
                    var_18 -= ((/* implicit */unsigned long long int) ((unsigned char) (signed char)127));
                }
            } 
        } 
    }
    var_19 = (_Bool)1;
}
