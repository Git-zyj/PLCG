/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15654
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15654 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15654
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
    var_13 = ((/* implicit */unsigned char) var_3);
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 3) /* same iter space */
    {
        var_14 = ((/* implicit */long long int) ((unsigned short) (_Bool)0));
        var_15 *= ((/* implicit */signed char) ((((/* implicit */long long int) arr_1 [i_0])) >= (9223372036854775807LL)));
    }
    /* vectorizable */
    for (unsigned int i_1 = 0; i_1 < 19; i_1 += 3) /* same iter space */
    {
        var_16 = ((/* implicit */unsigned long long int) arr_2 [(signed char)6] [i_1]);
        arr_6 [i_1] = ((/* implicit */long long int) ((unsigned long long int) arr_5 [i_1]));
    }
    /* LoopNest 3 */
    for (unsigned short i_2 = 4; i_2 < 15; i_2 += 2) 
    {
        for (unsigned int i_3 = 0; i_3 < 16; i_3 += 1) 
        {
            for (unsigned short i_4 = 4; i_4 < 12; i_4 += 2) 
            {
                {
                    arr_15 [i_2] [i_3] [i_4] = ((/* implicit */short) ((arr_9 [i_2 - 2] [i_4 - 3]) | (((/* implicit */unsigned int) ((/* implicit */int) ((short) var_2))))));
                    /* LoopSeq 2 */
                    for (int i_5 = 3; i_5 < 14; i_5 += 1) 
                    {
                        var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) max((var_0), (((/* implicit */unsigned int) (short)-17697))))))) | (var_0))))));
                        var_18 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) var_3)), (((((/* implicit */_Bool) 1626446071)) ? (arr_16 [i_4 + 4] [i_5 - 3] [i_5] [i_5 + 2]) : (17885311229287470155ULL)))));
                    }
                    for (long long int i_6 = 1; i_6 < 15; i_6 += 1) 
                    {
                        var_19 = ((/* implicit */unsigned long long int) max((var_19), (var_10)));
                        var_20 = ((/* implicit */unsigned short) min((((/* implicit */short) ((unsigned char) arr_11 [i_6]))), (var_4)));
                        arr_20 [i_3] = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) 262143U)) && (((/* implicit */_Bool) 2147483647))))) <= (((/* implicit */int) ((_Bool) var_9)))))) & ((((((~(((/* implicit */int) (unsigned short)40831)))) + (2147483647))) >> (((975172159U) - (975172142U)))))));
                        arr_21 [i_2] [(unsigned char)6] [9U] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned short) (~(var_12))))) ? (((((long long int) var_11)) / (((/* implicit */long long int) ((/* implicit */int) ((short) 611835828)))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_2] [i_2] [i_2 + 1] [i_3] [i_4] [i_6 - 1]))))))));
                        arr_22 [i_3] = ((/* implicit */short) var_10);
                    }
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((int) var_2))) : (var_10)))) ? (((/* implicit */long long int) min((((var_9) >> (((((/* implicit */int) (signed char)116)) - (102))))), (((/* implicit */unsigned int) var_4))))) : (var_12)));
    var_22 = ((unsigned long long int) ((((/* implicit */unsigned long long int) var_3)) ^ (min((((/* implicit */unsigned long long int) var_3)), (var_10)))));
}
