/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128105
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128105 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128105
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
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned char) (+(min((((((/* implicit */_Bool) 1023LL)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0])))), (((/* implicit */int) var_0))))));
        var_12 = ((/* implicit */unsigned short) max((var_12), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_2 [i_0]) - (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) (unsigned char)254)) : (arr_2 [i_0])))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_2 [i_0]) != (((/* implicit */int) arr_1 [i_0])))))) * (((arr_0 [i_0] [i_0]) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))))) : (8589934591ULL))))));
        arr_4 [i_0] = ((/* implicit */unsigned char) 2893898151915261039LL);
        var_13 = ((/* implicit */unsigned char) arr_1 [i_0]);
        var_14 = ((/* implicit */unsigned char) min((((/* implicit */int) (!(((/* implicit */_Bool) 98304))))), (((arr_2 [i_0]) ^ (((/* implicit */int) (unsigned short)43496))))));
    }
    for (signed char i_1 = 1; i_1 < 9; i_1 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_2 = 0; i_2 < 11; i_2 += 4) 
        {
            var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_4)), (arr_0 [i_1 + 1] [i_1 - 1])))) && (((((/* implicit */_Bool) arr_0 [i_1 - 1] [i_1 + 1])) && (((/* implicit */_Bool) arr_6 [i_1 - 1]))))));
            var_16 -= ((/* implicit */long long int) ((((/* implicit */int) arr_5 [i_1])) % (((/* implicit */int) (short)-17083))));
            var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) ((min((arr_9 [i_2] [i_1] [i_1]), (((/* implicit */unsigned long long int) min((arr_8 [i_1] [i_2] [i_2]), (((/* implicit */long long int) arr_2 [i_1]))))))) < (((/* implicit */unsigned long long int) min((((/* implicit */long long int) (short)(-32767 - 1))), (-1024LL)))))))));
            /* LoopNest 3 */
            for (unsigned short i_3 = 0; i_3 < 11; i_3 += 1) 
            {
                for (unsigned short i_4 = 1; i_4 < 10; i_4 += 2) 
                {
                    for (long long int i_5 = 0; i_5 < 11; i_5 += 1) 
                    {
                        {
                            var_18 = ((/* implicit */long long int) (~((((_Bool)1) ? (arr_10 [i_1] [i_3] [i_1]) : (arr_6 [i_5])))));
                            var_19 = ((/* implicit */short) min((((/* implicit */long long int) (!(((/* implicit */_Bool) arr_6 [i_1 + 1]))))), (max((-1023LL), (((/* implicit */long long int) var_4))))));
                            arr_20 [i_1] [i_1] [i_1] [i_2] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_18 [i_4 - 1] [i_3] [i_1 + 1])), (arr_11 [i_5] [i_4 + 1] [i_3] [i_1 + 1])))) && (((/* implicit */_Bool) ((unsigned char) min((((/* implicit */unsigned long long int) 4519107728773487676LL)), (arr_16 [i_5] [i_4] [i_3] [i_2] [i_1 + 2])))))));
                        }
                    } 
                } 
            } 
        }
        arr_21 [i_1] [i_1] = ((arr_11 [i_1 + 2] [i_1 + 1] [i_1 + 2] [i_1 - 1]) << (((((((/* implicit */_Bool) arr_11 [i_1 - 1] [i_1 - 1] [i_1] [i_1])) ? (((/* implicit */int) (signed char)80)) : (((/* implicit */int) (signed char)-110)))) - (38))));
    }
    var_20 = ((/* implicit */unsigned char) ((unsigned short) ((_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (-1024LL)))));
}
