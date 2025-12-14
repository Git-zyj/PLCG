/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11028
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11028 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11028
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
    var_16 = ((/* implicit */signed char) var_2);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */int) ((((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) ((((/* implicit */int) arr_2 [i_0])) != (((/* implicit */int) arr_2 [i_0]))))))) != (((((/* implicit */int) arr_5 [i_0] [i_0])) * (((/* implicit */int) ((((/* implicit */int) var_3)) >= (((/* implicit */int) arr_2 [i_0])))))))));
                /* LoopSeq 1 */
                for (unsigned char i_2 = 2; i_2 < 20; i_2 += 1) 
                {
                    var_18 = ((/* implicit */long long int) ((((unsigned int) ((((/* implicit */_Bool) var_11)) ? (-472555720644877256LL) : (((/* implicit */long long int) ((/* implicit */int) var_15)))))) | (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) max((var_6), (((/* implicit */unsigned long long int) var_11)))))))));
                    arr_10 [i_0] [12] = ((/* implicit */unsigned short) ((((((/* implicit */int) var_12)) < (((/* implicit */int) (signed char)114)))) ? (((/* implicit */int) arr_5 [(unsigned char)9] [i_2 - 2])) : (((/* implicit */int) ((((/* implicit */long long int) 255)) > (arr_7 [i_2 + 2] [i_0] [i_2 + 1] [i_2 - 1]))))));
                    var_19 = ((((/* implicit */_Bool) 439171704U)) ? (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) arr_7 [(unsigned char)4] [i_0] [(unsigned char)6] [i_2 + 2])) ? (2305838611167182848ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_1]))))))) : (((/* implicit */int) arr_4 [(unsigned char)21] [i_1])));
                    arr_11 [i_0] = (i_0 % 2 == 0) ? (((/* implicit */_Bool) min((((/* implicit */int) var_2)), (((((var_5) + (2147483647))) << (((arr_7 [(_Bool)1] [i_0] [i_2 + 1] [i_1]) - (8384130709857380868LL)))))))) : (((/* implicit */_Bool) min((((/* implicit */int) var_2)), (((((var_5) + (2147483647))) << (((((arr_7 [(_Bool)1] [i_0] [i_2 + 1] [i_1]) + (8384130709857380868LL))) - (3566217288340423157LL))))))));
                    var_20 = ((long long int) arr_4 [i_0] [(unsigned char)12]);
                }
            }
        } 
    } 
}
