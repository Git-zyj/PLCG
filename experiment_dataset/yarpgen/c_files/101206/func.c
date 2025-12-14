/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101206
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101206 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101206
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
    for (int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            for (long long int i_2 = 3; i_2 < 16; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 17; i_3 += 2) 
                    {
                        for (short i_4 = 3; i_4 < 15; i_4 += 1) 
                        {
                            {
                                arr_18 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) min(((unsigned short)932), ((unsigned short)58637)));
                                var_10 = ((/* implicit */long long int) (+((-((+(1009622466U)))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 17; i_5 += 3) 
                    {
                        for (unsigned long long int i_6 = 0; i_6 < 17; i_6 += 4) 
                        {
                            {
                                var_11 = ((/* implicit */unsigned long long int) ((long long int) var_4));
                                var_12 = ((/* implicit */unsigned char) var_9);
                            }
                        } 
                    } 
                    var_13 = ((/* implicit */long long int) min((((/* implicit */int) ((unsigned short) max(((unsigned short)936), (((/* implicit */unsigned short) var_7)))))), ((~(arr_5 [i_2 - 1] [i_2 - 2] [i_2])))));
                    var_14 = ((/* implicit */signed char) max((var_14), (((/* implicit */signed char) (~(((/* implicit */int) (_Bool)0)))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_7 = 0; i_7 < 10; i_7 += 4) 
    {
        for (int i_8 = 0; i_8 < 10; i_8 += 4) 
        {
            {
                var_15 = ((/* implicit */short) (!(((/* implicit */_Bool) (unsigned short)64620))));
                arr_29 [i_8] = ((/* implicit */unsigned short) min((((((/* implicit */int) (unsigned short)64609)) <= (((/* implicit */int) (_Bool)1)))), (((((/* implicit */long long int) ((/* implicit */int) var_9))) != (min((((/* implicit */long long int) (unsigned short)46238)), (9223372036854775807LL)))))));
            }
        } 
    } 
    var_16 = ((/* implicit */long long int) var_4);
}
