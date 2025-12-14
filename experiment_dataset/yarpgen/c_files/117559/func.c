/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117559
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117559 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117559
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
    var_15 = ((/* implicit */_Bool) ((signed char) var_1));
    /* LoopNest 3 */
    for (unsigned int i_0 = 1; i_0 < 14; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 15; i_2 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (long long int i_3 = 0; i_3 < 15; i_3 += 1) 
                    {
                        var_16 = ((/* implicit */_Bool) ((int) (!(((/* implicit */_Bool) min((((/* implicit */short) arr_3 [i_0])), (arr_5 [i_3] [i_2] [i_0])))))));
                        var_17 = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) (short)-7261))))) < (((/* implicit */int) ((_Bool) (+(1239517899U)))))));
                    }
                    var_18 = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_2 [i_2])) ? (arr_2 [i_0 + 1]) : (arr_2 [i_0]))) * (((((/* implicit */_Bool) 461755880)) ? (arr_2 [i_0 + 1]) : (424244126U)))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned int) var_7);
    /* LoopSeq 1 */
    for (short i_4 = 1; i_4 < 9; i_4 += 4) 
    {
        /* LoopSeq 2 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            /* LoopNest 2 */
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                for (short i_7 = 1; i_7 < 10; i_7 += 1) 
                {
                    {
                        var_20 = ((/* implicit */short) min((((/* implicit */long long int) ((((/* implicit */int) (signed char)86)) * (((/* implicit */int) (short)-7264))))), (8484755342667475561LL)));
                        var_21 = ((/* implicit */short) (_Bool)1);
                    }
                } 
            } 
            var_22 = (((!(((/* implicit */_Bool) (short)-8292)))) ? (((/* implicit */int) arr_3 [i_4])) : (((((/* implicit */int) arr_4 [i_4 + 2])) - (((/* implicit */int) arr_5 [i_4] [i_4 - 1] [i_4 + 3])))));
            var_23 = ((/* implicit */_Bool) var_5);
        }
        for (unsigned int i_8 = 0; i_8 < 13; i_8 += 4) 
        {
            /* LoopNest 2 */
            for (int i_9 = 1; i_9 < 12; i_9 += 1) 
            {
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                {
                    {
                        var_24 = ((/* implicit */long long int) ((arr_25 [i_9 + 1] [i_10]) != ((-(arr_25 [i_4 + 3] [i_10])))));
                        var_25 = ((/* implicit */_Bool) ((short) ((_Bool) ((((/* implicit */_Bool) 7587554014276444341LL)) ? (((/* implicit */int) arr_20 [i_4] [i_4])) : (((/* implicit */int) arr_7 [i_4] [i_10]))))));
                    }
                } 
            } 
            arr_31 [i_4] = ((/* implicit */_Bool) (~(((/* implicit */int) (short)-17194))));
            var_26 = ((/* implicit */_Bool) ((max((((((/* implicit */_Bool) var_5)) ? (7512990132973216853LL) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [(_Bool)1] [(_Bool)1] [i_4]))))), (((/* implicit */long long int) ((((/* implicit */_Bool) (short)7280)) ? (((/* implicit */unsigned int) arr_13 [0U])) : (989885684U)))))) & (((/* implicit */long long int) ((((/* implicit */_Bool) 1239517922U)) ? (((/* implicit */int) arr_4 [i_4])) : (((/* implicit */int) min(((short)7272), (var_1)))))))));
        }
        var_27 = ((/* implicit */short) var_9);
        var_28 = ((/* implicit */int) (signed char)-62);
        var_29 = ((/* implicit */_Bool) min((((/* implicit */long long int) (signed char)75)), (3664860143299070374LL)));
    }
    var_30 = ((/* implicit */unsigned int) ((((/* implicit */int) max((((/* implicit */short) ((_Bool) var_0))), (var_13)))) << (((var_4) - (1224815546U)))));
}
