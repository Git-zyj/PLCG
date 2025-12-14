/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152326
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152326 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152326
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
    var_10 = ((/* implicit */signed char) max((var_10), (((/* implicit */signed char) var_4))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (unsigned short i_1 = 3; i_1 < 22; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 1; i_2 < 19; i_2 += 3) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 23; i_3 += 3) 
                    {
                        {
                            var_11 += ((/* implicit */unsigned char) arr_2 [i_0] [i_1 - 1] [i_3]);
                            var_12 -= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) max((((((/* implicit */long long int) 4294967295U)) / (arr_1 [i_0]))), (((/* implicit */long long int) ((8596782853650671621LL) < (arr_1 [i_3]))))))) % (10235574948293418328ULL)));
                            var_13 ^= ((/* implicit */unsigned short) arr_0 [i_2 - 1] [18ULL]);
                            var_14 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_4 [i_0] [i_1 + 1] [i_2 - 1] [3U])) ? (arr_4 [i_1] [i_1 - 2] [i_2 + 3] [i_2]) : (arr_4 [16] [i_1 + 1] [i_2 + 2] [i_2]))) - (((((/* implicit */_Bool) var_9)) ? (((arr_1 [i_3]) / (arr_0 [6] [i_0]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_8 [i_0])) ? (285999064U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)16384))))))))));
                            arr_10 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((arr_6 [i_0]) + (2147483647))) << (((((((/* implicit */_Bool) (short)-16403)) ? (arr_9 [i_0] [i_1] [i_3]) : (((/* implicit */unsigned long long int) var_0)))) - (2294645073197149327ULL)))))) ? (((/* implicit */unsigned long long int) arr_7 [i_0] [i_0] [(signed char)21] [i_0] [i_0])) : (min((((((/* implicit */unsigned long long int) arr_0 [i_0] [i_0])) | (arr_5 [i_0] [(unsigned char)20] [i_0]))), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)16402))) : (var_8)))))));
                        }
                    } 
                } 
                var_15 = ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (min((((((/* implicit */_Bool) arr_8 [i_0])) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) (short)16406))))), (((/* implicit */long long int) max(((short)-16397), (((/* implicit */short) var_5))))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)-16415))))) ? (arr_6 [i_0]) : (((((/* implicit */int) (short)-16401)) ^ (arr_6 [i_0]))))))));
                /* LoopSeq 1 */
                for (unsigned int i_4 = 1; i_4 < 22; i_4 += 1) 
                {
                    arr_13 [i_0] = ((/* implicit */short) (_Bool)0);
                    arr_14 [i_0] [i_1] [3LL] = ((/* implicit */signed char) (-(((/* implicit */int) var_1))));
                    var_16 = ((/* implicit */short) max((arr_12 [i_4 + 1] [i_4] [i_4] [i_4 + 1]), (arr_12 [i_4 + 1] [i_4] [i_4] [i_4])));
                    var_17 = ((/* implicit */int) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (short)16414))))), (((((/* implicit */_Bool) arr_8 [i_0])) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
                }
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned long long int i_5 = 0; i_5 < 12; i_5 += 3) 
    {
        for (unsigned short i_6 = 0; i_6 < 12; i_6 += 3) 
        {
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                {
                    var_18 += ((/* implicit */signed char) ((int) max((((/* implicit */long long int) max((arr_17 [i_7]), (((/* implicit */unsigned short) (short)-16388))))), (var_0))));
                    var_19 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) (~(((int) arr_8 [(signed char)10]))))) & (min((min((13885687752332124705ULL), (((/* implicit */unsigned long long int) (short)16402)))), (((/* implicit */unsigned long long int) min(((short)16390), ((short)16408))))))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((long long int) min((var_3), (var_1))))) ? ((+(min((((/* implicit */unsigned int) var_3)), (368242950U))))) : (((/* implicit */unsigned int) ((/* implicit */int) max(((short)-16416), (((/* implicit */short) var_3))))))));
}
