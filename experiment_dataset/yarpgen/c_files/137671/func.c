/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137671
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137671 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137671
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
    var_10 = ((/* implicit */signed char) (~((-(((/* implicit */int) var_9))))));
    var_11 = ((/* implicit */unsigned long long int) (~((~(2550143164455328122LL)))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned short i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 17; i_2 += 1) 
            {
                for (signed char i_3 = 0; i_3 < 17; i_3 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned long long int i_4 = 3; i_4 < 15; i_4 += 1) 
                        {
                            var_12 = ((/* implicit */_Bool) arr_14 [i_0] [i_4 - 1] [i_4 - 1] [i_4 + 2] [i_4] [i_4]);
                            arr_16 [16ULL] [i_0] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_1 [i_2] [i_3]))));
                            var_13 = ((/* implicit */unsigned long long int) arr_8 [i_0] [i_0]);
                            arr_17 [i_0] [i_0] [i_2] [i_3] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */int) (signed char)-16)) / (((/* implicit */int) ((((/* implicit */_Bool) var_9)) || (arr_7 [i_0] [i_0] [2]))))));
                            arr_18 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) arr_14 [i_0] [i_1] [i_3] [i_3] [16] [i_4])) + (((/* implicit */int) ((((/* implicit */_Bool) 27ULL)) || (((/* implicit */_Bool) var_9)))))));
                        }
                        arr_19 [i_0] [i_0] [i_0] = ((((/* implicit */unsigned long long int) ((var_2) & (((/* implicit */int) var_9))))) & (var_7));
                    }
                } 
            } 
        } 
        var_14 = ((/* implicit */short) ((((((/* implicit */int) (signed char)-68)) + (2147483647))) << (((((/* implicit */int) arr_6 [i_0] [i_0] [i_0] [i_0])) - (1)))));
        arr_20 [i_0] [i_0] = ((/* implicit */unsigned char) ((18446744073709551588ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
        arr_21 [i_0] = ((/* implicit */unsigned long long int) ((arr_8 [i_0] [i_0]) << (((arr_8 [i_0] [i_0]) - (1171262652)))));
    }
    var_15 = (short)-1;
    var_16 = max((min((((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) + (3170161273010958031ULL))), (((/* implicit */unsigned long long int) var_5)))), (((/* implicit */unsigned long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) (signed char)109))) - (var_3))) - (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))));
}
