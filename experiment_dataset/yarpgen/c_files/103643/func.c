/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103643
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103643 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103643
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
    var_12 &= var_11;
    var_13 = ((/* implicit */unsigned int) var_1);
    var_14 = ((/* implicit */_Bool) min((var_14), (((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)8)))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_0 = 4; i_0 < 22; i_0 += 2) 
    {
        var_15 = (+(arr_0 [i_0 + 3]));
        var_16 = ((((/* implicit */int) (unsigned short)62259)) % (((/* implicit */int) arr_1 [i_0 - 4])));
        arr_3 [i_0 + 2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_0 - 4])) ? (arr_0 [i_0 + 1]) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0 - 4])))));
        arr_4 [i_0 - 2] = ((/* implicit */unsigned long long int) (+(arr_0 [i_0 + 3])));
    }
    /* LoopNest 3 */
    for (int i_1 = 1; i_1 < 15; i_1 += 4) 
    {
        for (unsigned short i_2 = 2; i_2 < 18; i_2 += 2) 
        {
            for (signed char i_3 = 1; i_3 < 16; i_3 += 1) 
            {
                {
                    var_17 = ((/* implicit */unsigned long long int) ((((arr_0 [i_1 + 2]) / (((/* implicit */long long int) arr_6 [i_1 + 2])))) % (((/* implicit */long long int) min((((/* implicit */int) var_9)), (arr_6 [i_1 + 2]))))));
                    /* LoopSeq 1 */
                    for (int i_4 = 0; i_4 < 19; i_4 += 3) 
                    {
                        var_18 = ((/* implicit */long long int) (unsigned short)62269);
                        var_19 = ((/* implicit */short) arr_10 [i_1 + 4] [i_1 + 4]);
                        arr_18 [i_1] [i_3 - 1] [i_2 + 1] [i_2 - 2] [i_1] = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */long long int) ((/* implicit */int) arr_7 [i_1 + 2] [i_1]))) & (arr_0 [i_1 + 1]))) <= (arr_0 [i_1 + 2]))))) != (var_5)));
                    }
                    var_20 = ((/* implicit */signed char) arr_6 [i_2 + 1]);
                }
            } 
        } 
    } 
}
