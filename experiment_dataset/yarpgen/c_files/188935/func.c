/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188935
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188935 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188935
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
    for (long long int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 19; i_2 += 3) 
            {
                {
                    var_19 = var_11;
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 19; i_3 += 2) 
                    {
                        for (long long int i_4 = 1; i_4 < 17; i_4 += 2) 
                        {
                            {
                                arr_14 [4ULL] [8LL] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (max((arr_6 [i_4 - 1] [15LL] [i_0] [i_0]), (6531721905650032906LL))) : ((+(var_2)))));
                                var_20 = ((/* implicit */long long int) ((arr_4 [i_0]) < (((/* implicit */long long int) ((/* implicit */int) var_13)))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    for (long long int i_5 = 0; i_5 < 10; i_5 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned int i_6 = 0; i_6 < 10; i_6 += 2) 
        {
            for (long long int i_7 = 3; i_7 < 7; i_7 += 1) 
            {
                {
                    arr_25 [i_5] [5LL] [i_5] = arr_2 [i_5];
                    arr_26 [i_5] [i_5] [i_6] [i_5] = ((/* implicit */signed char) var_3);
                }
            } 
        } 
        /* LoopNest 3 */
        for (unsigned short i_8 = 0; i_8 < 10; i_8 += 4) 
        {
            for (long long int i_9 = 3; i_9 < 9; i_9 += 2) 
            {
                for (signed char i_10 = 0; i_10 < 10; i_10 += 1) 
                {
                    {
                        var_21 = ((/* implicit */long long int) var_11);
                        var_22 += ((((/* implicit */_Bool) max((arr_30 [i_10] [i_9] [3LL]), (var_9)))) ? (((((/* implicit */long long int) (+(131072U)))) / (arr_16 [i_5] [i_5]))) : (((/* implicit */long long int) ((/* implicit */int) var_16))));
                        var_23 = (+(min((var_18), (((/* implicit */unsigned int) arr_0 [i_9 - 1])))));
                    }
                } 
            } 
        } 
        var_24 -= ((/* implicit */unsigned int) (signed char)119);
        var_25 = ((/* implicit */unsigned int) ((unsigned short) var_10));
    }
    for (long long int i_11 = 0; i_11 < 11; i_11 += 1) 
    {
        var_26 = max((((/* implicit */unsigned int) (~(((/* implicit */int) arr_37 [i_11]))))), (max((((/* implicit */unsigned int) arr_1 [14LL])), (var_14))));
        var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) var_6))))) ? ((+(var_14))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_36 [i_11])) && (((/* implicit */_Bool) var_4))))))));
    }
    var_28 &= ((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */unsigned long long int) var_15)) & (min((((/* implicit */unsigned long long int) -4399167376383974460LL)), (4251372108299246555ULL))))));
    var_29 = var_1;
    var_30 |= ((((/* implicit */_Bool) 131072U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-1))) : (4294967295U));
}
