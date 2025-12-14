/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143049
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143049 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143049
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
    var_18 = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) 796662555)) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 11047388145948062247ULL)))))) : (((((/* implicit */_Bool) -5040039271923228888LL)) ? (var_17) : (((/* implicit */long long int) ((/* implicit */int) var_4))))))), (min((max((5040039271923228887LL), (((/* implicit */long long int) 404260456)))), (((/* implicit */long long int) (short)4080))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            {
                var_19 = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)32))) : (arr_3 [i_1]))))))) << (((/* implicit */int) ((11047388145948062233ULL) >= (((/* implicit */unsigned long long int) -5040039271923228888LL)))))));
                var_20 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) / (min((((((/* implicit */_Bool) arr_3 [i_0])) ? (5040039271923228887LL) : (((/* implicit */long long int) ((/* implicit */int) var_1))))), (((/* implicit */long long int) ((((/* implicit */_Bool) -5040039271923228893LL)) ? (3414709028U) : (arr_4 [i_0] [i_1]))))))));
                var_21 = arr_4 [i_0] [i_0];
                arr_5 [i_0] [i_0] [i_0] = ((((/* implicit */_Bool) max((arr_4 [i_1] [i_0]), (((/* implicit */unsigned int) arr_0 [i_0] [i_0]))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((arr_3 [i_0]) - (arr_3 [i_1]))) >= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) : (var_15)))))))) : (((((/* implicit */_Bool) (-(((/* implicit */int) var_10))))) ? (((5040039271923228874LL) >> (((/* implicit */int) (_Bool)1)))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) -5040039271923228888LL)) && (((/* implicit */_Bool) var_2)))))))));
                var_22 *= ((/* implicit */unsigned int) ((short) arr_0 [i_0] [i_1]));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned short i_2 = 0; i_2 < 19; i_2 += 4) 
    {
        for (unsigned int i_3 = 0; i_3 < 19; i_3 += 3) 
        {
            for (unsigned int i_4 = 1; i_4 < 18; i_4 += 1) 
            {
                {
                    arr_14 [(short)10] = ((/* implicit */_Bool) ((((unsigned int) arr_10 [i_4 + 1])) & (((/* implicit */unsigned int) ((/* implicit */int) ((short) 11946979291258641713ULL))))));
                    var_23 = ((/* implicit */short) (+((-(-5040039271923228893LL)))));
                    arr_15 [i_2] [i_2] [3U] = ((/* implicit */unsigned int) ((signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_2] [i_3] [i_4])) ? (arr_11 [0U] [i_3] [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))))));
                    var_24 = ((/* implicit */unsigned int) min((var_24), (((/* implicit */unsigned int) -821256404))));
                    var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) max((((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)23925))) - (2936938906U)))) : (5040039271923228888LL))), (((/* implicit */long long int) max((((((/* implicit */_Bool) arr_9 [i_2] [i_3])) ? (arr_13 [i_3]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-1))))), (min((((/* implicit */unsigned int) arr_10 [i_4])), (var_15)))))))))));
                }
            } 
        } 
    } 
}
