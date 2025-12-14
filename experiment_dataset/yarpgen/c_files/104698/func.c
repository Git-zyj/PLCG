/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104698
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104698 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104698
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
    for (unsigned short i_0 = 3; i_0 < 8; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 4; i_1 < 10; i_1 += 2) 
        {
            {
                var_19 = ((/* implicit */unsigned char) (((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (17912520484279959019ULL))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0 + 1])) && (var_10)))))));
                var_20 = ((/* implicit */unsigned short) (~(((/* implicit */int) (short)-16386))));
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 11; i_2 += 1) 
                {
                    for (unsigned int i_3 = 2; i_3 < 10; i_3 += 3) 
                    {
                        {
                            var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) ((((/* implicit */_Bool) max(((short)-16402), (((/* implicit */short) (unsigned char)229))))) ? (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) (unsigned char)173)) ? (((/* implicit */int) (unsigned short)38750)) : (((/* implicit */int) var_11)))), (((/* implicit */int) max((var_9), (((/* implicit */unsigned char) var_2)))))))) : (var_4))))));
                            var_22 = ((/* implicit */unsigned short) arr_8 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_3]);
                        }
                    } 
                } 
                var_23 = ((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)38051)))))));
            }
        } 
    } 
    var_24 = ((/* implicit */long long int) max((var_24), (((/* implicit */long long int) var_0))));
    var_25 = ((/* implicit */short) (+(((/* implicit */int) var_5))));
    var_26 &= ((/* implicit */short) ((((/* implicit */_Bool) var_4)) ? (max((((/* implicit */int) var_10)), ((+(((/* implicit */int) var_2)))))) : (((/* implicit */int) ((((/* implicit */_Bool) ((unsigned long long int) var_2))) || (((/* implicit */_Bool) ((long long int) (short)16385))))))));
}
