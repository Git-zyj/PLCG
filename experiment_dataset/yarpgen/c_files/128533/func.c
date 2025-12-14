/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128533
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128533 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128533
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
    var_12 += ((/* implicit */int) var_3);
    var_13 = ((/* implicit */unsigned char) (-(((/* implicit */int) (!(((/* implicit */_Bool) min((var_8), (var_8)))))))));
    var_14 = ((/* implicit */long long int) (+(((((/* implicit */_Bool) ((unsigned char) var_3))) ? (((((/* implicit */_Bool) (short)3178)) ? (((/* implicit */int) (short)-3176)) : (((/* implicit */int) (short)3178)))) : (((/* implicit */int) max((var_10), (((/* implicit */short) var_5)))))))));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        var_15 = ((/* implicit */short) min((arr_0 [i_0]), (max((min((arr_0 [i_0]), (((/* implicit */long long int) arr_1 [i_0])))), (((/* implicit */long long int) min((arr_2 [i_0]), (arr_2 [i_0]))))))));
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 13; i_2 += 4) 
            {
                {
                    var_16 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((arr_8 [i_0] [i_0]) ? (((/* implicit */int) arr_5 [i_0] [i_0])) : (arr_3 [i_1])))))) ? (((/* implicit */int) ((_Bool) ((short) arr_2 [i_1])))) : (((/* implicit */int) ((unsigned short) arr_8 [i_1] [i_0])))));
                    arr_10 [i_0] = ((/* implicit */unsigned short) arr_9 [i_2]);
                }
            } 
        } 
    }
    /* vectorizable */
    for (long long int i_3 = 0; i_3 < 16; i_3 += 2) 
    {
        var_17 = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_13 [i_3] [i_3]))));
        arr_14 [i_3] = ((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */_Bool) (unsigned char)52)) ? (((/* implicit */long long int) ((/* implicit */int) (short)3178))) : (3365633560572702738LL))));
        var_18 += ((/* implicit */short) ((((/* implicit */_Bool) arr_13 [i_3] [i_3])) ? (((/* implicit */int) ((_Bool) arr_12 [(unsigned short)14]))) : (((((/* implicit */_Bool) arr_11 [i_3])) ? (((/* implicit */int) arr_13 [i_3] [i_3])) : (((/* implicit */int) arr_13 [i_3] [i_3]))))));
    }
    for (unsigned char i_4 = 2; i_4 < 15; i_4 += 2) 
    {
        var_19 += ((/* implicit */unsigned char) ((short) ((((/* implicit */_Bool) (signed char)2)) ? (((/* implicit */int) (unsigned char)219)) : (((/* implicit */int) ((_Bool) (unsigned char)128))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_5 = 4; i_5 < 15; i_5 += 2) 
        {
            var_20 += ((/* implicit */short) (~(((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) (short)14685)) : (((/* implicit */int) (unsigned char)215))))));
            var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) (+((~(((/* implicit */int) arr_21 [i_4 + 1] [i_4 - 1] [i_4 - 1])))))))));
            /* LoopNest 3 */
            for (unsigned char i_6 = 3; i_6 < 16; i_6 += 4) 
            {
                for (short i_7 = 0; i_7 < 17; i_7 += 1) 
                {
                    for (int i_8 = 3; i_8 < 16; i_8 += 2) 
                    {
                        {
                            var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_21 [i_4] [i_5 - 3] [i_5 - 1])) ? (((/* implicit */int) arr_21 [i_4] [i_5] [i_5 - 4])) : (((/* implicit */int) arr_21 [(_Bool)0] [i_5] [i_5 + 1]))));
                            var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_6 - 1] [i_6 - 3])) ? (((/* implicit */int) arr_20 [i_6 - 3] [i_6 - 3])) : (((/* implicit */int) arr_20 [i_6 - 1] [i_6 - 2]))));
                            var_24 = ((/* implicit */_Bool) min((var_24), (((/* implicit */_Bool) ((unsigned char) (~(((/* implicit */int) arr_15 [i_7] [i_8]))))))));
                            var_25 = ((/* implicit */short) ((signed char) arr_25 [i_6] [i_6] [i_5 - 3]));
                            arr_28 [i_4] [i_4] [i_4 + 1] [i_4] [i_4] [i_4 - 2] [i_6] = ((/* implicit */signed char) ((((_Bool) arr_18 [i_4 + 2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_26 [i_7]))) : (((((/* implicit */_Bool) 6128859006252804759LL)) ? (-1609882954253204180LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)241)))))));
                        }
                    } 
                } 
            } 
        }
    }
}
