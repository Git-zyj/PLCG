/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164839
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164839 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164839
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
    for (short i_0 = 2; i_0 < 18; i_0 += 3) 
    {
        arr_3 [(_Bool)1] |= ((/* implicit */_Bool) max((((((/* implicit */int) arr_2 [i_0 - 2])) / (((/* implicit */int) arr_2 [i_0 - 2])))), (((/* implicit */int) min(((unsigned char)43), (((/* implicit */unsigned char) (signed char)95)))))));
        var_15 = ((/* implicit */int) arr_1 [i_0]);
        arr_4 [5] [i_0] = ((/* implicit */long long int) arr_0 [i_0 + 1]);
    }
    /* LoopNest 3 */
    for (long long int i_1 = 3; i_1 < 23; i_1 += 1) 
    {
        for (int i_2 = 0; i_2 < 24; i_2 += 1) 
        {
            for (unsigned short i_3 = 0; i_3 < 24; i_3 += 1) 
            {
                {
                    var_16 = ((/* implicit */_Bool) max((((/* implicit */long long int) (unsigned char)61)), (-1841702674074828790LL)));
                    var_17 = ((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_10 [i_1] [i_2] [i_3])))) < (905206254153355931LL));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (short i_4 = 2; i_4 < 21; i_4 += 1) 
                    {
                        var_18 = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_5 [9]))) >= (var_10)))) >> (((((var_9) ? (((/* implicit */int) arr_5 [(unsigned char)23])) : (var_0))) + (1152591356)))));
                        var_19 = ((/* implicit */long long int) (~((+(arr_15 [i_1] [(unsigned char)5] [i_3] [(unsigned char)5])))));
                        var_20 -= ((/* implicit */int) 144115188075855871LL);
                    }
                    for (unsigned char i_5 = 4; i_5 < 21; i_5 += 4) /* same iter space */
                    {
                        var_21 = ((/* implicit */long long int) ((((((/* implicit */int) arr_18 [i_1] [i_1] [i_1] [i_2])) >> (((arr_17 [(signed char)17] [(short)8] [(signed char)17] [i_5 + 1]) - (439589475))))) >> (((((arr_17 [i_1] [i_2] [i_1] [i_5]) >> (((((/* implicit */int) (unsigned char)52)) - (44))))) - (1717140)))));
                        var_22 = ((/* implicit */unsigned int) (+(((/* implicit */int) var_4))));
                    }
                    for (unsigned char i_6 = 4; i_6 < 21; i_6 += 4) /* same iter space */
                    {
                        var_23 = ((/* implicit */int) var_14);
                        arr_21 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) ((unsigned char) (~(((((/* implicit */int) var_7)) >> (((67645734912LL) - (67645734903LL))))))));
                        arr_22 [i_1] [i_1] = ((((/* implicit */_Bool) (unsigned short)54883)) ? (-7171533946929949135LL) : (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */unsigned int) -2008275539)) : (((unsigned int) (unsigned short)2047))))));
                    }
                }
            } 
        } 
    } 
    var_24 = ((((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) + (min((((long long int) var_0)), (((/* implicit */long long int) ((27906142) <= (0)))))));
}
