/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174938
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174938 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174938
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
    /* LoopNest 3 */
    for (unsigned char i_0 = 4; i_0 < 12; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 14; i_2 += 1) 
            {
                {
                    arr_10 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */long long int) arr_8 [i_0 + 2] [i_1] [i_2] [i_1])), (var_16)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)64))))) ? (min((((/* implicit */unsigned int) arr_8 [i_0] [i_1] [i_1] [i_2])), (arr_7 [i_1] [(_Bool)1]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) (signed char)-1)))))))));
                    var_20 = ((/* implicit */unsigned short) arr_5 [i_2]);
                    var_21 ^= ((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) (~(11245865848434881709ULL)))))))));
                    var_22 = (i_1 % 2 == 0) ? (((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((((/* implicit */int) arr_3 [i_1])) + (2147483647))) << (((((/* implicit */int) (signed char)-1)) + (1)))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0 + 2] [i_0 + 2])) ? (((/* implicit */int) (signed char)-7)) : (((/* implicit */int) (signed char)-69))))))) ? (var_16) : (((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)47199))) <= (2014311959371141824LL)))) * (((/* implicit */int) ((var_3) > (((/* implicit */int) (signed char)77))))))))))) : (((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((((((/* implicit */int) arr_3 [i_1])) - (2147483647))) + (2147483647))) << (((((/* implicit */int) (signed char)-1)) + (1)))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0 + 2] [i_0 + 2])) ? (((/* implicit */int) (signed char)-7)) : (((/* implicit */int) (signed char)-69))))))) ? (var_16) : (((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)47199))) <= (2014311959371141824LL)))) * (((/* implicit */int) ((var_3) > (((/* implicit */int) (signed char)77)))))))))));
                }
            } 
        } 
    } 
    var_23 -= ((/* implicit */signed char) min(((((!(((/* implicit */_Bool) 9223372036854775807LL)))) ? (var_16) : (((/* implicit */long long int) var_6)))), (((/* implicit */long long int) ((unsigned char) -288883564)))));
    var_24 = ((/* implicit */unsigned long long int) var_1);
    /* LoopSeq 1 */
    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
    {
        var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((min((((/* implicit */unsigned short) arr_12 [i_3 + 1])), ((unsigned short)38455))), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_17))))))))) : (((((/* implicit */_Bool) ((arr_12 [i_3]) ? (var_16) : (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_3])))))) ? (((unsigned long long int) -288883564)) : (var_18)))));
        var_26 = ((-202088406) >= (((/* implicit */int) var_5)));
    }
}
