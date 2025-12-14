/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151815
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151815 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151815
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
    var_19 = ((/* implicit */_Bool) var_18);
    /* LoopSeq 4 */
    for (short i_0 = 1; i_0 < 9; i_0 += 1) 
    {
        var_20 = ((/* implicit */unsigned int) 0);
        arr_3 [i_0] [i_0] = min((((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0])))), (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0])))));
    }
    for (long long int i_1 = 2; i_1 < 19; i_1 += 1) 
    {
        arr_7 [i_1] [i_1 - 1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((28), (min((((/* implicit */int) (_Bool)0)), (0)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1]))) : (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */int) arr_5 [i_1])) : (var_15)))), (18446744073709551615ULL)))));
        arr_8 [i_1] = min((((((/* implicit */_Bool) arr_4 [i_1 - 2])) ? (((/* implicit */int) arr_5 [i_1 - 2])) : (((/* implicit */int) min((((/* implicit */short) (unsigned char)137)), ((short)12080)))))), (((/* implicit */int) (unsigned short)49394)));
    }
    for (signed char i_2 = 0; i_2 < 17; i_2 += 1) 
    {
        arr_11 [i_2] [i_2] = ((/* implicit */unsigned char) arr_10 [i_2]);
        arr_12 [i_2] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */int) (short)29592)), ((-2147483647 - 1))))) ? (min((((/* implicit */unsigned long long int) (unsigned char)227)), (15458748813592975705ULL))) : (((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) 2147483632)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (arr_4 [i_2])))))));
    }
    for (unsigned char i_3 = 1; i_3 < 15; i_3 += 3) 
    {
        var_21 = ((/* implicit */long long int) min((var_21), (max((((((/* implicit */_Bool) max((((/* implicit */short) arr_13 [(_Bool)1] [(_Bool)1])), (var_13)))) ? (arr_4 [i_3 - 1]) : (((/* implicit */long long int) max((-134477558), (((/* implicit */int) arr_14 [i_3] [i_3]))))))), (((/* implicit */long long int) (unsigned short)25000))))));
        arr_16 [i_3] [i_3] = ((/* implicit */int) var_12);
        arr_17 [i_3] [i_3] = ((/* implicit */int) max((((/* implicit */long long int) var_7)), ((~(min((((/* implicit */long long int) 2176494762U)), (-2571486117362769194LL)))))));
        arr_18 [i_3] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)49373))))) ? (((/* implicit */int) (short)-12074)) : (((/* implicit */int) (unsigned short)44849)))), (((/* implicit */int) ((unsigned char) var_8)))));
        arr_19 [i_3] [i_3 + 1] = ((/* implicit */int) ((unsigned char) max((arr_6 [i_3 + 1]), (((/* implicit */long long int) arr_9 [i_3 + 1] [i_3 + 1])))));
    }
    /* LoopNest 3 */
    for (unsigned short i_4 = 2; i_4 < 19; i_4 += 2) 
    {
        for (unsigned char i_5 = 1; i_5 < 22; i_5 += 2) 
        {
            for (short i_6 = 1; i_6 < 22; i_6 += 3) 
            {
                {
                    arr_29 [i_4 + 1] [i_4 + 3] [i_4] [i_4] = ((/* implicit */unsigned short) (+((~(((/* implicit */int) (unsigned short)49374))))));
                    var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) (+(min((((/* implicit */long long int) arr_21 [i_4 - 1])), (((long long int) arr_22 [i_4] [i_4])))))))));
                }
            } 
        } 
    } 
    var_23 &= ((/* implicit */_Bool) var_15);
}
