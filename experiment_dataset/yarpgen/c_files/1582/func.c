/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1582
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1582 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1582
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
    var_13 = ((/* implicit */signed char) max((min((var_12), (((/* implicit */long long int) var_0)))), (var_8)));
    var_14 = ((/* implicit */unsigned char) ((long long int) var_1));
    var_15 = ((/* implicit */int) (((!(((/* implicit */_Bool) ((short) var_5))))) ? (18446744073709551604ULL) : (((/* implicit */unsigned long long int) var_8))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        arr_2 [i_0] |= ((/* implicit */unsigned char) (!(((((/* implicit */long long int) ((/* implicit */int) var_4))) < (arr_1 [i_0])))));
        arr_3 [(unsigned char)17] = ((/* implicit */long long int) ((signed char) var_6));
    }
    for (unsigned short i_1 = 0; i_1 < 15; i_1 += 4) 
    {
        var_16 = ((/* implicit */short) var_9);
        arr_8 [i_1] = ((/* implicit */unsigned short) ((((int) arr_7 [i_1])) % (((/* implicit */int) var_0))));
        /* LoopNest 3 */
        for (unsigned int i_2 = 1; i_2 < 13; i_2 += 1) 
        {
            for (int i_3 = 2; i_3 < 13; i_3 += 3) 
            {
                for (unsigned long long int i_4 = 0; i_4 < 15; i_4 += 3) 
                {
                    {
                        var_17 = ((/* implicit */int) var_2);
                        var_18 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) 3586538302U)) : (arr_1 [i_2]))) >> (((min((var_2), (((/* implicit */unsigned long long int) var_8)))) - (10629447069006284882ULL))))))));
                        arr_18 [i_1] [i_1] [i_3] [i_4] [i_4] [i_3] = ((/* implicit */_Bool) var_4);
                        var_19 -= ((/* implicit */_Bool) min((max(((~(0ULL))), (((/* implicit */unsigned long long int) arr_0 [i_3 - 1] [i_2 + 1])))), (((/* implicit */unsigned long long int) min((min((var_5), (var_6))), (((/* implicit */long long int) arr_10 [i_4] [i_1])))))));
                    }
                } 
            } 
        } 
        var_20 = ((/* implicit */_Bool) min((((var_2) * (((/* implicit */unsigned long long int) arr_17 [i_1] [i_1] [i_1] [i_1])))), (((/* implicit */unsigned long long int) max((((arr_14 [i_1] [(signed char)3] [(signed char)3]) / (((/* implicit */long long int) 3586538302U)))), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_1] [i_1] [i_1]))) : (var_6))))))));
    }
}
