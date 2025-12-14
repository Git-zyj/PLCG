/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147406
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147406 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147406
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
    for (short i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 17; i_2 += 3) 
            {
                {
                    var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) (!(((var_6) || ((!(((/* implicit */_Bool) -1785607242871874769LL)))))))))));
                    var_20 = ((/* implicit */signed char) (+(max((((/* implicit */unsigned int) (short)3214)), (((((/* implicit */_Bool) 2057152375U)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1]))) : (2057152373U)))))));
                    arr_9 [i_0] [i_2] [i_1] [i_2] = ((/* implicit */short) ((((/* implicit */int) ((((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (1970111178) : (var_0))) > ((-(((/* implicit */int) var_9))))))) >> (((/* implicit */int) ((((/* implicit */long long int) (-(((/* implicit */int) var_2))))) <= (min((((/* implicit */long long int) 26986495)), (-1785607242871874769LL))))))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (short i_3 = 0; i_3 < 12; i_3 += 4) 
    {
        for (signed char i_4 = 0; i_4 < 12; i_4 += 2) 
        {
            for (unsigned int i_5 = 0; i_5 < 12; i_5 += 4) 
            {
                {
                    var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) max(((-(((/* implicit */int) arr_12 [i_3] [i_3] [i_3])))), (((((/* implicit */int) (short)-17)) / (((/* implicit */int) (signed char)-82))))))), (((arr_2 [i_3]) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_5]))))))))));
                    arr_17 [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */int) (short)16264)) * (((/* implicit */int) var_5)))) ^ (((/* implicit */int) (short)11032))))) ? (((((((/* implicit */_Bool) (signed char)-52)) || (((/* implicit */_Bool) (short)-11025)))) ? (((((/* implicit */int) (unsigned char)251)) << (((-1LL) + (24LL))))) : (((((/* implicit */_Bool) arr_1 [i_5])) ? (((/* implicit */int) (signed char)-58)) : (((/* implicit */int) var_14)))))) : (((((/* implicit */_Bool) max((((/* implicit */int) (short)16135)), (arr_16 [i_3] [i_4] [i_3] [i_5])))) ? (((((/* implicit */_Bool) (signed char)-80)) ? (1682509108) : (((/* implicit */int) (signed char)-47)))) : (((/* implicit */int) arr_15 [i_3] [i_3] [i_3]))))));
                    var_22 = ((/* implicit */unsigned int) (-(max((var_11), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)-71)))))))));
                    var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((2237814902U), (((/* implicit */unsigned int) (_Bool)1))))) ? (((/* implicit */int) (signed char)40)) : (-1131423945)))) ? (((/* implicit */int) (signed char)-38)) : (((/* implicit */int) (unsigned short)57533)))))));
                }
            } 
        } 
    } 
}
