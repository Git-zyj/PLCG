/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186515
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186515 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186515
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
    /* LoopSeq 3 */
    for (int i_0 = 2; i_0 < 22; i_0 += 1) 
    {
        arr_2 [21ULL] [i_0 - 2] = ((/* implicit */int) max((var_6), (var_4)));
        arr_3 [i_0] = ((/* implicit */signed char) (+((-(((/* implicit */int) ((((/* implicit */int) (_Bool)0)) != (((/* implicit */int) arr_0 [i_0 - 1])))))))));
        arr_4 [i_0] = 5150840727451993115LL;
    }
    for (unsigned char i_1 = 1; i_1 < 9; i_1 += 2) 
    {
        /* LoopNest 3 */
        for (unsigned int i_2 = 2; i_2 < 8; i_2 += 3) 
        {
            for (unsigned int i_3 = 3; i_3 < 9; i_3 += 1) 
            {
                for (signed char i_4 = 1; i_4 < 9; i_4 += 3) 
                {
                    {
                        var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned char) ((_Bool) (signed char)0)))) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (max((((/* implicit */long long int) (signed char)(-127 - 1))), (9223372036854775807LL)))));
                        var_15 = min(((-(arr_17 [i_1 + 1] [i_2] [i_3] [i_4 - 1]))), (((/* implicit */unsigned long long int) (-(min((var_4), (((/* implicit */long long int) 525060781))))))));
                        var_16 = (signed char)7;
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_5 = 1; i_5 < 8; i_5 += 4) 
        {
            var_17 |= ((/* implicit */int) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1))))) + (4176746154103673259ULL)));
            /* LoopSeq 1 */
            for (unsigned int i_6 = 0; i_6 < 10; i_6 += 1) 
            {
                var_18 = ((/* implicit */unsigned long long int) (_Bool)1);
                var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) ((unsigned char) ((((((/* implicit */int) arr_11 [4U] [i_5] [i_1])) + (2147483647))) << (((arr_9 [(unsigned char)4]) - (1566584941)))))))));
            }
            var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (short)6484))) - (0U)))) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_19 [i_1] [i_5] [i_5])) : (((/* implicit */int) (_Bool)0)))) : (arr_8 [i_1] [i_5 + 1])));
            arr_23 [i_5] = ((/* implicit */_Bool) var_0);
            var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) (signed char)0))));
        }
        var_22 = ((/* implicit */unsigned long long int) min((var_22), (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_15 [(unsigned char)1] [i_1] [i_1 + 1] [i_1] [i_1] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) (short)28948)))) : ((-(var_1)))))), (((((/* implicit */unsigned long long int) min((arr_16 [i_1] [5U] [i_1] [i_1]), (((/* implicit */long long int) (signed char)-94))))) * (min((arr_22 [i_1] [0LL] [i_1]), (arr_12 [i_1 - 1] [i_1] [i_1] [i_1 - 1])))))))));
        var_23 = ((/* implicit */int) ((var_7) << (((/* implicit */int) min((((((/* implicit */long long int) 21U)) == (-14LL))), ((((_Bool)0) || (var_10))))))));
    }
    for (int i_7 = 2; i_7 < 20; i_7 += 2) 
    {
        /* LoopNest 2 */
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            for (signed char i_9 = 0; i_9 < 21; i_9 += 3) 
            {
                {
                    var_24 = ((/* implicit */unsigned long long int) max((var_24), (((/* implicit */unsigned long long int) ((var_10) ? (-324818126) : (((/* implicit */int) min(((unsigned char)240), (((/* implicit */unsigned char) (signed char)10))))))))));
                    arr_31 [6] [i_8] [i_9] = ((/* implicit */_Bool) ((unsigned char) ((max((0U), (((/* implicit */unsigned int) (short)-20661)))) << ((((+(-6359973110199658348LL))) + (6359973110199658350LL))))));
                    arr_32 [(signed char)15] [i_8] [i_7 - 1] [i_7] |= min((((/* implicit */long long int) ((((/* implicit */_Bool) 2915155402U)) ? (((((/* implicit */_Bool) 6028092913778039345LL)) ? (arr_28 [i_9] [i_9] [i_8] [i_7 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_7 + 1]))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) (_Bool)1))))))), ((-(min((((/* implicit */long long int) (unsigned char)32)), (var_6))))));
                }
            } 
        } 
        arr_33 [i_7 + 1] [i_7] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((4322287394515991454LL), (-5340967277867825285LL)))) ? (((/* implicit */int) min((arr_29 [i_7 - 2] [i_7 - 1] [i_7 - 2] [i_7 + 1]), (arr_29 [i_7 - 2] [i_7 + 1] [i_7] [i_7])))) : (((/* implicit */int) min((arr_29 [i_7 - 2] [i_7 - 2] [i_7] [i_7 + 1]), (arr_29 [i_7 - 1] [i_7 + 1] [i_7 - 2] [i_7]))))));
        var_25 = ((/* implicit */int) var_6);
    }
    var_26 = ((/* implicit */signed char) var_3);
    var_27 = ((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) min((var_12), (((/* implicit */unsigned int) var_0))))) != (((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)20657))) : (15999074074555127866ULL))))) ? (((/* implicit */long long int) 324818112)) : (((var_7) | (((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (var_6)))))));
}
