/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109187
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109187 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109187
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
    var_13 = ((/* implicit */long long int) var_12);
    var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */int) var_0)), (var_8)))) ? (var_7) : (((/* implicit */unsigned long long int) (+(-4117191390126486694LL))))));
    /* LoopNest 3 */
    for (long long int i_0 = 1; i_0 < 9; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                {
                    var_15 = ((/* implicit */short) var_11);
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 11; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 11; i_4 += 1) 
                        {
                            {
                                arr_13 [1] [i_1] [i_0] [7ULL] [i_2] [i_0] = ((/* implicit */unsigned short) (~(((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_0])) || (((/* implicit */_Bool) arr_4 [i_0])))))));
                                var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0 - 1] [i_0 - 1] [i_0] [i_0])) ? (arr_7 [i_0 + 1] [i_0] [i_0 + 1] [i_0] [i_0 - 1]) : (((/* implicit */long long int) ((/* implicit */int) var_5)))))) ? (((/* implicit */int) ((signed char) var_11))) : (((arr_6 [i_0 + 1] [i_0 - 1] [i_0] [i_3]) << ((((((~(((/* implicit */int) var_2)))) + (233))) - (1)))))));
                                arr_14 [i_0] = ((/* implicit */unsigned short) (~(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 4117191390126486694LL)) ? (((/* implicit */int) var_9)) : (arr_5 [i_0] [i_2] [i_0])))))))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (signed char i_5 = 0; i_5 < 11; i_5 += 4) 
                    {
                        arr_17 [i_0] [i_1] [i_2] [i_5] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((unsigned short) max((((/* implicit */unsigned short) var_4)), ((unsigned short)8420)))))));
                        arr_18 [i_0] [i_0] [i_0] [i_0] = (+(((/* implicit */int) ((((((/* implicit */int) var_9)) + (((/* implicit */int) arr_9 [i_0] [i_2] [i_0])))) == (((/* implicit */int) ((0) > (((/* implicit */int) (unsigned short)24024)))))))));
                    }
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */_Bool) ((((((((/* implicit */int) var_10)) + (var_6))) - (var_8))) - (((/* implicit */int) var_12))));
}
