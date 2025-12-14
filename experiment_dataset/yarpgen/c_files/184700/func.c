/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184700
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184700 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184700
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
    var_10 = ((/* implicit */unsigned long long int) var_0);
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 20; i_2 += 4) 
            {
                {
                    var_11 -= ((/* implicit */short) ((int) arr_6 [i_1] [i_2]));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 1; i_3 < 18; i_3 += 4) 
                    {
                        for (int i_4 = 1; i_4 < 19; i_4 += 4) 
                        {
                            {
                                arr_15 [i_0] [i_0] [i_1] [i_0] [i_0] [i_0] [i_1] = ((/* implicit */unsigned int) ((((((/* implicit */unsigned long long int) ((var_3) / (arr_7 [i_3 - 1] [i_2] [i_1])))) - (((((/* implicit */_Bool) arr_13 [(_Bool)1] [(_Bool)1] [i_2] [i_3] [i_3] [i_3 - 1])) ? (7711559247455232733ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_2] [i_2] [i_2] [i_2] [(short)5] [i_2]))))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))));
                                arr_16 [i_4 + 1] [i_2] [i_3 + 2] [i_2] [i_2] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (var_3) : (arr_10 [i_4 - 1] [i_3] [i_2] [i_1] [i_0])))) ? ((+(7711559247455232733ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)113))) - (-9LL)))))));
                            }
                        } 
                    } 
                    arr_17 [i_0] [i_1] [i_2] = ((/* implicit */unsigned int) ((694593024032280343ULL) >> (((((((/* implicit */_Bool) 18446744073709551611ULL)) ? (((/* implicit */int) arr_9 [i_2] [i_1] [17U])) : (((/* implicit */int) var_4)))) | (((/* implicit */int) ((var_0) && (((/* implicit */_Bool) arr_3 [i_0])))))))));
                    arr_18 [i_2] [i_0] = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) 7711559247455232734ULL)) ? (((/* implicit */int) (unsigned short)33523)) : (((/* implicit */int) (unsigned char)67)))), (2147483639)));
                }
            } 
        } 
    } 
}
