/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105259
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105259 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105259
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
    var_17 = ((((/* implicit */int) (signed char)-96)) * (((((/* implicit */_Bool) (~(-1219907148640420687LL)))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned char)133)) == (((/* implicit */int) var_16))))) : ((+(((/* implicit */int) var_1)))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (short i_1 = 3; i_1 < 18; i_1 += 2) 
        {
            {
                arr_7 [i_1] = ((/* implicit */unsigned char) arr_6 [i_0] [i_1 + 1]);
                var_18 &= (~(-1219907148640420690LL));
                /* LoopNest 2 */
                for (short i_2 = 3; i_2 < 18; i_2 += 4) 
                {
                    for (short i_3 = 0; i_3 < 19; i_3 += 3) 
                    {
                        {
                            var_19 = ((/* implicit */signed char) (unsigned char)195);
                            /* LoopSeq 1 */
                            for (signed char i_4 = 0; i_4 < 19; i_4 += 1) 
                            {
                                var_20 = ((/* implicit */long long int) ((max((((/* implicit */unsigned long long int) var_8)), (arr_8 [i_1 - 3] [i_1] [i_2 - 1]))) == (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) ((short) -1219907148640420668LL)))) : (arr_13 [i_1] [(short)17] [i_1 - 1] [(_Bool)1] [i_1] [i_1 + 1]))))));
                                var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) ((((((/* implicit */int) (signed char)-64)) + (2147483647))) >> ((((+((~(1219907148640420711LL))))) + (1219907148640420730LL))))))));
                            }
                        }
                    } 
                } 
                arr_15 [i_1] = ((/* implicit */short) ((unsigned char) (signed char)-38));
            }
        } 
    } 
    var_22 = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)-50)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)21))) : (288230341791973376LL)));
    /* LoopNest 3 */
    for (short i_5 = 1; i_5 < 9; i_5 += 4) 
    {
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            for (short i_7 = 0; i_7 < 10; i_7 += 4) 
            {
                {
                    var_23 = ((/* implicit */_Bool) ((unsigned char) (~(((/* implicit */int) ((unsigned char) 13925702390023005617ULL))))));
                    arr_22 [i_5] [i_5] [i_7] [i_5 - 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)40)) ? (-1219907148640420666LL) : (1219907148640420668LL)));
                    var_24 = ((/* implicit */unsigned long long int) (+(((((((/* implicit */int) arr_21 [i_5 + 1] [(unsigned char)5])) + (2147483647))) << (((((((/* implicit */int) arr_21 [i_5 - 1] [(_Bool)1])) + (136))) - (23)))))));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (short i_8 = 0; i_8 < 10; i_8 += 4) 
    {
        var_25 |= ((/* implicit */signed char) ((unsigned char) ((((/* implicit */int) (signed char)35)) >= (((/* implicit */int) (short)-9)))));
        arr_25 [(short)7] = ((/* implicit */unsigned long long int) ((short) ((((/* implicit */_Bool) (signed char)-88)) || (((/* implicit */_Bool) var_13)))));
        var_26 = ((/* implicit */unsigned char) min((((/* implicit */long long int) var_11)), (((((/* implicit */_Bool) -9223372036854775798LL)) ? (min((8742221619244735122LL), (1219907148640420642LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_23 [i_8])))))));
    }
}
