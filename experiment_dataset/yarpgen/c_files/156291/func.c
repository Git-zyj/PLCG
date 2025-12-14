/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156291
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156291 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156291
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
    for (long long int i_0 = 2; i_0 < 13; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 1; i_3 < 12; i_3 += 2) 
                    {
                        for (long long int i_4 = 2; i_4 < 13; i_4 += 4) 
                        {
                            {
                                var_17 = ((/* implicit */signed char) min((min(((unsigned char)255), (((/* implicit */unsigned char) arr_5 [i_0 + 1])))), (((/* implicit */unsigned char) min((var_0), (arr_5 [i_0 + 1]))))));
                                var_18 = ((/* implicit */long long int) min((((((/* implicit */unsigned long long int) ((unsigned int) arr_4 [i_0]))) * (((((/* implicit */_Bool) 1158594780U)) ? (arr_1 [i_0] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)192))))))), (((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */int) var_6)) >= (((/* implicit */int) arr_10 [i_0] [i_1] [i_2] [i_3]))))))));
                            }
                        } 
                    } 
                    arr_13 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) min((min((arr_4 [i_0]), ((unsigned char)32))), ((unsigned char)0)))) > (((/* implicit */int) min((((/* implicit */unsigned char) var_1)), (var_13))))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned char) min((((min((543538150), (((/* implicit */int) var_10)))) / (min((-543538151), (((/* implicit */int) var_6)))))), (((/* implicit */int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) ((short) var_10))))))));
}
