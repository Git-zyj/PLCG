/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103213
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103213 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103213
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
    var_13 = var_1;
    var_14 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((var_2) != (var_2))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (((_Bool)0) && (((/* implicit */_Bool) var_1)))))) : (((((/* implicit */_Bool) -1904949411371130594LL)) ? (var_10) : (((/* implicit */unsigned long long int) -1904949411371130594LL))))))) ? (((((int) var_4)) << (((max((var_6), (((/* implicit */unsigned int) var_1)))) - (3555311187U))))) : (((/* implicit */int) ((_Bool) (!(((/* implicit */_Bool) (signed char)11))))))));
    var_15 = ((/* implicit */unsigned int) (-(var_7)));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            {
                arr_5 [i_1] [i_1] = ((((/* implicit */_Bool) max((arr_3 [i_1] [i_1]), (((/* implicit */unsigned long long int) var_1))))) && (((/* implicit */_Bool) min((var_8), (((/* implicit */unsigned int) (unsigned short)10343))))));
                /* LoopNest 2 */
                for (unsigned short i_2 = 2; i_2 < 9; i_2 += 3) 
                {
                    for (int i_3 = 3; i_3 < 9; i_3 += 2) 
                    {
                        {
                            var_16 *= ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((((/* implicit */int) (short)619)) < (((/* implicit */int) (_Bool)1))))), (min((((/* implicit */unsigned int) (((-2147483647 - 1)) - (-246176677)))), (134217696U)))));
                            var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) ((((/* implicit */int) min((((/* implicit */unsigned char) arr_1 [i_2 - 1])), (arr_10 [i_0] [i_3 - 2])))) + (((/* implicit */int) ((_Bool) arr_7 [i_3] [i_3] [i_3 - 2] [(signed char)2]))))))));
                        }
                    } 
                } 
                arr_11 [6] [i_1] = ((/* implicit */_Bool) (~(((var_12) ? (((/* implicit */unsigned int) max((((/* implicit */int) arr_2 [(unsigned short)0])), ((-2147483647 - 1))))) : (var_11)))));
            }
        } 
    } 
}
