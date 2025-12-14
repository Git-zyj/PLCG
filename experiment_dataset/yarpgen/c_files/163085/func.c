/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163085
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163085 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163085
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
    var_13 = ((/* implicit */unsigned int) min((var_13), (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)65535)))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned short) arr_0 [i_0]);
        var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)6)) ? (((/* implicit */int) (unsigned short)2)) : (((/* implicit */int) (unsigned char)191))));
        /* LoopNest 3 */
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            for (unsigned short i_2 = 1; i_2 < 8; i_2 += 4) 
            {
                for (unsigned char i_3 = 0; i_3 < 10; i_3 += 4) 
                {
                    {
                        /* LoopSeq 3 */
                        for (unsigned char i_4 = 3; i_4 < 6; i_4 += 1) 
                        {
                            arr_15 [i_0] [i_0] = (-(((/* implicit */int) (unsigned short)59520)));
                            var_15 = ((unsigned short) (unsigned short)2);
                        }
                        for (signed char i_5 = 0; i_5 < 10; i_5 += 4) 
                        {
                            var_16 = 16777215;
                            var_17 *= ((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned short)65534))));
                        }
                        for (unsigned short i_6 = 0; i_6 < 10; i_6 += 1) 
                        {
                            arr_20 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_18 [i_1] [i_1] [i_2 + 1] [i_3] [i_3] [i_6])) ? (-8104527603287286976LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) (short)-12612)) ? (((/* implicit */int) (short)-12635)) : (((/* implicit */int) (short)-12640)))))));
                            var_18 = arr_1 [i_6];
                        }
                        arr_21 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */long long int) arr_16 [i_0] [i_0] [i_0] [(unsigned short)0] [i_0]);
                        var_19 ^= ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)25988)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)13609))) : (arr_14 [i_3] [i_2 + 2] [i_2 + 2] [i_3] [i_1])));
                    }
                } 
            } 
        } 
        var_20 += ((/* implicit */int) (short)12611);
    }
    /* vectorizable */
    for (unsigned short i_7 = 0; i_7 < 25; i_7 += 1) 
    {
        var_21 = ((/* implicit */int) (unsigned short)25988);
        arr_24 [i_7] [i_7] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_23 [i_7])) ? (1217461215) : (((/* implicit */int) (unsigned char)102))));
    }
    var_22 = ((/* implicit */unsigned int) ((short) (unsigned short)30278));
    var_23 = ((((/* implicit */_Bool) (unsigned short)255)) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)7)), ((unsigned short)45473)))) : (((/* implicit */int) ((signed char) -1217461216))))) : (((/* implicit */int) (!(((/* implicit */_Bool) max(((unsigned short)65535), (var_1))))))));
}
