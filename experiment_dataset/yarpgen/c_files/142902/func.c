/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142902
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142902 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142902
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
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (signed char i_1 = 1; i_1 < 18; i_1 += 2) 
        {
            {
                arr_5 [i_1] = ((/* implicit */long long int) var_16);
                var_20 = ((/* implicit */int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)49))) - (11662988518346409593ULL))) > (((/* implicit */unsigned long long int) ((/* implicit */int) max(((!(((/* implicit */_Bool) arr_0 [i_0])))), (arr_4 [i_1] [i_0] [i_1])))))));
            }
        } 
    } 
    /* LoopSeq 4 */
    for (int i_2 = 2; i_2 < 7; i_2 += 2) 
    {
        var_21 = min(((-(((((/* implicit */_Bool) (unsigned char)207)) ? (arr_7 [(unsigned char)2]) : (((/* implicit */long long int) ((/* implicit */int) var_2))))))), (((/* implicit */long long int) (unsigned char)201)));
        /* LoopNest 3 */
        for (signed char i_3 = 0; i_3 < 10; i_3 += 2) 
        {
            for (long long int i_4 = 0; i_4 < 10; i_4 += 2) 
            {
                for (short i_5 = 1; i_5 < 9; i_5 += 2) 
                {
                    {
                        var_22 = ((/* implicit */unsigned char) ((((5416647891161786737LL) <= (((/* implicit */long long int) ((/* implicit */int) (unsigned short)54750))))) ? (((((/* implicit */_Bool) -536727484545388602LL)) ? (min((-6371492134113655437LL), (((/* implicit */long long int) (signed char)-11)))) : (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_3] [i_2]))))) : (((/* implicit */long long int) 2157889575U))));
                        var_23 = ((/* implicit */signed char) (-((((-(((/* implicit */int) var_2)))) + (((((/* implicit */int) arr_12 [i_4] [i_3])) + (2147483647)))))));
                        var_24 = ((/* implicit */unsigned char) ((6371492134113655439LL) / (((((/* implicit */_Bool) min((140735340871680ULL), (17831844802582905549ULL)))) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)0)))))));
                    }
                } 
            } 
        } 
    }
    for (int i_6 = 0; i_6 < 17; i_6 += 2) 
    {
        arr_20 [i_6] = ((/* implicit */long long int) min((((/* implicit */int) ((_Bool) var_4))), (((arr_4 [6] [i_6] [i_6]) ? (((/* implicit */int) arr_19 [i_6])) : (((/* implicit */int) arr_4 [i_6] [i_6] [i_6]))))));
        /* LoopNest 2 */
        for (long long int i_7 = 4; i_7 < 15; i_7 += 2) 
        {
            for (signed char i_8 = 1; i_8 < 15; i_8 += 2) 
            {
                {
                    var_25 = ((/* implicit */signed char) ((((/* implicit */long long int) -538369301)) - (((arr_21 [i_6] [i_8]) ? (var_4) : (((/* implicit */long long int) arr_24 [i_6] [i_8 - 1]))))));
                    /* LoopNest 2 */
                    for (int i_9 = 1; i_9 < 16; i_9 += 2) 
                    {
                        for (unsigned long long int i_10 = 1; i_10 < 15; i_10 += 2) 
                        {
                            {
                                arr_32 [i_6] [i_7 - 1] [i_8] [i_9 + 1] [i_9 + 1] [i_10 + 1] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) arr_28 [i_6] [i_6] [15LL] [i_6] [i_10] [i_6]))) | (((max((((/* implicit */long long int) arr_2 [i_6] [i_6])), (-7255409980320543673LL))) & (((long long int) 536727484545388603LL))))));
                                var_26 = ((/* implicit */long long int) (-((~(((/* implicit */int) arr_26 [i_6] [i_6] [(unsigned short)8] [i_6]))))));
                                arr_33 [i_8] = ((/* implicit */signed char) max((((/* implicit */long long int) -844697398)), (-2024985818020983066LL)));
                            }
                        } 
                    } 
                    var_27 = ((/* implicit */unsigned long long int) min((var_27), (((/* implicit */unsigned long long int) (unsigned char)207))));
                    var_28 = ((/* implicit */_Bool) min((var_28), (((/* implicit */_Bool) var_10))));
                }
            } 
        } 
    }
    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
    {
        arr_37 [i_11] = ((/* implicit */long long int) var_17);
        var_29 -= ((signed char) -3002801328503098198LL);
        var_30 = ((/* implicit */unsigned int) ((signed char) (!(((/* implicit */_Bool) ((((/* implicit */long long int) arr_18 [i_11])) / (536727484545388604LL)))))));
        var_31 += ((/* implicit */unsigned int) (((~(((/* implicit */int) var_8)))) - (((/* implicit */int) var_13))));
    }
    for (long long int i_12 = 0; i_12 < 11; i_12 += 2) 
    {
        var_32 += ((/* implicit */long long int) arr_21 [i_12] [i_12]);
        arr_41 [i_12] [i_12] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) var_6))) | ((+(536727484545388620LL)))));
        var_33 = ((/* implicit */unsigned long long int) ((unsigned char) (~(((/* implicit */int) var_16)))));
        var_34 = ((/* implicit */long long int) min((var_34), (((/* implicit */long long int) var_0))));
    }
}
