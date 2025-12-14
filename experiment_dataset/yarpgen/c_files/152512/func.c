/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152512
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152512 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152512
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            for (unsigned int i_2 = 3; i_2 < 11; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 3; i_3 < 12; i_3 += 3) 
                    {
                        for (signed char i_4 = 0; i_4 < 14; i_4 += 2) 
                        {
                            {
                                arr_15 [i_0] [i_0] [i_3] [i_3] [(unsigned short)11] [(short)11] [i_0] = ((/* implicit */unsigned char) arr_8 [i_3] [i_1] [7U]);
                                var_14 = ((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */_Bool) (short)7945)) ? (((/* implicit */int) var_5)) : (((((/* implicit */_Bool) 2113929216U)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (_Bool)0)))))));
                                var_15 = -274836054855715889LL;
                                var_16 = (-(((/* implicit */int) (_Bool)1)));
                            }
                        } 
                    } 
                    arr_16 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_2 [i_2 + 1] [6ULL])), (var_12)))) ? (arr_5 [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)153))) != (var_1)))))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) ((int) (_Bool)1)))));
    var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) var_7))));
    /* LoopNest 3 */
    for (short i_5 = 0; i_5 < 20; i_5 += 4) 
    {
        for (unsigned short i_6 = 0; i_6 < 20; i_6 += 1) 
        {
            for (unsigned long long int i_7 = 0; i_7 < 20; i_7 += 4) 
            {
                {
                    var_19 -= ((/* implicit */unsigned short) arr_23 [i_6] [i_6] [i_6] [i_6]);
                    var_20 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_17 [i_5])) || (((/* implicit */_Bool) -1619808790158321373LL)))))) ^ (((((/* implicit */_Bool) min((var_7), (((/* implicit */unsigned short) arr_18 [(_Bool)1]))))) ? (min((((/* implicit */unsigned int) (unsigned char)81)), (676874736U))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_4))))))))));
                }
            } 
        } 
    } 
}
