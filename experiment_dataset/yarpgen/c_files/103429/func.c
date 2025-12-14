/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103429
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103429 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103429
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
    var_10 -= ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */short) (!(((/* implicit */_Bool) var_7))))), (var_7)))) ? (min((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned char)0)))), (min((var_2), (((/* implicit */int) var_3)))))) : (var_0)));
    /* LoopNest 3 */
    for (short i_0 = 3; i_0 < 24; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 23; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 25; i_2 += 3) 
            {
                {
                    var_11 = ((/* implicit */unsigned short) max((arr_3 [i_0] [i_2]), (((/* implicit */unsigned long long int) ((arr_3 [i_0 + 1] [i_1 - 2]) > (((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0] [i_0])) ? (arr_0 [i_1] [i_2]) : (arr_3 [i_0 - 3] [i_2]))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 1; i_4 < 23; i_4 += 4) 
                        {
                            {
                                arr_12 [i_0] [i_1] [i_0] = ((/* implicit */signed char) ((((_Bool) ((((/* implicit */_Bool) arr_5 [i_0 - 3] [i_0])) ? (((/* implicit */int) (signed char)0)) : (-870791235)))) ? (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_2 [i_0 + 1] [i_1]) : (((/* implicit */int) arr_1 [i_0])))))) : (((((/* implicit */_Bool) arr_3 [i_0 - 2] [i_0 + 1])) ? (((/* implicit */int) ((unsigned short) -9082889821595766754LL))) : (((int) arr_9 [i_0 + 1] [i_1] [i_3] [i_0]))))));
                                var_12 *= ((/* implicit */signed char) (+(((/* implicit */int) ((unsigned char) max((arr_6 [i_4] [i_3] [i_2] [i_0]), (arr_2 [i_1] [i_1])))))));
                                var_13 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned char) ((((/* implicit */int) (unsigned char)248)) != (((/* implicit */int) (unsigned char)8)))))) ? ((+(((arr_2 [i_2] [i_3]) * (((/* implicit */int) arr_11 [i_0 - 3] [i_0] [i_0] [i_0 - 1] [i_0])))))) : (((/* implicit */int) ((_Bool) ((signed char) (unsigned short)6554))))));
                                var_14 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) ((signed char) arr_5 [i_2] [i_3]))) > (((/* implicit */int) ((unsigned short) arr_4 [i_2] [i_0]))))))) - ((((!(((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0] [i_0])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_1 - 1] [i_1] [i_2] [i_2] [i_1])))))) : (((((/* implicit */_Bool) (unsigned short)42553)) ? (arr_0 [i_0] [i_4]) : (arr_0 [i_2] [i_4])))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_5 = 0; i_5 < 25; i_5 += 1) 
                    {
                        for (unsigned long long int i_6 = 0; i_6 < 25; i_6 += 1) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */int) max((arr_10 [i_6] [i_5] [i_2] [i_1] [i_0]), (arr_4 [i_0] [i_0])))) > (((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_16 [i_0] [i_0] [i_0] [i_0] [i_0 - 1])) : (-345821865)))))) | (min((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)65))))), (arr_2 [i_0 + 1] [i_0 - 2])))));
                                arr_19 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) ((((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0])) & (arr_6 [i_0] [i_0] [i_0] [i_0 + 1])))))) / (arr_0 [i_6] [i_2])));
                                var_16 = ((/* implicit */short) (unsigned char)0);
                                var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_14 [i_0] [i_0] [i_0] [i_0 - 1] [i_0])) ^ (arr_18 [i_0] [i_0])))) ? ((~(((/* implicit */int) arr_14 [i_0 - 1] [i_0] [i_0 + 1] [i_0 - 2] [i_0])))) : (((((/* implicit */_Bool) arr_18 [i_0] [i_0])) ? (((/* implicit */int) arr_14 [i_0 - 3] [i_0] [i_0] [i_0 - 2] [i_0 - 3])) : (((/* implicit */int) (unsigned short)42545)))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
