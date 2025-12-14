/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147324
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147324 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147324
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (long long int i_0 = 1; i_0 < 13; i_0 += 2) /* same iter space */
    {
        arr_3 [i_0] = (unsigned short)22383;
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            var_12 = ((/* implicit */signed char) min((var_12), (((/* implicit */signed char) (~(((/* implicit */int) var_6)))))));
            var_13 = ((/* implicit */long long int) (~(((/* implicit */int) arr_2 [i_1]))));
            var_14 = ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)22383))))) ? (((/* implicit */int) arr_6 [i_0 - 1] [i_0 - 1] [i_0])) : ((-(((/* implicit */int) arr_1 [i_0])))));
        }
        var_15 = ((((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0 - 1]))) ^ (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)43155))) | (var_9))));
        arr_7 [i_0] = ((/* implicit */unsigned long long int) arr_0 [i_0]);
        var_16 = ((1609548212) | (((/* implicit */int) (_Bool)1)));
    }
    /* vectorizable */
    for (long long int i_2 = 1; i_2 < 13; i_2 += 2) /* same iter space */
    {
        arr_11 [i_2] = ((/* implicit */_Bool) ((((/* implicit */int) arr_5 [i_2 - 1])) & ((~(((/* implicit */int) arr_6 [i_2] [i_2] [i_2]))))));
        var_17 = ((/* implicit */short) (-(((/* implicit */int) (unsigned short)43153))));
        var_18 |= ((/* implicit */long long int) var_7);
        var_19 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (unsigned short)47340)))))));
        var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) ((arr_10 [i_2]) ? (((/* implicit */int) arr_9 [i_2 + 1] [i_2 + 1])) : (((1609548212) - (((/* implicit */int) (unsigned char)84)))))))));
    }
    /* vectorizable */
    for (long long int i_3 = 1; i_3 < 13; i_3 += 2) /* same iter space */
    {
        arr_15 [i_3] = ((/* implicit */long long int) ((((/* implicit */int) (signed char)39)) * (((/* implicit */int) (unsigned short)22383))));
        var_21 = ((/* implicit */unsigned short) ((((var_3) >> (((var_3) - (17202762853967658086ULL))))) << (((((/* implicit */int) arr_1 [i_3 - 1])) + (60)))));
    }
    var_22 = ((/* implicit */_Bool) max((var_22), ((_Bool)1)));
    /* LoopNest 3 */
    for (unsigned short i_4 = 0; i_4 < 10; i_4 += 3) 
    {
        for (short i_5 = 0; i_5 < 10; i_5 += 2) 
        {
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                {
                    var_23 = ((/* implicit */int) (unsigned char)15);
                    var_24 = (+(((/* implicit */int) (unsigned short)0)));
                }
            } 
        } 
    } 
    var_25 = ((/* implicit */unsigned char) min(((unsigned short)22383), ((unsigned short)22383)));
}
