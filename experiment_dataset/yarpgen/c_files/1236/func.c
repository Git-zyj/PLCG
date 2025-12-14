/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1236
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1236 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1236
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
    var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) ((unsigned int) (short)29566)))));
    var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) (+(((/* implicit */int) ((short) var_14))))))));
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            for (signed char i_2 = 1; i_2 < 23; i_2 += 1) 
            {
                {
                    arr_9 [i_0] [i_1] [i_1] [(unsigned short)4] |= ((/* implicit */unsigned char) ((unsigned short) arr_7 [i_1]));
                    var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) ((signed char) ((((/* implicit */_Bool) arr_8 [i_2 - 1] [i_2] [i_2 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (arr_8 [i_2 - 1] [i_2] [i_2 - 1])))))));
                }
            } 
        } 
        var_22 -= ((/* implicit */signed char) ((((((/* implicit */_Bool) 2147483647)) ? (arr_6 [(short)6]) : (((/* implicit */unsigned int) ((((/* implicit */int) var_12)) * (((/* implicit */int) var_3))))))) / (((((/* implicit */_Bool) (unsigned short)62527)) ? (((unsigned int) (signed char)(-127 - 1))) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)(-127 - 1))))))));
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 24; i_3 += 1) 
        {
            for (signed char i_4 = 2; i_4 < 23; i_4 += 1) 
            {
                for (unsigned char i_5 = 2; i_5 < 23; i_5 += 1) 
                {
                    {
                        var_23 &= ((/* implicit */int) (+((-(((long long int) var_7))))));
                        arr_17 [16U] [(short)18] &= ((/* implicit */signed char) arr_12 [i_0] [i_5] [(short)4]);
                        var_24 -= ((/* implicit */signed char) (-((+(arr_14 [2U] [i_4 - 1] [i_4 + 1] [i_4 - 1])))));
                    }
                } 
            } 
        } 
        var_25 -= ((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_4 [i_0] [i_0] [18LL]), (((/* implicit */long long int) var_7))))) ? (((/* implicit */unsigned long long int) ((arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [12ULL]) + (arr_15 [0U] [i_0] [i_0] [i_0] [i_0] [0U])))) : (min((((/* implicit */unsigned long long int) var_11)), (17204368406958622015ULL)))));
    }
    for (long long int i_6 = 0; i_6 < 14; i_6 += 3) 
    {
        var_26 -= ((((/* implicit */int) arr_0 [4U])) > (((((/* implicit */int) (signed char)-124)) * (((/* implicit */int) (signed char)-118)))));
        var_27 = ((/* implicit */_Bool) max((var_27), (((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_6] [(short)0])))))) <= (((long long int) (~(17204368406958622015ULL))))))));
    }
}
