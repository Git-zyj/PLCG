/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10769
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10769 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10769
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
    var_16 *= ((/* implicit */signed char) (unsigned char)81);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            {
                var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) (-(((/* implicit */int) ((((/* implicit */int) arr_2 [i_0])) > (((/* implicit */int) arr_2 [i_1]))))))))));
                /* LoopSeq 1 */
                for (signed char i_2 = 0; i_2 < 25; i_2 += 1) 
                {
                    var_18 = ((/* implicit */int) max((((/* implicit */signed char) ((_Bool) ((int) arr_6 [i_2] [i_0] [i_0] [i_0])))), (((signed char) arr_5 [i_2] [i_1]))));
                    arr_8 [i_0] [i_2] [i_2] [i_2] = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_2])) ? (((/* implicit */int) arr_7 [i_0] [i_0] [i_2])) : (((/* implicit */int) arr_7 [i_0] [i_1] [i_1])))) ^ (((/* implicit */int) max((arr_7 [i_0] [13LL] [i_2]), ((short)4094))))));
                    var_19 = ((unsigned char) ((_Bool) arr_7 [i_1] [i_1] [i_2]));
                    arr_9 [i_0] [i_2] [i_0] = ((/* implicit */short) ((max((((/* implicit */int) var_2)), (((((/* implicit */int) var_4)) >> (((((/* implicit */int) var_9)) - (88))))))) | (((/* implicit */int) var_15))));
                }
                var_20 &= ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) (unsigned char)196)) : (((/* implicit */int) var_4)))) : (((/* implicit */int) (_Bool)0))))) : (-4553347184869460443LL)));
                var_21 -= ((/* implicit */signed char) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_0)))) ? (((((var_7) + (9223372036854775807LL))) >> (((((/* implicit */int) var_12)) - (64437))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_1]))))))))) ? (((/* implicit */int) (unsigned char)200)) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_1] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) : (7430981063111163495LL)))))))));
                var_22 -= ((/* implicit */unsigned short) (((+(((/* implicit */int) var_14)))) == (((/* implicit */int) ((signed char) ((arr_0 [i_0] [i_0]) & (((/* implicit */long long int) ((/* implicit */int) (signed char)-30)))))))));
            }
        } 
    } 
}
