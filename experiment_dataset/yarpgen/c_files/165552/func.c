/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165552
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165552 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165552
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
        for (short i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 25; i_2 += 3) 
            {
                {
                    arr_6 [i_2] [i_1] [i_1] [i_0] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_0 [i_1] [i_0])))) * (((var_0) ? (arr_4 [i_0] [i_0] [i_2]) : (var_19)))));
                    /* LoopSeq 1 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        arr_10 [i_0] [i_0] [i_1] [i_1] [i_3] = ((/* implicit */_Bool) arr_1 [i_0]);
                        var_20 = ((/* implicit */short) (~(((((((/* implicit */int) (signed char)-30)) & (var_10))) | (((/* implicit */int) var_3))))));
                        var_21 = ((/* implicit */int) min((((/* implicit */unsigned short) ((_Bool) (short)1020))), (((unsigned short) 3952258327U))));
                    }
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (!(var_1))))));
    /* LoopNest 2 */
    for (short i_4 = 1; i_4 < 24; i_4 += 3) 
    {
        for (unsigned long long int i_5 = 1; i_5 < 23; i_5 += 3) 
        {
            {
                var_23 |= (~(((/* implicit */int) arr_3 [i_4 + 1] [2LL] [i_5 + 2])));
                arr_18 [i_4] [i_4] = ((/* implicit */unsigned char) var_0);
            }
        } 
    } 
    /* LoopNest 3 */
    for (signed char i_6 = 0; i_6 < 19; i_6 += 1) 
    {
        for (unsigned long long int i_7 = 0; i_7 < 19; i_7 += 3) 
        {
            for (unsigned char i_8 = 0; i_8 < 19; i_8 += 3) 
            {
                {
                    var_24 = ((/* implicit */_Bool) min((var_24), (((/* implicit */_Bool) max((((signed char) arr_9 [i_8] [i_8] [i_8] [i_8])), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_6]))) <= (0ULL)))))))));
                    var_25 = ((((/* implicit */int) (!(((/* implicit */_Bool) arr_21 [i_6] [i_6] [i_6]))))) / (((int) ((signed char) var_1))));
                }
            } 
        } 
    } 
}
