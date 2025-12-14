/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17642
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17642 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17642
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
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                var_10 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-((~(var_2)))))) ? (((((/* implicit */_Bool) ((((var_8) + (9223372036854775807LL))) >> (((arr_5 [i_1] [i_0]) + (5174997355589039025LL)))))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) 2021275246U)) : (var_5))) : (var_1))) : ((-(((((/* implicit */_Bool) -1LL)) ? (var_4) : (((/* implicit */long long int) var_7))))))));
                var_11 = ((/* implicit */long long int) (~((~(((/* implicit */int) (!(((/* implicit */_Bool) 576460752303423487LL)))))))));
                arr_6 [i_0] [i_0] [i_1] = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) -7572050855998594169LL)))) ? (((((((/* implicit */_Bool) var_3)) ? (arr_4 [i_0]) : (((/* implicit */long long int) var_7)))) / (arr_5 [i_0] [0LL]))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) -6644220588089222676LL)) ? (0LL) : (arr_4 [i_1])))) ? (((((/* implicit */_Bool) arr_5 [i_0] [i_0])) ? (arr_5 [i_0] [i_1]) : (arr_5 [i_0] [i_1]))) : (((6836282290616879919LL) / (((/* implicit */long long int) arr_1 [i_1] [i_0]))))))));
                var_12 = ((((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0])))))))) ^ ((~(var_8))));
                arr_7 [i_0] [i_0] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 7572050855998594176LL)) ? (((((/* implicit */_Bool) 5107936017589489522LL)) ? (((/* implicit */long long int) 2369910158U)) : (-7LL))) : (((/* implicit */long long int) ((/* implicit */int) ((8150781161671660079LL) > (5LL)))))))) ? (7572050855998594169LL) : (((/* implicit */long long int) 2320360509U)));
            }
        } 
    } 
    var_13 = var_4;
}
