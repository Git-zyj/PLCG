/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136060
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136060 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136060
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
    var_11 = ((/* implicit */int) max((var_11), (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_6)) ^ (((/* implicit */int) ((signed char) var_0)))))))))));
    var_12 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) 0)) ? (((/* implicit */int) (signed char)85)) : (((/* implicit */int) (unsigned char)226))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (signed char i_1 = 3; i_1 < 23; i_1 += 4) 
        {
            {
                var_13 ^= var_1;
                var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) min((((((/* implicit */_Bool) (unsigned char)29)) ? (((/* implicit */int) (unsigned char)13)) : (-1))), (((/* implicit */int) ((signed char) min((1181468131), (-623522342))))))))));
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 25; i_2 += 4) 
                {
                    for (signed char i_3 = 2; i_3 < 24; i_3 += 2) 
                    {
                        {
                            var_15 = ((((((/* implicit */int) arr_0 [i_3 - 1])) * (((/* implicit */int) min(((unsigned char)237), ((unsigned char)0)))))) | ((-(694161673))));
                            var_16 -= ((/* implicit */signed char) (-(((((/* implicit */int) arr_0 [i_2])) | (((((/* implicit */int) (unsigned char)250)) | (arr_5 [(signed char)12] [i_2] [i_2] [(signed char)19])))))));
                            var_17 -= ((/* implicit */int) ((signed char) ((((/* implicit */int) (unsigned char)128)) - ((+(((/* implicit */int) (unsigned char)2)))))));
                            var_18 *= ((/* implicit */unsigned char) (-(((((/* implicit */int) (signed char)49)) / (267911168)))));
                            var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) (!(((/* implicit */_Bool) ((signed char) 1545664114))))))));
                        }
                    } 
                } 
                var_20 *= ((signed char) (+(((/* implicit */int) arr_4 [i_0] [i_1] [i_1 - 3]))));
                var_21 ^= ((/* implicit */signed char) ((-790892098) | (((/* implicit */int) (signed char)92))));
            }
        } 
    } 
    var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) var_1))));
}
