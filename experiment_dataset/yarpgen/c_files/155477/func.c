/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155477
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155477 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155477
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
    var_12 = ((/* implicit */unsigned long long int) min((var_12), (((/* implicit */unsigned long long int) var_5))));
    var_13 = ((/* implicit */unsigned short) min((var_13), (((/* implicit */unsigned short) ((((/* implicit */int) var_2)) * ((+(((/* implicit */int) var_1)))))))));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        var_14 = ((/* implicit */signed char) arr_1 [i_0]);
        var_15 = ((/* implicit */unsigned long long int) (+((((-(((/* implicit */int) var_4)))) / (((/* implicit */int) (short)13958))))));
        var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((((/* implicit */int) var_6)) < (((/* implicit */int) (short)13963)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)13963)) ? (((/* implicit */int) var_9)) : (-332584849)))) : (((4294967292U) - (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))))) ? (min((arr_1 [i_0]), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 0LL)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (short)-1))))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (short)-21576)) > (((/* implicit */int) (unsigned short)65535)))))))))));
        /* LoopNest 3 */
        for (unsigned short i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 19; i_2 += 1) 
            {
                for (unsigned short i_3 = 1; i_3 < 16; i_3 += 4) 
                {
                    {
                        var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (short)13958)) & (((/* implicit */int) arr_6 [i_0] [(_Bool)1] [i_3 - 1]))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (short)13963)) ? (((17592181850112LL) * (((/* implicit */long long int) ((/* implicit */int) (short)21576))))) : (((/* implicit */long long int) ((/* implicit */int) ((var_0) && (((/* implicit */_Bool) arr_8 [i_3] [i_1] [(short)12] [i_1] [i_1] [i_0])))))))))));
                        var_18 = max((var_5), (((/* implicit */unsigned short) arr_6 [i_0] [i_1] [i_2])));
                        var_19 = min((((/* implicit */unsigned long long int) (short)-14614)), (6125908755410058360ULL));
                        var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) (_Bool)0))));
                        var_21 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_0))) - (arr_1 [i_1])))) ? ((~(((/* implicit */int) var_1)))) : (((/* implicit */int) arr_7 [i_1] [i_3 + 1] [i_3] [i_2] [i_1] [i_0]))))));
                    }
                } 
            } 
        } 
    }
    var_22 = ((((((/* implicit */_Bool) min((var_7), (var_6)))) ? (((((/* implicit */_Bool) 3103262235U)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-17592181850115LL))) : (((/* implicit */long long int) ((((/* implicit */int) var_8)) + (((/* implicit */int) var_6))))))) * (((/* implicit */long long int) ((/* implicit */int) var_11))));
}
