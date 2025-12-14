/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135823
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135823 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135823
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
    var_17 = ((/* implicit */_Bool) (-(((/* implicit */int) (signed char)0))));
    /* LoopNest 2 */
    for (long long int i_0 = 2; i_0 < 19; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (long long int i_3 = 1; i_3 < 18; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 21; i_4 += 3) 
                        {
                            {
                                arr_11 [i_2] [i_0] [(signed char)12] [i_2] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) (unsigned short)21043))));
                                arr_12 [i_0] [i_0] [i_0] [i_1] [i_2] [i_0] [i_1] = ((/* implicit */unsigned short) ((arr_2 [i_0] [i_0]) ? (((/* implicit */int) arr_1 [i_0] [i_1])) : (((/* implicit */int) (signed char)0))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_5 = 0; i_5 < 21; i_5 += 3) 
                {
                    for (unsigned char i_6 = 0; i_6 < 21; i_6 += 1) 
                    {
                        {
                            var_18 = ((/* implicit */unsigned short) max((((arr_13 [i_0 - 2] [i_0 + 1] [i_0 - 1]) ? (((/* implicit */int) max(((_Bool)1), ((_Bool)1)))) : (((/* implicit */int) (unsigned short)64001)))), ((+(((/* implicit */int) ((signed char) arr_6 [(signed char)7] [(signed char)7] [i_5])))))));
                            arr_17 [i_0] [i_1] [i_5] [i_6] = ((/* implicit */unsigned short) min((min((max((9223372036854775807LL), (((/* implicit */long long int) (_Bool)1)))), (((/* implicit */long long int) (_Bool)1)))), (((/* implicit */long long int) (unsigned char)14))));
                            arr_18 [i_0] [i_1] [i_1] [(unsigned short)2] [i_6] &= max((((/* implicit */unsigned short) (unsigned char)21)), (arr_0 [i_1]));
                        }
                    } 
                } 
                var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-15)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_3))))) ? (((/* implicit */int) (signed char)117)) : (((/* implicit */int) (unsigned short)7354))))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-15))) : (9103459999693770823LL))))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned short) ((((/* implicit */int) ((min((var_0), (((/* implicit */long long int) var_14)))) <= (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) (signed char)7)), ((unsigned short)32003)))))))) / (((/* implicit */int) (unsigned short)31981))));
}
