/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104228
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104228 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104228
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 6; i_2 += 4) 
            {
                {
                    arr_9 [i_0] [i_2] [i_1] [i_2] = ((/* implicit */unsigned long long int) ((unsigned char) max((((unsigned int) arr_4 [i_0] [i_0])), (((/* implicit */unsigned int) min((((/* implicit */int) (_Bool)1)), (arr_5 [i_0])))))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 3; i_3 < 9; i_3 += 3) 
                    {
                        arr_12 [i_1] [i_1] [i_1] [i_3] [i_1] [i_2] = ((/* implicit */short) max((32985348833280ULL), (((/* implicit */unsigned long long int) (signed char)7))));
                        arr_13 [i_2] [(unsigned char)0] [i_2 + 3] [i_3] [i_2] [i_1] = ((/* implicit */int) ((unsigned long long int) min((max((18446711088360718316ULL), (((/* implicit */unsigned long long int) 2147483647)))), (((/* implicit */unsigned long long int) ((18446744073709551615ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1] [7U] [i_1])))))))));
                    }
                    arr_14 [i_2] = ((/* implicit */long long int) ((((int) max((32985348833280ULL), (((/* implicit */unsigned long long int) var_3))))) ^ (((/* implicit */int) ((((unsigned long long int) var_4)) != (min((((/* implicit */unsigned long long int) var_14)), (arr_1 [i_0]))))))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned long long int i_4 = 2; i_4 < 13; i_4 += 2) 
    {
        for (unsigned short i_5 = 2; i_5 < 16; i_5 += 4) 
        {
            for (short i_6 = 0; i_6 < 17; i_6 += 2) 
            {
                {
                    var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) ((int) max((max((((/* implicit */unsigned long long int) arr_16 [i_4] [i_5 - 1])), (18446744073709551607ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_17 [i_5 - 1])) && (var_6))))))))));
                    arr_23 [i_4 + 2] [i_5 - 1] [i_5 - 1] = ((/* implicit */int) max((1ULL), (((/* implicit */unsigned long long int) 67076096))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */signed char) ((((min((1649267441664ULL), (((/* implicit */unsigned long long int) var_12)))) & (((unsigned long long int) (unsigned char)240)))) != (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) && (var_4)))), (max((((/* implicit */unsigned long long int) (signed char)48)), (var_5)))))));
}
