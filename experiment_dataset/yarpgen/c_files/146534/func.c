/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146534
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146534 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146534
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
    var_12 = ((/* implicit */_Bool) max((var_8), (((((/* implicit */_Bool) var_7)) ? (var_3) : ((((_Bool)1) ? (3891544304U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))));
    var_13 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_7))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            for (unsigned char i_2 = 1; i_2 < 15; i_2 += 3) 
            {
                {
                    arr_8 [i_0] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned char) 4294967295U))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 3891544304U)) ? (3891544296U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) : ((((_Bool)1) ? (-1786104376232840162LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-10707)))))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 18; i_3 += 1) 
                    {
                        for (long long int i_4 = 4; i_4 < 17; i_4 += 3) 
                        {
                            {
                                var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((247944136U), (((/* implicit */unsigned int) (_Bool)0))))) ? (((unsigned int) -214175817)) : (403422991U)));
                                var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) ((unsigned char) -1969722997114124300LL)))));
                                var_16 = ((/* implicit */int) ((((/* implicit */_Bool) max((-3758208236033389037LL), (((/* implicit */long long int) -1))))) ? (((/* implicit */unsigned int) min((2147483647), ((-(((/* implicit */int) (_Bool)1))))))) : ((-(2203097225U)))));
                                arr_15 [i_0] [10LL] [(_Bool)1] [1LL] [1LL] [i_3] [i_4] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) -9039183008652339154LL)) ? (((/* implicit */unsigned long long int) -247759537)) : (7740946886277501800ULL))), (((/* implicit */unsigned long long int) max((9039183008652339140LL), (((/* implicit */long long int) 3891544288U)))))));
                                var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((int) 3891544299U))) / (max((((/* implicit */long long int) (_Bool)1)), (3758208236033389047LL)))))) && (((/* implicit */_Bool) min((((((/* implicit */_Bool) 1557494917U)) ? (((/* implicit */long long int) 1073741824U)) : (-7579197286414829297LL))), (((/* implicit */long long int) ((unsigned int) -2569600321829753639LL)))))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
