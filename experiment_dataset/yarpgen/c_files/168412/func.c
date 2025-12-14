/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168412
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168412 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168412
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
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (unsigned char i_1 = 1; i_1 < 18; i_1 += 4) 
        {
            {
                var_13 = ((/* implicit */unsigned short) max((var_13), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_1 - 1])) ? (((/* implicit */int) arr_3 [(signed char)6] [(signed char)6] [i_1 - 1])) : (((/* implicit */int) (signed char)-1))))) ? (((((/* implicit */int) arr_3 [i_0] [i_1] [i_1 - 1])) + (((/* implicit */int) (signed char)-7)))) : (((((/* implicit */int) arr_3 [i_0] [i_0] [i_1 - 1])) * (((/* implicit */int) arr_3 [i_0] [16LL] [i_1 - 1])))))))));
                var_14 = ((/* implicit */unsigned short) ((((/* implicit */int) var_10)) + (min((((var_9) ? (((/* implicit */int) arr_3 [i_0] [i_1] [i_1])) : (((/* implicit */int) arr_0 [i_0])))), (((/* implicit */int) var_11))))));
                arr_5 [i_0] [(unsigned short)9] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) ((signed char) -3567649864089227878LL)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */int) (unsigned char)228)) + (((/* implicit */int) (unsigned short)38682)))) == (((/* implicit */int) arr_3 [i_0] [i_0] [i_0])))))) : (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)170))) & (-2835503839492461432LL)))));
                arr_6 [(unsigned short)11] [(unsigned short)16] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) ((unsigned short) (+(((/* implicit */int) (signed char)1)))))) ^ (((((/* implicit */_Bool) ((((/* implicit */int) arr_3 [(unsigned short)4] [i_1] [i_1])) / (((/* implicit */int) (unsigned short)57207))))) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) (unsigned char)86)) : (((/* implicit */int) (unsigned short)55441)))) : (((/* implicit */int) ((signed char) (unsigned char)144)))))));
            }
        } 
    } 
    var_15 ^= ((/* implicit */unsigned char) ((long long int) var_7));
    var_16 = ((/* implicit */unsigned short) ((_Bool) ((unsigned short) 2784686404593422838LL)));
}
