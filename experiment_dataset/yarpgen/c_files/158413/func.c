/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158413
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158413 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158413
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
    var_13 = ((/* implicit */short) ((min((274458293U), (2966849143U))) == (((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) var_3))))))))));
    var_14 = ((/* implicit */short) var_9);
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (unsigned char i_1 = 4; i_1 < 15; i_1 += 1) 
        {
            for (unsigned short i_2 = 2; i_2 < 16; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 17; i_3 += 4) 
                    {
                        for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                        {
                            {
                                var_15 ^= ((/* implicit */unsigned long long int) arr_10 [i_0]);
                                arr_12 [14U] [i_1] [i_1] [(_Bool)1] [i_1] [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */int) arr_5 [i_0] [i_1 - 4] [(signed char)0] [i_3])) % (((/* implicit */int) max(((unsigned char)185), (((/* implicit */unsigned char) arr_3 [i_1 - 2] [i_1] [i_4 + 1])))))));
                                arr_13 [i_1] [i_4 + 1] [i_4] [i_4 + 1] [i_4] = ((/* implicit */unsigned short) ((short) (!(((/* implicit */_Bool) (unsigned char)59)))));
                                var_16 = ((/* implicit */unsigned char) ((unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0])) + (((/* implicit */int) arr_11 [i_2] [i_1] [i_2] [i_1] [i_1]))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_9 [i_4] [i_1] [i_2] [i_3] [i_1])) ? (((/* implicit */int) arr_7 [i_0] [13] [i_0] [i_3])) : (((/* implicit */int) var_0))))) : (arr_10 [i_3]))));
                            }
                        } 
                    } 
                    arr_14 [i_0] [i_1] [(signed char)7] [i_2 + 1] = ((/* implicit */long long int) ((unsigned short) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)32))) : (-8484857959011631123LL))));
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 0; i_5 < 17; i_5 += 3) 
                    {
                        for (short i_6 = 4; i_6 < 15; i_6 += 1) 
                        {
                            {
                                arr_19 [i_0] [i_0] [i_0] [i_1] [i_0] = ((/* implicit */unsigned long long int) var_12);
                                var_17 = ((/* implicit */long long int) ((((_Bool) arr_2 [i_1 - 2] [i_1 - 2])) ? ((~(((/* implicit */int) arr_2 [i_1 + 1] [i_1 + 2])))) : (((((/* implicit */int) arr_2 [i_1 + 1] [i_1 + 1])) + (((/* implicit */int) arr_2 [i_1 - 2] [i_1]))))));
                                var_18 = ((/* implicit */unsigned char) ((unsigned long long int) ((((835777071U) <= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)71))))) ? ((-(((/* implicit */int) (unsigned char)184)))) : (((/* implicit */int) ((signed char) var_2))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */long long int) ((signed char) ((max((var_11), (((/* implicit */long long int) var_9)))) < (((var_5) ? (var_11) : (((/* implicit */long long int) var_6)))))));
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 25; i_7 += 2) 
    {
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            {
                var_20 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((short) max((9671001346746579933ULL), (((/* implicit */unsigned long long int) arr_23 [(signed char)10] [i_8])))))) ? ((+(arr_24 [i_8]))) : (((((((/* implicit */_Bool) 4074670357U)) ? (((/* implicit */int) arr_22 [i_7])) : (((/* implicit */int) var_12)))) + (((/* implicit */int) ((unsigned short) 15515937642803202357ULL)))))));
                arr_25 [i_7] [i_8] = ((/* implicit */signed char) var_11);
                var_21 -= ((/* implicit */unsigned char) arr_21 [5U] [20ULL]);
                arr_26 [i_8] [i_7] [i_8] = ((/* implicit */signed char) ((unsigned long long int) var_12));
            }
        } 
    } 
}
