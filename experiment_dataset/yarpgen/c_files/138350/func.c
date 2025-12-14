/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138350
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138350 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138350
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
    for (unsigned long long int i_0 = 2; i_0 < 13; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 2; i_2 < 12; i_2 += 1) 
                {
                    for (short i_3 = 0; i_3 < 14; i_3 += 4) 
                    {
                        {
                            var_12 = ((/* implicit */unsigned long long int) max(((-(((((/* implicit */_Bool) var_7)) ? (var_7) : (var_8))))), (((/* implicit */unsigned int) (~(((/* implicit */int) ((320353904U) <= (((/* implicit */unsigned int) ((/* implicit */int) (short)19010)))))))))));
                            var_13 = ((((/* implicit */_Bool) ((((4061903429U) / (1035819893U))) * (min((arr_6 [i_3] [i_0] [i_1] [i_0]), (arr_6 [i_0] [i_0] [i_0] [i_3])))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 2608699849U)) || (((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-19011))) + (var_11)))))))) : (((unsigned int) (~(var_5)))));
                            var_14 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((14ULL) <= (((/* implicit */unsigned long long int) 3974613392U)))))) * (3ULL)));
                        }
                    } 
                } 
                var_15 = ((((/* implicit */_Bool) (-(((arr_2 [i_0] [i_0] [i_0]) & (4294967295U)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)6144)) ? (((/* implicit */unsigned long long int) 4135351481U)) : (16759365908841054142ULL)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-23591)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_6))))) : (var_8))) : (var_4));
                var_16 = ((/* implicit */unsigned long long int) var_6);
                var_17 = ((/* implicit */short) (-(arr_5 [i_1] [i_1] [i_1])));
                var_18 = ((/* implicit */unsigned int) max(((short)-23577), ((short)-19010)));
            }
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_4 = 0; i_4 < 11; i_4 += 4) 
    {
        var_19 = ((/* implicit */short) ((((((/* implicit */_Bool) arr_9 [i_4])) ? (arr_11 [i_4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)21673))))) % (arr_5 [i_4] [i_4] [i_4])));
        var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) arr_10 [i_4]))));
        var_21 = ((((((/* implicit */_Bool) 2608699858U)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_4] [i_4]))) : (arr_2 [i_4] [i_4] [i_4]))) << (((arr_1 [i_4]) - (3847296932U))));
        /* LoopSeq 2 */
        for (unsigned long long int i_5 = 1; i_5 < 10; i_5 += 1) /* same iter space */
        {
            var_22 = (+(((((/* implicit */_Bool) 1687378164868497474ULL)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) var_0))))));
            /* LoopSeq 1 */
            for (short i_6 = 3; i_6 < 9; i_6 += 3) 
            {
                var_23 -= (-(arr_15 [i_5 - 1] [i_5 + 1] [i_5] [i_5 + 1]));
                var_24 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)8192))) : (159615804U)))) ? (2290275888127626673ULL) : (((((/* implicit */_Bool) arr_10 [i_6])) ? (arr_5 [i_4] [i_4] [i_4]) : (arr_5 [i_4] [i_5] [i_6 - 3])))));
            }
            var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (var_5) : (((/* implicit */unsigned long long int) 16U))))) ? (((var_5) / (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-21667))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (var_2) : (1051724885U))))));
            var_26 = ((var_5) % (((/* implicit */unsigned long long int) ((2314820040U) & (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))));
        }
        for (unsigned long long int i_7 = 1; i_7 < 10; i_7 += 1) /* same iter space */
        {
            var_27 = ((/* implicit */short) ((((/* implicit */_Bool) arr_19 [i_7])) ? (((((/* implicit */_Bool) (short)21673)) ? (11879409867610131369ULL) : (((/* implicit */unsigned long long int) 3974613391U)))) : (((((/* implicit */_Bool) 3872948158U)) ? (arr_11 [i_4]) : (arr_5 [i_4] [i_4] [i_4])))));
            /* LoopNest 2 */
            for (short i_8 = 2; i_8 < 9; i_8 += 4) 
            {
                for (short i_9 = 0; i_9 < 11; i_9 += 1) 
                {
                    {
                        var_28 = ((/* implicit */unsigned long long int) arr_24 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7]);
                        var_29 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_7 + 1] [i_7 + 1] [i_7 - 1]))) - (var_8)));
                        var_30 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 2698742567U)) ? (var_4) : (arr_25 [i_9] [i_4] [i_4]))) % (((/* implicit */unsigned int) ((/* implicit */int) (short)6144)))));
                    }
                } 
            } 
            var_31 = ((/* implicit */short) var_11);
        }
    }
}
