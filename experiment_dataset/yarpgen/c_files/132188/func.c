/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132188
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132188 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132188
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
    var_18 = var_15;
    /* LoopSeq 3 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 21; i_0 += 2) /* same iter space */
    {
        var_19 ^= ((/* implicit */unsigned long long int) var_11);
        arr_3 [i_0] = ((/* implicit */_Bool) arr_2 [i_0] [i_0]);
    }
    for (short i_1 = 0; i_1 < 21; i_1 += 2) /* same iter space */
    {
        var_20 *= ((/* implicit */unsigned int) ((788448794) >> (((((/* implicit */int) var_14)) - (13678)))));
        arr_8 [i_1] = ((/* implicit */short) min((((/* implicit */unsigned long long int) ((unsigned short) (_Bool)1))), ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)59670))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)51060))) / (var_12)))))));
    }
    for (short i_2 = 0; i_2 < 21; i_2 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (signed char i_3 = 0; i_3 < 21; i_3 += 1) 
        {
            for (long long int i_4 = 0; i_4 < 21; i_4 += 2) 
            {
                {
                    var_21 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((((((var_11) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (arr_0 [i_2]))) + (9223372036854775807LL))) >> (((((/* implicit */int) (signed char)-46)) + (46)))))), (((10311454953620978904ULL) >> (((((/* implicit */int) (short)29029)) - (29027)))))));
                    var_22 = (unsigned short)14490;
                    var_23 ^= ((/* implicit */_Bool) max(((unsigned short)51037), ((unsigned short)14466)));
                }
            } 
        } 
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned int i_5 = 1; i_5 < 19; i_5 += 4) 
        {
            var_24 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (signed char)-49))));
            arr_20 [i_5] = ((/* implicit */short) (+(arr_1 [i_5 + 2] [i_5 + 1])));
        }
        var_25 = ((((/* implicit */_Bool) (~(((/* implicit */int) arr_17 [i_2] [8U] [i_2] [i_2]))))) ? ((~(((/* implicit */int) var_10)))) : (((((/* implicit */_Bool) var_13)) ? (arr_6 [i_2]) : (((/* implicit */int) arr_17 [i_2] [i_2] [i_2] [i_2])))));
        var_26 = ((/* implicit */unsigned short) max((var_26), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_9))))) ? (((/* implicit */int) min(((unsigned short)17823), ((unsigned short)40518)))) : (arr_6 [i_2])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned long long int) arr_0 [i_2])) : (var_17)))))))) : (max((arr_5 [i_2] [i_2]), (arr_5 [i_2] [i_2]))))))));
    }
    var_27 *= ((/* implicit */unsigned short) var_9);
}
