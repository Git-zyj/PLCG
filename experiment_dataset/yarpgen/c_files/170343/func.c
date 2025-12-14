/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170343
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170343 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170343
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
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                arr_5 [i_1] [i_1] [i_0] = ((((/* implicit */_Bool) 99944392279448585LL)) && ((_Bool)1));
                var_11 ^= ((/* implicit */signed char) min((((((/* implicit */_Bool) ((((/* implicit */int) var_2)) - (((/* implicit */int) var_7))))) ? (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned char) arr_4 [i_0])), (var_2))))) : (((16777208LL) - (((/* implicit */long long int) ((/* implicit */int) (short)8128))))))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_1 + 1])) && (var_4))))));
                /* LoopNest 3 */
                for (unsigned char i_2 = 0; i_2 < 22; i_2 += 4) 
                {
                    for (int i_3 = 0; i_3 < 22; i_3 += 2) 
                    {
                        for (int i_4 = 0; i_4 < 22; i_4 += 2) 
                        {
                            {
                                var_12 ^= arr_6 [i_2] [i_1];
                                arr_16 [i_4] [i_3] [i_3] [i_3] [i_2] [i_1] [i_0] = ((/* implicit */unsigned short) (short)8150);
                                var_13 = ((/* implicit */unsigned short) (short)-8151);
                                arr_17 [i_3] = ((((/* implicit */_Bool) ((unsigned long long int) arr_1 [i_1]))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-20033)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)8161))) : (826093779U)))) : (arr_11 [i_3] [i_1] [i_0]));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned long long int) max((var_14), (((/* implicit */unsigned long long int) ((((((((/* implicit */int) var_9)) / (((/* implicit */int) var_9)))) << (((/* implicit */int) ((((/* implicit */_Bool) 4294967287U)) && (((/* implicit */_Bool) var_3))))))) & (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_4)) >> (((/* implicit */int) (_Bool)1)))))))))))));
}
