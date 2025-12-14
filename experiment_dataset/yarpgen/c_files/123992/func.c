/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123992
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123992 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123992
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 1; i_0 < 7; i_0 += 4) 
    {
        for (unsigned int i_1 = 2; i_1 < 8; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                {
                    arr_7 [i_1] [i_0] [i_2] [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)0))) : (6447580551555243990ULL))) != (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) min(((unsigned short)59046), ((unsigned short)6481))))))))));
                    arr_8 [i_2] [i_2] [i_2] = ((((((/* implicit */_Bool) arr_3 [i_1])) ? (min((((/* implicit */unsigned long long int) var_10)), (var_3))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)0))) : (var_1)))))) >> (((((((/* implicit */_Bool) arr_1 [i_0 + 1])) ? (((var_0) | (var_6))) : (((/* implicit */long long int) var_8)))) + (4630027654924369985LL))));
                    arr_9 [i_2] &= ((/* implicit */long long int) arr_3 [i_0]);
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned long long int i_3 = 0; i_3 < 11; i_3 += 1) 
    {
        arr_13 [i_3] [i_3] = ((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)24724))));
        arr_14 [i_3] = ((/* implicit */unsigned long long int) ((long long int) -1322930944));
        arr_15 [i_3] [i_3] = ((/* implicit */unsigned long long int) arr_11 [i_3] [i_3]);
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 11; i_4 += 3) 
        {
            for (long long int i_5 = 0; i_5 < 11; i_5 += 3) 
            {
                {
                    arr_21 [i_3] [i_3] [i_5] [i_5] = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)40811)) * (((/* implicit */int) (short)31396))))) ? (((/* implicit */unsigned long long int) ((int) (short)31396))) : (arr_16 [i_3] [i_3])))));
                    arr_22 [(unsigned short)4] = ((/* implicit */int) ((((/* implicit */long long int) ((unsigned int) (short)31388))) == (((long long int) min((8403251858739035648ULL), (((/* implicit */unsigned long long int) var_10)))))));
                }
            } 
        } 
    }
}
