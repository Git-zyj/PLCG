/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152000
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152000 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152000
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
    var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) ((var_10) != (((/* implicit */int) var_9))))) > (((/* implicit */int) var_2)))))) : ((~(((unsigned long long int) var_12))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        var_17 = var_15;
        var_18 = ((/* implicit */short) var_10);
        var_19 = ((/* implicit */unsigned int) min((var_19), (arr_1 [i_0])));
        var_20 = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_3 [i_0]))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) (+(((((arr_1 [i_1]) + (((/* implicit */unsigned int) 583107780)))) + (((/* implicit */unsigned int) max((((/* implicit */int) var_14)), (616874338)))))))))));
        /* LoopNest 2 */
        for (unsigned int i_2 = 0; i_2 < 15; i_2 += 3) 
        {
            for (short i_3 = 1; i_3 < 12; i_3 += 2) 
            {
                {
                    var_22 ^= ((/* implicit */short) (+(min((((((/* implicit */_Bool) var_3)) ? (1411434597) : (134217727))), (((((/* implicit */_Bool) (short)-29137)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))))));
                    /* LoopNest 2 */
                    for (short i_4 = 1; i_4 < 13; i_4 += 1) 
                    {
                        for (short i_5 = 0; i_5 < 15; i_5 += 2) 
                        {
                            {
                                var_23 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-32763)) ? (((((/* implicit */int) (short)2047)) - (((/* implicit */int) (_Bool)1)))) : (max((arr_14 [i_1] [i_2] [i_3 + 2] [(_Bool)1] [i_5]), (var_10)))))) ? (((/* implicit */int) (short)-2035)) : (((((/* implicit */_Bool) arr_13 [i_1] [(_Bool)1] [i_2] [i_4])) ? (var_1) : (((int) arr_6 [i_1] [(_Bool)1])))));
                                var_24 -= (short)19557;
                                var_25 |= ((/* implicit */signed char) ((((((/* implicit */int) min(((signed char)-83), (((/* implicit */signed char) arr_6 [i_3] [i_2]))))) - ((-(((/* implicit */int) (_Bool)1)))))) != (((/* implicit */int) min((((/* implicit */short) (_Bool)1)), ((short)-32755))))));
                                var_26 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(min((((/* implicit */int) (_Bool)1)), (arr_14 [i_5] [(signed char)12] [i_1] [i_2] [i_1])))))) ? (min((((((/* implicit */_Bool) 18385331228443752410ULL)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_11 [i_3] [7] [i_3] [i_1] [i_5] [i_1])))), (((/* implicit */int) var_7)))) : (((/* implicit */int) (short)-19550))));
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopNest 3 */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            for (short i_7 = 2; i_7 < 13; i_7 += 1) 
            {
                for (unsigned int i_8 = 0; i_8 < 15; i_8 += 3) 
                {
                    {
                        var_27 = ((/* implicit */unsigned int) min((((/* implicit */short) (!(((/* implicit */_Bool) arr_9 [(signed char)13] [i_6] [i_1] [i_1]))))), (arr_11 [i_1] [i_6] [i_6] [i_6] [13U] [i_8])));
                        var_28 = ((/* implicit */signed char) min((var_0), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_13 [i_1] [i_7 + 1] [i_7 - 2] [i_1])))))));
                    }
                } 
            } 
        } 
        var_29 = ((/* implicit */short) ((((/* implicit */_Bool) (short)-32746)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-4974))) : (min((min((arr_1 [i_1]), (((/* implicit */unsigned int) (short)-32763)))), (((/* implicit */unsigned int) ((int) arr_7 [13])))))));
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_9 = 0; i_9 < 23; i_9 += 2) 
    {
        var_30 = ((/* implicit */unsigned int) (((-(((/* implicit */int) var_14)))) != (((/* implicit */int) var_7))));
        /* LoopNest 3 */
        for (int i_10 = 0; i_10 < 23; i_10 += 2) 
        {
            for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
            {
                for (int i_12 = 0; i_12 < 23; i_12 += 1) 
                {
                    {
                        var_31 = ((/* implicit */signed char) ((var_6) ? (arr_25 [i_9]) : (((/* implicit */int) (short)-1))));
                        var_32 = arr_31 [i_12] [i_11] [i_10] [i_9];
                        var_33 = ((/* implicit */signed char) (~(((arr_25 [i_10]) + (((/* implicit */int) var_9))))));
                        var_34 = ((((/* implicit */_Bool) (~(1508218637)))) ? (arr_25 [i_11]) : (((/* implicit */int) var_9)));
                    }
                } 
            } 
        } 
        var_35 = ((/* implicit */short) ((((/* implicit */_Bool) var_15)) || (((/* implicit */_Bool) (short)2031))));
        /* LoopSeq 1 */
        for (unsigned int i_13 = 0; i_13 < 23; i_13 += 3) 
        {
            var_36 = ((/* implicit */short) ((((((/* implicit */_Bool) (short)29037)) && (((/* implicit */_Bool) var_0)))) ? (((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) - (3179441761U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((var_10) != (((/* implicit */int) var_9))))))));
            var_37 = ((/* implicit */_Bool) (+(var_12)));
        }
    }
    var_38 = ((/* implicit */short) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) (short)-19557)) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) (_Bool)1))))))) ? ((-(((((/* implicit */int) (short)29037)) + (((/* implicit */int) var_5)))))) : (((/* implicit */int) var_3))));
}
