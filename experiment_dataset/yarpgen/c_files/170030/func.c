/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170030
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170030 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170030
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
    var_10 = ((((/* implicit */_Bool) -1102697743)) && (((/* implicit */_Bool) (short)-21075)));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 3; i_0 < 8; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 3; i_2 < 11; i_2 += 4) 
                {
                    for (unsigned short i_3 = 1; i_3 < 11; i_3 += 4) 
                    {
                        for (long long int i_4 = 0; i_4 < 12; i_4 += 2) 
                        {
                            {
                                var_11 = ((/* implicit */short) min((var_11), (((/* implicit */short) (-((+(((/* implicit */int) (short)-21068)))))))));
                                var_12 = ((/* implicit */unsigned char) arr_1 [(unsigned short)8] [i_1]);
                                var_13 = ((/* implicit */signed char) ((((/* implicit */int) (signed char)37)) >> (((((((/* implicit */int) (unsigned char)213)) >> (((var_6) % (-1))))) - (213)))));
                                arr_11 [i_0] [i_1] [i_1] [i_4] = ((/* implicit */long long int) ((unsigned short) (signed char)35));
                            }
                        } 
                    } 
                } 
                var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((int) (unsigned char)220))) ? (((/* implicit */long long int) arr_6 [i_0 + 4] [i_0])) : (9214364837600034816LL)));
                arr_12 [i_0] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) ((signed char) (~(((/* implicit */int) (short)3840)))))) : ((-(((/* implicit */int) (unsigned char)42))))));
            }
        } 
    } 
    var_15 -= ((/* implicit */short) min((((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_5))))) >= (var_1)))), (var_6)));
    var_16 = ((/* implicit */unsigned int) ((unsigned short) var_0));
}
