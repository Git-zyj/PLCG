/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128934
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128934 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128934
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
    for (signed char i_0 = 3; i_0 < 14; i_0 += 2) 
    {
        for (unsigned int i_1 = 2; i_1 < 14; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (long long int i_2 = 2; i_2 < 14; i_2 += 4) 
                {
                    var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)7717)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)5))) : ((-9223372036854775807LL - 1LL))));
                    var_17 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-16)) + (((/* implicit */int) var_8))))) ? (((((/* implicit */_Bool) 4294967274U)) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)24808))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)122))))))));
                }
                var_18 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) (short)-11247)) ? (((/* implicit */long long int) min((((/* implicit */unsigned int) arr_6 [i_0] [i_0 - 2] [i_1] [i_0 - 2])), (3041004782U)))) : (min((-1864757104317647231LL), (((/* implicit */long long int) -1551543470))))))));
                var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) arr_0 [i_1] [i_1])))))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) ((2843247826U) > (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)102))))))));
    var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((signed char) var_4))) ? ((~(var_5))) : (((((/* implicit */_Bool) (~(var_9)))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (short)5634))))) : (((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)13202))) : (580992157U)))))));
    var_22 = ((/* implicit */long long int) var_11);
}
