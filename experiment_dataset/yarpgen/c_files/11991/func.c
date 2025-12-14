/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11991
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11991 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11991
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
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                var_12 = (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) 12946200309679127598ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)123))) : (5265000169204471199ULL)))) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_6))) ^ (var_10))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) arr_4 [i_1] [i_1] [i_1])) : (((/* implicit */int) (short)28349))))))));
                var_13 = ((/* implicit */unsigned char) min((var_13), (((/* implicit */unsigned char) var_1))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (short i_2 = 0; i_2 < 22; i_2 += 3) 
    {
        var_14 = ((/* implicit */unsigned long long int) (~((~(var_9)))));
        /* LoopNest 2 */
        for (short i_3 = 2; i_3 < 21; i_3 += 2) 
        {
            for (long long int i_4 = 0; i_4 < 22; i_4 += 1) 
            {
                {
                    var_15 = ((/* implicit */_Bool) var_0);
                    /* LoopNest 2 */
                    for (short i_5 = 0; i_5 < 22; i_5 += 3) 
                    {
                        for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                        {
                            {
                                var_16 = ((/* implicit */_Bool) ((var_8) / (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (short)28348))) % (arr_14 [i_2] [i_2] [i_6 - 1] [i_3 - 1] [i_4] [i_5]))))));
                                arr_19 [i_2] [i_6] [i_4] [i_5] [i_5] [i_6 - 1] = ((/* implicit */unsigned short) (short)28348);
                            }
                        } 
                    } 
                    var_17 -= ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) | (5500543764030424017ULL))))));
                }
            } 
        } 
    }
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
    {
        arr_22 [i_7] |= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)29)) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)8)))))) ? (max((((/* implicit */unsigned long long int) var_7)), (12946200309679127599ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))));
        var_18 = ((/* implicit */unsigned char) ((5265000169204471195ULL) == (((/* implicit */unsigned long long int) (-(var_9))))));
        var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) 12946200309679127598ULL))));
        arr_23 [i_7] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_18 [i_7])) : (((((((/* implicit */int) var_6)) + (2147483647))) >> (((((/* implicit */int) arr_7 [i_7])) + (1934)))))));
        /* LoopSeq 1 */
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            var_20 = ((/* implicit */unsigned long long int) ((var_11) % (((/* implicit */unsigned int) ((/* implicit */int) var_7)))));
            arr_27 [i_7] [i_8] = ((/* implicit */_Bool) var_9);
        }
    }
}
