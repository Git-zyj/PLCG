/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159215
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159215 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159215
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
    var_12 = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) 1708183635))))) - (((/* implicit */int) var_11))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            {
                var_13 = ((/* implicit */int) (signed char)-3);
                arr_5 [i_1] = ((/* implicit */int) (!(((((/* implicit */_Bool) arr_2 [i_0] [i_1] [i_1])) && (((/* implicit */_Bool) ((unsigned short) (short)-4762)))))));
                arr_6 [i_1] [i_1] = ((/* implicit */signed char) (-(min((((/* implicit */long long int) var_9)), (((((/* implicit */long long int) arr_2 [(signed char)13] [i_0] [i_1])) + (-6328134101364533940LL)))))));
                arr_7 [i_0] [12] [i_1] = ((/* implicit */unsigned short) ((((int) ((var_5) != (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [i_1])))))) | ((-((-(((/* implicit */int) var_8))))))));
            }
        } 
    } 
    var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) ((1708183635) << (((((((/* implicit */int) (short)-32766)) + (32777))) - (11))))))) ? (((/* implicit */int) var_8)) : ((~(((/* implicit */int) var_1))))));
}
