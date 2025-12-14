/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140179
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140179 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140179
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
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        var_13 = ((/* implicit */unsigned long long int) max((var_13), (((/* implicit */unsigned long long int) ((arr_1 [i_0] [i_0]) != (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_0]))))))));
        var_14 = ((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned short)15196))));
        var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) ((unsigned long long int) (unsigned short)50340)))));
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned int i_2 = 0; i_2 < 16; i_2 += 1) /* same iter space */
        {
            var_16 = ((/* implicit */unsigned long long int) ((var_8) ^ (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
            var_17 = ((/* implicit */_Bool) var_7);
            var_18 = ((/* implicit */int) min((var_18), (((arr_3 [i_1]) ? (((/* implicit */int) arr_3 [i_1])) : (((/* implicit */int) (unsigned short)50331))))));
            arr_6 [i_1] = ((/* implicit */unsigned int) arr_3 [(signed char)4]);
            arr_7 [i_1] [3LL] = ((/* implicit */signed char) (+(-1692642615)));
        }
        for (unsigned int i_3 = 0; i_3 < 16; i_3 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                for (signed char i_5 = 1; i_5 < 12; i_5 += 4) 
                {
                    {
                        var_19 -= ((/* implicit */short) ((signed char) (unsigned short)27465));
                        var_20 ^= var_1;
                    }
                } 
            } 
            var_21 *= ((/* implicit */short) -1692642615);
            var_22 = ((/* implicit */int) ((arr_11 [i_1] [i_1] [i_1]) ? (3111840113U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)38071)))));
        }
        var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)72)) - (((/* implicit */int) (unsigned short)50340))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_2 [i_1])))) : (((((/* implicit */_Bool) 3580277714U)) ? (arr_5 [6U]) : (((/* implicit */long long int) ((/* implicit */int) var_12))))))))));
    }
    var_24 = ((/* implicit */int) max((var_24), (((/* implicit */int) (_Bool)0))));
    /* LoopNest 2 */
    for (unsigned short i_6 = 0; i_6 < 12; i_6 += 2) 
    {
        for (unsigned int i_7 = 0; i_7 < 12; i_7 += 4) 
        {
            {
                var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) -1692642615)) ? (5054570371016456754ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (min((1927207853U), (((/* implicit */unsigned int) (short)13498)))))) : ((-((+(2324435366U)))))));
                var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 3497724634U)) ? (-2379641332590625926LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)43982)))));
                arr_21 [i_6] [i_7] [i_6] &= ((/* implicit */_Bool) var_8);
                arr_22 [i_6] = ((/* implicit */int) arr_13 [i_7] [i_6] [i_6] [i_6] [i_6]);
            }
        } 
    } 
}
