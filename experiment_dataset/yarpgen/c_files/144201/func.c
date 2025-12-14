/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144201
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144201 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144201
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
    var_15 &= var_13;
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            {
                var_16 *= ((/* implicit */unsigned int) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */int) var_9)) : (arr_3 [i_1])))) != (((((-7991537035798849290LL) & (((/* implicit */long long int) arr_4 [i_0] [5LL])))) ^ (((/* implicit */long long int) arr_3 [(_Bool)1]))))));
                var_17 -= ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_2 [i_1])) : (arr_4 [14] [(_Bool)1]))) < (((/* implicit */int) ((7LL) == (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [i_0]))))))));
                var_18 &= ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)33)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)101))));
                var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-71)) ? (((/* implicit */int) (short)-19387)) : (var_14)))) ? (((((/* implicit */int) (signed char)0)) ^ (((/* implicit */int) (short)-19376)))) : (((((/* implicit */_Bool) (short)16477)) ? (919103003) : (((/* implicit */int) (_Bool)1))))));
            }
        } 
    } 
}
