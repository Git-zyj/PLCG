/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116353
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116353 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116353
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
    var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)12288)) >> (((/* implicit */int) var_12))))) || ((_Bool)0)))), (max((((unsigned int) var_4)), (((/* implicit */unsigned int) var_2)))))))));
    var_16 = ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) (unsigned short)12243)) ? (((var_12) ? (767124746) : (((/* implicit */int) (_Bool)0)))) : (((((/* implicit */int) var_10)) << (((-7078529159056045628LL) + (7078529159056045646LL))))))) : (((/* implicit */int) var_3)));
    /* LoopNest 3 */
    for (unsigned char i_0 = 1; i_0 < 15; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 19; i_2 += 2) 
            {
                {
                    arr_9 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */unsigned long long int) (_Bool)0);
                    var_17 = ((/* implicit */unsigned char) 15);
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    for (short i_3 = 2; i_3 < 20; i_3 += 2) 
    {
        var_18 = ((/* implicit */_Bool) ((unsigned int) (_Bool)1));
        /* LoopNest 2 */
        for (unsigned char i_4 = 1; i_4 < 21; i_4 += 2) 
        {
            for (unsigned long long int i_5 = 0; i_5 < 24; i_5 += 2) 
            {
                {
                    var_19 = (!(((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned char)238))))));
                    var_20 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_15 [21] [21]))));
                }
            } 
        } 
        var_21 &= ((/* implicit */unsigned short) (~(max(((~(((/* implicit */int) var_2)))), (((/* implicit */int) ((unsigned char) (unsigned short)41790)))))));
    }
    for (int i_6 = 3; i_6 < 17; i_6 += 2) 
    {
        var_22 = ((/* implicit */unsigned long long int) ((unsigned short) 0U));
        arr_21 [i_6] = ((max((arr_17 [i_6 + 2]), (((/* implicit */unsigned long long int) 1486342810)))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_6 + 1])))))));
        var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((-15) + (2147483647))) >> (((/* implicit */int) (_Bool)0))))) ? (((((/* implicit */_Bool) arr_19 [i_6 - 3])) ? (((/* implicit */int) arr_19 [i_6 + 1])) : (((/* implicit */int) arr_19 [i_6 + 3])))) : (((/* implicit */int) (!((_Bool)1))))));
        var_24 = ((/* implicit */unsigned char) var_5);
    }
    var_25 = ((/* implicit */unsigned char) max((var_25), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */int) ((unsigned short) var_5))) + (((/* implicit */int) var_0))))))))));
}
