/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131363
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131363 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131363
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 2; i_0 < 11; i_0 += 4) 
    {
        for (unsigned char i_1 = 1; i_1 < 12; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 13; i_2 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned char i_3 = 1; i_3 < 12; i_3 += 3) 
                    {
                        var_10 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (var_2))) >= (((/* implicit */unsigned long long int) ((arr_9 [4] [i_1] [4] [i_3 + 1]) / (((/* implicit */long long int) var_1)))))));
                        var_11 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)20)) ^ (((/* implicit */int) (unsigned char)20))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (((var_1) >> (((((/* implicit */int) (unsigned char)37)) - (8)))))));
                    }
                    var_12 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 8666613108703998559LL)) ? (((/* implicit */int) arr_3 [i_2] [i_1])) : (((/* implicit */int) (unsigned char)20))))) || (((/* implicit */_Bool) var_0))))), (4435345228969114841ULL)));
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */short) min((var_13), (((/* implicit */short) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_5))))) ? (((((/* implicit */_Bool) -344497525)) ? (((/* implicit */int) (unsigned char)200)) : (((/* implicit */int) (unsigned short)61766)))) : (((/* implicit */int) ((((/* implicit */int) var_7)) < (((/* implicit */int) (_Bool)1)))))))) : ((+(max((var_1), (((/* implicit */unsigned int) var_5)))))))))));
    var_14 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_5))))) - (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned short)61771)) : (-1712659361)))) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))));
}
