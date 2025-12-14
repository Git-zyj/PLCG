/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187271
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187271 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187271
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
    var_12 = ((/* implicit */short) ((((/* implicit */_Bool) (+(max((var_6), (((/* implicit */unsigned long long int) (unsigned char)56))))))) ? (((((((/* implicit */_Bool) var_7)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))) >> (((/* implicit */int) max((((/* implicit */signed char) var_5)), (var_9)))))) : (((/* implicit */unsigned long long int) min((min((var_2), (((/* implicit */unsigned int) (unsigned char)209)))), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) == (14129772926482410148ULL)))))))));
    var_13 = ((/* implicit */unsigned char) (~(((/* implicit */int) min((((_Bool) var_3)), (var_3))))));
    /* LoopSeq 4 */
    for (signed char i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 1; i_1 < 15; i_1 += 3) 
        {
            for (unsigned int i_2 = 3; i_2 < 15; i_2 += 4) 
            {
                {
                    arr_9 [i_0] [(signed char)16] [i_2] [i_0] = ((/* implicit */unsigned short) ((arr_6 [i_0]) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) var_11)) == (((arr_4 [i_0] [i_2 - 3]) ? (arr_6 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)127)))))))))));
                    var_14 &= ((/* implicit */signed char) (~(min((493308182U), (2534988878U)))));
                }
            } 
        } 
        var_15 *= ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (-(-2929932081540231800LL)))) || (((/* implicit */_Bool) max((arr_5 [i_0] [i_0] [i_0]), (((/* implicit */unsigned long long int) var_11))))))))) + (((((/* implicit */_Bool) ((unsigned long long int) (_Bool)1))) ? (((/* implicit */long long int) min((3801659114U), (((/* implicit */unsigned int) var_1))))) : (((arr_2 [i_0]) / (arr_1 [2])))))));
        var_16 = ((/* implicit */signed char) ((((arr_0 [i_0] [i_0]) * (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-127))))) / (((/* implicit */unsigned long long int) ((unsigned int) arr_0 [i_0] [i_0])))));
    }
    for (unsigned short i_3 = 2; i_3 < 15; i_3 += 3) 
    {
        arr_13 [i_3] [i_3] = ((/* implicit */int) (+(arr_1 [i_3])));
        arr_14 [i_3] = ((((/* implicit */int) (unsigned char)200)) >> (((/* implicit */int) var_9)));
        var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) var_1))));
    }
    for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
    {
        var_18 = ((/* implicit */int) (-((-(min((((/* implicit */unsigned int) arr_11 [(_Bool)1] [i_4])), (var_0)))))));
        var_19 = ((/* implicit */unsigned long long int) ((503800250U) > (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)66)))));
        var_20 -= ((/* implicit */signed char) ((_Bool) (short)-16675));
    }
    /* vectorizable */
    for (short i_5 = 4; i_5 < 20; i_5 += 4) 
    {
        arr_21 [(_Bool)1] = ((/* implicit */unsigned long long int) arr_18 [i_5]);
        /* LoopNest 3 */
        for (signed char i_6 = 0; i_6 < 24; i_6 += 4) 
        {
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                for (unsigned short i_8 = 2; i_8 < 23; i_8 += 2) 
                {
                    {
                        var_21 = ((/* implicit */unsigned long long int) arr_29 [i_8] [i_6]);
                        arr_31 [i_5] [i_6] [i_5] [i_7] [i_8] [i_8 + 1] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_29 [i_5 - 2] [i_5 + 1]))));
                        var_22 += ((/* implicit */signed char) (~(arr_23 [i_5])));
                        var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned long long int) 88641486U))) ? (((/* implicit */int) arr_22 [i_5 + 4])) : ((-(((/* implicit */int) (_Bool)1))))));
                        arr_32 [i_5] [i_6] [i_7] [i_8] = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_27 [i_5] [i_6] [i_6] [i_8 + 1])) ? (arr_23 [i_5 - 2]) : (arr_23 [i_8 - 1]))) + (2065464123U)));
                    }
                } 
            } 
        } 
        var_24 = ((/* implicit */int) ((((/* implicit */int) ((_Bool) var_7))) == (((var_1) ? (((/* implicit */int) arr_19 [i_5])) : (((/* implicit */int) (signed char)106))))));
        var_25 |= ((/* implicit */int) ((unsigned long long int) var_6));
    }
    var_26 = ((/* implicit */unsigned char) var_9);
}
