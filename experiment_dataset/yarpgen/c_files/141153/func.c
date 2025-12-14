/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141153
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141153 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141153
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
    var_16 = ((/* implicit */unsigned short) var_11);
    /* LoopSeq 2 */
    for (short i_0 = 2; i_0 < 24; i_0 += 4) 
    {
        var_17 = ((/* implicit */short) (-((((!(((/* implicit */_Bool) arr_0 [i_0])))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) var_13)))) : (((/* implicit */int) var_14))))));
        var_18 = ((/* implicit */long long int) (!(((/* implicit */_Bool) min(((unsigned char)232), ((unsigned char)9))))));
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 3; i_1 < 22; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 25; i_2 += 3) 
            {
                for (long long int i_3 = 4; i_3 < 24; i_3 += 1) 
                {
                    {
                        var_19 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((long long int) arr_10 [i_0 - 2] [i_1] [i_1 + 3] [i_3 + 1] [i_3] [i_3])))));
                        var_20 |= ((((/* implicit */_Bool) var_7)) ? (arr_6 [i_0] [i_0] [i_0]) : (max((((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_11 [i_3] [i_2] [i_1] [i_0])), (arr_7 [i_0] [i_1] [i_2] [i_3])))), (((((/* implicit */_Bool) (unsigned char)120)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (var_7))))));
                    }
                } 
            } 
        } 
    }
    for (short i_4 = 0; i_4 < 10; i_4 += 2) 
    {
        var_21 = (+(((unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) (unsigned char)190))))));
        /* LoopNest 3 */
        for (short i_5 = 2; i_5 < 9; i_5 += 3) 
        {
            for (unsigned long long int i_6 = 2; i_6 < 7; i_6 += 3) 
            {
                for (unsigned short i_7 = 0; i_7 < 10; i_7 += 4) 
                {
                    {
                        arr_21 [i_7] [i_6] [i_5] [i_4] = (~(6876053032809547349ULL));
                        arr_22 [i_7] [i_5] [i_6] [i_7] = ((/* implicit */long long int) var_9);
                    }
                } 
            } 
        } 
        var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) arr_16 [i_4] [i_4] [i_4] [i_4]))));
        /* LoopSeq 1 */
        for (long long int i_8 = 0; i_8 < 10; i_8 += 3) 
        {
            var_23 = ((/* implicit */short) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (arr_7 [i_4] [i_8] [i_4] [i_8]) : (arr_7 [i_8] [i_4] [i_4] [i_4])))), (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)90)) && (((/* implicit */_Bool) arr_0 [i_4]))))), (max((var_8), (((/* implicit */unsigned long long int) var_6))))))));
            var_24 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_16 [i_4] [i_4] [i_4] [i_4]), (((/* implicit */unsigned short) var_12))))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned char)232))))) >= (((((((/* implicit */_Bool) (short)27336)) || (((/* implicit */_Bool) (short)-16825)))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)85))) : (10315088809713805466ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)28)))))));
            var_25 = ((/* implicit */long long int) var_9);
        }
    }
    var_26 = var_3;
}
