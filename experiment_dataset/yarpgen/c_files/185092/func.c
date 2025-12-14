/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185092
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185092 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185092
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
    var_10 = ((/* implicit */int) max((var_10), (((/* implicit */int) (((+(((/* implicit */int) min(((unsigned short)43949), (((/* implicit */unsigned short) (_Bool)1))))))) >= (((/* implicit */int) var_9)))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        arr_3 [i_0] |= ((/* implicit */signed char) var_5);
        var_11 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) var_3)) : (var_4)))));
        var_12 = ((/* implicit */short) min((var_12), (((/* implicit */short) (-(var_0))))));
    }
    for (short i_1 = 0; i_1 < 10; i_1 += 3) 
    {
        var_13 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((var_4) - (((/* implicit */long long int) var_0)))), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)33551)) ? (((/* implicit */int) (unsigned short)31988)) : (((/* implicit */int) (unsigned short)31985)))))))) ? (((((/* implicit */_Bool) ((int) (unsigned short)32004))) ? (max((((/* implicit */unsigned int) (unsigned short)41326)), (3850063117U))) : (((unsigned int) var_7)))) : (((/* implicit */unsigned int) min((((((/* implicit */int) var_6)) >> (((var_8) - (8332525359022105486LL))))), (max((var_0), (((/* implicit */int) var_9)))))))));
        arr_7 [i_1] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) var_9)))))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (var_8))) : (((/* implicit */long long int) (+((~(var_1))))))));
        var_14 = ((/* implicit */int) (((+(((/* implicit */int) (unsigned short)24211)))) <= (((((/* implicit */int) var_6)) & (((/* implicit */int) var_6))))));
    }
    var_15 += ((/* implicit */unsigned short) max((((((/* implicit */_Bool) max((-1584362145), (((/* implicit */int) (unsigned short)41322))))) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) var_9))))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) var_2)))))) : (min((var_1), (((/* implicit */unsigned int) var_3)))))))));
    /* LoopSeq 1 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        arr_10 [i_2] [i_2] &= ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)31984)) ? (((/* implicit */int) (unsigned short)32009)) : (((/* implicit */int) (unsigned short)41331))));
        var_16 ^= var_0;
        var_17 = ((/* implicit */short) max((var_17), (min((((/* implicit */short) ((signed char) var_8))), (max(((short)32767), (((/* implicit */short) (unsigned char)135))))))));
    }
    var_18 = var_8;
}
