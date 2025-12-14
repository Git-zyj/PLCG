/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186787
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186787 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186787
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
    var_12 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) (+(4544128624506251957ULL)))))) + (((var_3) / (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))));
    var_13 = ((/* implicit */_Bool) ((unsigned short) (!(((/* implicit */_Bool) (unsigned char)137)))));
    /* LoopSeq 2 */
    for (long long int i_0 = 2; i_0 < 14; i_0 += 2) 
    {
        var_14 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) -426454035)) ? (132010797U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)44995))))), (((((/* implicit */_Bool) var_5)) ? (arr_0 [i_0 + 4]) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned short i_2 = 0; i_2 < 18; i_2 += 2) 
            {
                /* LoopSeq 1 */
                for (unsigned int i_3 = 0; i_3 < 18; i_3 += 2) 
                {
                    /* LoopSeq 2 */
                    for (unsigned int i_4 = 0; i_4 < 18; i_4 += 2) /* same iter space */
                    {
                        var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_6 [i_0] [i_0])) && ((!(((/* implicit */_Bool) var_2))))));
                        var_16 = ((/* implicit */long long int) arr_8 [i_0] [(_Bool)1] [i_0 + 1] [i_0 + 2]);
                        var_17 = ((signed char) arr_6 [i_0 + 1] [i_0 - 1]);
                        var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) ((arr_12 [i_0 - 2] [i_0] [i_0] [i_0 - 1]) ^ (((/* implicit */long long int) ((/* implicit */int) var_9))))))));
                    }
                    for (unsigned int i_5 = 0; i_5 < 18; i_5 += 2) /* same iter space */
                    {
                        var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) ((((/* implicit */int) arr_14 [i_5] [i_5])) / (((/* implicit */int) arr_6 [i_0 - 1] [i_0 - 1])))))));
                        var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) (~(((((/* implicit */int) arr_3 [i_3])) ^ (((/* implicit */int) (signed char)99)))))))));
                    }
                    var_21 = ((((((/* implicit */int) var_2)) < (((/* implicit */int) var_10)))) ? (arr_1 [i_1]) : (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_0 + 1] [i_0 + 2] [i_0 + 2] [i_2] [i_1]))));
                }
                /* LoopNest 2 */
                for (signed char i_6 = 0; i_6 < 18; i_6 += 2) 
                {
                    for (short i_7 = 0; i_7 < 18; i_7 += 2) 
                    {
                        {
                            var_22 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))) <= (((unsigned int) var_3))));
                            var_23 = ((/* implicit */unsigned int) ((unsigned short) ((signed char) (unsigned char)172)));
                        }
                    } 
                } 
                var_24 = ((short) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) var_11))));
                /* LoopSeq 1 */
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    var_25 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (signed char)-98))));
                    var_26 = (~(-5429167621777843767LL));
                    var_27 = ((unsigned long long int) (_Bool)0);
                    var_28 = ((/* implicit */unsigned short) (_Bool)1);
                    var_29 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (arr_18 [i_0] [i_0 + 3] [i_0 + 2] [i_0] [i_0 - 2] [i_0])));
                }
            }
            var_30 = ((/* implicit */unsigned short) ((short) (signed char)95));
        }
        var_31 = ((/* implicit */unsigned int) var_7);
    }
    for (unsigned short i_9 = 3; i_9 < 12; i_9 += 2) 
    {
        var_32 = ((/* implicit */long long int) (!(((((unsigned long long int) 3642383744011585646LL)) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))))));
        arr_30 [i_9 - 1] [i_9 - 1] = ((/* implicit */_Bool) min(((~(arr_0 [i_9]))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) 2737586708471727984LL)))))));
        var_33 -= ((/* implicit */signed char) min((arr_25 [i_9] [i_9] [i_9] [i_9 - 3]), (((/* implicit */long long int) ((unsigned short) (_Bool)0)))));
        var_34 ^= ((/* implicit */unsigned int) (-((~(((((/* implicit */long long int) ((/* implicit */int) arr_21 [i_9] [i_9] [i_9 - 1] [0LL] [i_9 - 1] [i_9]))) ^ (140737488093184LL)))))));
    }
    var_35 = ((/* implicit */short) var_2);
}
