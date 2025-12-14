/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163046
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163046 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163046
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
    for (long long int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            {
                var_11 = ((/* implicit */signed char) var_1);
                /* LoopNest 3 */
                for (unsigned int i_2 = 0; i_2 < 25; i_2 += 2) 
                {
                    for (unsigned char i_3 = 0; i_3 < 25; i_3 += 4) 
                    {
                        for (signed char i_4 = 2; i_4 < 23; i_4 += 3) 
                        {
                            {
                                var_12 |= ((/* implicit */int) var_5);
                                var_13 -= ((/* implicit */_Bool) var_7);
                                var_14 = var_4;
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_15 = ((/* implicit */signed char) ((((/* implicit */int) (_Bool)0)) | (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) var_6)))))));
    var_16 -= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) min((((/* implicit */short) var_0)), (var_10)))) / (((/* implicit */int) ((2147483647) > (((/* implicit */int) (_Bool)0)))))))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_0))));
    var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) (-(-2147483647)))), (min((8468221640432906944LL), (((/* implicit */long long int) var_3))))))) ? (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) | (var_7)))) ? (((/* implicit */int) min((((/* implicit */short) var_4)), (var_10)))) : (((/* implicit */int) var_9)))) : (((/* implicit */int) var_2)))))));
    var_18 = ((/* implicit */unsigned short) var_5);
}
