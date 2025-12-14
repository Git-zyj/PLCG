/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180457
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180457 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180457
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
    var_13 = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_7))))) ? (var_12) : (((/* implicit */int) var_11))))));
    var_14 = ((/* implicit */unsigned long long int) max((var_14), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)242)))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 14; i_1 += 1) 
        {
            {
                var_15 ^= ((/* implicit */int) (~((+(var_9)))));
                arr_6 [i_0] [i_1] [i_1 + 1] = ((/* implicit */unsigned long long int) max((var_4), (((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_1] [i_0]))))) < (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [(unsigned char)10]))))))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (int i_2 = 4; i_2 < 9; i_2 += 1) 
    {
        for (unsigned long long int i_3 = 0; i_3 < 11; i_3 += 4) 
        {
            for (unsigned char i_4 = 0; i_4 < 11; i_4 += 3) 
            {
                {
                    var_16 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)42)) ? (((/* implicit */int) (unsigned char)42)) : (((/* implicit */int) (unsigned char)42))));
                    var_17 = ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) arr_9 [i_2 - 3])) : ((+(((/* implicit */int) (_Bool)1)))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 1; i_5 < 9; i_5 += 1) 
                    {
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            {
                                arr_20 [10LL] [10LL] [i_3] [i_4] [(_Bool)1] [6] = ((/* implicit */unsigned short) (((+(((/* implicit */int) ((_Bool) var_2))))) / (((((/* implicit */_Bool) ((unsigned int) arr_5 [i_3] [i_4]))) ? ((~(((/* implicit */int) (unsigned char)13)))) : ((+(((/* implicit */int) var_5))))))));
                                var_18 |= ((/* implicit */signed char) (+((+(((/* implicit */int) ((((/* implicit */int) (unsigned short)4222)) >= (((/* implicit */int) (_Bool)1)))))))));
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */int) max((arr_4 [i_2 + 2] [i_3]), (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (unsigned char)121)))))));
                }
            } 
        } 
    } 
}
