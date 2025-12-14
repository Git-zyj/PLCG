/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140391
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140391 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140391
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
    var_17 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)27))))) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : ((~((~(-6831350852298381359LL)))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            for (unsigned int i_2 = 1; i_2 < 22; i_2 += 1) 
            {
                {
                    var_18 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 262551635)) ? (((/* implicit */int) (_Bool)1)) : (2026722565)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 23))))) : (((/* implicit */int) (unsigned short)39098))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 23; i_3 += 3) 
                    {
                        for (signed char i_4 = 0; i_4 < 23; i_4 += 3) 
                        {
                            {
                                arr_14 [i_0] [i_0] [i_2 - 1] = ((/* implicit */unsigned char) ((unsigned long long int) (~((((_Bool)0) ? (((/* implicit */int) (short)18068)) : (-1899358421))))));
                                var_19 += ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */int) arr_10 [i_1 + 1] [i_1 + 1] [i_1] [i_1] [i_1 + 1])) : (((/* implicit */int) ((unsigned char) -880153255613005419LL)))))) || (((/* implicit */_Bool) (~(min((-7260986564006657479LL), (((/* implicit */long long int) var_1)))))))));
                                arr_15 [i_0] [i_1] [i_1] [i_2 + 1] [i_3] [i_4] [i_0] = ((/* implicit */_Bool) min((arr_5 [i_3] [i_2] [i_1 + 1] [i_0]), (((/* implicit */short) ((signed char) (((_Bool)1) ? (arr_0 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))));
                                var_20 = ((/* implicit */_Bool) ((unsigned int) min(((~(((/* implicit */int) var_1)))), ((~(2026722580))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 10; i_5 += 2) 
    {
        for (unsigned char i_6 = 0; i_6 < 10; i_6 += 2) 
        {
            {
                arr_23 [i_5] [i_5] [i_5] = ((/* implicit */signed char) 178251440);
                arr_24 [i_5] = ((/* implicit */short) ((signed char) ((((/* implicit */_Bool) (signed char)-53)) ? ((~(arr_19 [i_6] [i_6]))) : (((/* implicit */unsigned long long int) (~(29)))))));
            }
        } 
    } 
}
