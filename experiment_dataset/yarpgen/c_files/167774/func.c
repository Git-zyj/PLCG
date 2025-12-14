/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167774
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167774 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167774
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
    var_20 = ((/* implicit */unsigned short) var_12);
    var_21 |= ((/* implicit */unsigned short) min((((/* implicit */unsigned int) ((unsigned short) (+(((/* implicit */int) var_9)))))), (((min((((/* implicit */unsigned int) (unsigned char)132)), (4078130779U))) % (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255)))))));
    var_22 = ((/* implicit */unsigned long long int) (+(var_4)));
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_0 = 2; i_0 < 21; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            arr_6 [i_0] [i_1] [i_0] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_0 [i_0 + 2] [i_1 - 1]))));
            /* LoopSeq 2 */
            for (int i_2 = 0; i_2 < 23; i_2 += 3) /* same iter space */
            {
                arr_10 [i_0] = ((/* implicit */unsigned int) (+(((/* implicit */int) var_7))));
                arr_11 [i_0] [i_0] [i_2] = ((/* implicit */signed char) 2013265920);
                arr_12 [i_0] [i_1] [i_2] [(_Bool)0] &= ((/* implicit */unsigned int) ((_Bool) ((var_9) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (var_16))));
                arr_13 [i_0] [20ULL] [20ULL] |= ((/* implicit */unsigned short) ((((/* implicit */int) arr_4 [6LL] [i_0 + 2] [i_1 - 1])) <= (((/* implicit */int) (unsigned char)126))));
                var_23 = ((/* implicit */signed char) ((((/* implicit */int) var_17)) != (((/* implicit */int) arr_8 [i_0 - 1] [i_0 - 1] [i_0 - 1]))));
            }
            for (int i_3 = 0; i_3 < 23; i_3 += 3) /* same iter space */
            {
                var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) (~(100829188))))));
                var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_0])) / (((/* implicit */int) var_13))))) ? (((/* implicit */int) var_17)) : (((/* implicit */int) ((((/* implicit */int) arr_0 [i_3] [i_1])) != (((/* implicit */int) (unsigned char)255)))))));
            }
        }
        arr_16 [i_0] = ((/* implicit */long long int) ((unsigned short) 15904814923068967357ULL));
        arr_17 [i_0] = (!(((/* implicit */_Bool) var_15)));
        var_26 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_9 [i_0] [i_0 + 2] [i_0 + 1] [i_0 - 2])) && (((/* implicit */_Bool) var_14))));
    }
    for (unsigned long long int i_4 = 0; i_4 < 16; i_4 += 3) 
    {
        arr_20 [i_4] = ((/* implicit */signed char) ((var_0) ? ((+(((/* implicit */int) min(((unsigned short)6067), (((/* implicit */unsigned short) (unsigned char)21))))))) : (((/* implicit */int) ((short) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) var_18)) : (var_1)))))));
        var_27 = ((/* implicit */unsigned short) (-(min((((/* implicit */unsigned long long int) arr_7 [i_4] [i_4] [i_4])), (var_5)))));
    }
}
