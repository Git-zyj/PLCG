/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153519
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153519 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153519
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
    var_16 &= ((/* implicit */unsigned long long int) (+(var_13)));
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_0 = 2; i_0 < 10; i_0 += 1) 
    {
        arr_4 [i_0] &= ((/* implicit */short) (unsigned char)133);
        /* LoopSeq 2 */
        for (unsigned char i_1 = 4; i_1 < 13; i_1 += 1) 
        {
            arr_7 [i_0 + 4] [i_1] [i_1 + 1] = ((/* implicit */unsigned short) ((arr_3 [i_1 + 1]) < (((/* implicit */long long int) arr_6 [i_0 - 2]))));
            var_17 = arr_1 [i_0];
            var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [i_0 - 2])) ? (((/* implicit */unsigned long long int) var_6)) : (5268413343279183892ULL)));
        }
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            /* LoopNest 2 */
            for (short i_3 = 2; i_3 < 13; i_3 += 1) 
            {
                for (long long int i_4 = 0; i_4 < 14; i_4 += 2) 
                {
                    {
                        var_19 = ((/* implicit */unsigned int) var_4);
                        var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) ((int) 1991216374)))));
                        var_21 = ((/* implicit */short) ((((/* implicit */int) var_9)) > (((/* implicit */int) (unsigned char)125))));
                    }
                } 
            } 
            arr_17 [i_0] [0U] [0U] &= ((/* implicit */long long int) -1873111040);
        }
    }
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        /* LoopNest 2 */
        for (long long int i_6 = 0; i_6 < 16; i_6 += 1) 
        {
            for (int i_7 = 0; i_7 < 16; i_7 += 4) 
            {
                {
                    var_22 += ((/* implicit */short) ((((((/* implicit */_Bool) var_12)) ? (arr_19 [i_5] [i_7]) : (((/* implicit */unsigned int) arr_26 [i_5] [i_6] [i_7])))) >= (max((((/* implicit */unsigned int) (_Bool)0)), (arr_19 [i_5] [i_7])))));
                    var_23 ^= 13899719194943437703ULL;
                    var_24 = ((/* implicit */unsigned long long int) 16383);
                }
            } 
        } 
        var_25 += ((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */int) arr_27 [i_5] [i_5] [i_5])) != (((/* implicit */int) var_10)))));
    }
}
