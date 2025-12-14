/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145990
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145990 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145990
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
    var_12 = ((/* implicit */short) var_1);
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */int) ((((/* implicit */_Bool) 18446744073709551615ULL)) && (((/* implicit */_Bool) var_8))))), (((((/* implicit */_Bool) 179042615)) ? (179042615) : (var_9)))))) ? (arr_1 [i_0]) : (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (((unsigned long long int) arr_0 [i_0]))))));
        arr_3 [i_0] = ((/* implicit */short) ((_Bool) 0ULL));
    }
    /* LoopNest 2 */
    for (unsigned short i_1 = 0; i_1 < 13; i_1 += 4) 
    {
        for (signed char i_2 = 0; i_2 < 13; i_2 += 1) 
        {
            {
                arr_10 [i_1] [i_2] [i_1] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) arr_6 [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) arr_8 [i_1])), (arr_6 [i_2]))))) : (((long long int) arr_8 [i_2])))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_8))))));
                arr_11 [i_2] [i_2] [5] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (arr_1 [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)28985)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)448)) << (((arr_5 [i_2]) - (1139622462657953957LL)))))) : (1ULL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) (~(((/* implicit */int) arr_7 [i_2]))))) > (((long long int) arr_8 [(short)1])))))) : (max((((unsigned int) var_6)), (((/* implicit */unsigned int) arr_6 [i_2]))))));
                arr_12 [i_1] &= ((/* implicit */long long int) ((unsigned short) ((unsigned int) arr_9 [i_1])));
                /* LoopNest 2 */
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    for (long long int i_4 = 0; i_4 < 13; i_4 += 1) 
                    {
                        {
                            var_13 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [(unsigned short)0])) ? (16877856007880034398ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)448)))))) ? (((var_6) & (((/* implicit */unsigned long long int) min((arr_13 [i_1] [i_2] [i_3] [i_3]), (var_1)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))));
                            arr_17 [i_1] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */unsigned short) min((arr_1 [i_2]), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)65088)) || (((/* implicit */_Bool) var_3)))))) <= ((+(5714729511320685323ULL))))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
