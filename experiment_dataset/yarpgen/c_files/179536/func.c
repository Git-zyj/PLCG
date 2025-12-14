/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179536
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179536 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179536
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
    /* LoopSeq 4 */
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        arr_3 [i_0] &= ((/* implicit */unsigned char) var_10);
        var_14 = ((/* implicit */long long int) ((min((arr_0 [i_0]), (((/* implicit */unsigned int) (short)-29933)))) % (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) (short)29901))))));
        /* LoopSeq 2 */
        for (int i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            var_15 = ((/* implicit */short) ((((/* implicit */_Bool) min((arr_4 [i_1] [i_0]), (((/* implicit */int) (signed char)(-127 - 1)))))) && (((/* implicit */_Bool) ((max((var_6), (((/* implicit */long long int) (short)29933)))) & (((/* implicit */long long int) (+(((/* implicit */int) var_4))))))))));
            var_16 += ((/* implicit */unsigned char) arr_1 [i_0]);
            /* LoopNest 3 */
            for (unsigned char i_2 = 0; i_2 < 10; i_2 += 2) 
            {
                for (unsigned char i_3 = 3; i_3 < 9; i_3 += 2) 
                {
                    for (int i_4 = 0; i_4 < 10; i_4 += 2) 
                    {
                        {
                            arr_14 [i_4] [i_3] [i_2] [i_0] [i_0] = ((/* implicit */unsigned int) max((((/* implicit */short) ((((/* implicit */_Bool) -9223372036854775806LL)) && (((/* implicit */_Bool) 4006150066U))))), (max(((short)32767), (((/* implicit */short) arr_12 [i_4] [1ULL] [i_2] [i_1] [i_0]))))));
                            arr_15 [i_0] [i_0] = ((/* implicit */int) ((((min((var_2), (((/* implicit */long long int) var_1)))) / (min((var_8), (((/* implicit */long long int) arr_13 [6LL] [i_1] [(signed char)2] [i_0] [i_4] [i_0] [i_4])))))) * (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_3])) || (var_5)))))));
                            arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (short)7838)), (max((arr_11 [i_1] [i_2] [i_3 + 1] [i_4]), (((/* implicit */unsigned long long int) 9223372036854775805LL))))));
                            var_17 = ((((((((/* implicit */int) arr_12 [i_3 - 3] [i_3 - 3] [(_Bool)1] [i_3] [i_3 - 2])) + (2147483647))) >> ((((-(((/* implicit */int) (short)20124)))) + (20139))))) * ((-(((/* implicit */int) arr_12 [i_3 - 2] [i_3 + 1] [7LL] [i_3] [i_2])))));
                        }
                    } 
                } 
            } 
        }
        /* vectorizable */
        for (short i_5 = 0; i_5 < 10; i_5 += 2) 
        {
            var_18 += ((/* implicit */short) ((((((/* implicit */int) (unsigned char)126)) >> (((((/* implicit */int) (unsigned char)112)) - (92))))) & (((/* implicit */int) ((((/* implicit */_Bool) (short)29934)) && (((/* implicit */_Bool) var_0)))))));
            arr_19 [i_0] = ((/* implicit */_Bool) ((arr_8 [i_5] [i_5] [i_0]) | (((((/* implicit */_Bool) 15277863461753783493ULL)) ? (((/* implicit */unsigned int) var_13)) : (arr_1 [(short)6])))));
            var_19 &= ((/* implicit */unsigned char) ((((/* implicit */int) arr_10 [i_0] [i_5])) / (((/* implicit */int) arr_10 [i_0] [i_5]))));
        }
    }
    for (int i_6 = 0; i_6 < 22; i_6 += 2) 
    {
        var_20 -= ((/* implicit */unsigned char) -9223372036854775788LL);
        var_21 = ((/* implicit */long long int) ((unsigned short) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) max((((/* implicit */unsigned short) var_7)), (arr_21 [i_6])))) : (((((/* implicit */int) (unsigned char)51)) / (var_10))))));
        /* LoopNest 2 */
        for (unsigned short i_7 = 0; i_7 < 22; i_7 += 2) 
        {
            for (unsigned int i_8 = 0; i_8 < 22; i_8 += 2) 
            {
                {
                    var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) arr_20 [i_8]))));
                    var_23 = ((/* implicit */_Bool) ((unsigned char) ((((/* implicit */unsigned long long int) (((-9223372036854775807LL - 1LL)) ^ (((/* implicit */long long int) ((/* implicit */int) arr_22 [i_7])))))) | (((((/* implicit */_Bool) (unsigned short)19957)) ? (((/* implicit */unsigned long long int) -8714565466329609534LL)) : (17602961531324209194ULL))))));
                    var_24 &= ((/* implicit */short) var_4);
                }
            } 
        } 
        var_25 = ((/* implicit */long long int) ((signed char) ((((/* implicit */_Bool) arr_24 [i_6])) ? (max((var_3), (((/* implicit */unsigned long long int) arr_24 [(unsigned short)1])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))));
        var_26 = ((/* implicit */_Bool) max((((/* implicit */long long int) 585744054U)), (9223372036854775799LL)));
    }
    for (unsigned long long int i_9 = 3; i_9 < 7; i_9 += 2) 
    {
        /* LoopNest 3 */
        for (int i_10 = 0; i_10 < 10; i_10 += 2) 
        {
            for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
            {
                for (unsigned int i_12 = 2; i_12 < 9; i_12 += 2) 
                {
                    {
                        var_27 = ((((/* implicit */long long int) ((((var_11) << (((((/* implicit */int) var_9)) - (40))))) | (max((arr_36 [i_12] [i_11] [i_10] [i_9]), (var_11)))))) & (arr_2 [i_11] [i_12]));
                        /* LoopSeq 1 */
                        for (signed char i_13 = 0; i_13 < 10; i_13 += 2) 
                        {
                            var_28 = ((/* implicit */short) (~(((/* implicit */int) (signed char)19))));
                            var_29 = ((/* implicit */unsigned char) (-(-8714565466329609534LL)));
                        }
                    }
                } 
            } 
        } 
        arr_40 [i_9] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((var_10) ^ (var_1)))) + (-1791074098201453631LL)));
    }
    for (signed char i_14 = 1; i_14 < 20; i_14 += 2) 
    {
        var_30 = ((/* implicit */int) max((var_30), (min((((((/* implicit */int) var_4)) >> (((arr_26 [i_14 - 1] [i_14] [i_14 + 2]) - (1677216271))))), (((arr_26 [i_14 - 1] [(short)13] [i_14 - 1]) / (((/* implicit */int) var_4))))))));
        var_31 = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)8041)) << (((((/* implicit */int) (unsigned char)69)) - (68)))));
    }
    var_32 = ((/* implicit */unsigned char) max((var_32), (((/* implicit */unsigned char) min(((~(((/* implicit */int) var_9)))), (((/* implicit */int) (signed char)-47)))))));
    var_33 = ((/* implicit */unsigned short) var_8);
    var_34 = ((/* implicit */unsigned short) max((var_6), (var_2)));
    var_35 = ((/* implicit */short) ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) max((((/* implicit */int) var_7)), (var_11)))) ? (var_13) : (min((((/* implicit */int) var_12)), (var_1))))) : (var_13)));
}
