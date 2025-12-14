/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171092
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171092 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171092
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
    var_10 = ((/* implicit */short) var_3);
    var_11 = ((/* implicit */unsigned char) var_4);
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (int i_1 = 2; i_1 < 18; i_1 += 3) 
        {
            var_12 = ((/* implicit */unsigned char) max((var_12), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_3 [8]))))) ? (((((/* implicit */_Bool) (unsigned short)224)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (arr_2 [i_0] [i_0]))) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0]))))))));
            var_13 = ((/* implicit */int) ((signed char) arr_0 [i_1 - 2] [i_1]));
            var_14 ^= ((/* implicit */long long int) ((((/* implicit */int) (unsigned short)239)) << (((((/* implicit */int) (unsigned short)235)) - (219)))));
        }
        for (short i_2 = 0; i_2 < 19; i_2 += 2) 
        {
            var_15 = ((/* implicit */int) max((var_15), (((/* implicit */int) ((unsigned char) (unsigned short)65304)))));
            arr_9 [i_0] [i_2] [i_2] = ((/* implicit */unsigned char) arr_4 [i_0] [i_0] [i_0]);
            arr_10 [(unsigned char)4] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_5 [i_0] [i_2]))))) ? ((~(((/* implicit */int) var_4)))) : (((/* implicit */int) ((unsigned char) arr_5 [i_2] [i_0])))))) && (((/* implicit */_Bool) arr_7 [i_2]))));
        }
        var_16 = (-(((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (7361056640007975408LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255)))))) || (((/* implicit */_Bool) ((((/* implicit */int) var_2)) * (((/* implicit */int) var_4)))))))));
    }
    var_17 = var_2;
    /* LoopSeq 1 */
    for (int i_3 = 0; i_3 < 24; i_3 += 1) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned short i_4 = 2; i_4 < 23; i_4 += 4) 
        {
            arr_17 [i_3] [i_3] [i_3] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_14 [i_4 - 2] [i_4 - 2]))));
            arr_18 [i_3] = ((/* implicit */short) arr_13 [i_3] [i_4]);
            var_18 = ((/* implicit */unsigned char) max((var_18), ((unsigned char)232)));
        }
        var_19 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_14 [i_3] [i_3])), (arr_11 [i_3])))) ? (((/* implicit */int) (unsigned char)125)) : (arr_16 [(unsigned char)3] [i_3]))) != (((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */int) (signed char)33)), (arr_13 [i_3] [(unsigned short)1])))) && (((/* implicit */_Bool) min((1451491079), (((/* implicit */int) arr_15 [i_3]))))))))));
        arr_19 [i_3] = ((/* implicit */unsigned char) ((((((/* implicit */int) ((short) var_4))) << ((((((~(((/* implicit */int) arr_15 [(short)7])))) + (33))) - (23))))) % (((/* implicit */int) var_4))));
    }
}
