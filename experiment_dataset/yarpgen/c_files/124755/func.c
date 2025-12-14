/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124755
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124755 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124755
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
    var_15 = ((/* implicit */unsigned short) max((((/* implicit */long long int) (!(((/* implicit */_Bool) var_6))))), (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_13)), (var_0)))) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_0))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 10; i_3 += 2) 
                    {
                        {
                            var_16 -= ((/* implicit */unsigned long long int) arr_1 [i_3]);
                            var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(arr_3 [i_0] [i_2])))) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) ((_Bool) max(((signed char)127), (((/* implicit */signed char) var_13))))))));
                        }
                    } 
                } 
                arr_9 [i_0] [i_1] = ((/* implicit */long long int) (+(((arr_7 [i_1]) ^ (arr_7 [i_1])))));
                arr_10 [i_0] = ((/* implicit */unsigned short) ((((min((((/* implicit */unsigned int) (_Bool)1)), (arr_2 [i_0] [i_0]))) >= (((/* implicit */unsigned int) ((var_8) ^ (((/* implicit */int) (_Bool)1))))))) ? (((long long int) ((((/* implicit */_Bool) var_3)) ? (arr_4 [i_0]) : (((/* implicit */int) arr_1 [i_0]))))) : (((/* implicit */long long int) ((/* implicit */int) min((max(((signed char)106), (((/* implicit */signed char) (_Bool)1)))), (((/* implicit */signed char) arr_1 [i_0]))))))));
            }
        } 
    } 
    var_18 = ((/* implicit */_Bool) var_14);
}
