/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167631
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167631 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167631
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
    var_10 = ((/* implicit */unsigned char) min((var_10), (((/* implicit */unsigned char) var_9))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 1) /* same iter space */
    {
        var_11 = ((/* implicit */long long int) (-(((/* implicit */int) var_9))));
        var_12 += ((/* implicit */int) (~(((754269163U) / (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [11ULL] [i_0])))))));
    }
    for (unsigned short i_1 = 0; i_1 < 23; i_1 += 1) /* same iter space */
    {
        var_13 ^= ((/* implicit */long long int) ((((/* implicit */int) ((-2121156428159635783LL) != (((/* implicit */long long int) ((/* implicit */int) var_5)))))) == (((((/* implicit */int) arr_2 [i_1])) & (var_8)))));
        /* LoopSeq 1 */
        for (long long int i_2 = 0; i_2 < 23; i_2 += 1) 
        {
            var_14 = ((/* implicit */unsigned char) ((((((((/* implicit */int) var_3)) - (((/* implicit */int) (unsigned char)119)))) != (arr_0 [i_2]))) ? (((/* implicit */long long int) -1850854220)) : ((+(min((arr_3 [(signed char)7] [(signed char)7]), (((/* implicit */long long int) var_0))))))));
            var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) arr_5 [i_1] [i_1]))));
            /* LoopSeq 2 */
            for (long long int i_3 = 0; i_3 < 23; i_3 += 2) /* same iter space */
            {
                var_16 = ((/* implicit */unsigned short) max((((/* implicit */int) arr_2 [i_2])), (var_8)));
                var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) (signed char)(-127 - 1)))));
            }
            /* vectorizable */
            for (long long int i_4 = 0; i_4 < 23; i_4 += 2) /* same iter space */
            {
                var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) ((((/* implicit */int) arr_2 [i_4])) >= (((/* implicit */int) var_9)))))));
                /* LoopSeq 1 */
                for (unsigned long long int i_5 = 0; i_5 < 23; i_5 += 3) 
                {
                    arr_14 [(unsigned char)1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((long long int) 4294967295U))) ? (((/* implicit */long long int) var_4)) : (-2121156428159635783LL)));
                    arr_15 [i_1] [i_2] [i_2] [i_2] = (signed char)(-127 - 1);
                    arr_16 [i_1] [18U] [i_4] [(unsigned char)17] = ((/* implicit */long long int) var_8);
                    var_19 = ((/* implicit */int) ((unsigned long long int) -2121156428159635783LL));
                }
                arr_17 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */long long int) (+(((/* implicit */int) var_0))));
                var_20 ^= var_5;
                arr_18 [i_1] = ((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */_Bool) (signed char)(-127 - 1))) && (((/* implicit */_Bool) -857030504283062203LL)))))));
            }
        }
        arr_19 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((arr_11 [i_1] [(unsigned short)1] [i_1] [i_1]), (arr_11 [i_1] [i_1] [i_1] [i_1])))) ? (((/* implicit */int) var_3)) : (min((arr_10 [i_1] [i_1] [i_1]), (arr_10 [i_1] [21LL] [i_1])))));
    }
    for (unsigned short i_6 = 0; i_6 < 23; i_6 += 1) /* same iter space */
    {
        var_21 += ((/* implicit */short) arr_11 [(signed char)4] [i_6] [(signed char)4] [i_6]);
        arr_23 [i_6] = ((/* implicit */unsigned long long int) max((arr_13 [i_6] [i_6] [i_6] [(unsigned short)20]), (((unsigned short) (+(-2121156428159635783LL))))));
    }
    var_22 = ((/* implicit */long long int) (signed char)127);
    var_23 |= ((/* implicit */unsigned char) var_4);
}
