/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150637
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150637 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150637
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 2; i_0 < 16; i_0 += 3) 
    {
        var_17 = ((/* implicit */signed char) ((-1LL) * (((/* implicit */long long int) var_6))));
        var_18 = ((/* implicit */long long int) (-((-(((/* implicit */int) (signed char)0))))));
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_0 + 2])) ? (((/* implicit */int) arr_3 [i_0 + 2])) : (((/* implicit */int) arr_1 [i_0 - 1]))));
            var_20 = ((/* implicit */long long int) (-(((/* implicit */int) arr_3 [i_0 - 1]))));
        }
    }
    /* LoopSeq 1 */
    for (long long int i_2 = 4; i_2 < 18; i_2 += 3) 
    {
        var_21 = ((/* implicit */unsigned short) min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_2 + 2] [i_2 - 3])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_2))))), (arr_6 [i_2] [i_2])));
        arr_8 [i_2] [i_2] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) arr_6 [i_2 - 2] [i_2 - 1])) ? (min((-6996828875082309585LL), (var_7))) : (((arr_6 [i_2 + 2] [i_2 + 1]) ^ (arr_6 [i_2] [i_2])))))));
        arr_9 [14] |= ((/* implicit */long long int) (!(((/* implicit */_Bool) max(((-(((/* implicit */int) arr_7 [i_2 + 2])))), ((+(((/* implicit */int) (unsigned short)28060)))))))));
        arr_10 [i_2] [i_2] = ((/* implicit */short) (!(((/* implicit */_Bool) ((unsigned char) var_7)))));
        var_22 = ((/* implicit */unsigned int) arr_7 [i_2 + 1]);
    }
    /* LoopNest 2 */
    for (unsigned int i_3 = 0; i_3 < 24; i_3 += 3) 
    {
        for (unsigned short i_4 = 0; i_4 < 24; i_4 += 3) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned char i_5 = 2; i_5 < 23; i_5 += 4) 
                {
                    var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) -2198557160890329578LL)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_16)))) : (((/* implicit */int) arr_14 [i_5 + 1] [i_5] [i_5 + 1]))));
                    var_24 += ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_14 [i_5] [i_4] [i_3]))))) % (((/* implicit */int) ((signed char) var_14)))));
                }
                var_25 = ((/* implicit */int) ((((/* implicit */_Bool) (((-(((/* implicit */int) var_4)))) ^ (((((/* implicit */_Bool) arr_15 [i_3] [i_4])) ? (((/* implicit */int) arr_13 [i_3])) : (((/* implicit */int) arr_14 [i_3] [i_3] [i_3]))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_3] [i_3])) ? (((/* implicit */int) var_4)) : (var_6)))) ? (((unsigned int) var_9)) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) (unsigned short)39494)))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_1))))) ? (((int) var_6)) : (((/* implicit */int) arr_15 [i_3] [i_4])))))));
            }
        } 
    } 
}
