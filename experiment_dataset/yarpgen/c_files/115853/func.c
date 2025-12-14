/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115853
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115853 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115853
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 12; i_1 += 4) 
        {
            {
                var_20 = ((/* implicit */signed char) ((((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) var_19)) ? (((/* implicit */long long int) var_3)) : (var_0))))) > (((/* implicit */int) ((_Bool) ((unsigned char) var_5))))));
                arr_4 [i_1] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((unsigned int) var_19))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_18))))) : ((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_9))))) % (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned long long int) var_7))) || (var_18)))))));
                arr_5 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_9)))) ^ (((var_5) << (((var_12) - (13445937968772007922ULL)))))))) ? (((((/* implicit */_Bool) (+(var_2)))) ? (((long long int) var_2)) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_16)) ? (var_9) : (((/* implicit */unsigned int) var_3))))))) : (((/* implicit */long long int) ((((((/* implicit */_Bool) var_6)) || (var_18))) ? ((-(((/* implicit */int) var_14)))) : (((/* implicit */int) ((_Bool) var_13))))))));
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 2; i_4 < 12; i_4 += 3) 
                        {
                            {
                                arr_16 [i_0] [i_0] [i_1] [i_3] [i_3] [i_2] [i_4] = ((/* implicit */unsigned char) ((_Bool) var_2));
                                var_21 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) var_2))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (((unsigned long long int) var_18)))))));
                                var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) var_5))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? ((+(var_0))) : (((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) var_14))))) >> (((/* implicit */int) (!(((/* implicit */_Bool) var_4))))))))));
    var_24 &= ((/* implicit */unsigned long long int) ((signed char) ((unsigned short) ((var_17) >> (((var_5) - (1143862625589972662ULL)))))));
    var_25 ^= ((/* implicit */unsigned int) ((short) (-(((var_18) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) var_18))))))));
}
