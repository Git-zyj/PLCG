/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168408
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168408 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168408
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
        for (unsigned short i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            for (short i_2 = 1; i_2 < 20; i_2 += 3) 
            {
                {
                    arr_7 [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_6 [(signed char)20] [i_2 - 1])) && (((((/* implicit */_Bool) arr_6 [i_1] [i_0])) && (((/* implicit */_Bool) arr_6 [i_0] [i_0]))))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 21; i_3 += 3) 
                    {
                        for (short i_4 = 2; i_4 < 20; i_4 += 1) 
                        {
                            {
                                arr_15 [9U] [i_3] [i_2] [i_3] = ((/* implicit */unsigned int) min((((/* implicit */int) (short)6224)), (((int) ((((/* implicit */_Bool) 852749496U)) || (((/* implicit */_Bool) -1)))))));
                                var_14 -= ((/* implicit */unsigned short) ((2) < (((/* implicit */int) var_13))));
                                arr_16 [19U] [i_2] [(signed char)13] [(short)13] [16U] = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_1))) > (max((((/* implicit */unsigned int) -1)), (var_0)))))) ^ (((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))));
                            }
                        } 
                    } 
                    arr_17 [i_2] [i_2] [18] = ((/* implicit */short) var_6);
                    var_15 = ((/* implicit */signed char) ((int) ((((/* implicit */_Bool) arr_14 [(signed char)4] [i_2] [i_2 + 1] [i_2 - 1] [i_2] [9])) && (var_13))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_5 = 0; i_5 < 11; i_5 += 1) 
    {
        for (unsigned int i_6 = 4; i_6 < 10; i_6 += 1) 
        {
            {
                arr_25 [i_5] = ((/* implicit */signed char) ((max((-1), (((/* implicit */int) arr_10 [i_6 - 3] [3])))) != (min((arr_18 [i_6] [i_5]), (arr_18 [i_6 - 2] [i_5])))));
                var_16 = ((/* implicit */int) min((((/* implicit */long long int) min((((((/* implicit */_Bool) 12)) ? (((/* implicit */int) arr_24 [i_5])) : (((/* implicit */int) (short)3)))), (((/* implicit */int) arr_12 [i_6 - 4] [i_5] [2U] [i_6] [i_6 - 4] [i_6 - 3] [i_6]))))), (min((max((((/* implicit */long long int) (_Bool)1)), (-8694705931030070661LL))), (((/* implicit */long long int) min((9), (var_4))))))));
            }
        } 
    } 
}
