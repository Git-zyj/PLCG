/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135561
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135561 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135561
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
    var_11 -= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) min(((_Bool)1), (var_8)))) / (((int) var_10))))) ? (((((/* implicit */_Bool) (-(376723123U)))) ? (max((((/* implicit */unsigned int) (signed char)-110)), (var_1))) : (((/* implicit */unsigned int) ((/* implicit */int) var_10))))) : (4294967295U)));
    var_12 &= ((((/* implicit */unsigned int) ((/* implicit */int) (short)-14194))) > (((((3918244173U) | (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) - (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) >> (((/* implicit */int) var_8))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            {
                var_13 = ((/* implicit */int) max((var_13), (((((/* implicit */_Bool) 2802144964U)) ? (((/* implicit */int) (unsigned short)65535)) : (arr_4 [(unsigned char)0] [i_1])))));
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 12; i_2 += 1) 
                {
                    for (short i_3 = 0; i_3 < 14; i_3 += 2) 
                    {
                        {
                            var_14 = ((/* implicit */signed char) arr_10 [i_0] [i_0]);
                            var_15 = ((((((/* implicit */_Bool) (signed char)119)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (max((((/* implicit */unsigned long long int) (_Bool)1)), (var_2))))) > (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))));
                            var_16 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_0)) ? ((~(((((/* implicit */_Bool) 13U)) ? (((/* implicit */int) (signed char)-69)) : (((/* implicit */int) (_Bool)1)))))) : (((/* implicit */int) var_6))));
                            var_17 = ((/* implicit */_Bool) 376723123U);
                        }
                    } 
                } 
                var_18 = ((/* implicit */unsigned short) ((short) min((((/* implicit */unsigned int) (unsigned char)255)), ((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-120))) : (770538929U))))));
            }
        } 
    } 
}
