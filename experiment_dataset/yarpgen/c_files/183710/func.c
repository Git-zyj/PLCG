/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183710
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183710 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183710
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
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 15; i_0 += 4) 
    {
        for (unsigned short i_1 = 2; i_1 < 16; i_1 += 4) 
        {
            for (unsigned char i_2 = 1; i_2 < 16; i_2 += 3) 
            {
                {
                    arr_7 [i_2] [i_1] [i_1] [i_0] &= ((/* implicit */long long int) ((unsigned long long int) min((1633765242U), (((/* implicit */unsigned int) arr_6 [i_1] [i_1 + 1] [i_1])))));
                    arr_8 [i_1] [i_1] [i_2 + 3] &= ((/* implicit */_Bool) var_14);
                    var_17 = ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((var_16), (((/* implicit */unsigned int) var_11))))) ? (((/* implicit */int) (unsigned short)45118)) : (((((/* implicit */int) (_Bool)0)) + (((/* implicit */int) (unsigned short)0))))))) : ((-(var_15))));
                    var_18 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) max((arr_2 [i_0] [i_0] [i_0]), (((/* implicit */unsigned long long int) (unsigned char)143))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 3995152004349284813ULL))))) : (((/* implicit */int) max((arr_5 [i_0]), (((/* implicit */unsigned short) (signed char)-46)))))))));
                    arr_9 [i_2] [i_2] [i_2] = ((/* implicit */long long int) (+(((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_6 [i_2] [i_2] [i_1 - 1])) : (((/* implicit */int) ((_Bool) var_11)))))));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        /* LoopNest 2 */
        for (signed char i_4 = 0; i_4 < 10; i_4 += 3) 
        {
            for (unsigned char i_5 = 0; i_5 < 10; i_5 += 3) 
            {
                {
                    var_19 = ((/* implicit */unsigned short) var_6);
                    var_20 = ((/* implicit */signed char) arr_6 [i_3] [17] [i_5]);
                }
            } 
        } 
        var_21 = ((/* implicit */unsigned short) ((((/* implicit */int) max((arr_4 [i_3]), (arr_4 [i_3])))) / (arr_15 [i_3] [i_3] [i_3] [i_3])));
        arr_17 [i_3] [i_3] = ((/* implicit */long long int) max(((+(arr_15 [(unsigned short)2] [i_3] [i_3] [(unsigned short)2]))), (max((((((/* implicit */_Bool) (unsigned short)20419)) ? (((/* implicit */int) (unsigned short)3890)) : (((/* implicit */int) (unsigned short)61646)))), (((/* implicit */int) (unsigned short)3355))))));
        arr_18 [i_3] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((max((((/* implicit */unsigned long long int) var_4)), (14451592069360266805ULL))), (((/* implicit */unsigned long long int) ((unsigned short) (unsigned short)3918))))))));
        arr_19 [i_3] [i_3] = ((/* implicit */int) min((((/* implicit */unsigned long long int) ((arr_0 [i_3] [i_3]) ? (((/* implicit */int) arr_0 [i_3] [i_3])) : (((/* implicit */int) arr_0 [i_3] [i_3]))))), (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)58328)) - (((/* implicit */int) var_3))))) ? (((unsigned long long int) 2929141455U)) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (unsigned short)61652)) : (((/* implicit */int) arr_1 [i_3])))))))));
    }
    var_22 ^= ((/* implicit */signed char) (~(var_0)));
}
