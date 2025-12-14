/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103928
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103928 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103928
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
    var_17 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_5))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 22; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            {
                arr_5 [i_0] [i_0] [(signed char)9] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned short) (~(((/* implicit */int) (unsigned short)65533)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_0]))) : (min((((((/* implicit */_Bool) (unsigned char)232)) ? (arr_1 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)1016)) ? (((/* implicit */int) (signed char)100)) : (((/* implicit */int) arr_4 [(signed char)15] [(signed char)15])))))))));
                arr_6 [i_1] &= ((/* implicit */long long int) min((((((/* implicit */int) arr_4 [10U] [i_0 + 3])) << (((6991795148118603019LL) - (6991795148118603007LL))))), (((/* implicit */int) arr_4 [i_0] [i_0 + 3]))));
                /* LoopNest 3 */
                for (unsigned char i_2 = 2; i_2 < 24; i_2 += 1) 
                {
                    for (short i_3 = 1; i_3 < 23; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 25; i_4 += 1) 
                        {
                            {
                                var_18 = (((-(arr_7 [i_0] [i_1] [i_2 - 1] [i_3 + 2]))) != (((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((((/* implicit */int) arr_10 [i_2] [24ULL] [i_2] [i_0])) & (((/* implicit */int) arr_9 [i_0] [i_0 + 2] [i_0] [i_0 + 2])))) : (((((/* implicit */_Bool) arr_2 [i_3] [i_0])) ? (((/* implicit */int) (unsigned char)2)) : (((/* implicit */int) arr_4 [i_3] [i_1]))))))));
                                arr_15 [i_0] [i_0] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((short) arr_2 [i_2 - 2] [i_0]))) ? (min((160299961680945103ULL), (((/* implicit */unsigned long long int) arr_2 [i_2 - 2] [i_0])))) : ((((_Bool)0) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-1))) : (18286444112028606531ULL)))));
                                var_19 = -6991795148118603022LL;
                                arr_16 [i_0] [i_0] [i_0] [i_0] = ((((((/* implicit */_Bool) 18286444112028606497ULL)) ? (((/* implicit */int) max((((/* implicit */unsigned short) arr_9 [i_0] [i_1] [i_2 - 1] [i_3])), (arr_13 [(unsigned short)10] [(signed char)16] [i_2 - 2] [i_2] [i_2] [i_0])))) : (((/* implicit */int) min(((short)-1025), (((/* implicit */short) (signed char)4))))))) & (((/* implicit */int) (((+(77515293))) >= ((~(((/* implicit */int) (signed char)105))))))));
                            }
                        } 
                    } 
                } 
                var_20 = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-106))) / (-2774777420954932535LL)))) ? (((/* implicit */unsigned long long int) arr_7 [i_0 + 1] [i_0 + 3] [i_0 + 3] [i_1])) : (((((/* implicit */_Bool) var_12)) ? (arr_0 [i_0] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0])))))))));
            }
        } 
    } 
}
