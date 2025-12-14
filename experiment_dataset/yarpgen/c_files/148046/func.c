/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148046
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148046 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148046
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 3 */
        for (signed char i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            var_13 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_1 [i_1]))));
            arr_7 [i_0] [i_0 - 1] [i_1] = (-((~(((/* implicit */int) arr_1 [i_0 - 1])))));
            arr_8 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (var_11) : (arr_0 [i_0 - 1] [i_0 - 1])));
            arr_9 [i_0 - 1] [i_0 - 1] = ((/* implicit */short) arr_3 [20ULL]);
        }
        for (long long int i_2 = 0; i_2 < 22; i_2 += 3) 
        {
            arr_13 [i_2] = ((/* implicit */_Bool) (+(-686855902169975880LL)));
            arr_14 [i_2] [i_2] [(_Bool)1] = ((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) - (arr_12 [i_0 - 1] [i_0 - 1]));
        }
        for (long long int i_3 = 0; i_3 < 22; i_3 += 1) 
        {
            arr_18 [i_0 - 1] = (~(((/* implicit */int) var_1)));
            arr_19 [i_0] [i_0] = ((/* implicit */int) arr_2 [i_0] [i_0 - 1]);
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 22; i_4 += 2) 
            {
                for (long long int i_5 = 0; i_5 < 22; i_5 += 2) 
                {
                    {
                        var_14 = ((/* implicit */long long int) (~(((/* implicit */int) arr_24 [i_0 - 1] [i_3] [i_4] [(unsigned char)10]))));
                        var_15 = ((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_3] [i_0])))))));
                        var_16 = (~(((/* implicit */int) var_5)));
                    }
                } 
            } 
        }
        arr_25 [i_0] = (-(var_2));
    }
    for (unsigned char i_6 = 1; i_6 < 10; i_6 += 1) 
    {
        var_17 = ((/* implicit */unsigned long long int) (+(var_12)));
        var_18 *= ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) min((arr_28 [(unsigned char)6]), (((/* implicit */unsigned short) arr_20 [i_6 - 1] [i_6 + 1] [i_6 + 1] [i_6])))))) >= (arr_16 [(unsigned short)15] [i_6] [i_6])));
        arr_29 [i_6 + 1] [i_6 - 1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_6 - 1])) ? (var_4) : (((/* implicit */int) arr_4 [i_6 - 1])))))));
    }
    var_19 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) var_1)))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_10))))) : ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-15709))) : (6952999986228725515ULL)))))));
    var_20 = ((/* implicit */unsigned long long int) var_10);
}
