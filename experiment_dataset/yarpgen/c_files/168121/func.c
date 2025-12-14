/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168121
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168121 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168121
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
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (long long int i_1 = 4; i_1 < 21; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 1; i_2 < 23; i_2 += 4) 
                {
                    for (unsigned char i_3 = 0; i_3 < 25; i_3 += 3) 
                    {
                        {
                            arr_10 [i_0] [i_1] = ((/* implicit */short) var_2);
                            arr_11 [21] [i_0] [i_2] [i_0] [i_0] = ((/* implicit */unsigned char) (~(((/* implicit */int) ((((/* implicit */_Bool) arr_9 [i_2 + 2] [i_1 - 3] [i_2 + 2] [i_1 - 4])) || (((/* implicit */_Bool) ((((/* implicit */int) var_13)) >> (((((/* implicit */int) var_13)) - (103)))))))))));
                            var_17 = (-(1192638827639493530ULL));
                        }
                    } 
                } 
                var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) ((((((/* implicit */int) (unsigned short)32256)) ^ (((/* implicit */int) (_Bool)1)))) << (((/* implicit */int) ((min((((/* implicit */unsigned long long int) (short)1023)), (arr_5 [(short)24] [i_1] [i_1]))) != (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_10)) || ((_Bool)1)))))))))))));
                arr_12 [i_0] [i_0] = ((/* implicit */unsigned char) 866973447);
            }
        } 
    } 
    var_19 = ((/* implicit */signed char) var_1);
}
