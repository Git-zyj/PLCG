/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102989
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102989 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102989
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
    var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_10))))) ? (((/* implicit */int) min((min((((/* implicit */unsigned short) var_2)), (var_19))), (((/* implicit */unsigned short) var_1))))) : (((int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_2))))))))));
    var_21 = ((/* implicit */int) ((((/* implicit */_Bool) max((var_7), (((((/* implicit */int) var_19)) & (((/* implicit */int) var_3))))))) ? (((/* implicit */unsigned int) (-(var_6)))) : (((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))) / (((4294967295U) / (4294967271U)))))));
    var_22 = ((/* implicit */signed char) var_16);
    var_23 = ((/* implicit */_Bool) max(((+(((/* implicit */int) ((short) var_7))))), (((/* implicit */int) var_18))));
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        var_24 = ((/* implicit */int) max((arr_1 [10] [i_0]), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) (short)12429)), (max((((/* implicit */unsigned short) var_8)), (var_0))))))));
        var_25 = ((/* implicit */int) ((short) (-(1065905384))));
        /* LoopNest 2 */
        for (long long int i_1 = 1; i_1 < 9; i_1 += 3) 
        {
            for (unsigned char i_2 = 2; i_2 < 10; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (short i_3 = 2; i_3 < 10; i_3 += 2) 
                    {
                        arr_11 [i_3 - 1] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) ((short) var_15))) | (((((/* implicit */_Bool) 4294967289U)) ? (((/* implicit */int) (short)25624)) : (((/* implicit */int) (_Bool)1))))));
                        var_26 = ((/* implicit */int) ((((/* implicit */int) (short)-12443)) > (arr_2 [i_0])));
                    }
                    var_27 *= ((/* implicit */signed char) ((unsigned char) arr_4 [(signed char)6] [i_2 + 1]));
                    var_28 = ((/* implicit */signed char) (-((((((-(((/* implicit */int) var_2)))) + (2147483647))) >> (((/* implicit */int) ((unsigned short) (-2147483647 - 1))))))));
                }
            } 
        } 
    }
    for (int i_4 = 0; i_4 < 13; i_4 += 4) 
    {
        var_29 = ((/* implicit */short) var_9);
        var_30 = ((/* implicit */signed char) max((var_30), (((/* implicit */signed char) min((((/* implicit */unsigned int) (-(((/* implicit */int) var_8))))), (7U))))));
    }
    for (short i_5 = 0; i_5 < 18; i_5 += 1) 
    {
        /* LoopNest 3 */
        for (signed char i_6 = 0; i_6 < 18; i_6 += 4) 
        {
            for (unsigned int i_7 = 0; i_7 < 18; i_7 += 2) 
            {
                for (int i_8 = 1; i_8 < 17; i_8 += 4) 
                {
                    {
                        var_31 = ((/* implicit */unsigned int) (+(var_7)));
                        var_32 = ((/* implicit */signed char) min((var_32), (((/* implicit */signed char) min((((/* implicit */int) ((25U) < (2438693508U)))), ((+(((int) var_11)))))))));
                        var_33 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) ((unsigned char) (unsigned char)240)))))) ? (((/* implicit */unsigned int) min((((/* implicit */int) var_5)), (var_6)))) : (((((28U) * (2438693500U))) / (((/* implicit */unsigned int) ((/* implicit */int) ((short) var_15))))))));
                    }
                } 
            } 
        } 
        var_34 = ((/* implicit */unsigned char) min((((/* implicit */int) ((unsigned char) 1856273789U))), (max((arr_18 [i_5] [i_5]), (((/* implicit */int) max((((/* implicit */unsigned short) arr_24 [i_5] [i_5] [i_5] [i_5] [i_5])), (arr_17 [i_5] [i_5]))))))));
        var_35 = ((/* implicit */signed char) ((max((arr_19 [i_5]), (((/* implicit */unsigned int) max((((/* implicit */short) var_15)), (var_5)))))) / (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)220))) < (1856273803U)))))));
        arr_25 [i_5] [i_5] = ((/* implicit */unsigned int) (((-(((/* implicit */int) var_8)))) != (((/* implicit */int) ((unsigned char) max((((/* implicit */unsigned int) var_6)), (4294967271U)))))));
    }
}
