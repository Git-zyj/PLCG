/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184747
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184747 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184747
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_0 = 1; i_0 < 21; i_0 += 3) 
    {
        arr_3 [22ULL] = ((/* implicit */unsigned short) var_10);
        var_13 = ((/* implicit */short) ((long long int) arr_1 [i_0 + 3]));
    }
    for (int i_1 = 1; i_1 < 20; i_1 += 3) 
    {
        arr_7 [i_1] [i_1] = ((/* implicit */signed char) var_4);
        arr_8 [(_Bool)1] [(_Bool)1] = arr_1 [i_1];
    }
    /* LoopSeq 1 */
    for (int i_2 = 2; i_2 < 11; i_2 += 2) 
    {
        /* LoopSeq 1 */
        for (int i_3 = 0; i_3 < 15; i_3 += 2) 
        {
            var_14 = ((/* implicit */unsigned char) (((_Bool)0) || ((!(((/* implicit */_Bool) ((int) arr_5 [i_2])))))));
            var_15 = ((/* implicit */unsigned int) var_12);
            arr_15 [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)30430)) ? (max((((/* implicit */int) var_9)), (0))) : ((~(((/* implicit */int) ((_Bool) var_4)))))));
        }
        var_16 ^= ((/* implicit */unsigned int) (unsigned short)34256);
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_4 = 2; i_4 < 12; i_4 += 2) 
        {
            arr_18 [i_2] [i_2] [i_4] = ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)30433)) / (((/* implicit */int) var_11))));
            /* LoopSeq 4 */
            for (unsigned short i_5 = 0; i_5 < 15; i_5 += 4) 
            {
                var_17 &= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) * (-834915602)))) ? (((((/* implicit */int) var_8)) + (((/* implicit */int) var_4)))) : (((/* implicit */int) ((unsigned short) -4478858002427796897LL)))));
                /* LoopNest 2 */
                for (long long int i_6 = 0; i_6 < 15; i_6 += 4) 
                {
                    for (unsigned long long int i_7 = 0; i_7 < 15; i_7 += 2) 
                    {
                        {
                            var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) (~(2772763488472068215LL))))));
                            var_19 = ((/* implicit */unsigned short) ((((/* implicit */int) ((_Bool) var_6))) + (((/* implicit */int) ((var_0) && (var_0))))));
                        }
                    } 
                } 
                arr_25 [i_2] [i_2] = ((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) >= (arr_5 [i_2 + 3]));
            }
            for (unsigned char i_8 = 0; i_8 < 15; i_8 += 3) 
            {
                var_20 += ((/* implicit */short) ((signed char) (-(27))));
                arr_28 [(unsigned short)13] [i_4] [i_4] = ((short) arr_2 [i_2 + 2]);
            }
            for (unsigned int i_9 = 2; i_9 < 14; i_9 += 1) 
            {
                var_21 ^= ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_20 [i_2] [i_2] [i_2] [i_9])))) : (arr_6 [i_2 - 2])));
                arr_31 [i_2] [i_4] [i_2] [i_2] = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_12))));
            }
            for (short i_10 = 3; i_10 < 11; i_10 += 4) 
            {
                var_22 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_2]))) | (1868142929U)))) ? (((/* implicit */int) arr_26 [i_10] [i_10 + 4] [i_4 - 1] [i_2 + 3])) : (((/* implicit */int) var_4))));
                var_23 -= ((unsigned short) 22U);
            }
        }
    }
    var_24 = min(((~(7120733159908331407ULL))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) min((((/* implicit */short) var_8)), (var_11))))))));
}
