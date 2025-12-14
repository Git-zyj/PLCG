/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148643
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148643 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148643
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
    var_15 |= ((_Bool) var_4);
    var_16 = ((/* implicit */short) ((min((((/* implicit */int) ((var_11) == (((/* implicit */unsigned long long int) 4027780828U))))), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (signed char)122)) : (((/* implicit */int) (signed char)-122)))))) <= (((/* implicit */int) var_10))));
    var_17 &= ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_14)))) < (((((/* implicit */_Bool) (~(var_4)))) ? ((+(4027780828U))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-12))))))))));
    var_18 ^= ((unsigned int) (+((-(((/* implicit */int) var_9))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 8; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            {
                var_19 |= ((/* implicit */_Bool) ((((/* implicit */int) max((((/* implicit */unsigned char) (signed char)-122)), (arr_1 [i_0])))) - (((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_13))))))))));
                /* LoopNest 2 */
                for (unsigned char i_2 = 2; i_2 < 7; i_2 += 4) 
                {
                    for (int i_3 = 3; i_3 < 9; i_3 += 4) 
                    {
                        {
                            var_20 *= ((/* implicit */unsigned char) max((max(((~(((/* implicit */int) (signed char)119)))), (((/* implicit */int) (!(var_13)))))), (((/* implicit */int) ((unsigned short) max((((/* implicit */unsigned int) var_7)), (arr_8 [i_0] [8LL] [i_3] [i_0])))))));
                            var_21 *= ((/* implicit */short) arr_1 [i_0 + 2]);
                        }
                    } 
                } 
                var_22 *= ((/* implicit */unsigned int) (((-((+(arr_7 [i_0] [i_0 - 1] [i_1] [0U] [i_0] [(_Bool)1]))))) <= (((/* implicit */unsigned int) (~(((((/* implicit */_Bool) arr_1 [1])) ? (arr_6 [i_0 + 1]) : (((/* implicit */int) (signed char)119)))))))));
            }
        } 
    } 
}
