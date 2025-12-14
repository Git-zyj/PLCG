/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15882
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15882 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15882
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
    var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) var_5)) ? (127U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned int) ((/* implicit */int) min((var_0), ((unsigned short)18795)))))))) ? ((((_Bool)1) ? (13177556558483608609ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) 989081073)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (signed char)-1)))))))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned long long int i_0 = 2; i_0 < 12; i_0 += 1) /* same iter space */
    {
        arr_2 [(signed char)3] = ((/* implicit */signed char) (((_Bool)1) ? (((/* implicit */int) arr_0 [i_0 - 2] [i_0 - 2])) : (((/* implicit */int) arr_0 [i_0 + 1] [i_0 - 1]))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            for (unsigned short i_2 = 3; i_2 < 9; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 2; i_3 < 12; i_3 += 1) 
                    {
                        for (long long int i_4 = 1; i_4 < 12; i_4 += 1) 
                        {
                            {
                                var_18 *= ((/* implicit */short) ((var_15) ? ((~(var_6))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_9) < (var_13)))))));
                                arr_13 [i_0] [i_1] [i_1] [(unsigned short)2] [i_1] [i_3] [i_4] = ((/* implicit */short) (_Bool)1);
                                var_19 = ((/* implicit */int) max((var_19), (((((/* implicit */int) arr_1 [i_0 + 1])) ^ (((/* implicit */int) arr_10 [i_2 + 1] [i_0 - 1]))))));
                            }
                        } 
                    } 
                    arr_14 [i_0] [i_1] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) var_13)) ? (((var_7) ? (arr_7 [i_0 - 2] [i_1] [i_1] [i_0 - 2]) : (((/* implicit */unsigned int) ((/* implicit */int) var_0))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))));
                    var_20 -= ((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_2] [i_2] [(_Bool)1] [i_0] [i_0]))));
                    arr_15 [i_1] [i_1] = ((/* implicit */signed char) (-(((/* implicit */int) (_Bool)1))));
                }
            } 
        } 
    }
    for (unsigned long long int i_5 = 2; i_5 < 12; i_5 += 1) /* same iter space */
    {
        var_21 = ((/* implicit */long long int) (((_Bool)1) ? (max(((-(var_14))), (arr_11 [i_5] [i_5] [i_5] [1] [i_5]))) : (min(((-(((/* implicit */int) var_4)))), (((/* implicit */int) (_Bool)1))))));
        var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) var_6))));
        var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) ((((/* implicit */int) (signed char)-73)) & (((/* implicit */int) (_Bool)1)))))));
    }
    /* vectorizable */
    for (unsigned long long int i_6 = 2; i_6 < 12; i_6 += 1) /* same iter space */
    {
        arr_20 [i_6] [5U] = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) (unsigned short)30897)) ? (((/* implicit */int) arr_9 [8LL] [4LL] [i_6 - 1] [i_6 - 2] [i_6 - 2])) : (var_8)))));
        /* LoopNest 2 */
        for (long long int i_7 = 2; i_7 < 12; i_7 += 1) 
        {
            for (unsigned long long int i_8 = 1; i_8 < 11; i_8 += 1) 
            {
                {
                    var_24 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_15)))) | (((/* implicit */int) var_15))));
                    var_25 = ((/* implicit */unsigned long long int) max((var_25), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_8 + 1])) - (((/* implicit */int) arr_1 [i_8 + 2])))))));
                    arr_26 [i_6 - 2] [i_7] [i_7] [i_7] = ((/* implicit */int) ((((((/* implicit */_Bool) arr_6 [i_7] [i_8 + 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) : (var_6))) ^ (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */int) (short)0)) : (-1114310977))))));
                    var_26 = ((/* implicit */_Bool) max((var_26), (((/* implicit */_Bool) ((long long int) (~(((/* implicit */int) (signed char)-18))))))));
                    arr_27 [i_6 - 2] [i_6 - 2] [i_7] = ((/* implicit */short) ((long long int) (!(((/* implicit */_Bool) arr_19 [i_6])))));
                }
            } 
        } 
        var_27 += ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)16))) - (((((/* implicit */_Bool) arr_24 [i_6 + 1])) ? (((/* implicit */unsigned long long int) -732591062336210001LL)) : (9807173561900951593ULL)))));
    }
    /* vectorizable */
    for (unsigned long long int i_9 = 2; i_9 < 12; i_9 += 1) /* same iter space */
    {
        var_28 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_9)) ? (arr_6 [i_9 - 2] [i_9 - 2]) : (arr_6 [i_9] [i_9 + 1])));
        var_29 = ((/* implicit */unsigned int) arr_10 [i_9 + 1] [i_9 - 1]);
    }
}
