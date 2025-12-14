/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142701
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142701 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142701
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
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        var_12 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_4)) ? ((+(arr_1 [i_0]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_1 [i_0]))))));
        arr_4 [i_0] [5ULL] |= ((/* implicit */signed char) (+(-1534063602)));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 16; i_2 += 1) 
            {
                {
                    var_13 |= ((/* implicit */unsigned char) ((long long int) ((((/* implicit */_Bool) -1534063602)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_1)))));
                    var_14 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) (-(var_3)))) ? (((var_9) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (var_3))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1] [i_2])))))));
                }
            } 
        } 
    }
    /* LoopSeq 2 */
    for (unsigned long long int i_3 = 0; i_3 < 19; i_3 += 3) 
    {
        var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) (!(((/* implicit */_Bool) min((2305843009213693952LL), (((/* implicit */long long int) arr_13 [14ULL] [14ULL]))))))))));
        var_16 -= ((((/* implicit */unsigned int) ((/* implicit */int) var_10))) * (((((/* implicit */_Bool) min((((/* implicit */short) arr_11 [12LL])), ((short)-12684)))) ? (((var_9) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) var_7))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) var_1)))))));
    }
    for (unsigned int i_4 = 3; i_4 < 8; i_4 += 1) 
    {
        arr_18 [i_4] = ((/* implicit */int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_17 [i_4 + 1])) : (((/* implicit */int) var_1))))), (max((((/* implicit */unsigned int) var_0)), (((((/* implicit */_Bool) 2305843009213693952LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (var_2)))))));
        var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(-1534063602)))) ? ((+(var_3))) : (((/* implicit */unsigned int) min(((+(((/* implicit */int) (short)12684)))), (((/* implicit */int) arr_14 [16LL])))))));
        var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) var_3))));
        var_19 = ((((/* implicit */_Bool) (-((-(((/* implicit */int) var_0))))))) ? (min(((+(((/* implicit */int) var_10)))), ((+(((/* implicit */int) var_7)))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (short)29695))))) ? (((((/* implicit */_Bool) var_3)) ? (-1534063602) : (((/* implicit */int) var_8)))) : (((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) (short)-17697)) : (((/* implicit */int) var_5)))))));
    }
    var_20 = ((/* implicit */short) (-(-1534063602)));
}
