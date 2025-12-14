/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180722
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180722 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180722
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
    var_12 = ((/* implicit */unsigned long long int) min((var_12), (((/* implicit */unsigned long long int) ((short) min((((((/* implicit */_Bool) (signed char)89)) ? (8338735633984226194LL) : (((/* implicit */long long int) ((/* implicit */int) var_6))))), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)17214)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_6)))))))))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) ((short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) > (arr_1 [i_0] [i_0]))));
        var_13 = ((/* implicit */int) ((long long int) (+(arr_1 [i_0] [i_0]))));
        var_14 = ((/* implicit */unsigned char) max((var_14), (((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) min((8338735633984226181LL), (((/* implicit */long long int) (unsigned char)225))))), ((~(arr_1 [i_0] [i_0])))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (arr_1 [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32767))))))))) : (((/* implicit */int) (((!(((/* implicit */_Bool) 8338735633984226194LL)))) || (((/* implicit */_Bool) min((arr_1 [i_0] [i_0]), (((/* implicit */unsigned long long int) arr_0 [i_0] [i_0])))))))))))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 4) 
    {
        var_15 = ((/* implicit */_Bool) max((((unsigned long long int) min(((short)-13174), (var_2)))), (((/* implicit */unsigned long long int) (-(arr_4 [i_1] [i_1]))))));
        /* LoopSeq 2 */
        for (long long int i_2 = 0; i_2 < 18; i_2 += 1) 
        {
            arr_9 [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) min((var_6), (var_7)))) ? (((/* implicit */int) ((unsigned char) (-2147483647 - 1)))) : (((/* implicit */int) ((((/* implicit */int) (unsigned char)25)) == (((/* implicit */int) arr_6 [i_1] [i_1] [i_1])))))));
            var_16 ^= ((/* implicit */unsigned int) ((min((((/* implicit */unsigned long long int) min((var_6), (var_6)))), (arr_5 [i_1]))) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))));
        }
        for (unsigned short i_3 = 3; i_3 < 17; i_3 += 3) 
        {
            arr_13 [i_1] = ((/* implicit */long long int) (-(((unsigned long long int) ((((/* implicit */_Bool) 11810003213076822674ULL)) ? (2147483647) : (arr_4 [i_1] [i_1]))))));
            var_17 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((unsigned short) (unsigned short)48515))), (min((4294967291U), (var_8)))))) + (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_7)), (arr_5 [i_1])))) ? ((+(6636740860632728941ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)77)) ? (1017962005U) : (((/* implicit */unsigned int) 655225133)))))))));
        }
        arr_14 [i_1] = ((/* implicit */unsigned int) ((((long long int) arr_3 [i_1])) / (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1])))));
    }
    var_18 += ((/* implicit */short) var_4);
}
