/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1271
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1271 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1271
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
    for (long long int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) 8U)) ? (((/* implicit */unsigned int) arr_1 [i_0])) : (var_7)));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned int) (~((+(max((arr_1 [i_0]), (arr_1 [i_0])))))));
        /* LoopNest 2 */
        for (long long int i_1 = 3; i_1 < 18; i_1 += 1) 
        {
            for (unsigned char i_2 = 1; i_2 < 18; i_2 += 4) 
            {
                {
                    arr_9 [i_0] [i_0] [i_2] = ((/* implicit */int) (!(((/* implicit */_Bool) (~(arr_7 [i_0] [i_1] [i_2]))))));
                    arr_10 [i_0] [(signed char)0] [i_1] = ((((((/* implicit */_Bool) arr_7 [i_1 + 1] [i_1 + 1] [i_1 - 3])) ? (arr_7 [i_1 - 2] [i_1 - 1] [i_1 - 2]) : (arr_7 [i_1 - 2] [i_1 - 2] [i_1 - 3]))) | (((/* implicit */long long int) 675357076)));
                    var_13 = ((/* implicit */signed char) 0);
                    arr_11 [i_0] [i_0] [i_0] [9] = arr_4 [i_0];
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned int i_3 = 0; i_3 < 19; i_3 += 4) 
        {
            for (int i_4 = 1; i_4 < 18; i_4 += 3) 
            {
                {
                    var_14 = ((/* implicit */_Bool) max(((+(((((/* implicit */_Bool) arr_4 [i_0])) ? (arr_4 [i_0]) : (arr_14 [i_0]))))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_14 [i_0])))))));
                    var_15 = ((/* implicit */int) min((var_15), ((((~(arr_1 [i_4 + 1]))) % ((-(arr_5 [i_3] [i_3])))))));
                    var_16 ^= ((/* implicit */signed char) ((int) (!((!(((/* implicit */_Bool) var_4)))))));
                    arr_16 [i_0] [i_4 + 1] [i_0] [i_0] = ((/* implicit */signed char) ((((arr_8 [i_0] [i_3] [i_3] [i_4 + 1]) ? (((/* implicit */int) arr_8 [(unsigned char)14] [i_3] [i_4] [i_4 - 1])) : (((/* implicit */int) arr_8 [i_0] [i_3] [i_4 - 1] [i_4 - 1])))) >> ((+(((/* implicit */int) arr_8 [i_0] [i_3] [15] [i_4 + 1]))))));
                }
            } 
        } 
    }
    var_17 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (-26) : (var_5)));
}
