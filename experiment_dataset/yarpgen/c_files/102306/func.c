/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102306
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102306 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102306
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
    var_14 = ((/* implicit */signed char) (((-(((/* implicit */int) ((((/* implicit */int) var_7)) >= (((/* implicit */int) var_8))))))) >= (var_5)));
    var_15 = ((/* implicit */unsigned long long int) min((var_3), (((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)34461))))) ? (var_4) : (var_9)))));
    var_16 = ((/* implicit */_Bool) var_6);
    var_17 = ((/* implicit */short) var_4);
    /* LoopNest 2 */
    for (unsigned int i_0 = 3; i_0 < 19; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 21; i_2 += 4) 
                {
                    for (unsigned int i_3 = 0; i_3 < 21; i_3 += 4) 
                    {
                        {
                            var_18 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) 16U)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (-251178296)));
                            arr_9 [i_0] = ((((/* implicit */unsigned int) -251178296)) ^ (((((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0 - 1]))) & (var_4))));
                            arr_10 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_8 [i_2]))))) ? (arr_5 [i_2] [i_2]) : (((((/* implicit */_Bool) -1537696475262520418LL)) ? (((/* implicit */int) (signed char)34)) : (-251178296)))));
                        }
                    } 
                } 
                arr_11 [i_1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) ((((((/* implicit */_Bool) 3)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)1))) : (arr_6 [i_0] [i_0 + 1] [i_0 - 3] [i_1]))) > (((/* implicit */unsigned int) ((((/* implicit */_Bool) -251178300)) ? (((/* implicit */int) (_Bool)1)) : (930806721))))))) > (max(((-(253952))), ((+(arr_5 [i_0] [i_1])))))));
                arr_12 [i_0] = (+(((/* implicit */int) (unsigned short)29150)));
            }
        } 
    } 
}
