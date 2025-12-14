/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167168
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167168 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167168
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
    var_14 = ((/* implicit */short) var_13);
    /* LoopSeq 4 */
    /* vectorizable */
    for (signed char i_0 = 2; i_0 < 19; i_0 += 4) 
    {
        var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)17))))) ? (arr_0 [(unsigned short)16]) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [(signed char)11]))))))));
        arr_3 [(unsigned short)0] = ((/* implicit */unsigned short) var_9);
        arr_4 [(unsigned short)13] = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(var_2)))) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_12))))));
        arr_5 [4LL] = ((/* implicit */int) (!(arr_2 [i_0 + 2])));
    }
    for (unsigned char i_1 = 2; i_1 < 15; i_1 += 4) 
    {
        var_16 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) max((131071U), (((/* implicit */unsigned int) (unsigned char)217))))) ? (((/* implicit */int) arr_6 [(short)8])) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_2 [(_Bool)1])) : (((/* implicit */int) arr_7 [(short)1])))))) >> ((+(min((arr_0 [18LL]), (((/* implicit */long long int) (_Bool)1))))))));
        arr_8 [12U] = ((((/* implicit */_Bool) max((min(((short)-3605), (((/* implicit */short) (_Bool)1)))), (((/* implicit */short) arr_2 [(short)15]))))) ? (((/* implicit */int) arr_2 [13])) : (((/* implicit */int) arr_6 [(short)0])));
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        var_17 = ((/* implicit */unsigned int) (+((+(((arr_2 [12U]) ? (((/* implicit */int) arr_1 [2ULL] [(short)5])) : (((/* implicit */int) arr_10 [4U]))))))));
        var_18 = ((_Bool) 306991270);
        arr_11 [(unsigned short)13] = ((/* implicit */_Bool) var_9);
    }
    for (short i_3 = 1; i_3 < 11; i_3 += 4) 
    {
        arr_14 [0U] = ((/* implicit */short) (-(((arr_13 [i_3 - 1] [(_Bool)1]) ? (((/* implicit */int) arr_13 [i_3 - 1] [(short)4])) : (((/* implicit */int) arr_13 [i_3 + 2] [(unsigned short)4]))))));
        var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) (((_Bool)1) ? (((/* implicit */int) (unsigned char)237)) : (((/* implicit */int) (_Bool)1)))))));
        var_20 = (((_Bool)1) ? (((((/* implicit */int) arr_1 [(short)2] [i_3 + 2])) << (((/* implicit */int) arr_2 [12])))) : (((/* implicit */int) (unsigned char)37)));
    }
    var_21 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) (_Bool)1)), (2232865411435197984ULL)));
    /* LoopNest 3 */
    for (unsigned char i_4 = 4; i_4 < 21; i_4 += 2) 
    {
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            for (unsigned char i_6 = 0; i_6 < 22; i_6 += 2) 
            {
                {
                    var_22 *= ((/* implicit */short) (!(((/* implicit */_Bool) arr_16 [i_4 - 2]))));
                    var_23 = ((/* implicit */unsigned int) var_1);
                    /* LoopNest 2 */
                    for (unsigned int i_7 = 0; i_7 < 22; i_7 += 1) 
                    {
                        for (unsigned long long int i_8 = 0; i_8 < 22; i_8 += 3) 
                        {
                            {
                                arr_26 [1LL] [(_Bool)1] [7LL] [(unsigned short)18] [(_Bool)1] [i_8] [(unsigned short)12] = ((/* implicit */unsigned short) ((long long int) arr_18 [i_4 + 1]));
                                var_24 = ((/* implicit */long long int) (+(max((((((/* implicit */_Bool) (short)-1617)) ? (((/* implicit */int) (unsigned short)65535)) : (arr_15 [16LL]))), (((/* implicit */int) arr_17 [i_4 - 1] [i_4 - 1]))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
