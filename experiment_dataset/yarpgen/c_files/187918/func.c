/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187918
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187918 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187918
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
    var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) var_7))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 2; i_0 < 21; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    var_18 = ((/* implicit */long long int) (short)18424);
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (signed char i_3 = 2; i_3 < 23; i_3 += 4) 
                    {
                        arr_8 [i_2] [i_1] [i_2] [i_3] [i_3] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) var_16))) | (arr_6 [i_3] [i_1] [i_0 - 2] [i_0 + 3])));
                        arr_9 [i_2] [i_1] [i_2 - 1] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_12))))) ? (8388607ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)21548)))));
                        arr_10 [i_2] [i_1] [i_2 - 1] [i_3 + 1] = ((/* implicit */long long int) (-(((/* implicit */int) var_13))));
                    }
                    /* vectorizable */
                    for (unsigned int i_4 = 0; i_4 < 24; i_4 += 3) 
                    {
                        var_19 = ((/* implicit */signed char) (((+(var_10))) / (((/* implicit */long long int) arr_11 [i_0 + 3]))));
                        var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) (-(arr_11 [i_2 - 1]))))));
                        arr_14 [i_2] [(_Bool)1] [i_1] [(signed char)10] [i_1] = ((/* implicit */long long int) (+(((((/* implicit */int) (_Bool)1)) << (((((/* implicit */int) (short)-21540)) + (21564)))))));
                        var_21 *= ((((/* implicit */unsigned long long int) arr_11 [i_2 - 1])) < (17179869183ULL));
                    }
                    var_22 = ((/* implicit */unsigned short) arr_4 [i_2] [(unsigned short)21]);
                    arr_15 [i_0] [i_2] [i_0] [i_1] = ((/* implicit */_Bool) -7048130594667398048LL);
                    var_23 = ((/* implicit */unsigned short) (_Bool)1);
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((var_13) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -17LL)))))) : ((+(var_7)))))) ? (7ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (short)-21537))) < ((~(-17LL)))))))));
}
