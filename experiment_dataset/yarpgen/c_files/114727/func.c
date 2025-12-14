/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114727
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114727 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114727
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
    for (long long int i_0 = 2; i_0 < 17; i_0 += 3) 
    {
        arr_4 [i_0] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(901881973U)))) ? ((+(2534978117U))) : ((+(2614046559U)))));
        /* LoopNest 2 */
        for (signed char i_1 = 1; i_1 < 19; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 20; i_2 += 4) 
            {
                {
                    var_10 = ((/* implicit */signed char) (unsigned short)19757);
                    var_11 = ((/* implicit */short) arr_2 [18U]);
                    arr_9 [i_0] [i_1 + 1] [i_1 + 1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((unsigned int) arr_5 [i_0] [i_0])))));
                }
            } 
        } 
        var_12 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) 708397896U)) ? (2358503281U) : (1936464014U)));
    }
    var_13 |= ((/* implicit */unsigned int) var_4);
    var_14 = ((/* implicit */int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) var_6)) : (((901881973U) + (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))));
    /* LoopNest 2 */
    for (short i_3 = 0; i_3 < 11; i_3 += 2) 
    {
        for (unsigned int i_4 = 3; i_4 < 10; i_4 += 3) 
        {
            {
                arr_15 [i_3] &= ((max((((1702523954U) & (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)60188))))), (((/* implicit */unsigned int) 609741805)))) | (min((394056480U), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)119))) : (0U))))));
                var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((short) ((((var_6) + (2147483647))) << (((148116225U) - (148116225U))))))) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */int) arr_5 [i_4] [i_4 - 3])) / ((-(((/* implicit */int) (signed char)119))))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (short i_5 = 0; i_5 < 14; i_5 += 4) 
    {
        arr_18 [11U] [11U] = ((/* implicit */unsigned short) (~(((/* implicit */int) (signed char)-127))));
        var_16 = ((/* implicit */int) (((_Bool)0) ? (4146851071U) : (4294967295U)));
    }
}
