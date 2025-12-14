/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184163
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184163 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184163
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
    for (signed char i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */short) max(((!(((/* implicit */_Bool) -8165591561558254713LL)))), (((18446744073709551615ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [i_0])))))));
        /* LoopNest 2 */
        for (unsigned int i_1 = 3; i_1 < 18; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                {
                    var_11 = ((/* implicit */short) ((_Bool) arr_7 [i_0] [i_2]));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 22; i_3 += 4) 
                    {
                        for (int i_4 = 1; i_4 < 21; i_4 += 2) 
                        {
                            {
                                var_12 = ((/* implicit */signed char) (+((+(((/* implicit */int) ((signed char) arr_0 [i_0] [i_0])))))));
                                arr_17 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [19] = ((/* implicit */unsigned long long int) (~(8165591561558254713LL)));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_13 += ((/* implicit */long long int) ((((/* implicit */int) ((signed char) ((short) arr_10 [i_0] [i_0] [2ULL] [i_0] [i_0])))) >= ((+(((/* implicit */int) (signed char)-79))))));
        var_14 ^= arr_16 [i_0] [i_0] [i_0] [14ULL] [i_0] [14ULL] [14ULL];
        var_15 *= (!(((/* implicit */_Bool) 1076628562)));
    }
    for (unsigned int i_5 = 0; i_5 < 23; i_5 += 4) 
    {
        var_16 ^= ((/* implicit */long long int) max((((((/* implicit */_Bool) 18014772230539652281ULL)) ? (((/* implicit */unsigned long long int) -8165591561558254697LL)) : (14609271357365736267ULL))), (((/* implicit */unsigned long long int) ((unsigned short) ((long long int) arr_18 [i_5]))))));
        arr_20 [i_5] = ((/* implicit */signed char) ((long long int) min((18014772230539652281ULL), (((/* implicit */unsigned long long int) (signed char)-120)))));
        var_17 = ((/* implicit */_Bool) (-(((/* implicit */int) arr_18 [i_5]))));
        arr_21 [i_5] = ((/* implicit */long long int) (~(arr_19 [10LL])));
        arr_22 [i_5] = ((/* implicit */long long int) max(((~(1495611931))), ((~(arr_19 [i_5])))));
    }
    var_18 = ((/* implicit */signed char) var_3);
    var_19 = ((/* implicit */signed char) (((~(((unsigned long long int) -8165591561558254697LL)))) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))));
}
