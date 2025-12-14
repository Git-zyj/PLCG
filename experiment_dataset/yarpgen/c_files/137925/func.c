/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137925
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137925 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137925
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
    var_17 -= ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((unsigned short) var_13))) || (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_2)), (var_3)))))) ? (((((/* implicit */int) var_15)) ^ (((/* implicit */int) max((((/* implicit */short) (signed char)19)), ((short)1023)))))) : (((/* implicit */int) var_7))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 11; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 13; i_2 += 1) 
                {
                    for (unsigned int i_3 = 0; i_3 < 13; i_3 += 1) 
                    {
                        {
                            arr_9 [i_3] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((long long int) arr_5 [i_1] [i_2] [i_0]))), (max((arr_7 [i_1] [i_0]), (((/* implicit */unsigned long long int) arr_8 [i_0]))))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0 + 2] [i_0] [i_0] [i_0])) ? (arr_5 [i_0 + 2] [i_0 + 1] [i_0]) : (arr_5 [i_0 + 2] [i_0 + 1] [i_0]))))));
                            arr_10 [i_0] [i_0] [(unsigned char)4] [i_0] [i_0 + 1] [i_0] = ((/* implicit */int) (~(arr_4 [i_0 + 2] [i_0] [i_0 - 1] [i_0 + 1])));
                        }
                    } 
                } 
                var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-19))) : (arr_7 [i_0] [i_0]))) << (((((/* implicit */int) (signed char)-4)) + (5)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (+(arr_4 [i_0] [i_0] [i_1] [i_1])))))))) : (min((arr_6 [i_0 - 1] [i_1] [i_0 + 2]), (arr_6 [i_0 + 2] [i_1] [i_1])))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) ((((/* implicit */int) ((signed char) var_3))) == (((/* implicit */int) min(((unsigned short)13767), (((/* implicit */unsigned short) (short)-1023)))))))) : (((((/* implicit */_Bool) ((signed char) (signed char)-9))) ? (((/* implicit */int) min((((/* implicit */unsigned short) (short)-1015)), (var_14)))) : (((/* implicit */int) min((var_15), (((/* implicit */unsigned short) var_2)))))))));
}
