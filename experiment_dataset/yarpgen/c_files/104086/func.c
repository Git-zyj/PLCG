/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104086
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104086 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104086
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
    for (signed char i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            {
                var_13 = ((/* implicit */unsigned long long int) min((var_13), (((/* implicit */unsigned long long int) var_6))));
                /* LoopSeq 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    var_14 = ((/* implicit */int) ((signed char) var_3));
                    arr_8 [i_0] [i_0] [i_1] [i_2] = ((/* implicit */long long int) var_10);
                    var_15 = ((/* implicit */_Bool) min((var_15), (var_7)));
                }
                for (signed char i_3 = 0; i_3 < 15; i_3 += 1) 
                {
                    var_16 = ((/* implicit */_Bool) (+(var_4)));
                    var_17 = ((/* implicit */signed char) arr_5 [i_0] [i_1] [i_3]);
                }
                var_18 -= ((/* implicit */int) (!(((/* implicit */_Bool) 12919263079755690732ULL))));
            }
        } 
    } 
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                {
                    arr_20 [i_4] [i_5] [i_6] = ((/* implicit */unsigned long long int) var_10);
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 19; i_7 += 4) 
                    {
                        for (unsigned long long int i_8 = 0; i_8 < 19; i_8 += 1) 
                        {
                            {
                                var_19 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_7]))) : (var_4)));
                                var_20 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) arr_17 [(_Bool)1] [(_Bool)1] [i_6] [i_7])) : (((/* implicit */int) (_Bool)1)))))));
                                var_21 = (!(arr_14 [i_4]));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_22 &= ((_Bool) ((((/* implicit */int) var_2)) > (((/* implicit */int) (signed char)95))));
    }
    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) /* same iter space */
    {
        var_23 = ((/* implicit */_Bool) arr_16 [i_9]);
        arr_30 [i_9] [i_9] = ((/* implicit */_Bool) (+((-9223372036854775807LL - 1LL))));
        /* LoopSeq 1 */
        for (long long int i_10 = 1; i_10 < 18; i_10 += 1) 
        {
            arr_34 [6] [i_10 + 1] [(signed char)16] &= ((/* implicit */signed char) (+(((((/* implicit */_Bool) arr_25 [i_9] [i_10] [(signed char)18])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3993482463494740706LL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_21 [i_10] [(_Bool)1] [(_Bool)1] [i_9]))) : (arr_12 [i_9])))) : (((((/* implicit */unsigned long long int) var_8)) ^ (arr_25 [i_9] [i_10] [(_Bool)1])))))));
            arr_35 [i_10] [i_10 - 1] = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) (+(((/* implicit */int) arr_24 [i_10 + 1] [i_10] [i_9] [i_10] [i_9]))))), (((3993482463494740706LL) << (((18446744073709551615ULL) - (18446744073709551615ULL)))))));
        }
    }
    var_24 = ((/* implicit */signed char) (!(var_7)));
    var_25 = min((var_1), ((+(var_1))));
}
