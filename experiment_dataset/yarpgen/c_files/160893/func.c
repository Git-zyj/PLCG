/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160893
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160893 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160893
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
    var_20 *= ((/* implicit */unsigned char) var_13);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            {
                var_21 = ((/* implicit */signed char) (~(((/* implicit */int) (unsigned char)7))));
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 23; i_3 += 2) 
                    {
                        {
                            arr_9 [i_0] [i_1] [i_0] [i_3] |= (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned short)10633)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_7 [i_3])))) - (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned short)25741))))))));
                            var_22 = ((unsigned short) (unsigned short)0);
                            var_23 = ((/* implicit */int) ((((((unsigned long long int) (unsigned short)4009)) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) 5714008092216717393ULL)))))) & (((/* implicit */unsigned long long int) max((((/* implicit */int) var_11)), (((((/* implicit */int) (unsigned short)4030)) ^ (((/* implicit */int) (unsigned short)61515)))))))));
                            arr_10 [i_0] [i_2] [i_2] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)65535)) && (((/* implicit */_Bool) 12732735981492834195ULL))));
                            var_24 = ((/* implicit */unsigned short) arr_1 [i_1]);
                        }
                    } 
                } 
                var_25 = ((/* implicit */int) max((var_25), (((/* implicit */int) var_3))));
            }
        } 
    } 
}
