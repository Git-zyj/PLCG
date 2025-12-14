/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134040
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134040 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134040
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
    var_18 = ((/* implicit */signed char) ((((/* implicit */int) var_14)) - (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (var_7)))))));
    /* LoopNest 3 */
    for (signed char i_0 = 1; i_0 < 17; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (long long int i_2 = 3; i_2 < 19; i_2 += 2) 
            {
                {
                    /* LoopSeq 2 */
                    for (long long int i_3 = 1; i_3 < 18; i_3 += 2) /* same iter space */
                    {
                        arr_11 [i_0] [i_0] [i_0 + 3] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_4))) + (-2539602321868168044LL)))) : (arr_4 [i_0] [i_3 - 1])));
                        arr_12 [i_0] [i_0] [i_1 - 1] [i_0] [i_3 + 1] [i_3] = ((/* implicit */unsigned int) 8367889351338682965ULL);
                        arr_13 [i_0] [2LL] [i_2 - 2] [i_2] [i_1 - 1] [i_0] = ((((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_5 [i_3] [i_2 - 2] [i_1 - 1] [i_0 + 3]) || (((/* implicit */_Bool) 10078854722370868654ULL)))))) * (((((/* implicit */_Bool) arr_2 [i_0 + 2])) ? (((/* implicit */unsigned long long int) var_0)) : (arr_2 [i_1 - 1]))));
                    }
                    for (long long int i_4 = 1; i_4 < 18; i_4 += 2) /* same iter space */
                    {
                        var_19 = ((/* implicit */long long int) 10078854722370868651ULL);
                        var_20 *= ((/* implicit */int) arr_9 [i_4 + 2] [i_1 - 1] [i_1 - 1] [i_0 - 1] [6LL]);
                    }
                    var_21 -= ((((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_1] [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1]))))) * (((((/* implicit */int) arr_9 [(unsigned short)15] [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1])) * (((/* implicit */int) var_9)))));
                    var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) ((((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_10 [4] [i_1 - 1] [11U]))))) > (((((/* implicit */_Bool) var_13)) ? (8367889351338682965ULL) : (((/* implicit */unsigned long long int) var_7)))))) && (((/* implicit */_Bool) ((short) var_10))))))));
                }
            } 
        } 
    } 
}
