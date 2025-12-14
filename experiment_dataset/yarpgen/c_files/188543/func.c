/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188543
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188543 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188543
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
    var_19 = ((/* implicit */signed char) min((((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-44))) < (var_5)))) % (((((/* implicit */_Bool) (signed char)-46)) ? (var_15) : (((/* implicit */int) (unsigned char)67))))))), (((((/* implicit */_Bool) var_10)) ? (var_17) : (((/* implicit */long long int) -1329881470))))));
    var_20 = ((/* implicit */int) (short)15838);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                arr_7 [i_1] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) var_9)) ? (max((arr_3 [i_0]), (((/* implicit */int) min(((short)7509), (((/* implicit */short) (unsigned char)67))))))) : (((/* implicit */int) min((((/* implicit */unsigned char) (signed char)-46)), (arr_1 [i_0] [i_1]))))));
                arr_8 [i_0] [i_1] [i_1] = ((((/* implicit */int) ((-293556210) == (((/* implicit */int) var_4))))) >> (((/* implicit */int) ((arr_6 [i_1]) == (arr_6 [i_0])))));
                var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) max((((/* implicit */int) (signed char)46)), (arr_3 [i_1])))) ? (((/* implicit */int) max(((short)15832), (arr_0 [5U] [i_1])))) : (((((/* implicit */_Bool) (short)-15838)) ? (((/* implicit */int) (unsigned char)63)) : (((/* implicit */int) (signed char)-46)))))) : (((/* implicit */int) ((signed char) (signed char)113)))));
                arr_9 [i_0] [i_1] = ((((/* implicit */unsigned int) ((/* implicit */int) min(((short)15824), ((short)-15825))))) - (2359852736U));
                arr_10 [i_0] = ((/* implicit */short) ((((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_1])) ? (((/* implicit */int) arr_4 [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_4 [i_0] [i_0] [i_1])))) ^ (((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) arr_4 [i_0] [i_0] [i_0])) : (((/* implicit */int) (unsigned short)1089))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (int i_2 = 0; i_2 < 14; i_2 += 1) 
    {
        var_22 *= ((/* implicit */int) (unsigned short)0);
        var_23 = ((((((/* implicit */int) var_7)) * (((/* implicit */int) arr_4 [i_2] [i_2] [i_2])))) ^ (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)47798))) > (8460852282566992148ULL)))));
    }
}
