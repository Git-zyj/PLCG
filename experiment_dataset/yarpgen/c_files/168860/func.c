/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168860
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168860 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168860
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */long long int) (+(var_7)));
        var_10 = ((var_7) == (((var_3) / (-671303777))));
        arr_5 [i_0] = ((/* implicit */int) (+(arr_2 [i_0] [i_0])));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 12; i_2 += 1) 
            {
                for (int i_3 = 4; i_3 < 9; i_3 += 1) 
                {
                    {
                        var_11 = ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)-4609))))) ? (14979018009099663362ULL) : (((/* implicit */unsigned long long int) 1208478953))));
                        var_12 = ((/* implicit */long long int) min((var_12), (((arr_10 [i_0] [i_0] [i_3 - 1] [i_3 - 2]) / (arr_10 [(_Bool)1] [i_1] [i_3 - 1] [i_3 - 2])))));
                    }
                } 
            } 
        } 
        arr_13 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 17684672750390064902ULL)) ? (112022960) : (((/* implicit */int) (short)-4609))));
    }
    /* LoopNest 2 */
    for (int i_4 = 1; i_4 < 9; i_4 += 4) 
    {
        for (short i_5 = 1; i_5 < 6; i_5 += 3) 
        {
            {
                var_13 = ((/* implicit */unsigned int) min((var_13), (((/* implicit */unsigned int) (~(((((min((var_9), (((/* implicit */int) arr_17 [i_5])))) + (2147483647))) >> (((arr_0 [i_4]) - (1825849254))))))))));
                var_14 &= ((/* implicit */long long int) var_6);
            }
        } 
    } 
    var_15 = ((/* implicit */int) var_8);
}
