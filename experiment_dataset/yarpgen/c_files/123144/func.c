/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123144
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123144 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123144
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
    /* LoopSeq 4 */
    for (unsigned short i_0 = 2; i_0 < 16; i_0 += 4) 
    {
        arr_4 [i_0 + 1] = ((/* implicit */unsigned long long int) ((_Bool) ((long long int) var_9)));
        var_19 = ((/* implicit */unsigned int) min((((/* implicit */int) (unsigned short)25070)), (((arr_0 [i_0 + 1]) | (((/* implicit */int) ((unsigned short) (unsigned short)40466)))))));
        var_20 &= ((/* implicit */signed char) arr_2 [i_0 + 1]);
    }
    for (unsigned char i_1 = 0; i_1 < 21; i_1 += 1) 
    {
        var_21 ^= ((/* implicit */signed char) min((((/* implicit */int) ((unsigned char) (unsigned short)25091))), (((((/* implicit */_Bool) (unsigned char)135)) ? (((/* implicit */int) (unsigned short)32367)) : (((/* implicit */int) (unsigned short)25083))))));
        /* LoopSeq 2 */
        for (int i_2 = 3; i_2 < 19; i_2 += 1) 
        {
            var_22 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_2 + 1] [i_1] [i_1])) ? (((((/* implicit */int) arr_6 [i_1])) - (((/* implicit */int) arr_8 [i_1] [i_1])))) : (((/* implicit */int) max((arr_6 [i_1]), (((/* implicit */unsigned short) (short)18750)))))))) ? (((long long int) ((var_17) > (((/* implicit */int) arr_8 [i_1] [i_1]))))) : (((/* implicit */long long int) max((((((/* implicit */int) arr_8 [i_1] [i_1])) ^ (arr_5 [i_1]))), (((/* implicit */int) ((((/* implicit */unsigned long long int) var_11)) != (9426739531463484841ULL)))))))));
            var_23 = ((/* implicit */unsigned short) (((+(arr_7 [i_2 - 1] [i_2] [i_1]))) != (((/* implicit */unsigned long long int) min((((/* implicit */int) arr_8 [i_2 + 1] [i_1])), (((var_17) + (((/* implicit */int) var_9)))))))));
            arr_9 [i_2] [i_2] [i_1] = max((((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)10)), (arr_6 [i_1])))), (((((/* implicit */int) min((((/* implicit */unsigned short) var_18)), ((unsigned short)25091)))) << (((((/* implicit */int) min((((/* implicit */unsigned char) (signed char)104)), (var_12)))) - (97))))));
            /* LoopSeq 1 */
            for (long long int i_3 = 0; i_3 < 21; i_3 += 4) 
            {
                arr_13 [i_1] [i_1] = ((/* implicit */unsigned char) ((min(((+(((/* implicit */int) (_Bool)0)))), (((/* implicit */int) max((arr_10 [i_1] [i_2 + 1] [i_1] [i_3]), (arr_8 [i_1] [i_1])))))) < (((/* implicit */int) min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_10))))), ((unsigned short)55618))))));
                arr_14 [i_3] [i_2 - 1] [i_1] [i_3] = ((/* implicit */long long int) (~((-(min((arr_12 [i_1] [i_1] [i_1] [i_1]), (((/* implicit */unsigned long long int) var_2))))))));
                var_24 = (i_1 % 2 == zero) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_6 [i_1])) >> (((((/* implicit */int) arr_6 [i_1])) - (12857)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) ((arr_12 [i_1] [i_1] [i_1] [i_1]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_1] [i_1])))))))) : (arr_11 [i_1])))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_6 [i_1])) >> (((((((/* implicit */int) arr_6 [i_1])) - (12857))) - (33516)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) ((arr_12 [i_1] [i_1] [i_1] [i_1]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_1] [i_1])))))))) : (arr_11 [i_1]))));
                var_25 ^= max((min((arr_7 [i_3] [i_2 - 3] [i_3]), (arr_7 [i_3] [i_2 - 1] [i_3]))), (((((/* implicit */_Bool) arr_7 [i_3] [i_2 + 1] [i_3])) ? (arr_7 [i_3] [i_2 - 3] [i_3]) : (arr_7 [i_3] [i_2 - 2] [i_3]))));
            }
        }
        for (int i_4 = 3; i_4 < 20; i_4 += 1) 
        {
            var_26 *= ((/* implicit */signed char) min((-6663251303591946098LL), (9223372036854775807LL)));
            arr_17 [i_1] [i_1] = ((/* implicit */unsigned short) ((((min((arr_11 [i_1]), (((/* implicit */unsigned int) var_13)))) ^ (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_12 [i_1] [i_1] [i_1] [i_1])) ? (((/* implicit */int) (unsigned short)52854)) : (((/* implicit */int) (short)(-32767 - 1)))))))) - (((/* implicit */unsigned int) max((max((arr_5 [i_1]), (((/* implicit */int) arr_10 [i_1] [i_1] [i_1] [i_4])))), (((arr_5 [i_1]) / (arr_5 [i_1]))))))));
            var_27 = (i_1 % 2 == zero) ? (((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) var_3)), (((((((/* implicit */_Bool) arr_8 [i_1] [i_1])) ? (arr_12 [i_4] [i_4 + 1] [i_4] [i_1]) : (arr_12 [i_1] [i_4 - 1] [i_1] [i_1]))) >> (((max((((/* implicit */unsigned long long int) var_0)), (arr_12 [i_4] [i_4] [i_1] [i_1]))) - (9135114637540363962ULL)))))))) : (((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) var_3)), (((((((/* implicit */_Bool) arr_8 [i_1] [i_1])) ? (arr_12 [i_4] [i_4 + 1] [i_4] [i_1]) : (arr_12 [i_1] [i_4 - 1] [i_1] [i_1]))) >> (((((max((((/* implicit */unsigned long long int) var_0)), (arr_12 [i_4] [i_4] [i_1] [i_1]))) - (9135114637540363962ULL))) - (29240661994036397ULL))))))));
        }
    }
    for (unsigned long long int i_5 = 4; i_5 < 13; i_5 += 1) 
    {
        var_28 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) min((max((var_1), (((/* implicit */unsigned int) -2147483645)))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_10 [i_5 - 1] [i_5 + 1] [i_5] [i_5])) ? (((/* implicit */int) (unsigned char)89)) : (1960973663))))))), (((((/* implicit */unsigned long long int) ((long long int) arr_19 [i_5]))) % (max((arr_7 [i_5] [i_5] [i_5]), (((/* implicit */unsigned long long int) (_Bool)1))))))));
        arr_20 [i_5] = ((/* implicit */unsigned char) min((((/* implicit */int) (_Bool)1)), ((-(((/* implicit */int) var_7))))));
        var_29 = ((/* implicit */unsigned char) ((signed char) (+(-6897218876033468260LL))));
        var_30 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)-8)) ? (((/* implicit */int) (unsigned char)208)) : (2147483644)));
        arr_21 [i_5] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) min((((/* implicit */long long int) arr_19 [i_5])), (4769149345111212253LL)))) ? (max((var_4), (((/* implicit */int) arr_2 [i_5])))) : (min((((/* implicit */int) arr_6 [i_5])), ((-2147483647 - 1)))))) != (((((/* implicit */_Bool) var_15)) ? ((-(-1284468102))) : (((/* implicit */int) min((arr_16 [i_5] [i_5]), ((unsigned char)11))))))));
    }
    for (unsigned long long int i_6 = 2; i_6 < 19; i_6 += 4) 
    {
        arr_24 [i_6] = ((/* implicit */signed char) min((((/* implicit */long long int) min((arr_23 [i_6 - 1]), (max((arr_22 [i_6]), (arr_23 [i_6])))))), ((+(((var_14) / (((/* implicit */long long int) ((/* implicit */int) (unsigned char)241)))))))));
        var_31 = max((max((((/* implicit */int) ((((/* implicit */int) arr_22 [i_6 + 1])) < (((/* implicit */int) (signed char)64))))), (((((/* implicit */int) arr_23 [i_6])) / (var_4))))), (((/* implicit */int) ((short) ((unsigned long long int) arr_22 [i_6])))));
    }
    var_32 &= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_9))));
    var_33 = ((((/* implicit */_Bool) max((max((var_17), (var_17))), (((/* implicit */int) var_8))))) ? (((long long int) max((((/* implicit */long long int) var_3)), (var_11)))) : (((/* implicit */long long int) ((/* implicit */int) var_7))));
}
