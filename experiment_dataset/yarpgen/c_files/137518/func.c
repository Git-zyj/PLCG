/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137518
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137518 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137518
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
    var_20 += ((/* implicit */long long int) ((((/* implicit */_Bool) (~(min((15434365155565580002ULL), (((/* implicit */unsigned long long int) var_12))))))) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255)))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        arr_3 [i_0] |= ((((/* implicit */_Bool) 0)) ? (((/* implicit */unsigned long long int) 16383U)) : (4389796691425317944ULL));
        var_21 += ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_2 [i_0] [3]))))) ? (((/* implicit */int) arr_2 [i_0] [i_0])) : ((~(((/* implicit */int) (unsigned char)9))))));
        var_22 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_13)) ? ((+(((/* implicit */int) var_9)))) : (((/* implicit */int) (unsigned short)48944))));
        var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) ((long long int) 12895116940959533542ULL)))));
    }
    for (unsigned long long int i_1 = 1; i_1 < 19; i_1 += 4) 
    {
        arr_6 [6LL] &= (!(((/* implicit */_Bool) 16385U)));
        var_24 ^= ((/* implicit */signed char) max((4389796691425317944ULL), (((/* implicit */unsigned long long int) arr_2 [i_1 - 1] [i_1 - 1]))));
        var_25 = ((/* implicit */unsigned long long int) max((var_25), (max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_2 [i_1 - 1] [i_1 - 1]))))), (((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)40))))) ? (min((((/* implicit */unsigned long long int) arr_0 [i_1] [i_1])), (arr_1 [i_1]))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)245)))))))))));
    }
    for (unsigned int i_2 = 2; i_2 < 21; i_2 += 4) 
    {
        var_26 = ((/* implicit */unsigned char) min((var_26), (arr_9 [i_2])));
        var_27 = ((/* implicit */unsigned char) min((var_27), (((/* implicit */unsigned char) (((+(arr_10 [i_2 + 1]))) * (((/* implicit */unsigned long long int) (+((~(((/* implicit */int) (unsigned char)245))))))))))));
        var_28 += ((/* implicit */_Bool) (+(((/* implicit */int) (short)17803))));
        var_29 = ((/* implicit */unsigned long long int) min((var_29), (((max((arr_10 [i_2]), (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_1))))))) & (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)227)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned short)65535)))))))));
    }
    /* vectorizable */
    for (unsigned long long int i_3 = 0; i_3 < 11; i_3 += 2) 
    {
        var_30 = ((/* implicit */unsigned short) max((var_30), (((/* implicit */unsigned short) (+((+(((/* implicit */int) (signed char)120)))))))));
        var_31 = ((/* implicit */unsigned short) min((var_31), (((/* implicit */unsigned short) ((var_7) > (((/* implicit */int) (unsigned char)39)))))));
    }
    /* LoopSeq 1 */
    for (unsigned int i_4 = 1; i_4 < 21; i_4 += 4) 
    {
        arr_17 [(unsigned short)4] |= ((/* implicit */unsigned char) var_4);
        var_32 = ((/* implicit */long long int) min((var_32), (((/* implicit */long long int) arr_15 [i_4 - 1] [i_4 + 1]))));
        arr_18 [(_Bool)1] |= ((/* implicit */long long int) (-((((+(((/* implicit */int) (unsigned short)65524)))) - (((/* implicit */int) (unsigned char)215))))));
        var_33 ^= ((/* implicit */long long int) ((((unsigned long long int) (~(((/* implicit */int) (unsigned char)140))))) < (((6604502488366941371ULL) % (((arr_15 [i_4 - 1] [i_4]) >> (((var_3) - (11270163328093351634ULL)))))))));
    }
}
