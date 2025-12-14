/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141214
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141214 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141214
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
    for (unsigned int i_0 = 1; i_0 < 21; i_0 += 4) 
    {
        for (unsigned short i_1 = 1; i_1 < 21; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_11 [i_0] [i_0 - 1] [i_1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned int) arr_8 [i_1 + 1] [i_1] [i_0 - 1]))) ? ((~(((/* implicit */int) arr_8 [i_1 + 1] [i_1] [i_0 + 1])))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_1 + 1] [i_1] [i_0 - 1])))))));
                    arr_12 [i_1] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_2 [i_0 - 1])) ? (arr_3 [i_0 + 1]) : (arr_3 [i_0 + 1]))) > (((/* implicit */unsigned long long int) ((((/* implicit */int) max(((unsigned short)46218), (((/* implicit */unsigned short) (unsigned char)1))))) + ((-(((/* implicit */int) arr_0 [i_0 - 1])))))))));
                    arr_13 [i_2] [i_1] [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) 18446744073709551615ULL))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */long long int) min((var_15), (((/* implicit */int) var_2))))) : (((((/* implicit */_Bool) var_6)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) var_8))))))))));
    /* LoopNest 2 */
    for (unsigned int i_3 = 0; i_3 < 10; i_3 += 3) 
    {
        for (unsigned char i_4 = 0; i_4 < 10; i_4 += 4) 
        {
            {
                arr_19 [1LL] [i_3] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_4])) ? (arr_3 [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_9 [i_4] [i_4] [i_4] [i_4]))))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_3 [i_3])))) % (min((((/* implicit */unsigned long long int) arr_10 [i_3] [i_3] [i_4] [i_3])), (arr_5 [(unsigned short)20] [i_4]))))) : (max((arr_3 [i_3]), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned char) (_Bool)0)), ((unsigned char)238))))))));
                var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) ((unsigned long long int) arr_4 [i_3])))));
            }
        } 
    } 
}
