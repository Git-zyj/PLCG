/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10313
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10313 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10313
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
    var_13 = ((/* implicit */unsigned int) var_3);
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (unsigned int i_1 = 1; i_1 < 14; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_14 &= ((/* implicit */unsigned char) (-(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */long long int) arr_1 [4U])) ^ (arr_3 [i_0] [i_2] [i_0])))))))));
                    var_15 = ((/* implicit */int) ((unsigned long long int) min((((/* implicit */long long int) ((unsigned char) var_4))), (min((var_2), (((/* implicit */long long int) arr_1 [i_0])))))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned int i_3 = 2; i_3 < 9; i_3 += 3) 
    {
        for (long long int i_4 = 0; i_4 < 10; i_4 += 4) 
        {
            for (long long int i_5 = 1; i_5 < 7; i_5 += 3) 
            {
                {
                    var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) ((long long int) (+((+(arr_0 [i_3] [i_3])))))))));
                    arr_15 [i_3] [i_4] [i_4] [i_3] = ((/* implicit */unsigned short) ((7U) | (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_12 [i_3 - 1] [i_4] [i_5 - 1] [i_5 + 1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_12 [i_3 - 1] [i_4] [i_5 - 1] [i_4])))))));
                    arr_16 [i_5] [i_3 - 2] [i_3 - 2] = ((/* implicit */signed char) (+(((/* implicit */int) arr_14 [i_5] [i_5] [i_5] [i_5]))));
                    arr_17 [i_3] [6U] [i_4] [i_5 - 1] &= ((/* implicit */unsigned char) (-(-357763897)));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 10; i_6 += 3) 
                    {
                        for (unsigned char i_7 = 3; i_7 < 9; i_7 += 4) 
                        {
                            {
                                var_17 &= ((/* implicit */_Bool) var_1);
                                arr_25 [i_3] [8ULL] [i_5 + 1] [i_3] [i_3] [i_5 + 1] &= ((/* implicit */int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (_Bool)1))))) ? (((unsigned int) var_3)) : (arr_1 [i_4]))) ^ (((/* implicit */unsigned int) (~((~(((/* implicit */int) (unsigned short)16043)))))))));
                                arr_26 [i_3] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(max((((/* implicit */unsigned int) 1344576035)), (8388607U)))))) && ((!(((/* implicit */_Bool) ((unsigned char) arr_5 [(_Bool)0] [i_6] [i_4])))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */_Bool) var_2);
    var_19 = ((/* implicit */short) var_9);
}
