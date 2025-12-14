/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160482
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160482 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160482
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
    var_13 = ((/* implicit */unsigned short) var_6);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            {
                var_14 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_0), (((/* implicit */long long int) (unsigned short)17))))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (9007197107257344LL))))))));
                var_15 *= ((/* implicit */signed char) ((short) ((((var_9) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [4LL] [i_1]))))));
                var_16 &= (!(((/* implicit */_Bool) (signed char)2)));
                /* LoopNest 3 */
                for (unsigned char i_2 = 3; i_2 < 11; i_2 += 3) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 14; i_4 += 3) 
                        {
                            {
                                var_17 = ((/* implicit */short) ((arr_10 [i_2] [i_3]) != (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_1))))))));
                                arr_12 [i_0] [2LL] [i_0] [i_3] [i_0] [2LL] [2LL] = ((/* implicit */signed char) ((((/* implicit */_Bool) 9007199254478848LL)) || (((((/* implicit */_Bool) ((signed char) var_4))) || (((/* implicit */_Bool) var_5))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_18 = ((/* implicit */short) ((_Bool) (signed char)(-127 - 1)));
    var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((short) ((unsigned short) var_3)))), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) & (((var_3) & (((/* implicit */unsigned long long int) var_7)))))))))));
    var_20 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned char)248))));
}
