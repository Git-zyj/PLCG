/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129736
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129736 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129736
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
    for (short i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 10; i_3 += 3) 
                    {
                        for (long long int i_4 = 0; i_4 < 10; i_4 += 1) 
                        {
                            {
                                var_13 = ((/* implicit */unsigned short) arr_2 [i_0]);
                                var_14 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((arr_3 [i_0] [i_2] [i_2]) - (arr_3 [i_3] [i_1] [i_1])))) * (((min(((_Bool)1), ((_Bool)1))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_3]))) : (((((/* implicit */_Bool) var_9)) ? (arr_10 [i_0] [i_1] [i_2] [i_2] [i_4]) : (((/* implicit */unsigned long long int) arr_11 [i_0] [i_0] [i_0] [i_4]))))))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (signed char i_5 = 0; i_5 < 10; i_5 += 3) 
                    {
                        arr_16 [i_0] [(unsigned short)2] [i_2] [(unsigned short)2] = ((/* implicit */long long int) ((max(((_Bool)1), ((_Bool)0))) || ((_Bool)1)));
                        arr_17 [i_5] [i_2] [(_Bool)1] [(_Bool)1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [(short)9])) ? (((((/* implicit */_Bool) arr_9 [i_0] [i_5] [1LL] [i_5])) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) var_0)) : (var_11))) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_2]))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_1])) ? (425669265) : (((/* implicit */int) arr_13 [i_0] [i_0] [i_2] [i_1] [i_0] [(signed char)4])))))));
                        arr_18 [i_0] [i_0] [i_1] [i_2] [i_2] [i_5] = ((/* implicit */short) arr_6 [i_0] [i_0] [i_0]);
                    }
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_6 = 0; i_6 < 15; i_6 += 2) 
    {
        for (long long int i_7 = 0; i_7 < 15; i_7 += 3) 
        {
            {
                arr_24 [i_7] = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)118))))) % (((/* implicit */int) (signed char)121))))) : ((+(18014398509481952ULL)))));
                var_15 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_2)), (arr_19 [i_6] [i_7])))) ? (max((arr_22 [i_7]), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)0))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)-8946))))) ? (((/* implicit */int) max((arr_20 [i_6]), (arr_20 [i_6])))) : (((/* implicit */int) max(((unsigned char)247), (((/* implicit */unsigned char) (signed char)118))))))))));
            }
        } 
    } 
}
