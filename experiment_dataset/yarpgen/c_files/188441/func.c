/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188441
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188441 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188441
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
    for (int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        var_17 = ((/* implicit */int) ((long long int) (~(((var_12) * (((/* implicit */int) arr_0 [i_0] [i_0])))))));
        /* LoopSeq 1 */
        for (short i_1 = 4; i_1 < 12; i_1 += 1) 
        {
            /* LoopNest 3 */
            for (unsigned char i_2 = 4; i_2 < 11; i_2 += 2) 
            {
                for (unsigned char i_3 = 0; i_3 < 13; i_3 += 3) 
                {
                    for (int i_4 = 0; i_4 < 13; i_4 += 4) 
                    {
                        {
                            var_18 |= ((/* implicit */int) min((4821401235841134368LL), (((/* implicit */long long int) 2114139410))));
                            var_19 &= ((/* implicit */unsigned char) min((((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_3] [i_4])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_1))))) : (-4821401235841134366LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) var_16)))))));
                        }
                    } 
                } 
            } 
            /* LoopSeq 1 */
            for (int i_5 = 3; i_5 < 9; i_5 += 4) 
            {
                arr_13 [i_0] [i_1] [i_5 - 3] = ((/* implicit */unsigned char) (short)24578);
                var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_12 [i_5 + 4] [i_1] [i_1 - 2] [i_1 - 2])) ? (((((/* implicit */_Bool) (short)0)) ? (4821401235841134383LL) : (((/* implicit */long long int) ((/* implicit */int) (short)32759))))) : (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_5 - 2] [i_5] [i_1 - 1] [i_5])))));
            }
        }
        arr_14 [i_0] = ((/* implicit */short) min((min((924686659), (((/* implicit */int) arr_6 [i_0] [i_0] [i_0] [i_0])))), ((~(((/* implicit */int) arr_5 [i_0] [i_0] [i_0] [i_0]))))));
        var_21 = ((/* implicit */short) ((((/* implicit */_Bool) (short)32759)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (unsigned short)11786))));
        /* LoopSeq 2 */
        for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
        {
            arr_18 [i_0] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) arr_17 [i_6 - 1] [i_6 - 1] [i_6 - 1])) ? (((/* implicit */int) arr_17 [i_6 - 1] [i_6 - 1] [i_6 - 1])) : (((/* implicit */int) (unsigned char)53)))), ((-(((/* implicit */int) arr_7 [i_0] [i_0] [i_6 - 1] [i_6]))))));
            var_22 = ((/* implicit */unsigned char) min((((/* implicit */long long int) var_16)), (((((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [(unsigned char)9] [i_0] [i_0]))) / (min((6194180012477628895LL), (((/* implicit */long long int) arr_15 [i_6 - 1]))))))));
            var_23 = var_15;
        }
        for (int i_7 = 0; i_7 < 13; i_7 += 2) 
        {
            var_24 = ((/* implicit */_Bool) var_8);
            arr_22 [i_7] [i_7] = ((/* implicit */unsigned char) arr_2 [i_0]);
            arr_23 [i_0] [i_0] = min((min((((((/* implicit */_Bool) 2077507938)) ? (((/* implicit */int) (short)2)) : (((/* implicit */int) (short)0)))), (var_5))), ((~(((/* implicit */int) arr_19 [i_0] [i_7] [i_7])))));
        }
    }
    var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1697730958)) ? (((/* implicit */int) (short)1916)) : (((/* implicit */int) (short)-5))))) && (var_3)));
}
