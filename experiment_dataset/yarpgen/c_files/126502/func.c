/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126502
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126502 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126502
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
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 3) 
            {
                {
                    var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((max((((/* implicit */unsigned int) var_8)), (2406975481U))), ((-(2406975479U)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)52))) : (var_13)))) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1]))))) : (((((long long int) arr_11 [(unsigned short)10] [i_0])) / (((/* implicit */long long int) (-(var_16))))))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 1; i_3 < 21; i_3 += 3) 
                    {
                        for (unsigned int i_4 = 3; i_4 < 21; i_4 += 3) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_7 [16LL] [16LL] [i_4])) : (var_5)))))) ? (max((((/* implicit */int) (signed char)117)), (1369220185))) : (((((var_5) <= (((/* implicit */int) var_8)))) ? (((/* implicit */int) arr_8 [i_4 + 1] [i_4 - 2] [i_4 + 1])) : (max((1369220203), (((/* implicit */int) var_0)))))))))));
                                arr_16 [i_3] [(signed char)20] [i_2] [i_1] [i_3] = arr_12 [i_0] [i_1] [i_1] [13];
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */long long int) ((((unsigned int) ((var_2) ^ (((/* implicit */int) var_9))))) << (((((unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) var_16)) : (var_3)))) - (18446744072914110491ULL)))));
    /* LoopSeq 1 */
    for (long long int i_5 = 0; i_5 < 21; i_5 += 2) 
    {
        var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_5] [i_5] [i_5] [i_5])) ? (arr_2 [i_5]) : (arr_2 [i_5])))) ? (((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)24151))))) : (((((/* implicit */_Bool) arr_2 [i_5])) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (var_10)))));
        var_21 = ((/* implicit */short) (-(((/* implicit */int) max((((/* implicit */short) arr_15 [i_5] [i_5] [i_5] [1LL] [i_5])), ((short)-12692))))));
    }
    var_22 = ((/* implicit */int) ((((/* implicit */_Bool) var_16)) ? (var_13) : (8944643950427301713LL)));
}
