/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151398
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151398 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151398
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
    var_11 = ((/* implicit */signed char) max((var_11), (((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) var_7)) > (var_1))))) ^ (var_6)))), (((((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (var_1))) & (min((var_10), (((/* implicit */unsigned long long int) var_6)))))))))));
    var_12 = ((((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) var_3)) ? (17371215800204169655ULL) : (1075528273505381961ULL))))) ? (var_4) : (((/* implicit */unsigned long long int) (((((~(((/* implicit */int) var_5)))) + (2147483647))) << (((((((/* implicit */int) ((signed char) var_0))) + (32))) - (23)))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 3; i_1 < 10; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 13; i_2 += 3) 
            {
                {
                    var_13 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_2])) ? (((/* implicit */int) (unsigned short)15)) : (((/* implicit */int) (_Bool)1))));
                    arr_7 [i_2] [i_0] [i_0] = ((/* implicit */unsigned long long int) (!(arr_0 [i_1 - 2])));
                    var_14 = ((/* implicit */_Bool) min((var_14), ((((~(var_0))) >= (((/* implicit */unsigned long long int) 2344131877U))))));
                    arr_8 [i_0] [i_0] [i_2] [i_1] = ((/* implicit */short) (+(((/* implicit */int) arr_2 [i_1 - 3]))));
                }
            } 
        } 
        arr_9 [(unsigned char)8] |= ((/* implicit */signed char) arr_1 [i_0]);
        var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)17178)) ? (var_6) : (((/* implicit */long long int) arr_6 [i_0] [i_0] [i_0]))))) ? ((~(((/* implicit */int) (unsigned char)72)))) : (((/* implicit */int) arr_2 [i_0]))));
    }
    for (short i_3 = 1; i_3 < 22; i_3 += 4) 
    {
        var_16 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) max((arr_10 [i_3]), (((/* implicit */unsigned int) var_5))))) - (min((((/* implicit */unsigned long long int) arr_10 [i_3])), (var_4)))));
        var_17 = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)36566))) <= (var_7)))) >= (max((((/* implicit */int) ((((/* implicit */int) (unsigned char)238)) <= (((/* implicit */int) (unsigned short)65535))))), (((((/* implicit */_Bool) arr_11 [i_3])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_11 [i_3 - 1]))))))));
        /* LoopSeq 2 */
        for (short i_4 = 0; i_4 < 24; i_4 += 3) 
        {
            var_18 *= ((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_12 [i_3 + 2] [i_3 + 2] [i_3 + 2])) % (((/* implicit */int) (unsigned char)12)))) << ((((-(max((3107464602U), (((/* implicit */unsigned int) arr_13 [i_3] [i_3])))))) - (1187502681U)))));
            var_19 ^= ((/* implicit */signed char) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) 17371215800204169631ULL)) ? (((/* implicit */unsigned long long int) 33553408)) : (var_10)))) ? ((~(1075528273505381979ULL))) : (((/* implicit */unsigned long long int) var_9))))));
            var_20 = ((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) var_5))))) | (((/* implicit */int) max((arr_11 [i_3 + 1]), (((/* implicit */unsigned short) var_5)))))));
            arr_15 [i_3] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((var_9) ^ (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65305)))))), (var_10))))));
        }
        for (unsigned char i_5 = 0; i_5 < 24; i_5 += 4) 
        {
            arr_18 [i_3] [i_3] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) min((arr_12 [i_5] [i_5] [(signed char)6]), (((/* implicit */short) arr_14 [i_3]))))) ? (((((/* implicit */_Bool) var_7)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)58709))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (unsigned short)34559)))))) * (((/* implicit */unsigned long long int) var_7))));
            var_21 = ((/* implicit */short) ((((((/* implicit */_Bool) max((arr_12 [(unsigned short)7] [i_3] [i_3]), (arr_13 [19LL] [i_5])))) ? (((/* implicit */int) ((short) 4776835916297073331LL))) : (((/* implicit */int) var_5)))) * (((/* implicit */int) min(((unsigned short)0), (((/* implicit */unsigned short) min((((/* implicit */unsigned char) var_5)), (arr_17 [i_3])))))))));
        }
        var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) (unsigned char)131))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (unsigned short)6849)))) : ((~(var_10)))))) ? (((((/* implicit */_Bool) min((((/* implicit */long long int) arr_13 [i_3] [i_3])), (var_6)))) ? (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_8)), (952828523U)))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) ^ (var_0))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) min((var_8), (((/* implicit */unsigned char) var_5)))))) | (var_0)))));
    }
    var_23 = ((/* implicit */unsigned short) (~(max((((/* implicit */long long int) ((16638154489048144562ULL) >= (var_1)))), (((var_6) / (((/* implicit */long long int) ((/* implicit */int) (unsigned char)156)))))))));
}
