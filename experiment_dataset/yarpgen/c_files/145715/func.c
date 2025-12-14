/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145715
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145715 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145715
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
    for (long long int i_0 = 1; i_0 < 22; i_0 += 2) 
    {
        var_15 = arr_2 [i_0 - 1] [i_0 + 2];
        var_16 = ((/* implicit */long long int) arr_2 [i_0 + 1] [i_0 + 1]);
        arr_3 [i_0] [i_0] = ((/* implicit */int) ((((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) / (arr_1 [12LL] [15U]))) - (arr_1 [(unsigned short)14] [i_0 - 1])));
    }
    for (unsigned short i_1 = 3; i_1 < 12; i_1 += 2) 
    {
        var_17 = ((/* implicit */_Bool) min((var_8), (((((/* implicit */_Bool) var_11)) ? (arr_6 [i_1] [(unsigned short)8]) : (arr_6 [i_1] [i_1 - 2])))));
        var_18 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) var_13)) <= (5392656140464453362LL))))) <= (18446744073709551608ULL)));
        var_19 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)24182))) / (((((/* implicit */_Bool) (((_Bool)1) ? (2008338032) : (((/* implicit */int) var_9))))) ? (8ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))));
    }
    /* LoopSeq 1 */
    for (int i_2 = 0; i_2 < 19; i_2 += 4) 
    {
        arr_9 [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) arr_0 [i_2])), (2903134722U)))) * (var_11)))) || (((/* implicit */_Bool) arr_0 [i_2]))));
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 19; i_3 += 3) 
        {
            for (unsigned short i_4 = 0; i_4 < 19; i_4 += 1) 
            {
                for (unsigned char i_5 = 0; i_5 < 19; i_5 += 4) 
                {
                    {
                        arr_21 [i_2] [5ULL] [i_2] [i_5] [i_5] [9ULL] = ((/* implicit */short) ((unsigned char) ((((arr_2 [i_2] [i_4]) & (0))) < (var_12))));
                        var_20 = ((/* implicit */short) (((((!(((/* implicit */_Bool) var_3)))) ? (((/* implicit */int) ((unsigned char) arr_19 [i_2]))) : (((/* implicit */int) (!(((/* implicit */_Bool) 0ULL))))))) * (360459853)));
                        arr_22 [i_2] [i_2] [(_Bool)1] [(_Bool)1] [i_2] = max((((/* implicit */long long int) var_7)), (((((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (arr_19 [i_3]) : (((/* implicit */int) (_Bool)1))))) & (arr_15 [i_2] [i_3] [i_4] [i_5]))));
                        arr_23 [i_2] [i_5] = ((/* implicit */unsigned char) arr_18 [i_4] [i_4]);
                    }
                } 
            } 
        } 
    }
}
