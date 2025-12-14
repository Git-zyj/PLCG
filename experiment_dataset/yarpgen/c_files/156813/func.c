/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156813
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156813 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156813
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
    var_19 = ((/* implicit */short) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) (unsigned char)28)))) : (max((((/* implicit */unsigned int) var_7)), (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)96))) * (var_9)))))));
    var_20 = 2147483647;
    var_21 = ((/* implicit */signed char) ((_Bool) -22));
    var_22 = ((/* implicit */_Bool) (-(2315063357578660927ULL)));
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        var_23 += ((/* implicit */short) ((((/* implicit */_Bool) max((((arr_0 [i_0]) / (((/* implicit */long long int) ((/* implicit */int) var_10))))), (max((((/* implicit */long long int) var_11)), (2392132450850671916LL)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) ((var_11) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13)))))))) : (min((var_2), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_12)) == (((/* implicit */int) var_11)))))))));
        arr_2 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)-402))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)4095))) : (min((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)4095)) != (1476036204)))), (max((((/* implicit */unsigned int) (short)-409)), (637947086U)))))));
        var_24 |= ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_0))) * (max((((/* implicit */long long int) var_14)), (arr_0 [i_0])))));
        var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) (signed char)-127)), (max(((unsigned short)42224), (((/* implicit */unsigned short) (signed char)-72)))))))) < (((((/* implicit */_Bool) (+(((/* implicit */int) var_11))))) ? (((((/* implicit */_Bool) 412984084)) ? (11426765736575617761ULL) : (((/* implicit */unsigned long long int) arr_0 [i_0])))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_14)) * (((/* implicit */int) (unsigned char)205))))))))))));
    }
    /* vectorizable */
    for (unsigned short i_1 = 3; i_1 < 15; i_1 += 1) 
    {
        arr_5 [i_1] = (~(((/* implicit */int) (short)-8065)));
        var_26 = ((((/* implicit */_Bool) arr_3 [i_1])) ? (((((/* implicit */int) var_11)) * (((/* implicit */int) var_5)))) : (((((/* implicit */int) var_18)) / (((/* implicit */int) (short)401)))));
        var_27 += ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned long long int) (short)402))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)30956)) / (arr_4 [i_1])))) : (((unsigned long long int) arr_3 [(unsigned char)4]))));
        /* LoopSeq 3 */
        for (signed char i_2 = 0; i_2 < 16; i_2 += 1) 
        {
            var_28 -= ((/* implicit */unsigned short) (~(((/* implicit */int) (_Bool)1))));
            arr_8 [(_Bool)1] |= ((/* implicit */signed char) ((((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (2977364428587682169LL))) * (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))));
        }
        for (short i_3 = 2; i_3 < 14; i_3 += 3) 
        {
            /* LoopSeq 1 */
            for (int i_4 = 0; i_4 < 16; i_4 += 3) 
            {
                arr_13 [i_3] [i_1] = ((/* implicit */unsigned char) (-(((((/* implicit */int) (signed char)28)) / (2011347202)))));
                /* LoopNest 2 */
                for (short i_5 = 0; i_5 < 16; i_5 += 1) 
                {
                    for (unsigned short i_6 = 0; i_6 < 16; i_6 += 2) 
                    {
                        {
                            var_29 |= ((/* implicit */short) ((_Bool) (~(((/* implicit */int) var_12)))));
                            arr_18 [i_5] [i_5] [i_1] [i_5] [i_6] = var_15;
                            var_30 = ((/* implicit */int) min((var_30), (((/* implicit */int) (((_Bool)1) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))));
                        }
                    } 
                } 
            }
            arr_19 [i_1 + 1] [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)60))));
            /* LoopNest 3 */
            for (unsigned short i_7 = 0; i_7 < 16; i_7 += 3) 
            {
                for (unsigned short i_8 = 1; i_8 < 13; i_8 += 4) 
                {
                    for (unsigned int i_9 = 0; i_9 < 16; i_9 += 3) 
                    {
                        {
                            arr_29 [(signed char)6] |= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_4 [i_1 + 1])) ? (arr_4 [i_1 - 1]) : (((/* implicit */int) var_4))));
                            var_31 += ((((/* implicit */int) var_7)) - (((/* implicit */int) ((var_16) < (((/* implicit */unsigned int) 1476036187))))));
                            var_32 = ((_Bool) var_14);
                            arr_30 [i_1] [i_1] [i_1 + 1] [i_1] [i_1] = ((/* implicit */unsigned int) ((int) arr_12 [i_9] [i_8 - 1] [i_7] [i_1]));
                        }
                    } 
                } 
            } 
        }
        for (int i_10 = 0; i_10 < 16; i_10 += 1) 
        {
            arr_33 [i_1] [i_10] = ((/* implicit */unsigned char) ((((var_3) << (((((/* implicit */int) var_7)) - (6))))) == (((/* implicit */int) (_Bool)1))));
            var_33 = ((/* implicit */int) var_17);
        }
    }
}
