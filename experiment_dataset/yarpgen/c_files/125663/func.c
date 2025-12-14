/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125663
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125663 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125663
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
    var_14 = ((/* implicit */long long int) min((((unsigned long long int) var_5)), (((/* implicit */unsigned long long int) 4294967294U))));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        arr_2 [6ULL] [i_0] &= ((/* implicit */unsigned int) ((unsigned short) arr_0 [i_0]));
        var_15 = ((/* implicit */signed char) 4294967292U);
        var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) min((min((((/* implicit */long long int) var_4)), (-2453196835831785391LL))), (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_1 [10ULL])), (arr_0 [i_0])))) ? (((/* implicit */long long int) 4294967294U)) : (((((/* implicit */long long int) 4294967294U)) / (279275953455104LL))))))))));
    }
    var_17 = ((/* implicit */int) max((min((((279275953455129LL) / (((/* implicit */long long int) 249174772U)))), (((/* implicit */long long int) (~(var_7)))))), (((((/* implicit */_Bool) -279275953455104LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)59))) : (((((/* implicit */_Bool) 4294967287U)) ? (3915211327892405001LL) : (((/* implicit */long long int) 5U))))))));
    /* LoopSeq 2 */
    for (int i_1 = 0; i_1 < 10; i_1 += 4) 
    {
        arr_5 [4ULL] = ((((((/* implicit */_Bool) arr_4 [i_1])) && (((/* implicit */_Bool) arr_4 [i_1])))) ? ((-(arr_0 [i_1]))) : (18446744073709551594ULL));
        var_18 = ((/* implicit */unsigned long long int) ((unsigned char) ((arr_0 [i_1]) < (((/* implicit */unsigned long long int) var_13)))));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 25; i_2 += 4) 
    {
        var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) ((int) arr_6 [i_2])))));
        /* LoopSeq 2 */
        for (unsigned int i_3 = 0; i_3 < 25; i_3 += 4) 
        {
            var_20 -= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((var_5) + (arr_7 [i_2]))))));
            arr_12 [i_2] = ((/* implicit */short) arr_10 [24ULL] [i_3]);
            arr_13 [i_2] [i_3] = ((/* implicit */short) (-(arr_9 [i_2] [i_3] [i_3])));
            arr_14 [i_2] [i_2] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (var_13))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)142)))));
        }
        for (long long int i_4 = 0; i_4 < 25; i_4 += 4) 
        {
            var_21 |= ((/* implicit */unsigned int) (((+(8726341564753523219LL))) % (((/* implicit */long long int) (+(((/* implicit */int) var_2)))))));
            var_22 += ((/* implicit */short) ((((/* implicit */int) (unsigned short)62774)) < (((/* implicit */int) var_1))));
            arr_18 [i_4] [i_2] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) arr_7 [i_4])) ? (((/* implicit */int) var_12)) : ((+(((/* implicit */int) var_11))))));
        }
        arr_19 [23LL] [23LL] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (arr_7 [i_2])))) ? (((var_5) + (((/* implicit */unsigned long long int) 4045792524U)))) : (((/* implicit */unsigned long long int) (-(var_10))))));
        /* LoopNest 3 */
        for (unsigned short i_5 = 1; i_5 < 23; i_5 += 4) 
        {
            for (unsigned int i_6 = 0; i_6 < 25; i_6 += 4) 
            {
                for (unsigned short i_7 = 0; i_7 < 25; i_7 += 4) 
                {
                    {
                        arr_26 [i_2] [i_2] [i_2] [i_2] = ((arr_11 [i_5 + 2] [i_5 + 2]) | (((/* implicit */long long int) ((/* implicit */int) ((9ULL) >= (3426736790437463046ULL))))));
                        var_23 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) 18446744073709551602ULL)) ? (((/* implicit */int) arr_20 [i_5 + 2] [i_5 + 1])) : (((/* implicit */int) ((((/* implicit */_Bool) arr_24 [i_2] [i_5 + 1] [i_7] [i_2] [11] [i_2])) || (((/* implicit */_Bool) arr_23 [22ULL] [i_5 + 2] [i_7])))))));
                        arr_27 [(unsigned short)7] [(_Bool)1] [(short)4] &= ((/* implicit */int) ((unsigned long long int) arr_9 [i_6] [10LL] [i_6]));
                        var_24 -= ((/* implicit */_Bool) var_1);
                    }
                } 
            } 
        } 
    }
}
