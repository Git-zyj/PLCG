/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142200
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142200 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142200
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
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 21; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            {
                arr_4 [(unsigned short)13] [i_0 + 1] [(unsigned char)23] = arr_0 [i_0 + 2];
                var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((var_4), (var_5)))) ? ((~(((/* implicit */int) var_1)))) : (((((/* implicit */int) var_4)) * (((/* implicit */int) arr_3 [i_1] [i_0 + 3]))))));
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 24; i_2 += 1) 
                {
                    for (unsigned char i_3 = 0; i_3 < 24; i_3 += 4) 
                    {
                        {
                            var_14 *= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [i_3])) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_3 [i_0] [i_0])) : (((/* implicit */int) var_6))))) ? (((/* implicit */int) arr_9 [i_0] [i_0] [8LL] [i_0 + 2])) : (((/* implicit */int) var_2)))) : (((/* implicit */int) ((unsigned short) min((arr_2 [(signed char)18] [(signed char)18] [(signed char)18]), (((/* implicit */unsigned int) var_2))))))));
                            var_15 ^= ((/* implicit */unsigned int) ((unsigned char) -1));
                            arr_12 [i_3] [i_2] [i_0] [i_0] = ((/* implicit */signed char) -8047441068984616664LL);
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned short i_4 = 0; i_4 < 18; i_4 += 4) 
    {
        var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned short) min((var_1), (((/* implicit */unsigned short) var_6)))))) ? (((/* implicit */int) var_1)) : (((((/* implicit */_Bool) ((signed char) arr_7 [i_4] [21]))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_5))))));
        /* LoopNest 2 */
        for (unsigned long long int i_5 = 0; i_5 < 18; i_5 += 1) 
        {
            for (signed char i_6 = 0; i_6 < 18; i_6 += 1) 
            {
                {
                    var_17 = ((/* implicit */unsigned char) var_5);
                    var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_3 [i_4] [i_5])) ? (((((/* implicit */_Bool) arr_3 [i_4] [i_5])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_3 [i_6] [i_4])))) : (((/* implicit */int) max((arr_3 [i_4] [i_6]), (arr_3 [i_4] [i_4]))))));
                }
            } 
        } 
        var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) var_6))));
    }
    for (short i_7 = 0; i_7 < 20; i_7 += 1) 
    {
        arr_22 [i_7] [i_7] = ((/* implicit */signed char) ((unsigned int) arr_7 [i_7] [i_7]));
        arr_23 [i_7] = ((/* implicit */_Bool) var_10);
    }
}
