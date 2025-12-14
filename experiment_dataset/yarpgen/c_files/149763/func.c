/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149763
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149763 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149763
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
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (unsigned int i_1 = 3; i_1 < 10; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned int i_3 = 0; i_3 < 11; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 1; i_4 < 7; i_4 += 4) 
                        {
                            {
                                arr_12 [i_0] [i_1] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)22))))) ? (((((/* implicit */int) arr_5 [i_1 - 1] [i_1 - 3] [i_1 - 2])) ^ (((/* implicit */int) arr_5 [i_1 - 1] [i_1 - 3] [i_1 - 2])))) : ((~(((/* implicit */int) arr_11 [i_1 - 1] [i_1 - 3] [i_1 - 2] [i_1 - 3] [i_1 - 1] [i_1 - 1] [i_1 + 1]))))));
                                var_10 = ((((/* implicit */_Bool) max((((/* implicit */int) arr_11 [i_4] [i_4 + 3] [i_4] [i_4] [i_4 + 1] [i_4] [i_4 - 1])), ((-(1741125208)))))) && (((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_0] [i_3] [i_4] [i_4])));
                                arr_13 [i_0] = (short)-8014;
                            }
                        } 
                    } 
                } 
                arr_14 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) arr_3 [i_0] [i_1]);
            }
        } 
    } 
    /* LoopSeq 1 */
    for (short i_5 = 0; i_5 < 21; i_5 += 1) 
    {
        /* LoopNest 3 */
        for (short i_6 = 0; i_6 < 21; i_6 += 1) 
        {
            for (short i_7 = 1; i_7 < 19; i_7 += 4) 
            {
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    {
                        var_11 *= ((/* implicit */unsigned char) (+(((/* implicit */int) arr_16 [(unsigned char)4]))));
                        var_12 = ((/* implicit */long long int) ((unsigned short) (_Bool)1));
                        var_13 = ((/* implicit */_Bool) var_4);
                    }
                } 
            } 
        } 
        arr_26 [i_5] [i_5] = (-(((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)247)) || (((/* implicit */_Bool) (unsigned char)246))))));
    }
}
