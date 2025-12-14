/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154435
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154435 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154435
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
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 4; i_2 < 10; i_2 += 1) 
                {
                    for (int i_3 = 1; i_3 < 11; i_3 += 2) 
                    {
                        {
                            var_14 = ((/* implicit */int) ((short) (unsigned char)96));
                            arr_12 [i_0] [i_1] = ((/* implicit */unsigned short) max((((((/* implicit */int) ((((/* implicit */int) var_12)) != (((/* implicit */int) arr_5 [i_0] [i_2 - 4] [i_0]))))) | (((((/* implicit */_Bool) arr_11 [i_0])) ? (((/* implicit */int) (unsigned short)7397)) : (((/* implicit */int) var_13)))))), (((/* implicit */int) arr_5 [i_3 - 1] [i_3 - 1] [i_0]))));
                        }
                    } 
                } 
                var_15 = ((/* implicit */unsigned short) arr_7 [i_0] [i_0] [i_0] [i_0]);
                var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) ((((/* implicit */_Bool) arr_11 [i_1])) ? (((((((/* implicit */_Bool) (unsigned short)58143)) && (((/* implicit */_Bool) -9093167487401140139LL)))) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0] [i_1] [(unsigned short)0] [i_0]))) >= (arr_6 [i_1])))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_11 [i_1])) || (((/* implicit */_Bool) var_7))))))) : (((int) ((var_11) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)58140))) : (arr_0 [i_0])))))))));
            }
        } 
    } 
    var_17 ^= ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_2))) == (var_1)))) % ((-(((/* implicit */int) var_5)))));
    var_18 += ((/* implicit */signed char) ((((/* implicit */int) max((var_0), ((_Bool)1)))) * (((/* implicit */int) max((var_3), (((/* implicit */short) ((((/* implicit */int) (unsigned short)7397)) > (((/* implicit */int) var_3))))))))));
}
