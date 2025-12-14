/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152793
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152793 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152793
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
    var_17 = ((/* implicit */unsigned short) var_10);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 19; i_1 += 1) 
        {
            {
                var_18 = ((/* implicit */unsigned char) ((((/* implicit */int) ((short) (unsigned char)221))) ^ (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)24)) ? (arr_5 [i_0] [i_1] [i_1 + 2]) : (arr_0 [(unsigned char)11])))) ? (161959881) : (((/* implicit */int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) var_10)))))))));
                /* LoopSeq 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    var_19 += ((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned char)239))));
                    var_20 = ((/* implicit */unsigned char) (+(((/* implicit */int) ((unsigned short) (~(var_9)))))));
                }
                /* vectorizable */
                for (unsigned char i_3 = 3; i_3 < 20; i_3 += 2) 
                {
                    arr_13 [i_1] [i_1] = ((/* implicit */signed char) ((unsigned int) (unsigned char)196));
                    var_21 ^= (-(((/* implicit */int) (unsigned char)31)));
                }
                arr_14 [i_1] [i_0] [i_1] = ((/* implicit */long long int) min((((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)211)), (arr_11 [i_1 + 1] [i_1] [i_1 - 1])))), (((((/* implicit */_Bool) arr_11 [i_1 - 1] [i_1] [i_1 + 1])) ? (((/* implicit */int) arr_11 [i_1 - 1] [i_1] [i_1 + 1])) : (161959883)))));
                arr_15 [(signed char)9] [i_0] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_2 [(_Bool)1] [i_1])) % (((/* implicit */int) ((_Bool) (unsigned char)24)))));
                var_22 *= ((/* implicit */signed char) (+((+(((/* implicit */int) arr_12 [i_1 + 2]))))));
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned char) var_11);
}
