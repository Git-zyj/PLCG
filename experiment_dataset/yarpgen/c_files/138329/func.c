/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138329
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138329 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138329
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
    var_20 = ((/* implicit */short) var_8);
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 3; i_2 < 22; i_2 += 3) 
            {
                {
                    var_21 = ((/* implicit */short) arr_1 [i_0]);
                    /* LoopNest 2 */
                    for (long long int i_3 = 3; i_3 < 20; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 1; i_4 < 21; i_4 += 2) 
                        {
                            {
                                var_22 = ((/* implicit */long long int) ((((((arr_5 [i_0] [i_0] [i_0]) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_4))))) >= (((/* implicit */unsigned int) ((/* implicit */int) max(((unsigned char)190), (arr_7 [i_2]))))))) ? (((arr_2 [i_4] [i_1] [i_0]) << (((((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)190))) : (arr_5 [i_4] [13U] [3LL]))) - (187U))))) : (((arr_2 [i_0] [i_0] [i_2]) ^ (((/* implicit */unsigned long long int) max((arr_10 [i_0] [i_1] [i_2 + 1] [i_2 - 2] [i_3] [i_3] [i_4 - 1]), (((/* implicit */long long int) var_14)))))))));
                                var_23 = ((/* implicit */unsigned long long int) ((int) ((max((((/* implicit */unsigned long long int) arr_0 [i_0] [19LL])), (var_5))) / (7868585573229997660ULL))));
                                var_24 |= ((min((min((arr_2 [i_4 - 1] [i_0] [i_0]), (((/* implicit */unsigned long long int) var_1)))), (((/* implicit */unsigned long long int) var_4)))) * (((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))) : (max((((/* implicit */unsigned long long int) arr_10 [i_0] [i_0] [i_2] [15ULL] [i_3] [i_3] [i_0])), (var_2))))));
                                var_25 = ((/* implicit */long long int) max((var_25), (((/* implicit */long long int) ((min((var_2), (((/* implicit */unsigned long long int) min((arr_3 [i_0] [i_1]), (((/* implicit */long long int) var_8))))))) - (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_5 [i_0] [16U] [i_4])))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_26 = ((/* implicit */unsigned long long int) max((var_26), (((/* implicit */unsigned long long int) (-((~(((/* implicit */int) (unsigned char)190)))))))));
    }
    for (long long int i_5 = 1; i_5 < 21; i_5 += 3) 
    {
        /* LoopNest 3 */
        for (signed char i_6 = 0; i_6 < 23; i_6 += 2) 
        {
            for (unsigned char i_7 = 0; i_7 < 23; i_7 += 1) 
            {
                for (unsigned short i_8 = 0; i_8 < 23; i_8 += 2) 
                {
                    {
                        var_27 = ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned char)53))));
                        var_28 = ((/* implicit */long long int) var_3);
                        var_29 = ((/* implicit */_Bool) ((long long int) var_10));
                    }
                } 
            } 
        } 
        var_30 = ((/* implicit */unsigned char) min(((~(max((arr_16 [i_5 + 1]), (((/* implicit */unsigned long long int) arr_7 [i_5 + 2])))))), (((((((/* implicit */unsigned long long int) arr_5 [i_5 + 2] [i_5] [i_5])) > (var_5))) ? (((/* implicit */unsigned long long int) var_6)) : (((((/* implicit */_Bool) arr_1 [5LL])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (var_5)))))));
    }
    var_31 = ((/* implicit */unsigned long long int) (-(max((((/* implicit */unsigned int) var_18)), (var_0)))));
    var_32 = ((/* implicit */_Bool) var_8);
}
