/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158305
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158305 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158305
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
    for (short i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 2; i_2 < 22; i_2 += 3) 
                {
                    for (signed char i_3 = 1; i_3 < 23; i_3 += 4) 
                    {
                        {
                            arr_11 [i_2] [i_1] [i_1] [i_2] [i_2 - 1] [i_3] = ((/* implicit */unsigned char) (~((-(((/* implicit */int) arr_3 [(_Bool)1] [i_3 - 1] [i_2 - 1]))))));
                            arr_12 [i_0] [i_2] [i_2] = ((/* implicit */short) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (arr_8 [i_0] [i_0] [i_0] [i_0] [i_0] [i_3])));
                        }
                    } 
                } 
                var_10 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) + ((+(var_7)))))) ? (((/* implicit */int) var_6)) : ((-(((/* implicit */int) arr_9 [i_0]))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_4 = 0; i_4 < 20; i_4 += 1) 
    {
        for (unsigned long long int i_5 = 0; i_5 < 20; i_5 += 2) 
        {
            {
                arr_18 [i_4] [i_5] [i_5] = ((/* implicit */long long int) arr_14 [i_5]);
                arr_19 [i_4] [i_5] [i_4] = max(((-(((/* implicit */int) var_8)))), ((+(((/* implicit */int) arr_6 [i_4] [(_Bool)1] [i_4] [i_5])))));
                var_11 -= ((/* implicit */long long int) max((((((/* implicit */int) arr_4 [(unsigned char)19] [i_5])) - (((/* implicit */int) arr_10 [(short)13] [i_5] [i_4] [(signed char)19])))), (((/* implicit */int) min((arr_10 [i_5] [i_5] [i_5] [i_4]), (arr_10 [i_4] [i_5] [i_5] [i_4]))))));
                arr_20 [i_4] = ((/* implicit */_Bool) max((((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)4092))))), (786432U)));
                var_12 = ((/* implicit */unsigned char) (-(((arr_2 [i_4]) - (arr_2 [i_4])))));
            }
        } 
    } 
    var_13 -= ((/* implicit */_Bool) var_1);
}
