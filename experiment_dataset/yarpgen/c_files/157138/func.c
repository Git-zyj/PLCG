/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157138
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157138 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157138
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
    /* LoopSeq 2 */
    for (unsigned char i_0 = 1; i_0 < 17; i_0 += 2) 
    {
        var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0 + 1] [i_0 + 1])) ? ((-(((/* implicit */int) var_5)))) : (((/* implicit */int) ((((((/* implicit */_Bool) (unsigned short)9697)) ? (arr_0 [i_0] [i_0 - 1]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0))))) > (arr_0 [i_0 - 1] [i_0 - 1]))))));
        /* LoopNest 2 */
        for (unsigned int i_1 = 3; i_1 < 17; i_1 += 2) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_8 [i_2] [i_1 - 3] [i_2] [i_2] = ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) < (217201510169839582ULL))))) % ((+(arr_6 [i_2] [i_1 - 2] [i_0] [i_0]))));
                    var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 18229542563539712034ULL)) ? (((/* implicit */unsigned long long int) min((-1349190130), (((/* implicit */int) (_Bool)1))))) : (min((18229542563539712034ULL), (((/* implicit */unsigned long long int) var_17))))))) ? ((+(((/* implicit */int) (!(((/* implicit */_Bool) var_11))))))) : (((((/* implicit */int) ((unsigned char) var_8))) >> (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65511))) >= (2460137228U))))))));
                }
            } 
        } 
    }
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        arr_11 [i_3] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) var_9)) || ((_Bool)0)));
        arr_12 [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)105)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) (-(((/* implicit */int) var_10))))))) : (min((((unsigned int) 9223372036854775793LL)), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned char)206)))))))));
        var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */unsigned int) arr_9 [i_3])) : (((((/* implicit */_Bool) min((((/* implicit */int) (unsigned short)53135)), (-1295068051)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)198))) : (1834830072U)))));
    }
    var_21 = ((/* implicit */short) (-(max((var_4), (((/* implicit */unsigned int) var_5))))));
    var_22 = ((/* implicit */unsigned int) var_16);
}
