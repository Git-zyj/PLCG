/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121538
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121538 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121538
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
    var_17 = (~(((/* implicit */int) var_4)));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_0] [i_1] = ((/* implicit */unsigned long long int) var_11);
                arr_6 [i_0] [i_1] [i_1] = var_5;
                arr_7 [(unsigned char)0] [(unsigned char)0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((int) var_11))) ? (var_12) : (((/* implicit */int) ((unsigned char) (short)-16861)))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_2 = 2; i_2 < 23; i_2 += 3) 
    {
        for (unsigned char i_3 = 0; i_3 < 25; i_3 += 4) 
        {
            {
                arr_14 [i_3] [i_2] [i_2] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) max((-1323035622), (((/* implicit */int) (unsigned short)5))))) ? (((/* implicit */long long int) ((/* implicit */int) (short)16853))) : (arr_12 [i_2 + 2] [i_2] [i_2]))), (((((/* implicit */_Bool) 1323035621)) ? (((/* implicit */long long int) ((/* implicit */int) ((var_15) > (((/* implicit */int) var_11)))))) : (min((arr_13 [i_2] [i_2] [i_2]), (((/* implicit */long long int) 466734300))))))));
                /* LoopNest 3 */
                for (signed char i_4 = 0; i_4 < 25; i_4 += 4) 
                {
                    for (unsigned short i_5 = 0; i_5 < 25; i_5 += 3) 
                    {
                        for (int i_6 = 1; i_6 < 22; i_6 += 3) 
                        {
                            {
                                arr_22 [i_2 - 1] [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] = -2683765047703932831LL;
                                arr_23 [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_5), (((/* implicit */int) arr_20 [i_2] [i_6] [i_6] [i_6 - 1] [i_6] [i_6] [(signed char)11]))))) ? (((var_9) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_2] [i_6] [i_6 + 1] [i_6 - 1] [i_6 - 1] [i_6] [i_6]))))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_20 [i_2] [i_2] [i_6] [i_6 - 1] [i_6] [i_2] [i_2])))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_18 = ((/* implicit */int) (+(var_16)));
    var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) 3830766533U)) : (((0ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0)))))));
}
