/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188270
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188270 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188270
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
    var_17 = ((/* implicit */int) var_14);
    var_18 = ((/* implicit */unsigned short) var_13);
    /* LoopSeq 4 */
    for (unsigned char i_0 = 2; i_0 < 24; i_0 += 2) 
    {
        var_19 -= ((/* implicit */short) ((((((/* implicit */int) max(((short)-32624), (((/* implicit */short) var_14))))) > (((((/* implicit */_Bool) 17770393282893578804ULL)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (signed char)21)))))) ? (((((((/* implicit */_Bool) var_3)) ? (676350790815972812ULL) : (((/* implicit */unsigned long long int) arr_1 [i_0])))) / (((/* implicit */unsigned long long int) (+(2862196387U)))))) : (((/* implicit */unsigned long long int) ((arr_1 [i_0 + 1]) ^ (min((arr_1 [(signed char)1]), (((/* implicit */long long int) var_15)))))))));
        var_20 ^= ((/* implicit */unsigned long long int) min((max((((/* implicit */unsigned int) var_4)), (arr_0 [i_0 - 1] [i_0 - 1]))), (((arr_0 [i_0 - 2] [i_0 - 2]) + (((/* implicit */unsigned int) ((/* implicit */int) (signed char)13)))))));
        /* LoopSeq 1 */
        for (unsigned int i_1 = 1; i_1 < 24; i_1 += 2) 
        {
            var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)45631)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)14317))) : (676350790815972811ULL))))));
            arr_5 [(short)1] [i_1] [i_1] = ((/* implicit */unsigned int) max((((min((((/* implicit */unsigned long long int) arr_2 [i_0])), (var_5))) << (((arr_1 [i_0]) + (1654725589014797002LL))))), (((/* implicit */unsigned long long int) ((long long int) 7002947152468545217LL)))));
            arr_6 [(_Bool)1] [i_1] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_11))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0 - 2]))) >= (9895503958309735712ULL))))) : (var_16)));
        }
    }
    for (long long int i_2 = 2; i_2 < 8; i_2 += 2) 
    {
        arr_9 [i_2] = ((/* implicit */long long int) ((unsigned long long int) min((arr_2 [i_2 + 1]), (((/* implicit */short) var_14)))));
        arr_10 [i_2] = ((/* implicit */unsigned int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) ((var_12) >= (var_16))))) / (var_10))) ^ (((/* implicit */unsigned long long int) (~(((/* implicit */int) max((var_8), (((/* implicit */short) (_Bool)0))))))))));
    }
    /* vectorizable */
    for (unsigned int i_3 = 3; i_3 < 8; i_3 += 2) 
    {
        var_22 *= ((/* implicit */_Bool) ((((/* implicit */int) (signed char)-10)) + (((/* implicit */int) var_1))));
        var_23 = ((/* implicit */signed char) (!(((/* implicit */_Bool) 1432770908U))));
    }
    for (unsigned char i_4 = 1; i_4 < 16; i_4 += 2) 
    {
        var_24 = ((unsigned long long int) (+(arr_16 [i_4] [i_4])));
        arr_17 [i_4] = ((/* implicit */unsigned long long int) 3577688315U);
    }
    var_25 &= ((/* implicit */short) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) : (((((/* implicit */_Bool) var_4)) ? (max((18446744073709551590ULL), (var_9))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13)))))));
}
