/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10901
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10901 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10901
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
    for (int i_0 = 4; i_0 < 10; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 14; i_2 += 1) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 14; i_3 += 1) 
                {
                    {
                        var_15 *= ((((/* implicit */_Bool) (-2147483647 - 1))) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)27300))));
                        var_16 = ((/* implicit */unsigned char) ((unsigned int) ((unsigned int) (((_Bool)1) ? (1073733632U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))))));
                    }
                } 
            } 
        } 
        var_17 = ((/* implicit */unsigned short) ((((/* implicit */int) max((arr_11 [i_0 - 4] [i_0 + 2] [i_0 + 2]), (arr_11 [i_0 + 1] [i_0 + 1] [i_0])))) == (((/* implicit */int) ((((/* implicit */int) arr_7 [i_0] [i_0] [i_0 + 2])) > (var_14))))));
    }
    for (signed char i_4 = 0; i_4 < 20; i_4 += 1) 
    {
        var_18 |= ((/* implicit */int) ((long long int) arr_13 [i_4] [i_4]));
        /* LoopSeq 3 */
        for (unsigned long long int i_5 = 0; i_5 < 20; i_5 += 4) 
        {
            var_19 = min(((-(min((((/* implicit */unsigned int) (_Bool)1)), (2785710399U))))), (((/* implicit */unsigned int) max((((/* implicit */int) (!(((/* implicit */_Bool) 1509256896U))))), (((((/* implicit */int) (short)32767)) >> (((arr_13 [i_4] [i_4]) - (2966492566U)))))))));
            var_20 -= ((/* implicit */unsigned short) var_8);
            arr_16 [i_4] [i_5] [i_5] &= ((/* implicit */unsigned int) ((var_2) == (((/* implicit */unsigned long long int) ((1844581199U) & (var_13))))));
        }
        for (int i_6 = 0; i_6 < 20; i_6 += 3) 
        {
            var_21 = ((/* implicit */long long int) arr_15 [i_4] [i_4]);
            arr_19 [i_4] [i_6] = ((/* implicit */int) var_9);
        }
        for (int i_7 = 2; i_7 < 16; i_7 += 1) 
        {
            var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) ((signed char) ((((/* implicit */_Bool) arr_20 [i_7 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_7 - 2] [i_7 - 1]))) : (var_4)))))));
            var_23 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_12 [i_4]) | (arr_12 [i_7])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [i_4] [i_4]))))) : (((/* implicit */int) arr_17 [(unsigned char)10]))));
        }
        var_24 += (~(((((/* implicit */_Bool) (~(((/* implicit */int) var_11))))) ? (((1509256896U) + (1509256896U))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))))));
    }
    /* LoopNest 2 */
    for (unsigned short i_8 = 1; i_8 < 18; i_8 += 1) 
    {
        for (unsigned int i_9 = 0; i_9 < 21; i_9 += 3) 
        {
            {
                var_25 -= ((/* implicit */short) -2120015477);
                var_26 = ((/* implicit */unsigned char) min((var_26), (((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)32))) > ((-9223372036854775807LL - 1LL)))))) + (((1073676288U) + (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))), ((((_Bool)1) ? (((/* implicit */unsigned long long int) -2120015477)) : (9262365138694788758ULL))))))));
                var_27 ^= ((/* implicit */unsigned int) ((unsigned long long int) ((((/* implicit */int) (signed char)66)) >= (((/* implicit */int) var_11)))));
                var_28 = ((/* implicit */signed char) max((((((/* implicit */int) var_11)) & (((/* implicit */int) var_9)))), (((/* implicit */int) ((1509256897U) <= (var_10))))));
            }
        } 
    } 
    var_29 = ((/* implicit */unsigned char) var_3);
    var_30 = ((/* implicit */signed char) max((((/* implicit */int) ((((/* implicit */unsigned long long int) -1678925935067625757LL)) <= (18446744073709551609ULL)))), (((((/* implicit */int) ((unsigned char) var_4))) + (((/* implicit */int) (unsigned char)56))))));
}
