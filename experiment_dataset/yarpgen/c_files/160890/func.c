/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160890
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160890 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160890
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
    var_16 = 10086804383929463224ULL;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 2; i_2 < 22; i_2 += 4) 
                {
                    for (unsigned int i_3 = 1; i_3 < 21; i_3 += 1) 
                    {
                        {
                            var_17 += ((/* implicit */long long int) (!(((/* implicit */_Bool) max((311530285176724475LL), (((16777215LL) / (arr_6 [i_0] [i_0] [12LL] [i_0]))))))));
                            var_18 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_8), (var_4)))) ? (((arr_6 [i_0] [i_1] [0LL] [0LL]) << (((arr_7 [i_0] [i_2]) - (7610985927863767183ULL))))) : (((/* implicit */long long int) (~(((/* implicit */int) arr_4 [i_0] [i_0] [23LL])))))))) ? (((/* implicit */unsigned long long int) arr_2 [i_3] [i_1])) : (((((/* implicit */_Bool) arr_3 [i_3 + 2])) ? (arr_3 [i_3 + 3]) : (((/* implicit */unsigned long long int) 311530285176724476LL))))));
                        }
                    } 
                } 
                arr_9 [11ULL] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((var_5) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0])))))) ? (((/* implicit */unsigned long long int) ((((18446744073709551614ULL) == (((/* implicit */unsigned long long int) arr_0 [i_1])))) ? (((((((/* implicit */int) (signed char)-1)) + (2147483647))) << (((/* implicit */int) arr_1 [i_1])))) : (((/* implicit */int) var_2))))) : (((max((arr_7 [i_0] [(unsigned char)0]), (arr_3 [i_0]))) + (((/* implicit */unsigned long long int) ((int) 5916162257701177152ULL)))))));
            }
        } 
    } 
}
