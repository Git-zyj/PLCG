/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174560
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174560 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174560
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
    var_16 = ((/* implicit */_Bool) min((((/* implicit */short) var_3)), (((short) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_9)))))));
    var_17 = ((/* implicit */short) 1016841226U);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                var_18 = ((/* implicit */short) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-12503)) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) var_13)))))) ? ((-(((/* implicit */int) arr_3 [i_0])))) : (((/* implicit */int) arr_5 [i_0] [i_0] [i_0]))))));
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 15; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 15; i_3 += 4) 
                    {
                        {
                            arr_13 [i_0] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_7)) ? (((unsigned int) arr_3 [i_2])) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_7 [14] [14] [(unsigned char)1])), (var_15)))) ? (((/* implicit */int) arr_11 [i_1] [i_2])) : (((/* implicit */int) ((_Bool) -5547895762846541298LL))))))));
                            var_19 = ((/* implicit */long long int) (+(((((/* implicit */_Bool) (-(((/* implicit */int) arr_4 [i_0] [13LL] [i_2]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */short) arr_1 [i_3])), (arr_3 [i_0]))))) : (((((/* implicit */_Bool) arr_6 [i_1] [i_1])) ? (arr_0 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_14)))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_4 = 0; i_4 < 15; i_4 += 4) 
                {
                    for (short i_5 = 3; i_5 < 13; i_5 += 1) 
                    {
                        {
                            var_20 -= ((/* implicit */unsigned char) (((-(((((/* implicit */_Bool) arr_5 [i_1] [i_4] [i_5])) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) (_Bool)1)))))) / (((((/* implicit */_Bool) arr_16 [i_5] [i_5] [i_5 + 2] [i_5])) ? (((/* implicit */int) arr_16 [i_5] [i_5] [i_5 - 1] [i_5 - 1])) : (((/* implicit */int) (short)-9981))))));
                            var_21 = ((/* implicit */unsigned short) var_6);
                            arr_20 [i_5] [i_5] [(unsigned short)13] [(unsigned short)13] [i_4] [(short)6] = ((/* implicit */unsigned long long int) var_7);
                        }
                    } 
                } 
                var_22 = ((/* implicit */unsigned int) var_14);
                var_23 = ((/* implicit */_Bool) min((((unsigned int) (short)9987)), (((/* implicit */unsigned int) ((short) var_2)))));
            }
        } 
    } 
}
