/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133388
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133388 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133388
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
    var_14 = ((/* implicit */_Bool) var_0);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (short i_1 = 2; i_1 < 11; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 9; i_2 += 4) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 12; i_3 += 4) 
                    {
                        for (int i_4 = 0; i_4 < 12; i_4 += 2) 
                        {
                            {
                                arr_14 [i_0] [(short)10] [i_2] [i_3] [(short)10] = ((/* implicit */int) var_4);
                                var_15 -= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_5 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 1])) ? (((/* implicit */int) (short)16965)) : (((/* implicit */int) (short)-12128)))) | (((/* implicit */int) (signed char)-118))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned int i_5 = 0; i_5 < 12; i_5 += 4) 
                {
                    for (short i_6 = 0; i_6 < 12; i_6 += 2) 
                    {
                        for (int i_7 = 0; i_7 < 12; i_7 += 3) 
                        {
                            {
                                arr_25 [i_7] [i_7] [i_7] [i_5] [3ULL] [i_7] = ((/* implicit */int) ((((((/* implicit */int) ((((/* implicit */unsigned long long int) -1663058525)) < (var_6)))) > (min((var_1), (1663058525))))) && ((!(((/* implicit */_Bool) arr_15 [8ULL] [i_1] [i_5] [i_7]))))));
                                arr_26 [i_7] [i_5] [5LL] [i_5] [i_5] [i_5] [(unsigned short)9] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) 2097120U))) ? (-5352932344366134289LL) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_7] [i_6] [i_0 + 1] [i_0 + 1]))) : (arr_5 [i_6] [i_6] [i_6] [i_6])))));
                            }
                        } 
                    } 
                } 
                var_16 -= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */long long int) 3807302661U)) + (var_5))))));
                arr_27 [i_1] [11LL] = ((/* implicit */long long int) ((unsigned short) ((((/* implicit */_Bool) 5352932344366134288LL)) ? ((+(-430036240508342404LL))) : (((/* implicit */long long int) (+(var_1)))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned short i_8 = 4; i_8 < 23; i_8 += 2) 
    {
        var_17 -= ((/* implicit */long long int) (~(((/* implicit */int) (!((!(((/* implicit */_Bool) (short)7773)))))))));
        /* LoopNest 2 */
        for (unsigned int i_9 = 4; i_9 < 21; i_9 += 3) 
        {
            for (long long int i_10 = 0; i_10 < 25; i_10 += 4) 
            {
                {
                    arr_39 [i_8] [i_9] [i_9] = ((/* implicit */long long int) arr_29 [i_8] [i_9 + 4]);
                    var_18 -= ((/* implicit */unsigned short) 0LL);
                }
            } 
        } 
    }
    var_19 = ((/* implicit */long long int) var_3);
    var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) ((min((((/* implicit */long long int) (short)-2839)), (var_12))) == (var_2))))) : ((+(var_13)))));
}
