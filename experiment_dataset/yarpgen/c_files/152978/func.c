/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152978
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152978 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152978
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
    var_17 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) min((((/* implicit */long long int) (unsigned short)39033)), (var_12)))) ? (1216528987U) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))));
    var_18 = ((/* implicit */long long int) var_1);
    var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)57975))) * (2395365635U)))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_16))) : (var_4))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13)))))) || (((/* implicit */_Bool) ((unsigned int) (-(((/* implicit */int) var_9))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 3; i_0 < 17; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            for (long long int i_2 = 2; i_2 < 16; i_2 += 3) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(var_1)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */int) (unsigned short)48140)) : (((/* implicit */int) (unsigned char)7))))) : (((arr_6 [i_2] [i_2] [i_2 + 2] [0U] [11U] [i_2]) / (((/* implicit */long long int) ((/* implicit */int) (unsigned char)7)))))));
                        arr_8 [i_0] [i_1] [11ULL] [i_2] = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_7 [i_2]))));
                        arr_9 [i_2] [i_2] = ((/* implicit */unsigned int) var_12);
                    }
                } 
            } 
        } 
        var_21 = ((/* implicit */_Bool) ((int) var_5));
    }
}
