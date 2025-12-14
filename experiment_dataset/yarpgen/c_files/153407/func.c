/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153407
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153407 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153407
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
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 4) /* same iter space */
    {
        var_15 *= ((/* implicit */unsigned short) (((~(384236438U))) << ((((~(((/* implicit */int) var_7)))) + (20)))));
        var_16 *= ((/* implicit */_Bool) ((signed char) (+(-1836676569217501828LL))));
        arr_2 [i_0] = ((/* implicit */_Bool) (short)30006);
    }
    for (unsigned short i_1 = 0; i_1 < 13; i_1 += 4) /* same iter space */
    {
        arr_7 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? ((~(((-1836676569217501827LL) ^ (((/* implicit */long long int) ((/* implicit */int) var_3))))))) : ((~(((var_9) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (-1836676569217501828LL)))))));
        var_17 = ((/* implicit */signed char) max((((((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1]))) * (-1LL))) - (((/* implicit */long long int) var_6)))), (((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) -1836676569217501828LL))))))))));
        var_18 = ((/* implicit */int) (~(((var_9) ? (((2605133953U) & (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)63))))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)192)))))));
        /* LoopSeq 3 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            arr_10 [i_1] = ((/* implicit */_Bool) (~(min((arr_9 [i_1] [i_2]), (arr_9 [i_1] [i_2])))));
            arr_11 [(_Bool)1] [i_1] [i_1] = ((/* implicit */short) max(((~(var_11))), (((/* implicit */long long int) (((-(((/* implicit */int) (short)6230)))) == (((/* implicit */int) (signed char)-26)))))));
            /* LoopNest 3 */
            for (unsigned char i_3 = 0; i_3 < 13; i_3 += 1) 
            {
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    for (unsigned int i_5 = 0; i_5 < 13; i_5 += 4) 
                    {
                        {
                            arr_21 [(_Bool)1] [i_2] [i_3] [i_4] [i_5] = ((/* implicit */unsigned int) (-(((/* implicit */int) min(((unsigned char)201), (((/* implicit */unsigned char) (signed char)42)))))));
                            var_19 = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)-107))))) <= (((((/* implicit */_Bool) var_10)) ? (arr_19 [i_1] [i_3] [i_3] [i_4] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_3] [i_2] [i_3])))))));
                            arr_22 [i_1] [i_2] [i_2] [i_2] [i_2] [i_2] [i_5] = ((/* implicit */short) ((((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1]))) ^ (arr_20 [i_1] [i_1]))) + (var_11)));
                            arr_23 [i_1] = ((/* implicit */signed char) (-((~(((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_1])) && (((/* implicit */_Bool) var_13)))))))));
                            arr_24 [(short)11] [i_2] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((int) 3401437734147394265ULL)) <= (((((/* implicit */_Bool) arr_14 [(_Bool)1] [(unsigned char)0] [i_4])) ? (((/* implicit */int) (unsigned char)80)) : (((/* implicit */int) (signed char)-114)))))))) / (max(((-(384236442U))), (min((917784497U), (((/* implicit */unsigned int) (signed char)-28))))))));
                        }
                    } 
                } 
            } 
        }
        for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
        {
            arr_29 [i_1] [i_1] = ((/* implicit */unsigned short) ((unsigned int) -9));
            var_20 = ((/* implicit */unsigned int) min((var_20), (((((/* implicit */_Bool) ((signed char) (_Bool)1))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((_Bool) arr_0 [i_1] [i_1])) && (((arr_26 [2ULL]) && ((_Bool)1))))))) : (max(((~(917784497U))), (arr_15 [i_6] [i_6 + 1] [i_6])))))));
            arr_30 [i_1] = ((/* implicit */unsigned int) ((((max((((/* implicit */unsigned long long int) arr_17 [i_1] [3LL] [11U] [i_6 + 1])), (4611686018427387904ULL))) * (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)7))) / (9223372036854775807LL)))))) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))));
        }
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            var_21 = ((/* implicit */signed char) (-(((((/* implicit */unsigned int) ((/* implicit */int) (signed char)7))) * (2605133943U)))));
            var_22 = (+(2051553405U));
            var_23 -= ((/* implicit */unsigned int) (signed char)26);
        }
    }
    var_24 = ((/* implicit */_Bool) (unsigned char)21);
}
