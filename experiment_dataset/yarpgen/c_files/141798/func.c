/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141798
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141798 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141798
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
    var_11 = ((((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_6))) < (var_7))))))) ? (((/* implicit */int) (unsigned short)56931)) : (((int) var_7)));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 2; i_0 < 20; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            {
                var_12 = ((/* implicit */unsigned long long int) min((var_12), (((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) arr_3 [i_0 + 1] [(_Bool)1])))))))));
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 4; i_2 < 17; i_2 += 3) 
                {
                    for (unsigned int i_3 = 0; i_3 < 21; i_3 += 3) 
                    {
                        for (signed char i_4 = 0; i_4 < 21; i_4 += 2) 
                        {
                            {
                                var_13 = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */_Bool) arr_1 [14LL] [i_1])) && (((/* implicit */_Bool) arr_5 [(unsigned char)12]))))) > (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_3])))))));
                                var_14 = ((/* implicit */short) (+(((((/* implicit */_Bool) arr_8 [i_0 - 2] [i_2 + 2] [i_2])) ? (arr_5 [i_0 + 1]) : (arr_5 [i_0 - 1])))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
