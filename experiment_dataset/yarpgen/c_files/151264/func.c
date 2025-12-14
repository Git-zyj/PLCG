/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151264
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151264 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151264
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
    var_11 &= var_2;
    var_12 *= ((/* implicit */int) min((min((max((((/* implicit */unsigned long long int) var_5)), (949153670730879725ULL))), (((/* implicit */unsigned long long int) ((var_8) <= (((/* implicit */unsigned int) 293338048))))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((short) 9223372036854775804LL))))))));
    var_13 = ((/* implicit */unsigned char) var_0);
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 11; i_2 += 2) 
            {
                {
                    var_14 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (min((((/* implicit */int) var_6)), (-513550103))) : (min((var_7), (((/* implicit */int) arr_8 [i_0]))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (var_5) : (((/* implicit */int) arr_4 [i_2] [i_1 - 1] [i_0]))))) ? (max((var_4), (((/* implicit */int) arr_6 [i_0] [i_0] [i_0])))) : (((/* implicit */int) arr_8 [i_0])))) : (((/* implicit */int) max((arr_2 [i_1 - 1]), (arr_2 [i_1 - 1]))))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 11; i_4 += 2) 
                        {
                            {
                                var_15 *= var_8;
                                arr_16 [i_3] [(short)9] [(short)9] = ((/* implicit */unsigned char) arr_4 [i_0] [i_0] [i_0]);
                                arr_17 [i_3] [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)10330)) || (((/* implicit */_Bool) (short)10305))));
                            }
                        } 
                    } 
                    arr_18 [i_0] [i_1] [i_1] = ((/* implicit */long long int) (~(min((((/* implicit */unsigned long long int) ((short) var_5))), (((unsigned long long int) var_3))))));
                }
            } 
        } 
    } 
}
