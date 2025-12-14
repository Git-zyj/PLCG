/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15919
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15919 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15919
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
    var_19 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (min((-9223372036854775804LL), (((/* implicit */long long int) var_12)))) : (((/* implicit */long long int) max((var_15), (((/* implicit */int) (_Bool)0)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : ((+((-(var_2)))))));
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] &= var_3;
        var_20 = ((/* implicit */unsigned char) (~((((!(((/* implicit */_Bool) arr_1 [i_0])))) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) (unsigned char)235)) : (((/* implicit */int) (unsigned short)3469)))) : (((/* implicit */int) arr_0 [i_0]))))));
        /* LoopNest 2 */
        for (long long int i_1 = 3; i_1 < 7; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (int i_3 = 0; i_3 < 10; i_3 += 2) 
                    {
                        arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (+((~(-1346734664)))));
                        arr_12 [i_1] [i_2] [i_2] = ((/* implicit */unsigned char) (+(max((((((/* implicit */_Bool) var_6)) ? (-7921361411451749524LL) : (-7921361411451749524LL))), (min((((/* implicit */long long int) arr_8 [i_0])), (var_3)))))));
                        var_21 = ((/* implicit */short) (+(((/* implicit */int) ((((/* implicit */int) arr_9 [i_2 + 1] [i_2 + 1] [0ULL] [i_0] [i_2] [i_1])) <= (((/* implicit */int) arr_9 [i_2 + 1] [i_1] [i_2 + 1] [(unsigned char)0] [i_2] [i_1])))))));
                        arr_13 [i_0] [i_0] [i_0] [i_2 + 1] [i_3] = ((/* implicit */int) arr_9 [i_0] [i_1 + 3] [i_2 + 1] [i_3] [i_0] [i_1 + 3]);
                    }
                    /* LoopNest 2 */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        for (unsigned long long int i_5 = 0; i_5 < 10; i_5 += 4) 
                        {
                            {
                                var_22 |= ((/* implicit */unsigned long long int) max(((-(((/* implicit */int) arr_9 [9ULL] [i_5] [i_2] [9ULL] [i_5] [i_4])))), (((/* implicit */int) (!(arr_6 [i_4] [i_4]))))));
                                var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) (-(min((((((/* implicit */_Bool) arr_0 [i_2])) ? (((/* implicit */int) arr_1 [0])) : (var_12))), (((/* implicit */int) ((_Bool) arr_6 [i_0] [i_1 + 3]))))))))));
                                arr_18 [(signed char)9] [i_1] [i_2] [(short)2] [i_4] = ((/* implicit */short) ((((((/* implicit */_Bool) arr_16 [i_2] [i_2] [i_2 + 1] [i_2] [i_2] [i_2 + 1] [i_2])) ? (((/* implicit */int) arr_16 [i_2] [i_2 + 1] [i_2 + 1] [i_2] [i_2] [i_2 + 1] [i_2])) : (((/* implicit */int) arr_16 [i_2] [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_2] [i_2 + 1] [i_2 + 1])))) >> (((min((var_10), (((/* implicit */int) arr_16 [(short)5] [i_2] [i_2 + 1] [i_2 + 1] [i_2] [i_2 + 1] [i_2 + 1])))) - (49)))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_6 = 2; i_6 < 9; i_6 += 1) 
                    {
                        for (signed char i_7 = 0; i_7 < 10; i_7 += 1) 
                        {
                            {
                                var_24 -= ((/* implicit */int) min(((!(((/* implicit */_Bool) ((unsigned char) arr_23 [8]))))), ((!(((/* implicit */_Bool) var_3))))));
                                var_25 = ((/* implicit */short) max((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_19 [i_2 + 1] [i_2] [i_2 + 1] [i_2 + 1] [(_Bool)1] [i_6])) >= (((/* implicit */int) arr_16 [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_2] [i_2]))))), (((((/* implicit */_Bool) arr_16 [i_2 + 1] [i_2] [i_2 + 1] [i_2 + 1] [i_2] [i_2 + 1] [i_2 + 1])) ? (((/* implicit */unsigned long long int) var_0)) : (13000763483731872031ULL)))));
                            }
                        } 
                    } 
                    var_26 = ((/* implicit */unsigned char) ((short) (-(arr_15 [i_2 + 1] [i_2 + 1] [i_2 + 1] [2LL]))));
                    var_27 *= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_22 [i_0] [i_0] [i_0] [i_0] [i_0]))))) < (arr_10 [i_0] [i_0] [i_0])));
                }
            } 
        } 
        var_28 -= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+(((/* implicit */int) ((var_7) <= (((/* implicit */long long int) arr_24 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))))))));
    }
    for (unsigned long long int i_8 = 0; i_8 < 23; i_8 += 2) /* same iter space */
    {
        var_29 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((arr_26 [i_8]) / (arr_26 [i_8]))) % (((/* implicit */long long int) var_10))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_26 [i_8])) ? (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-11322))) * (3726027336U)))) : (((unsigned long long int) var_13)))))));
        arr_27 [i_8] [i_8] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */int) var_18)) + (2147483647))) << (((((arr_26 [i_8]) + (5586970519630463927LL))) - (31LL)))))) ? (arr_26 [i_8]) : (((((/* implicit */_Bool) var_18)) ? (arr_25 [(signed char)3] [i_8]) : (-7736329567196992677LL))))))));
    }
    /* vectorizable */
    for (unsigned long long int i_9 = 0; i_9 < 23; i_9 += 2) /* same iter space */
    {
        var_30 = ((/* implicit */unsigned long long int) ((unsigned short) (short)11322));
        arr_31 [i_9] [i_9] = ((/* implicit */short) ((-9223372036854775792LL) >= (arr_25 [i_9] [i_9])));
    }
}
