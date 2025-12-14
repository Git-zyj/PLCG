/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175309
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175309 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175309
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
    for (short i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */short) (!(((/* implicit */_Bool) max((((/* implicit */int) max((var_14), (((/* implicit */short) var_5))))), (((((/* implicit */_Bool) var_7)) ? (576544225) : (((/* implicit */int) (unsigned char)142)))))))));
                arr_7 [(_Bool)1] |= ((/* implicit */short) ((min((2188239509422362479ULL), (((((/* implicit */_Bool) var_8)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))))) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))));
            }
        } 
    } 
    var_21 = ((/* implicit */short) (+(((((/* implicit */int) (short)32765)) >> (((16258504564287189136ULL) - (16258504564287189131ULL)))))));
    /* LoopNest 3 */
    for (short i_2 = 3; i_2 < 18; i_2 += 1) 
    {
        for (unsigned char i_3 = 0; i_3 < 21; i_3 += 1) 
        {
            for (unsigned char i_4 = 0; i_4 < 21; i_4 += 3) 
            {
                {
                    var_22 = ((/* implicit */short) max((max((((/* implicit */int) var_12)), (((((/* implicit */int) var_5)) / (((/* implicit */int) var_5)))))), (((/* implicit */int) ((short) (short)18813)))));
                    var_23 = ((/* implicit */short) ((((/* implicit */unsigned long long int) 576544234)) - (2188239509422362479ULL)));
                    var_24 *= ((short) max((((/* implicit */short) ((4294967295U) != (((/* implicit */unsigned int) ((/* implicit */int) (short)-22392)))))), (var_14)));
                    /* LoopSeq 4 */
                    for (unsigned long long int i_5 = 0; i_5 < 21; i_5 += 3) 
                    {
                        arr_20 [i_5] [i_4] = ((/* implicit */unsigned long long int) var_12);
                        var_25 = ((((((/* implicit */int) var_4)) - (((/* implicit */int) var_11)))) - (((int) var_5)));
                    }
                    for (short i_6 = 3; i_6 < 19; i_6 += 1) 
                    {
                        arr_24 [(short)6] [i_6] [(short)3] [i_6] [i_6] [(unsigned char)17] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) != (min((min((((/* implicit */unsigned long long int) var_9)), (var_2))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)63718)))))))));
                        arr_25 [i_6] [i_4] [18ULL] [i_6] = ((/* implicit */unsigned char) 16258504564287189149ULL);
                    }
                    for (short i_7 = 2; i_7 < 20; i_7 += 2) 
                    {
                        arr_30 [i_7] [i_3] = ((/* implicit */short) ((max((((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) (short)-10578)) : (((/* implicit */int) (short)-13031)))), (((/* implicit */int) var_12)))) % (((/* implicit */int) max((var_18), (((/* implicit */short) ((signed char) var_14))))))));
                        var_26 *= ((/* implicit */unsigned char) ((unsigned short) min((((((/* implicit */int) var_18)) & (((/* implicit */int) var_13)))), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_11)))))));
                        var_27 = ((/* implicit */unsigned long long int) max(((short)10028), ((short)1730)));
                    }
                    for (short i_8 = 1; i_8 < 20; i_8 += 2) 
                    {
                        var_28 = ((/* implicit */unsigned char) (~(max((((((((/* implicit */int) (short)-10578)) + (2147483647))) << (((((var_16) + (306375520))) - (24))))), ((~(((/* implicit */int) var_4))))))));
                        var_29 = ((/* implicit */_Bool) max((var_29), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) min(((short)-10029), (((/* implicit */short) var_5)))))) ? (((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_1))))) - (((var_3) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (var_15))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_14)))))))));
                        var_30 = ((/* implicit */unsigned short) max((var_30), (((/* implicit */unsigned short) ((short) min((((short) 576544225)), (((/* implicit */short) ((unsigned char) var_0)))))))));
                    }
                }
            } 
        } 
    } 
    var_31 = ((/* implicit */_Bool) var_19);
    var_32 = ((/* implicit */short) max((var_32), (((/* implicit */short) ((((((/* implicit */_Bool) var_14)) && (((/* implicit */_Bool) var_19)))) ? (max((((((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) & (12092654108197622766ULL))), (((/* implicit */unsigned long long int) var_18)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))))));
}
