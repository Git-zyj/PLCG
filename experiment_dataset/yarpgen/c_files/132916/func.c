/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132916
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132916 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132916
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
    var_14 = min((((/* implicit */unsigned int) (short)-3230)), (min((((/* implicit */unsigned int) (!((_Bool)1)))), (min((var_0), (((/* implicit */unsigned int) var_9)))))));
    var_15 = ((/* implicit */_Bool) (+(var_2)));
    var_16 = ((/* implicit */_Bool) ((((((/* implicit */int) (short)-29702)) + (2147483647))) << (((((var_5) + (1013454504))) - (8)))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)25868))) % (var_3)))));
        arr_3 [i_0] = ((/* implicit */short) var_0);
        arr_4 [i_0] [i_0] = ((/* implicit */short) arr_1 [i_0]);
    }
    for (long long int i_1 = 0; i_1 < 15; i_1 += 4) 
    {
        /* LoopNest 2 */
        for (long long int i_2 = 0; i_2 < 15; i_2 += 1) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                {
                    var_17 ^= ((/* implicit */signed char) (+(min((((/* implicit */int) (signed char)-13)), (((((/* implicit */_Bool) (unsigned char)3)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_7))))))));
                    arr_13 [i_1] [i_2] [i_3] = ((/* implicit */unsigned short) -4266292690238088466LL);
                    var_18 = ((/* implicit */short) (-(((((/* implicit */_Bool) arr_6 [i_2])) ? (((-4019367665435254545LL) - (((/* implicit */long long int) ((/* implicit */int) var_10))))) : (((/* implicit */long long int) ((/* implicit */int) ((short) arr_10 [i_1] [i_2] [i_2] [i_3]))))))));
                    var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned char)157)))))));
                }
            } 
        } 
        arr_14 [i_1] = ((/* implicit */short) min((((/* implicit */unsigned long long int) min((arr_7 [i_1]), (arr_7 [i_1])))), (((unsigned long long int) ((5588242862292599542ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (short)25665))))))));
    }
}
