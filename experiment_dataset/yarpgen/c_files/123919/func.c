/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123919
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123919 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123919
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
    for (unsigned char i_0 = 2; i_0 < 17; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            {
                arr_6 [(unsigned char)14] [(unsigned char)14] [i_1] = ((/* implicit */long long int) ((((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (short)-13914))))) != (((3114197448U) * (((/* implicit */unsigned int) ((/* implicit */int) (short)-13926))))))) ? (((/* implicit */int) var_15)) : (max((((int) var_16)), (((/* implicit */int) (short)-13926))))));
                arr_7 [i_0 + 2] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) min(((short)13922), (((/* implicit */short) var_3))))) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_0 [i_0])))) : (arr_2 [i_1] [i_0 + 3]))))));
                var_17 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (short)13925)) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1] [i_0 + 3] [i_0 + 1]))))) >= (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_0] [i_0 + 2] [(unsigned char)4])) ? (((/* implicit */int) (short)-13914)) : (((/* implicit */int) (short)13925)))))));
                /* LoopNest 3 */
                for (signed char i_2 = 0; i_2 < 20; i_2 += 2) 
                {
                    for (unsigned char i_3 = 2; i_3 < 19; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 20; i_4 += 2) 
                        {
                            {
                                var_18 = ((/* implicit */short) ((min((((((/* implicit */_Bool) 2405870128050181683LL)) ? (((/* implicit */long long int) var_5)) : (arr_10 [i_3 + 1] [i_2] [i_1] [i_0]))), (arr_8 [i_4] [i_3 - 1] [i_4] [i_0 + 3]))) != (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 2405870128050181683LL)) || (((/* implicit */_Bool) (short)13925))))))));
                                arr_15 [i_2] = ((/* implicit */unsigned char) ((unsigned int) min((arr_8 [i_3] [i_3] [i_3 - 1] [i_3]), (((/* implicit */long long int) (_Bool)0)))));
                                arr_16 [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) min((((long long int) var_6)), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_11 [i_3] [i_2] [i_0])) ? (((/* implicit */int) var_16)) : (((/* implicit */int) (short)-13925))))))))));
                                var_19 += ((/* implicit */_Bool) var_16);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_20 -= ((/* implicit */unsigned long long int) 444193455);
}
