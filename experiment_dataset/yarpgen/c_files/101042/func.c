/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101042
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101042 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101042
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
    var_13 = ((((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) (+(((/* implicit */int) var_9))))))) ? (min((min((var_5), (((/* implicit */long long int) var_12)))), (((/* implicit */long long int) min((((/* implicit */unsigned short) (unsigned char)17)), (var_4)))))) : (((/* implicit */long long int) ((/* implicit */int) var_8))));
    var_14 = ((/* implicit */long long int) (+(max(((+(((/* implicit */int) var_1)))), (((/* implicit */int) max((var_1), (((/* implicit */short) var_6)))))))));
    /* LoopSeq 2 */
    for (int i_0 = 2; i_0 < 19; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((long long int) (!(((/* implicit */_Bool) arr_0 [i_0])))))) ? ((+(((/* implicit */int) (!(arr_4 [i_1] [i_0])))))) : (((((/* implicit */_Bool) var_5)) ? (((((/* implicit */int) arr_3 [i_0 + 1] [i_0])) | (((/* implicit */int) (unsigned char)235)))) : (((/* implicit */int) arr_5 [i_0] [i_0 + 1] [i_0 - 2]))))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (long long int i_2 = 0; i_2 < 20; i_2 += 3) 
            {
                var_16 = (((!(((/* implicit */_Bool) -8127097186760302164LL)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1] [i_0]))) : (-8127097186760302144LL));
                var_17 = ((/* implicit */long long int) min((var_17), ((~(8127097186760302143LL)))));
            }
        }
        /* LoopSeq 1 */
        /* vectorizable */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            arr_12 [i_3] = ((/* implicit */unsigned char) 0U);
            var_18 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)-25549))));
            var_19 = ((/* implicit */unsigned int) (_Bool)1);
        }
        var_20 = ((/* implicit */unsigned short) max(((-(((long long int) arr_4 [i_0] [i_0])))), (((/* implicit */long long int) ((((/* implicit */_Bool) (short)21213)) ? (((/* implicit */int) (short)-32757)) : (((/* implicit */int) (signed char)124)))))));
    }
    /* vectorizable */
    for (unsigned int i_4 = 0; i_4 < 10; i_4 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_5 = 0; i_5 < 10; i_5 += 3) 
        {
            var_21 -= ((/* implicit */unsigned short) (+(((/* implicit */int) arr_3 [i_4] [i_4]))));
            arr_20 [i_4] [i_5] [i_4] = ((((/* implicit */_Bool) arr_7 [i_4] [i_5] [i_5])) ? (arr_7 [i_5] [i_5] [i_4]) : (arr_7 [i_4] [i_5] [i_5]));
            var_22 = ((((/* implicit */unsigned long long int) arr_14 [i_4])) <= (arr_11 [i_4] [i_5]));
        }
        arr_21 [i_4] = ((/* implicit */short) (+(((/* implicit */int) arr_16 [i_4] [i_4] [i_4]))));
        var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) var_11))));
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_6 = 1; i_6 < 15; i_6 += 3) 
    {
        var_24 = ((/* implicit */unsigned long long int) var_11);
        var_25 = ((/* implicit */unsigned long long int) arr_4 [i_6] [i_6]);
        arr_24 [i_6] = ((/* implicit */unsigned int) arr_9 [i_6]);
    }
}
