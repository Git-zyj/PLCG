/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158364
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158364 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158364
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
    var_10 = ((/* implicit */unsigned char) (+(((/* implicit */int) ((((/* implicit */_Bool) -5LL)) || ((_Bool)0))))));
    var_11 = ((/* implicit */unsigned short) ((var_3) == (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_2))))));
    /* LoopSeq 2 */
    for (long long int i_0 = 4; i_0 < 17; i_0 += 4) 
    {
        var_12 = ((/* implicit */long long int) min((var_12), (((/* implicit */long long int) ((int) ((unsigned long long int) arr_0 [i_0 + 3] [i_0 - 3]))))));
        var_13 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(-5LL)))) || (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) > (arr_0 [i_0 - 4] [i_0 + 1]))))) % (((((/* implicit */_Bool) arr_0 [(signed char)5] [i_0 - 4])) ? (7581817160340384983ULL) : (arr_1 [i_0] [i_0]))))))));
        arr_2 [i_0] [i_0 - 3] = (~(var_6));
        var_14 *= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_2)))))));
        var_15 = ((/* implicit */unsigned short) (~(max((((/* implicit */unsigned long long int) (signed char)-119)), (arr_0 [i_0 + 2] [i_0 + 3])))));
    }
    for (int i_1 = 1; i_1 < 12; i_1 += 3) 
    {
        var_16 = ((/* implicit */int) 1302377670U);
        var_17 = ((/* implicit */unsigned long long int) min(((~(((/* implicit */int) var_5)))), ((+(((/* implicit */int) arr_4 [i_1 + 1]))))));
    }
    /* LoopNest 3 */
    for (long long int i_2 = 0; i_2 < 16; i_2 += 1) 
    {
        for (unsigned char i_3 = 0; i_3 < 16; i_3 += 1) 
        {
            for (int i_4 = 0; i_4 < 16; i_4 += 1) 
            {
                {
                    arr_13 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) var_0);
                    arr_14 [i_2] = ((/* implicit */unsigned short) (~((((_Bool)1) ? (arr_9 [i_2] [i_2] [i_3] [i_4]) : (5LL)))));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (long long int i_5 = 0; i_5 < 13; i_5 += 4) 
    {
        var_18 = ((/* implicit */unsigned long long int) (_Bool)0);
        arr_19 [(short)4] [(short)0] = ((/* implicit */int) ((unsigned short) (!(((/* implicit */_Bool) arr_17 [i_5])))));
        var_19 = ((/* implicit */long long int) (_Bool)1);
    }
}
