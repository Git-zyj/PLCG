/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154594
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154594 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154594
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
    var_16 |= ((/* implicit */unsigned short) ((var_1) / ((+(((var_1) / (((/* implicit */int) var_4))))))));
    var_17 += ((/* implicit */unsigned short) var_6);
    /* LoopNest 2 */
    for (unsigned int i_0 = 2; i_0 < 15; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 1; i_2 < 16; i_2 += 4) 
                {
                    for (int i_3 = 0; i_3 < 17; i_3 += 3) 
                    {
                        {
                            arr_10 [i_0] [i_1] [i_3] = ((/* implicit */unsigned char) ((long long int) ((((/* implicit */int) (short)-13230)) <= (((/* implicit */int) ((signed char) arr_0 [(unsigned char)4]))))));
                            var_18 += ((/* implicit */signed char) var_5);
                            var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)16103))) * (((((/* implicit */unsigned int) ((/* implicit */int) var_7))) / (var_9)))))) ? (((((/* implicit */int) arr_0 [i_0 - 2])) - ((+(((/* implicit */int) (unsigned short)1)))))) : ((-(((/* implicit */int) var_7)))))))));
                        }
                    } 
                } 
                var_20 += ((/* implicit */unsigned long long int) (-(((/* implicit */int) (((!(((/* implicit */_Bool) var_2)))) || (((/* implicit */_Bool) ((2113929216) ^ (((/* implicit */int) var_13))))))))));
                var_21 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) (-(((((/* implicit */int) var_7)) - (arr_1 [i_0])))))) - (arr_9 [(unsigned short)6] [13] [i_0])));
            }
        } 
    } 
}
