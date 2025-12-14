/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151141
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151141 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151141
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
    var_18 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+(((((/* implicit */_Bool) (unsigned short)60449)) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (unsigned char i_1 = 1; i_1 < 8; i_1 += 2) 
        {
            {
                var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) ((unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_2 [i_0] [i_0] [i_0]))))) ? (((arr_1 [i_0]) | (((/* implicit */int) arr_2 [i_0] [i_0] [i_0])))) : ((~(((/* implicit */int) var_15))))))))));
                arr_4 [i_0] [i_1 + 2] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)25342))))) ? (((((/* implicit */_Bool) (unsigned short)240)) ? (((/* implicit */int) (short)25342)) : (((/* implicit */int) (short)25342)))) : ((~(((/* implicit */int) (short)25333))))))) + (((((/* implicit */_Bool) ((long long int) (short)25372))) ? (((/* implicit */long long int) arr_1 [i_1 - 1])) : (((((/* implicit */_Bool) (signed char)56)) ? (-6820687149376204708LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)114)))))))));
                var_20 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_5))) | (min((((/* implicit */long long int) ((signed char) (short)32765))), (((((/* implicit */_Bool) var_15)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)49152))) : (arr_0 [i_0] [i_1])))))));
                var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-25333)) ? (((/* implicit */int) ((((/* implicit */_Bool) (short)25333)) && (((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_0]))))) : (max((((/* implicit */int) ((((/* implicit */_Bool) (short)-25359)) && (((/* implicit */_Bool) arr_1 [i_0]))))), (((((/* implicit */_Bool) 7257611504028525084ULL)) ? (((/* implicit */int) (unsigned short)65296)) : (((/* implicit */int) (unsigned short)65295))))))));
            }
        } 
    } 
    var_22 = max((((/* implicit */int) (!(((/* implicit */_Bool) min(((unsigned short)65276), (((/* implicit */unsigned short) (_Bool)1)))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-12)))))) ? (((/* implicit */int) var_15)) : (((/* implicit */int) (!(((/* implicit */_Bool) (short)14180))))))));
}
