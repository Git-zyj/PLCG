/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150657
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150657 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150657
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
    var_12 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) var_5)) ? ((~(((/* implicit */int) (_Bool)1)))) : (var_6))) : (((/* implicit */int) var_2))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 3) /* same iter space */
    {
        var_13 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_2))))) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_1 [6U])) : (((/* implicit */int) arr_2 [i_0] [i_0])))) : (((/* implicit */int) var_9))));
        var_14 = ((/* implicit */signed char) (-(((/* implicit */int) (unsigned short)52042))));
    }
    for (unsigned short i_1 = 0; i_1 < 13; i_1 += 3) /* same iter space */
    {
        var_15 = ((/* implicit */unsigned int) (_Bool)0);
        var_16 = ((/* implicit */int) max((((/* implicit */unsigned long long int) arr_3 [(_Bool)1] [(_Bool)1])), (7749564418931843653ULL)));
        var_17 = ((/* implicit */unsigned short) (-(min((((/* implicit */unsigned long long int) arr_6 [i_1])), (var_5)))));
    }
    for (unsigned short i_2 = 0; i_2 < 13; i_2 += 3) /* same iter space */
    {
        /* LoopSeq 2 */
        for (unsigned short i_3 = 0; i_3 < 13; i_3 += 3) 
        {
            var_18 -= ((((/* implicit */_Bool) (-(1233810771U)))) ? (arr_7 [10U]) : (((/* implicit */unsigned long long int) var_6)));
            var_19 = ((/* implicit */signed char) (unsigned short)65535);
            /* LoopNest 3 */
            for (unsigned short i_4 = 1; i_4 < 9; i_4 += 1) 
            {
                for (unsigned long long int i_5 = 0; i_5 < 13; i_5 += 4) 
                {
                    for (unsigned short i_6 = 4; i_6 < 10; i_6 += 4) 
                    {
                        {
                            var_20 = ((/* implicit */_Bool) var_2);
                            var_21 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) 18446744073709551611ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : ((~(18446744073709551615ULL)))));
                            var_22 = ((/* implicit */unsigned long long int) var_2);
                        }
                    } 
                } 
            } 
        }
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            var_23 += ((/* implicit */signed char) (!(((/* implicit */_Bool) min((arr_0 [i_2] [i_7]), (arr_0 [i_2] [i_2]))))));
            var_24 = arr_9 [(_Bool)1] [(_Bool)1] [(_Bool)1];
            var_25 = ((/* implicit */signed char) var_2);
        }
        var_26 = ((/* implicit */unsigned long long int) arr_6 [i_2]);
        var_27 = ((/* implicit */unsigned short) 1025057261U);
    }
    var_28 = ((/* implicit */int) ((((/* implicit */_Bool) var_7)) ? (1233810771U) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))));
}
