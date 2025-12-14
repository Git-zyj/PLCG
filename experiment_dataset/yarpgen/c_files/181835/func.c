/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181835
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181835 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181835
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
    var_14 = ((/* implicit */long long int) var_4);
    var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) var_9))));
    var_16 = (!(((((/* implicit */int) var_2)) >= (((/* implicit */int) ((((/* implicit */int) var_11)) <= (125420002)))))));
    /* LoopSeq 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_17 &= ((/* implicit */_Bool) ((var_6) + (((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))));
        arr_2 [i_0] = var_11;
        var_18 = ((/* implicit */short) min((((((/* implicit */_Bool) min((arr_1 [i_0]), (((/* implicit */short) var_4))))) ? (((/* implicit */int) ((_Bool) var_10))) : (((/* implicit */int) arr_1 [i_0 - 1])))), ((((-(((/* implicit */int) (_Bool)0)))) + (((((/* implicit */_Bool) 3330988060727534086LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)28589))))))));
        var_19 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0]))))) * (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))) > (18446744073709551615ULL))))))) ? (((max((((/* implicit */unsigned long long int) 11)), (var_3))) + (((/* implicit */unsigned long long int) ((((/* implicit */int) var_12)) * (((/* implicit */int) arr_1 [0LL]))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))));
    }
    /* vectorizable */
    for (short i_1 = 0; i_1 < 20; i_1 += 4) 
    {
        var_20 = var_5;
        var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */int) ((_Bool) var_13))) : (((((/* implicit */int) arr_1 [i_1])) + (((/* implicit */int) var_11))))));
    }
    for (int i_2 = 0; i_2 < 18; i_2 += 4) 
    {
        /* LoopNest 2 */
        for (long long int i_3 = 0; i_3 < 18; i_3 += 4) 
        {
            for (unsigned long long int i_4 = 0; i_4 < 18; i_4 += 4) 
            {
                {
                    var_22 = arr_6 [i_2] [i_3];
                    /* LoopSeq 1 */
                    for (unsigned long long int i_5 = 0; i_5 < 18; i_5 += 4) 
                    {
                        arr_18 [i_2] [i_3] [9ULL] [i_5] = ((/* implicit */int) var_1);
                        var_23 = ((/* implicit */short) ((_Bool) ((((/* implicit */_Bool) (~(3615806780628273170LL)))) ? (var_0) : (((/* implicit */int) ((_Bool) 3615806780628273191LL))))));
                        var_24 = ((/* implicit */unsigned long long int) ((((_Bool) arr_3 [i_2])) && (arr_12 [(_Bool)1] [i_3] [i_3])));
                        var_25 -= ((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((((/* implicit */int) arr_1 [i_3])) * (((/* implicit */int) var_12)))) : (min(((~(((/* implicit */int) arr_16 [i_2] [i_3] [i_4] [i_5])))), (((((/* implicit */int) var_7)) >> (((var_8) - (1957286711)))))))));
                    }
                    var_26 = ((long long int) (((-(arr_4 [i_2]))) | (((/* implicit */int) ((_Bool) arr_6 [i_2] [i_3])))));
                    var_27 *= var_2;
                }
            } 
        } 
        var_28 = ((/* implicit */long long int) ((16673192379578030185ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (short)17783)))));
        /* LoopSeq 1 */
        for (int i_6 = 1; i_6 < 16; i_6 += 4) 
        {
            /* LoopSeq 2 */
            /* vectorizable */
            for (short i_7 = 3; i_7 < 16; i_7 += 1) 
            {
                /* LoopSeq 1 */
                for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) 
                {
                    arr_27 [i_7] [i_6] [i_6] [i_7] [i_6] [i_6 + 2] = ((/* implicit */short) (+(((/* implicit */int) arr_5 [i_6 - 1] [i_6 + 2]))));
                    var_29 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) arr_23 [i_8 + 1] [i_8 + 1] [i_8 + 1] [i_8 + 1] [i_8] [i_8])) == ((~(var_3)))));
                }
                /* LoopSeq 1 */
                for (unsigned long long int i_9 = 0; i_9 < 18; i_9 += 4) 
                {
                    var_30 ^= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_24 [(_Bool)1] [i_9] [i_6 + 1] [i_9] [i_2] [i_7 - 3]))));
                    var_31 = ((/* implicit */short) (-(((/* implicit */int) arr_3 [i_6 + 2]))));
                    var_32 = ((/* implicit */long long int) min((var_32), (((/* implicit */long long int) ((((((/* implicit */_Bool) arr_1 [i_2])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (_Bool)0)))) | ((~(var_8))))))));
                }
                var_33 = ((/* implicit */int) min((var_33), (((/* implicit */int) arr_21 [i_6 - 1] [i_2] [i_7]))));
            }
            /* vectorizable */
            for (unsigned long long int i_10 = 0; i_10 < 18; i_10 += 1) 
            {
                var_34 = arr_14 [i_2] [i_2];
                var_35 = ((/* implicit */long long int) ((_Bool) ((((/* implicit */_Bool) arr_4 [i_6])) ? (((/* implicit */int) arr_5 [i_2] [i_6])) : (((/* implicit */int) arr_5 [i_2] [i_10])))));
                arr_33 [i_10] [i_6 + 1] [17] [i_10] = var_1;
            }
            var_36 = ((/* implicit */unsigned long long int) (_Bool)1);
        }
        var_37 = ((/* implicit */_Bool) min((var_37), (((/* implicit */_Bool) ((long long int) var_10)))));
        arr_34 [i_2] = ((/* implicit */_Bool) ((((/* implicit */int) (!(((((/* implicit */int) arr_28 [17ULL] [i_2] [i_2])) != (var_0)))))) | (((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_11))))))))));
    }
}
