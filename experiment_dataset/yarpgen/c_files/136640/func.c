/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136640
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136640 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136640
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
    var_13 &= ((/* implicit */short) var_12);
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 14; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    for (signed char i_3 = 0; i_3 < 17; i_3 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (signed char i_4 = 0; i_4 < 17; i_4 += 3) 
                        {
                            arr_12 [i_4] [i_0] [i_2] [i_2] [i_0] [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((unsigned long long int) (signed char)-24)))));
                            arr_13 [i_0] [i_0] = ((/* implicit */signed char) (~(((/* implicit */int) ((_Bool) var_5)))));
                        }
                        var_14 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)37)))))));
                        arr_14 [i_3] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((long long int) ((_Bool) var_3)));
                    }
                    for (signed char i_5 = 0; i_5 < 17; i_5 += 3) 
                    {
                        var_15 -= ((/* implicit */_Bool) (+(((/* implicit */int) ((unsigned char) var_2)))));
                        /* LoopSeq 1 */
                        for (int i_6 = 0; i_6 < 17; i_6 += 3) 
                        {
                            var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) ((signed char) (!(((/* implicit */_Bool) arr_3 [i_1 + 3] [i_1 + 1]))))))));
                            arr_20 [i_0] [i_5] [i_2] [i_1 - 1] [i_0] = ((/* implicit */signed char) (~((~((~(((/* implicit */int) var_7))))))));
                            arr_21 [i_0] [i_1] [i_1] [i_1] [i_6] = ((/* implicit */short) ((signed char) (-(((/* implicit */int) (signed char)12)))));
                            arr_22 [i_0] [i_0] [i_0] [i_5] [i_0] = ((/* implicit */_Bool) ((short) (!((_Bool)1))));
                        }
                        arr_23 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((short) ((short) ((unsigned int) (signed char)-4))));
                        arr_24 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((unsigned long long int) (signed char)87));
                    }
                    for (signed char i_7 = 3; i_7 < 15; i_7 += 3) 
                    {
                        arr_28 [i_2] [i_0] [i_2] [i_7] = ((/* implicit */unsigned long long int) (+(((int) (+(((/* implicit */int) (signed char)31)))))));
                        var_17 ^= ((unsigned long long int) ((long long int) (unsigned short)9325));
                    }
                    var_18 ^= ((/* implicit */long long int) ((int) (+(6732648533003440113LL))));
                    var_19 ^= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~(var_4))))));
                }
            } 
        } 
    } 
}
