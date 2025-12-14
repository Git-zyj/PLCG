/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135621
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135621 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135621
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
    var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((1474100877U), (((/* implicit */unsigned int) (short)23256))))) ? (((/* implicit */long long int) ((int) ((((/* implicit */_Bool) var_8)) ? (var_9) : (var_5))))) : (min((((/* implicit */long long int) (short)23256)), (8871771720182982397LL)))));
    var_17 = ((/* implicit */long long int) var_9);
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        var_18 *= ((/* implicit */_Bool) 6656230286929146534LL);
        var_19 = ((/* implicit */int) max((var_19), (var_13)));
        arr_3 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)63)) ? (((/* implicit */long long int) ((/* implicit */int) (short)23258))) : (4503599627370495LL)));
        arr_4 [i_0] = ((((/* implicit */_Bool) max((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)63250))))), (((((var_7) + (2147483647))) << (((((/* implicit */int) (unsigned short)2048)) - (2048)))))))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-46))) : (((((/* implicit */long long int) ((/* implicit */int) var_3))) / (var_14))));
    }
    /* LoopSeq 2 */
    for (unsigned char i_1 = 0; i_1 < 19; i_1 += 2) 
    {
        var_20 = ((/* implicit */int) (unsigned short)63250);
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 19; i_2 += 2) 
        {
            for (unsigned char i_3 = 0; i_3 < 19; i_3 += 3) 
            {
                {
                    var_21 *= ((/* implicit */unsigned int) 1997879939);
                    arr_13 [i_3] [i_2] = ((/* implicit */_Bool) (unsigned short)25295);
                    arr_14 [i_1] = ((/* implicit */unsigned int) min((6656230286929146546LL), (((/* implicit */long long int) (signed char)-64))));
                }
            } 
        } 
        var_22 += ((/* implicit */unsigned int) arr_8 [i_1] [i_1] [i_1]);
    }
    /* vectorizable */
    for (unsigned char i_4 = 2; i_4 < 13; i_4 += 3) 
    {
        var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) ((int) var_10)))));
        arr_17 [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)25293))) : (6656230286929146555LL)))) ? (4294967295U) : (((/* implicit */unsigned int) ((var_2) ? (var_13) : (-175805890))))));
    }
    /* LoopNest 2 */
    for (unsigned int i_5 = 3; i_5 < 22; i_5 += 4) 
    {
        for (unsigned short i_6 = 4; i_6 < 19; i_6 += 2) 
        {
            {
                var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 175805889)) ? (((((/* implicit */_Bool) arr_22 [6] [i_5] [i_6])) ? (((/* implicit */int) (unsigned short)63282)) : (((/* implicit */int) (signed char)-90)))) : (((/* implicit */int) (signed char)16))))) ? (max((((/* implicit */long long int) 3561789091U)), (min((137371844608LL), (((/* implicit */long long int) 15U)))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_23 [i_6] [i_6] [i_5]) - (arr_22 [i_5] [i_6 - 3] [i_5])))) ? (((/* implicit */int) ((((/* implicit */_Bool) -5465199622207046241LL)) && (((/* implicit */_Bool) (unsigned short)40241))))) : (((((/* implicit */_Bool) 65536)) ? (((/* implicit */int) (unsigned short)3)) : (((/* implicit */int) (short)23278)))))))));
                var_25 = min((-1670480126), (((/* implicit */int) (signed char)41)));
            }
        } 
    } 
}
