/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122034
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122034 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122034
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
    var_17 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned short) (((_Bool)1) ? (((/* implicit */int) (short)22180)) : (((/* implicit */int) (unsigned char)255)))))) ? (((((unsigned long long int) (short)22184)) / (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) 17583497754397054390ULL)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)22194)))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 7; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            {
                var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) max((var_1), (((/* implicit */unsigned int) arr_3 [i_0]))))) * (4205437770654157334ULL)))) ? (((/* implicit */int) arr_2 [i_1])) : ((-((-(((/* implicit */int) (short)-4314))))))));
                arr_4 [i_0] [i_0] = ((/* implicit */_Bool) min((((/* implicit */long long int) (unsigned short)50850)), (3153920210037243952LL)));
                arr_5 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) min((var_13), (((/* implicit */short) arr_2 [i_0])))))))) ? (((((/* implicit */_Bool) var_13)) ? ((-(((/* implicit */int) (_Bool)1)))) : (var_12))) : (((/* implicit */int) ((_Bool) 17583497754397054362ULL)))));
                /* LoopNest 3 */
                for (unsigned char i_2 = 0; i_2 < 10; i_2 += 4) 
                {
                    for (long long int i_3 = 3; i_3 < 9; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 10; i_4 += 3) 
                        {
                            {
                                var_19 -= ((/* implicit */long long int) arr_7 [i_4] [i_3] [(short)5]);
                                var_20 = ((/* implicit */long long int) (+(((int) -3153920210037243953LL))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
