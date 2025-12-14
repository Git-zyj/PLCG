/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120582
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120582 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120582
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
    var_10 = ((/* implicit */_Bool) var_3);
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        var_11 = ((/* implicit */unsigned char) (((_Bool)0) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_1 [i_0]))));
        var_12 = ((/* implicit */_Bool) min((var_12), (((/* implicit */_Bool) (+(((/* implicit */int) var_6)))))));
        /* LoopSeq 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_13 = ((/* implicit */unsigned short) (!(var_2)));
            /* LoopSeq 2 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
            {
                var_14 |= ((/* implicit */short) (!(((/* implicit */_Bool) (unsigned short)12770))));
                var_15 *= ((/* implicit */unsigned short) var_5);
            }
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
            {
                var_16 = ((/* implicit */unsigned int) (((~(((/* implicit */int) var_3)))) / (((/* implicit */int) var_8))));
                /* LoopNest 2 */
                for (long long int i_4 = 0; i_4 < 17; i_4 += 2) 
                {
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        {
                            var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)183)) ? (((/* implicit */int) arr_0 [8LL])) : (((/* implicit */int) (unsigned short)65533))));
                            var_18 -= ((/* implicit */short) (unsigned short)8);
                            var_19 -= ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)511)) * (((/* implicit */int) arr_0 [i_0]))));
                        }
                    } 
                } 
                arr_17 [i_3] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_0] [i_0] [i_3] [5LL] [i_3])) ? (((/* implicit */int) (unsigned short)1974)) : (((/* implicit */int) arr_3 [i_0] [i_1] [i_3]))));
            }
            var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) ((((/* implicit */_Bool) (short)28610)) ? (15LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-1))))))));
        }
        for (unsigned char i_6 = 0; i_6 < 17; i_6 += 1) 
        {
            var_21 = ((/* implicit */_Bool) ((unsigned short) arr_15 [i_6] [i_0] [i_0] [i_6] [i_6]));
            arr_22 [i_0] [i_0] |= ((/* implicit */_Bool) ((((/* implicit */int) (signed char)123)) / (((int) (signed char)-1))));
        }
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            arr_25 [i_7] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_3 [i_0] [i_7] [i_7])) ? (458837931U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
            var_22 = ((/* implicit */int) max((var_22), (((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned short)6)))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned short)0))))))));
        }
    }
    var_23 = ((/* implicit */unsigned short) var_8);
}
