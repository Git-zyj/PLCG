/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131619
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131619 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131619
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
    var_12 = ((/* implicit */unsigned int) max((var_12), (((/* implicit */unsigned int) var_5))));
    var_13 = ((/* implicit */_Bool) ((long long int) var_7));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            {
                var_14 ^= ((/* implicit */unsigned short) (+(((/* implicit */int) ((max((-7474525063234723060LL), (((/* implicit */long long int) arr_5 [(short)1] [(short)1] [(unsigned short)1])))) == (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))))))));
                var_15 *= ((/* implicit */int) ((unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1]))) : (7474525063234723059LL)))))));
                var_16 ^= ((/* implicit */long long int) (+(((/* implicit */int) ((short) (unsigned short)13634)))));
                /* LoopSeq 3 */
                /* vectorizable */
                for (int i_2 = 4; i_2 < 15; i_2 += 4) 
                {
                    arr_9 [i_0] [i_1] [6LL] [i_1] = (_Bool)1;
                    arr_10 [i_0] = ((/* implicit */unsigned short) (((-(5114904602961132612ULL))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (short)-2831)) > (((/* implicit */int) (unsigned short)41306))))))));
                }
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
                {
                    arr_14 [9U] [i_1] [9U] = ((/* implicit */unsigned int) ((((/* implicit */long long int) var_0)) > (((((/* implicit */long long int) (+(((/* implicit */int) var_6))))) & ((+(7474525063234723059LL)))))));
                    arr_15 [i_3] [i_1] [(unsigned short)5] [10] = ((/* implicit */unsigned short) (+(((/* implicit */int) ((short) ((((/* implicit */unsigned int) ((/* implicit */int) (short)2842))) - (var_8)))))));
                    var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) ((((/* implicit */unsigned int) (+(((((/* implicit */int) (unsigned short)63743)) + (((/* implicit */int) var_4))))))) >= (632955967U))))));
                }
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
                {
                    arr_18 [i_0] [i_4] = ((/* implicit */short) 691799637U);
                    arr_19 [i_0] [i_0] &= ((arr_12 [i_0] [i_0] [i_0] [0U]) << (((/* implicit */int) (!(((/* implicit */_Bool) (((_Bool)1) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) (short)-18747))))))))));
                    var_18 ^= ((/* implicit */long long int) (+((-((+(var_9)))))));
                    arr_20 [i_0] [i_1] [i_4] [i_4] = arr_8 [i_0] [i_0] [i_0];
                }
                arr_21 [i_0] [i_1] [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_3 [(_Bool)1]))) - (604104447060314772LL)))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_2))))) : (((((/* implicit */unsigned long long int) var_0)) & (var_5))))))));
            }
        } 
    } 
    var_19 &= ((/* implicit */short) min((((/* implicit */unsigned long long int) (-(max((6587720705022521142LL), (((/* implicit */long long int) var_7))))))), ((-(var_5)))));
}
