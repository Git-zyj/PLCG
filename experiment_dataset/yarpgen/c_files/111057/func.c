/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111057
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111057 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111057
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
    var_13 = ((/* implicit */signed char) var_5);
    /* LoopSeq 4 */
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        var_14 -= ((/* implicit */unsigned char) ((signed char) ((((/* implicit */int) arr_2 [i_0])) ^ (((/* implicit */int) arr_1 [i_0])))));
        var_15 += ((/* implicit */signed char) (((+(((/* implicit */int) arr_2 [i_0])))) & (((((/* implicit */int) ((((/* implicit */int) var_6)) == (((/* implicit */int) var_4))))) - ((-(((/* implicit */int) var_10))))))));
        var_16 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) var_6))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (arr_0 [i_0] [i_0]) : (arr_0 [i_0] [i_0])))) : (((((-7596223890146651653LL) + (9223372036854775807LL))) << (((var_12) - (852617983)))))));
    }
    for (unsigned long long int i_1 = 1; i_1 < 23; i_1 += 1) 
    {
        var_17 = ((/* implicit */_Bool) ((((/* implicit */int) (short)26679)) + (((/* implicit */int) (unsigned short)26841))));
        arr_6 [i_1] = ((/* implicit */unsigned char) var_9);
        arr_7 [i_1] [i_1] = ((/* implicit */signed char) ((((((/* implicit */int) arr_3 [i_1 + 2] [i_1])) > (((/* implicit */int) max((((/* implicit */unsigned short) var_3)), ((unsigned short)38694)))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)26841))))) : (((((arr_3 [i_1] [(unsigned short)0]) ? (var_8) : (((/* implicit */unsigned long long int) var_1)))) | (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) (signed char)-120)), ((unsigned short)27838)))))))));
    }
    for (int i_2 = 0; i_2 < 16; i_2 += 3) 
    {
        arr_10 [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) min(((unsigned short)38699), (((/* implicit */unsigned short) var_6))))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) ((((/* implicit */int) arr_1 [i_2])) != (((/* implicit */int) var_0)))))));
        var_18 = min((((((/* implicit */_Bool) arr_0 [i_2] [i_2])) ? (((/* implicit */unsigned int) var_12)) : (arr_0 [i_2] [i_2]))), (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)26841))))));
        var_19 += ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (signed char)127)) == (((/* implicit */int) arr_2 [i_2])))))) & (min((var_2), (((/* implicit */long long int) (unsigned short)38702)))));
        arr_11 [i_2] = ((/* implicit */long long int) max((((/* implicit */int) (short)9)), (((((/* implicit */int) arr_4 [i_2])) << (((((/* implicit */int) (unsigned char)48)) - (45)))))));
    }
    for (short i_3 = 1; i_3 < 20; i_3 += 4) 
    {
        var_20 = ((/* implicit */signed char) (-(((/* implicit */int) min((var_5), (arr_5 [i_3 + 2]))))));
        arr_15 [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(max((var_7), (var_7)))))) ? (((long long int) ((((/* implicit */_Bool) (signed char)-104)) || (((/* implicit */_Bool) arr_12 [20LL] [i_3]))))) : (min((((((/* implicit */long long int) ((/* implicit */int) var_11))) + (8058490008514559526LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_3)))))))));
        var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) max((((/* implicit */int) var_6)), (-1108655151)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) -1108655151)) ? (((/* implicit */int) (signed char)-107)) : (((/* implicit */int) (signed char)69))))))) ? (((((/* implicit */_Bool) ((arr_3 [i_3] [i_3]) ? (-1819038903) : (((/* implicit */int) var_11))))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1)))) : (var_7))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (short)8192)) ? (-2147483641) : (((/* implicit */int) (signed char)76))))))))));
    }
    var_22 = ((/* implicit */signed char) (short)(-32767 - 1));
}
