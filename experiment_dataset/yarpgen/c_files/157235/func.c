/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157235
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157235 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157235
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
    var_11 = ((/* implicit */int) var_4);
    var_12 = ((/* implicit */int) var_5);
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (unsigned short i_1 = 1; i_1 < 21; i_1 += 4) 
        {
            for (long long int i_2 = 1; i_2 < 23; i_2 += 4) 
            {
                {
                    var_13 = ((/* implicit */int) (~(((((/* implicit */_Bool) (unsigned char)243)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)49429))) : (-1LL)))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (signed char i_3 = 0; i_3 < 24; i_3 += 4) 
                    {
                        var_14 = (((~(((/* implicit */int) (_Bool)1)))) > (((/* implicit */int) (signed char)113)));
                        var_15 = ((/* implicit */int) (+(arr_1 [i_1 + 3] [i_1 + 2])));
                    }
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) ((signed char) ((max((((/* implicit */unsigned int) var_5)), (arr_4 [i_0]))) > (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))))));
                        var_17 = ((/* implicit */short) (+(((/* implicit */int) ((((((/* implicit */long long int) ((/* implicit */int) arr_13 [(signed char)2] [i_0] [(short)20] [i_2] [i_4]))) % (arr_7 [i_0] [i_1 + 1] [i_2]))) > (((/* implicit */long long int) (+(((/* implicit */int) var_7))))))))));
                    }
                    var_18 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_8 [i_1 + 3] [i_2] [i_2 - 1] [i_2]))));
                }
            } 
        } 
    } 
}
