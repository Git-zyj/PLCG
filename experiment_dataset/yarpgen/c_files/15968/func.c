/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15968
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15968 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15968
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
    var_15 = ((/* implicit */_Bool) min((var_15), ((!(((/* implicit */_Bool) min((7783895606898336611LL), (((/* implicit */long long int) (!(((/* implicit */_Bool) (signed char)127))))))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_16 ^= ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0 - 1] [i_0 - 1])) ? (arr_1 [i_0 - 1] [i_0 - 1]) : (3479628644U)));
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            arr_5 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_2 [i_1] [(signed char)4])) ? (((/* implicit */unsigned int) (+(((/* implicit */int) (short)-32744))))) : (var_0)));
            arr_6 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (short)4095)) : (((/* implicit */int) (_Bool)0))))) ? (((/* implicit */long long int) -2127725934)) : (((((/* implicit */_Bool) (signed char)15)) ? (((/* implicit */long long int) arr_4 [i_0] [i_0 - 1] [i_0])) : (var_7)))));
            var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) var_0))));
            var_18 = ((/* implicit */unsigned int) max((var_18), (815338659U)));
        }
        var_19 = ((/* implicit */unsigned int) min((var_19), (((((/* implicit */_Bool) (signed char)31)) ? (((/* implicit */unsigned int) (~(arr_4 [i_0] [i_0 - 1] [i_0])))) : (3855803124U)))));
        /* LoopSeq 2 */
        for (signed char i_2 = 3; i_2 < 13; i_2 += 1) 
        {
            var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) ((((/* implicit */int) (signed char)23)) / (-1328351765))))));
            var_21 = ((/* implicit */int) -1570370886525446148LL);
            var_22 = ((/* implicit */signed char) (~(arr_2 [i_0 - 1] [i_0 - 1])));
        }
        for (signed char i_3 = 1; i_3 < 11; i_3 += 1) 
        {
            var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) ((unsigned int) ((((/* implicit */long long int) ((/* implicit */int) var_2))) & (arr_9 [i_3 + 2])))))));
            var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)(-32767 - 1)))) : (54219615U)))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) var_3))))) : (((((/* implicit */_Bool) arr_10 [i_0] [(short)7] [i_0 - 1])) ? (((/* implicit */unsigned int) 1328351764)) : (arr_1 [i_0] [i_3])))));
            arr_12 [i_0] = ((((/* implicit */_Bool) var_0)) ? (arr_11 [i_3 - 1] [i_3]) : (arr_11 [i_3 + 2] [i_3 + 1]));
        }
        var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (1469001223U) : (var_0)))) ? (((/* implicit */int) ((((/* implicit */long long int) var_0)) < (arr_11 [i_0 - 1] [i_0])))) : (((/* implicit */int) arr_7 [i_0 - 1]))));
    }
    for (signed char i_4 = 2; i_4 < 17; i_4 += 2) 
    {
        var_26 -= max((((((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)4086)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (signed char)115))))) / (4240747672U))), (((((/* implicit */_Bool) min((arr_13 [i_4] [i_4]), (((/* implicit */unsigned char) var_2))))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) arr_13 [i_4] [i_4]))))) : (((((/* implicit */_Bool) arr_13 [i_4] [i_4])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_4]))) : (var_1))))));
        arr_15 [i_4] = ((/* implicit */unsigned long long int) (~(1570370886525446147LL)));
    }
}
