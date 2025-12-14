/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1648
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1648 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1648
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
    var_15 = ((/* implicit */int) var_10);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            {
                var_16 = arr_3 [(_Bool)1] [i_1];
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (signed char i_3 = 0; i_3 < 23; i_3 += 3) 
                    {
                        for (int i_4 = 0; i_4 < 23; i_4 += 1) 
                        {
                            {
                                var_17 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_0 [(_Bool)1])))))))));
                                var_18 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)255)) ? (arr_8 [i_2]) : (((/* implicit */int) (_Bool)1)))))));
                            }
                        } 
                    } 
                } 
                var_19 = ((/* implicit */signed char) arr_8 [i_0]);
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned long long int) ((((((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)36))))) | (((var_3) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))));
    /* LoopNest 3 */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        for (unsigned char i_6 = 0; i_6 < 15; i_6 += 4) 
        {
            for (int i_7 = 0; i_7 < 15; i_7 += 4) 
            {
                {
                    var_21 = ((/* implicit */_Bool) (~((+(((((/* implicit */_Bool) (signed char)2)) ? (((/* implicit */int) arr_21 [(_Bool)1] [i_5])) : (((/* implicit */int) arr_21 [(signed char)5] [i_5]))))))));
                    var_22 = ((/* implicit */_Bool) var_3);
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_12))));
}
