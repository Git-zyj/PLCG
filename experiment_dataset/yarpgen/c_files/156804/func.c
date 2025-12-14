/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156804
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156804 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156804
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
    var_17 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)15))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        var_18 -= ((/* implicit */_Bool) (unsigned char)15);
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            for (short i_2 = 3; i_2 < 10; i_2 += 4) 
            {
                {
                    arr_7 [i_0] = ((/* implicit */int) 3967497645U);
                    arr_8 [i_0] [0U] [0U] [i_2] = ((/* implicit */_Bool) arr_3 [i_0]);
                    arr_9 [(unsigned short)5] [i_0] [(unsigned short)5] [i_2] = ((/* implicit */unsigned long long int) (unsigned char)230);
                    arr_10 [i_0] = ((/* implicit */unsigned int) var_13);
                }
            } 
        } 
        arr_11 [i_0] = (unsigned char)15;
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 12; i_3 += 2) 
        {
            for (int i_4 = 1; i_4 < 9; i_4 += 2) 
            {
                {
                    var_19 = var_11;
                    var_20 = ((/* implicit */short) ((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)43935)) - (var_13)))) - (var_1)));
                }
            } 
        } 
    }
    for (signed char i_5 = 2; i_5 < 16; i_5 += 1) 
    {
        /* LoopSeq 2 */
        for (short i_6 = 0; i_6 < 17; i_6 += 3) 
        {
            var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) max((((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */long long int) var_3)) : ((-9223372036854775807LL - 1LL)))), (((/* implicit */long long int) (!(((/* implicit */_Bool) (short)-29337))))))))));
            var_22 -= ((/* implicit */unsigned long long int) ((short) max((arr_17 [i_5 - 1]), (arr_17 [i_5 + 1]))));
        }
        for (unsigned char i_7 = 0; i_7 < 17; i_7 += 2) 
        {
            arr_23 [i_5] = var_7;
            var_23 = max((((var_12) & (((/* implicit */long long int) ((/* implicit */int) (signed char)-127))))), (((/* implicit */long long int) max((((/* implicit */short) var_10)), (var_14)))));
            arr_24 [i_5] = ((/* implicit */short) (_Bool)0);
            var_24 = var_9;
        }
        var_25 = ((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned short)8026))));
        var_26 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) 7ULL)))) == (max((((/* implicit */unsigned int) max((((/* implicit */short) var_15)), (var_7)))), (min((((/* implicit */unsigned int) var_14)), (4294967282U)))))));
    }
}
