/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102765
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102765 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102765
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
    var_13 = ((/* implicit */long long int) min((var_13), (((/* implicit */long long int) var_11))));
    var_14 = var_8;
    /* LoopSeq 3 */
    for (signed char i_0 = 1; i_0 < 19; i_0 += 2) 
    {
        var_15 = ((/* implicit */int) min((var_15), (((/* implicit */int) (((+(((((/* implicit */_Bool) arr_0 [i_0])) ? (5257205776544334135ULL) : (var_4))))) ^ ((-(((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (arr_0 [i_0]))))))))));
        arr_3 [i_0] = ((/* implicit */unsigned char) arr_0 [i_0 - 1]);
        var_16 |= ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) arr_2 [12] [i_0 + 1])) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_0 + 1])))))));
    }
    for (unsigned char i_1 = 2; i_1 < 15; i_1 += 3) 
    {
        arr_7 [(unsigned short)10] [(unsigned short)10] |= ((/* implicit */int) -3239286951420102704LL);
        var_17 = ((/* implicit */int) ((unsigned char) ((unsigned short) arr_1 [i_1 - 2])));
        var_18 = ((/* implicit */unsigned char) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))));
        var_19 = ((/* implicit */unsigned short) ((int) ((unsigned long long int) (unsigned char)97)));
    }
    /* vectorizable */
    for (int i_2 = 2; i_2 < 12; i_2 += 2) 
    {
        /* LoopSeq 3 */
        for (short i_3 = 1; i_3 < 14; i_3 += 2) 
        {
            var_20 -= ((/* implicit */unsigned long long int) var_5);
            var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_2 + 2] [i_2 + 1])) ? (((((/* implicit */_Bool) arr_6 [i_3] [i_3])) ? (var_4) : (((/* implicit */unsigned long long int) 3864503823U)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))));
            var_22 = ((/* implicit */unsigned long long int) arr_10 [i_2 + 1]);
        }
        for (unsigned int i_4 = 1; i_4 < 15; i_4 += 1) 
        {
            arr_17 [i_4 + 1] [(_Bool)1] [(short)7] = ((/* implicit */unsigned int) ((signed char) arr_13 [i_4] [i_4 - 1] [i_4]));
            var_23 |= ((((/* implicit */_Bool) arr_11 [i_2] [i_4])) ? (((/* implicit */int) arr_8 [i_2])) : (var_11));
        }
        for (short i_5 = 1; i_5 < 15; i_5 += 1) 
        {
            var_24 = ((/* implicit */short) ((((/* implicit */int) var_3)) >> (((((/* implicit */int) arr_8 [3U])) - (59572)))));
            arr_21 [i_2] [i_5] [i_2] = ((/* implicit */unsigned long long int) arr_8 [i_5 - 1]);
            /* LoopNest 2 */
            for (short i_6 = 0; i_6 < 16; i_6 += 2) 
            {
                for (unsigned char i_7 = 4; i_7 < 15; i_7 += 1) 
                {
                    {
                        var_25 -= ((/* implicit */_Bool) ((((/* implicit */unsigned int) (+(var_8)))) | (((((/* implicit */_Bool) 430463472U)) ? (var_6) : (((/* implicit */unsigned int) arr_12 [i_5]))))));
                        var_26 = ((/* implicit */unsigned long long int) max((var_26), (((/* implicit */unsigned long long int) var_7))));
                        var_27 = ((/* implicit */unsigned short) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))));
                        arr_26 [i_7] [i_7] [i_7] [i_7 + 1] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_10 [i_5 + 1])) ? (((/* implicit */int) arr_10 [i_5 - 1])) : (((/* implicit */int) arr_10 [i_5 - 1]))));
                    }
                } 
            } 
            arr_27 [i_2] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)-101)) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) (short)-32750))));
        }
        var_28 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_3)) ? (var_12) : (var_11)))));
        arr_28 [i_2] [i_2] = ((/* implicit */_Bool) var_6);
        var_29 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_19 [i_2 - 2] [i_2 + 4])) ? (((/* implicit */long long int) var_5)) : (arr_19 [i_2 - 2] [i_2 + 2])));
        arr_29 [(_Bool)1] = ((/* implicit */long long int) ((arr_0 [i_2 + 4]) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_2 + 3])))));
    }
    var_30 |= ((/* implicit */int) var_7);
}
