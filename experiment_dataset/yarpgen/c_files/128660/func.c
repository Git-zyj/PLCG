/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128660
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128660 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128660
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
    for (short i_0 = 2; i_0 < 16; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                var_15 = ((/* implicit */short) ((min((((/* implicit */long long int) arr_2 [i_0 + 1] [i_0 - 2] [i_0 + 2])), (-248899895585463932LL))) != (((var_5) - (((/* implicit */long long int) var_8))))));
                var_16 = ((/* implicit */short) ((((/* implicit */int) (signed char)7)) >> (((-248899895585463932LL) + (248899895585463938LL)))));
                /* LoopNest 2 */
                for (signed char i_2 = 2; i_2 < 17; i_2 += 2) 
                {
                    for (short i_3 = 2; i_3 < 16; i_3 += 4) 
                    {
                        {
                            var_17 = max(((~(248899895585463942LL))), (((/* implicit */long long int) (((_Bool)1) ? ((-2147483647 - 1)) : (((/* implicit */int) var_13))))));
                            /* LoopSeq 1 */
                            for (unsigned long long int i_4 = 3; i_4 < 17; i_4 += 4) 
                            {
                                arr_14 [14] [i_1] [(short)17] [i_3] [i_4] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) var_7)) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-1))))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_1 [i_2 + 1])))))));
                                var_18 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_2 - 1])) ? (((/* implicit */int) (signed char)32)) : (arr_0 [i_2 - 2])))) ? (((/* implicit */long long int) ((((((((/* implicit */int) var_12)) ^ (var_8))) + (2147483647))) << (((/* implicit */int) ((((/* implicit */int) arr_1 [i_0])) >= (((/* implicit */int) (signed char)-32)))))))) : (min((((((/* implicit */_Bool) var_2)) ? (arr_13 [i_0 - 1] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)62))))), (((/* implicit */long long int) (~(((/* implicit */int) var_14))))))));
                                var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)96)) + (((/* implicit */int) (unsigned short)45370))))) ? (min((((/* implicit */int) ((unsigned short) (signed char)(-127 - 1)))), (max((arr_0 [12LL]), (((/* implicit */int) arr_1 [i_0])))))) : ((~(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) < (0ULL))))))));
                                arr_15 [i_2 - 2] = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) min(((short)31612), ((short)31621))))) - (((((/* implicit */_Bool) arr_7 [i_3] [i_3 - 1] [i_3 - 2] [i_3 + 1])) ? (var_5) : (arr_7 [i_4] [i_3] [i_3 + 2] [i_2 - 1])))));
                                var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(1606047523U)))) ? ((-(((/* implicit */int) var_3)))) : ((-(-2147483643)))));
                            }
                            var_21 = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_14))) / (arr_13 [i_0 - 2] [i_2 + 1])))), ((-(9462912906081832675ULL)))));
                        }
                    } 
                } 
                arr_16 [i_0 - 1] [i_0 - 1] [i_1] = (-((-(arr_9 [i_0] [i_1]))));
                var_22 = ((/* implicit */int) ((((/* implicit */_Bool) ((4632103478076987642ULL) << (((((/* implicit */int) var_13)) - (13691)))))) && (((((/* implicit */int) var_14)) < (((/* implicit */int) var_1))))));
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (-(((/* implicit */int) (short)-30232))))) ? (((((/* implicit */_Bool) (signed char)86)) ? (((/* implicit */unsigned long long int) -248899895585463932LL)) : (13188971484700788519ULL))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_12))))))) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))));
    var_24 = ((/* implicit */int) ((((/* implicit */_Bool) 11001110499298346305ULL)) || (((/* implicit */_Bool) (unsigned char)96))));
    var_25 = ((/* implicit */_Bool) (~(min((((((/* implicit */_Bool) 4294967295U)) ? (5000584878392011731LL) : (((/* implicit */long long int) -2147483624)))), (((((/* implicit */_Bool) (short)20)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-8339))) : (34359738367LL)))))));
    var_26 = ((/* implicit */unsigned int) var_3);
}
