/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111862
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111862 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111862
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
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 20; i_0 += 4) 
    {
        for (unsigned int i_1 = 1; i_1 < 19; i_1 += 4) 
        {
            {
                var_13 = ((/* implicit */unsigned long long int) ((arr_3 [i_0] [i_0] [i_1 - 1]) >> (((((unsigned long long int) arr_0 [i_0 + 1])) - (3503091437534356508ULL)))));
                var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_2 [i_0] [i_0] [7U])) : (((/* implicit */int) arr_1 [i_0]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)251))) : (arr_0 [i_1])))) ? (((/* implicit */int) (((_Bool)1) || ((_Bool)1)))) : (((/* implicit */int) (!((_Bool)1))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_2 = 3; i_2 < 6; i_2 += 4) 
    {
        for (unsigned int i_3 = 0; i_3 < 10; i_3 += 2) 
        {
            {
                var_15 = ((/* implicit */long long int) arr_0 [16U]);
                arr_10 [i_2] = ((/* implicit */int) max((((/* implicit */unsigned long long int) (_Bool)1)), (((((/* implicit */_Bool) var_4)) ? ((~(arr_0 [i_3]))) : (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) arr_6 [(unsigned char)3] [i_2])), (var_7))))))));
                arr_11 [i_2 - 1] [i_2] [i_2] = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) ((unsigned short) arr_4 [i_3] [i_2 + 1]))) : (((arr_7 [(unsigned short)3] [i_3]) ? (((/* implicit */int) arr_1 [i_2])) : (((/* implicit */int) (_Bool)0))))))));
                var_16 -= (_Bool)1;
            }
        } 
    } 
}
