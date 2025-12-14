/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180026
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180026 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180026
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
    var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((min((3454274845344737819LL), (((/* implicit */long long int) 63442278)))), (((/* implicit */long long int) var_12))))) ? (((/* implicit */int) ((((/* implicit */long long int) (+(((/* implicit */int) var_3))))) == (-7367606148912011891LL)))) : (((/* implicit */int) var_12))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        var_14 = ((/* implicit */int) max((var_14), (((((/* implicit */_Bool) ((unsigned char) (unsigned char)52))) ? (511300536) : ((~(16777215)))))));
        var_15 += ((/* implicit */signed char) ((arr_1 [(signed char)18]) ? (((/* implicit */unsigned int) -1)) : (((unsigned int) 9223372036854775807LL))));
        var_16 += ((arr_1 [(signed char)0]) || (((/* implicit */_Bool) arr_0 [(unsigned char)12])));
        var_17 = ((/* implicit */int) ((((arr_0 [8LL]) + (9223372036854775807LL))) >> (((arr_0 [(_Bool)1]) - (5406688241183559643LL)))));
        arr_2 [i_0] = ((/* implicit */unsigned char) (-(511300536)));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned long long int i_2 = 4; i_2 < 19; i_2 += 2) 
        {
            for (unsigned long long int i_3 = 0; i_3 < 21; i_3 += 4) 
            {
                {
                    arr_9 [i_1] [i_1] = ((/* implicit */signed char) ((unsigned long long int) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_1] [i_2 - 1]))) : (arr_0 [i_1]))));
                    arr_10 [i_1] [i_2] [i_2] [i_1] = ((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_6 [i_2 + 1] [i_2 + 2])) != (((/* implicit */int) arr_1 [i_1])))) || (((/* implicit */_Bool) min((min((511300536), (((/* implicit */int) arr_6 [i_2] [i_2])))), (((/* implicit */int) ((unsigned char) arr_5 [i_3] [i_1]))))))));
                }
            } 
        } 
        var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_6 [i_1] [i_1])) / (((/* implicit */int) ((_Bool) 8238806956550634133ULL)))))) <= (max((((/* implicit */unsigned long long int) (_Bool)1)), (arr_5 [i_1] [i_1]))))))));
        arr_11 [i_1] [i_1] = ((/* implicit */long long int) ((signed char) 1713619175U));
    }
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
    {
        var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) ((((/* implicit */int) min(((unsigned char)204), (((/* implicit */unsigned char) arr_12 [i_4]))))) > (((((/* implicit */_Bool) arr_13 [i_4])) ? (((/* implicit */int) arr_15 [i_4] [i_4])) : (((/* implicit */int) arr_15 [i_4] [i_4])))))))));
        var_20 -= (+(((arr_3 [i_4]) ? (((/* implicit */int) min(((unsigned char)183), ((unsigned char)255)))) : (((/* implicit */int) ((1713619169U) == (arr_8 [i_4])))))));
        var_21 = (+(((arr_7 [i_4] [i_4]) + (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_4] [i_4]))))));
        arr_16 [i_4] = ((/* implicit */unsigned char) max((208057752380034680LL), (((/* implicit */long long int) max((386666708), (((/* implicit */int) (unsigned char)218)))))));
    }
    var_22 &= (~(((/* implicit */int) var_8)));
}
