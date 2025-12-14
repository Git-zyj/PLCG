/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141456
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141456 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141456
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
    var_12 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) max((var_5), (((/* implicit */long long int) var_9))))) ? (((var_6) ? (8856839537911462461LL) : (((/* implicit */long long int) ((/* implicit */int) var_10))))) : (min((4968394343352623154LL), (((/* implicit */long long int) var_8)))))) : (((/* implicit */long long int) ((/* implicit */int) ((var_7) <= (min((((/* implicit */long long int) var_2)), (4968394343352623142LL)))))))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 4; i_0 < 22; i_0 += 2) 
    {
        var_13 = ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) arr_1 [i_0 + 1] [i_0]))))));
        var_14 = ((/* implicit */unsigned short) min((((((/* implicit */long long int) arr_1 [i_0 + 2] [i_0])) + ((+(var_5))))), (((/* implicit */long long int) (!(arr_2 [i_0 - 3]))))));
        /* LoopNest 3 */
        for (short i_1 = 3; i_1 < 23; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 24; i_2 += 1) 
            {
                for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                {
                    {
                        var_15 = ((/* implicit */int) min((var_15), (((/* implicit */int) max((((/* implicit */unsigned int) min((arr_8 [i_2] [i_2 - 1] [i_2 - 1] [i_3 - 1] [i_3]), (var_2)))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_4))))) ? (arr_0 [i_0]) : (((/* implicit */unsigned int) (~(((/* implicit */int) var_6))))))))))));
                        var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) arr_2 [i_0 - 4]))) ? (((((((/* implicit */_Bool) var_4)) ? (arr_9 [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) & (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_7 [i_2] [i_1] [i_0]), (arr_7 [i_0] [i_0] [i_0]))))))) : (((/* implicit */unsigned long long int) -2))));
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (long long int i_4 = 2; i_4 < 15; i_4 += 1) 
    {
        var_17 = ((/* implicit */unsigned int) arr_5 [i_4] [i_4] [i_4]);
        var_18 = ((((/* implicit */int) (short)-28277)) * (((/* implicit */int) arr_6 [i_4] [i_4] [i_4] [(unsigned short)12])));
        var_19 &= ((/* implicit */unsigned long long int) ((((var_10) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [0LL]))) : (-7119842052485023018LL))) * (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_4]))))))));
        var_20 = ((/* implicit */short) (+(-4968394343352623143LL)));
        /* LoopNest 2 */
        for (signed char i_5 = 1; i_5 < 17; i_5 += 4) 
        {
            for (unsigned int i_6 = 1; i_6 < 17; i_6 += 4) 
            {
                {
                    var_21 = ((/* implicit */unsigned short) 4968394343352623142LL);
                    /* LoopSeq 1 */
                    for (int i_7 = 2; i_7 < 17; i_7 += 4) 
                    {
                        arr_22 [i_4] [i_5] [i_5] [i_4] [0U] [i_7] |= ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_6 [i_6] [i_7 + 1] [i_7 + 1] [i_7]))));
                        arr_23 [11ULL] [11ULL] [i_7] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_6))) ^ (2589534021U)));
                    }
                }
            } 
        } 
    }
    var_22 |= ((/* implicit */unsigned long long int) var_8);
}
