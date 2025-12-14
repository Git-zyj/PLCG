/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160982
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160982 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160982
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
    var_18 = ((/* implicit */_Bool) min((((/* implicit */short) (_Bool)1)), ((short)-19939)));
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) ((_Bool) max((max((((/* implicit */long long int) var_10)), (65535LL))), (((/* implicit */long long int) ((unsigned int) (unsigned char)173)))))))));
                arr_6 [i_0] [i_0] [i_1] = ((/* implicit */signed char) min((((/* implicit */unsigned int) max(((-(((/* implicit */int) var_3)))), (min((arr_4 [i_0] [i_0] [i_0]), (((/* implicit */int) arr_3 [i_0] [i_1] [i_0 - 1]))))))), (min((max((arr_5 [i_1]), (((/* implicit */unsigned int) var_16)))), (((/* implicit */unsigned int) min((var_14), ((short)-18332))))))));
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 16; i_2 += 3) 
                {
                    for (short i_3 = 0; i_3 < 16; i_3 += 2) 
                    {
                        {
                            var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) min(((short)2653), (((/* implicit */short) (_Bool)0)))))));
                            arr_12 [i_1] [i_2] [i_1] = ((/* implicit */unsigned short) max((((/* implicit */int) ((unsigned short) ((long long int) arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))), (min((((/* implicit */int) (!(((/* implicit */_Bool) var_15))))), ((~(((/* implicit */int) var_11))))))));
                            var_21 = ((short) (short)18339);
                            var_22 = ((/* implicit */long long int) (+(((/* implicit */int) max((((/* implicit */unsigned short) max((arr_3 [(short)8] [i_1] [i_1]), (((/* implicit */short) arr_0 [i_2]))))), (min((((/* implicit */unsigned short) (short)32745)), ((unsigned short)30638))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_23 = ((/* implicit */signed char) min((((unsigned short) max((((/* implicit */unsigned char) var_11)), (var_17)))), (((/* implicit */unsigned short) ((_Bool) min((var_9), (((/* implicit */unsigned short) var_15))))))));
    var_24 = ((/* implicit */unsigned char) max((((/* implicit */unsigned short) (unsigned char)88)), ((unsigned short)58885)));
}
