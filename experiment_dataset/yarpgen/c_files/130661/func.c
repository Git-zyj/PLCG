/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130661
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130661 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130661
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
    var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_2)) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) ((((/* implicit */int) var_16)) < (((/* implicit */int) var_4))))) : (((/* implicit */int) ((unsigned char) var_4)))))));
    var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)113)) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13)))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 1; i_0 < 17; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 15; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 18; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 18; i_3 += 3) 
                    {
                        for (long long int i_4 = 3; i_4 < 17; i_4 += 3) 
                        {
                            {
                                var_20 = ((/* implicit */short) min((((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [i_3])) >> (((((/* implicit */int) (unsigned short)19560)) - (19545)))))), (((((/* implicit */_Bool) arr_3 [i_1] [i_2])) ? (arr_4 [i_0 - 1] [i_1 + 2] [i_3]) : (arr_4 [(unsigned char)13] [i_3] [i_4 + 1])))));
                                var_21 = ((/* implicit */_Bool) (((((~(((/* implicit */int) (unsigned short)19561)))) + (2147483647))) >> (((/* implicit */int) min(((_Bool)1), ((_Bool)1))))));
                                arr_11 [i_4 - 1] [i_3] [i_1] [i_2] [i_1] [i_1] [i_0 + 1] = ((/* implicit */unsigned short) 3745199523191066399LL);
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */_Bool) (unsigned char)249);
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_7))));
}
