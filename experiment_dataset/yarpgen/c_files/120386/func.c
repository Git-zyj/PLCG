/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120386
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120386 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120386
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
    var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */int) var_7)), (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_7)) : (var_9)))))) ? (((/* implicit */int) min((var_5), (((((/* implicit */int) var_0)) != (((/* implicit */int) var_0))))))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) min((((/* implicit */short) var_7)), (var_2))))))));
    var_20 = var_4;
    /* LoopSeq 4 */
    for (unsigned int i_0 = 1; i_0 < 17; i_0 += 3) 
    {
        var_21 = min((((/* implicit */int) min((arr_0 [i_0 + 2]), (arr_0 [i_0 + 2])))), ((+(((/* implicit */int) min(((unsigned char)2), ((unsigned char)2)))))));
        arr_2 [i_0] = ((/* implicit */_Bool) var_4);
        /* LoopSeq 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            arr_7 [i_0] [i_0] = ((((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1] [i_1] [i_0]))) != (((((/* implicit */_Bool) var_18)) ? (arr_3 [i_0 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned short) arr_4 [i_0 - 1] [i_1] [i_1])), (var_16))))))));
            /* LoopSeq 1 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                var_22 ^= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) max((((/* implicit */short) (_Bool)1)), ((short)-32183)))), (((arr_3 [i_2]) * (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [(unsigned char)7]))))))))));
                var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) max((((((/* implicit */_Bool) ((var_9) % (((/* implicit */int) var_2))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_4 [i_0] [i_1] [i_2]), (((/* implicit */signed char) var_10)))))) : (max((arr_9 [10] [i_1] [10]), (((/* implicit */unsigned long long int) arr_4 [i_0] [i_0] [i_0])))))), (((/* implicit */unsigned long long int) min(((unsigned short)42862), ((unsigned short)39614)))))))));
                arr_10 [i_0] [i_0] [i_2] = ((/* implicit */unsigned short) min((((((((/* implicit */_Bool) arr_6 [(short)10] [i_0 + 2])) || (((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0])))) ? (((((/* implicit */_Bool) arr_5 [i_0])) ? (((/* implicit */int) arr_4 [i_0] [i_1] [i_2])) : (arr_1 [i_2]))) : (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_13)))))), (((/* implicit */int) ((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0 + 1])) && (((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0 + 1])))))));
                var_24 = ((/* implicit */signed char) var_17);
                var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_7) ? (((/* implicit */unsigned int) (~(((/* implicit */int) arr_6 [(_Bool)1] [i_1]))))) : (arr_3 [i_0 + 3])))) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_4 [i_0] [i_0 - 1] [i_0 + 2])) << (((arr_1 [(short)17]) + (1947188197)))))) : (var_3)));
            }
        }
        for (unsigned int i_3 = 0; i_3 < 20; i_3 += 4) 
        {
            arr_13 [i_0] [i_0] = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) arr_6 [i_0 + 1] [i_0 + 1])) ? (((/* implicit */int) arr_6 [i_0 - 1] [i_0 + 1])) : (((/* implicit */int) var_2))))));
            arr_14 [i_3] &= ((/* implicit */signed char) min((var_3), (((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) != (var_12)))))))));
        }
        var_26 = ((/* implicit */_Bool) max((var_26), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0 + 2])) ? (((((/* implicit */_Bool) var_6)) ? (arr_3 [i_0 + 2]) : (((/* implicit */unsigned int) ((/* implicit */int) var_0))))) : (((/* implicit */unsigned int) max((((/* implicit */int) arr_0 [i_0])), (arr_1 [i_0]))))))) ? (max((((/* implicit */unsigned long long int) arr_0 [i_0 + 1])), (((arr_0 [i_0]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (var_12))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((var_13), (((/* implicit */unsigned char) arr_12 [(unsigned short)8]))))) ? (min((arr_5 [(unsigned short)10]), (((/* implicit */int) var_5)))) : (((/* implicit */int) min((var_11), (var_1))))))))))));
    }
    for (signed char i_4 = 0; i_4 < 17; i_4 += 3) 
    {
        var_27 = ((((/* implicit */_Bool) arr_1 [i_4])) ? (((((/* implicit */_Bool) (-2147483647 - 1))) ? (18446744073709551608ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)42872))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((arr_5 [i_4]), (((/* implicit */int) arr_8 [i_4]))))) ? (arr_3 [i_4]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_4] [i_4])))))));
        var_28 = ((/* implicit */short) (+(((/* implicit */int) ((((/* implicit */int) arr_12 [i_4])) < (((/* implicit */int) ((((/* implicit */int) arr_15 [i_4] [i_4])) != (((/* implicit */int) arr_4 [i_4] [i_4] [i_4]))))))))));
        arr_17 [i_4] = ((/* implicit */unsigned short) ((((/* implicit */int) max(((signed char)67), (((/* implicit */signed char) (_Bool)1))))) * (((/* implicit */int) arr_0 [i_4]))));
        var_29 = ((/* implicit */_Bool) max((var_29), (((/* implicit */_Bool) ((((/* implicit */_Bool) min((((arr_8 [i_4]) ? (((/* implicit */int) var_11)) : (arr_1 [i_4]))), (((/* implicit */int) arr_12 [(unsigned short)6]))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)25922)) ? (((/* implicit */int) (unsigned char)253)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) min((((/* implicit */short) (_Bool)0)), ((short)9595)))) : (705084062))) : (min((((/* implicit */int) ((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) arr_11 [i_4] [i_4] [i_4]))))), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_8 [i_4])) : (arr_5 [(unsigned char)18]))))))))));
        var_30 = ((/* implicit */unsigned int) arr_4 [i_4] [i_4] [i_4]);
    }
    /* vectorizable */
    for (unsigned long long int i_5 = 0; i_5 < 22; i_5 += 3) 
    {
        /* LoopSeq 2 */
        for (unsigned short i_6 = 0; i_6 < 22; i_6 += 1) 
        {
            var_31 = ((/* implicit */unsigned short) ((arr_20 [i_5] [i_6]) ? (((/* implicit */int) arr_20 [i_5] [i_6])) : (((/* implicit */int) arr_20 [i_5] [i_5]))));
            arr_23 [(_Bool)1] = ((/* implicit */unsigned char) ((((arr_21 [i_6] [i_5]) & (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_5] [i_5]))))) & (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_5] [i_5])))));
            arr_24 [i_5] = ((/* implicit */unsigned char) (~(((/* implicit */int) var_18))));
            arr_25 [i_5] = ((/* implicit */unsigned int) (+(((/* implicit */int) var_1))));
            var_32 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) (unsigned short)27165)) ? (((/* implicit */int) arr_18 [i_5] [i_6])) : (((/* implicit */int) (_Bool)1))))));
        }
        for (short i_7 = 0; i_7 < 22; i_7 += 3) 
        {
            var_33 = ((/* implicit */unsigned long long int) max((var_33), (((((/* implicit */_Bool) arr_27 [i_5] [i_5] [i_7])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_27 [i_7] [i_5] [i_5]))) : (((((/* implicit */_Bool) var_18)) ? (arr_26 [i_5] [i_7] [i_5]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_7])))))))));
            arr_28 [i_7] [(unsigned short)7] = ((/* implicit */unsigned long long int) arr_27 [i_5] [i_5] [i_5]);
            var_34 = ((((/* implicit */_Bool) ((var_6) * (((/* implicit */int) arr_20 [i_5] [i_5]))))) ? (((((/* implicit */_Bool) arr_18 [i_5] [i_7])) ? (((/* implicit */int) var_15)) : (var_14))) : (((/* implicit */int) arr_27 [i_5] [i_7] [i_5])));
            arr_29 [i_5] = ((arr_19 [i_5]) ? (((/* implicit */int) arr_19 [i_5])) : (((/* implicit */int) arr_19 [i_5])));
        }
        var_35 = ((/* implicit */unsigned char) ((arr_19 [i_5]) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (arr_26 [i_5] [i_5] [i_5]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_22 [i_5])) > (((/* implicit */int) arr_19 [i_5]))))))));
    }
    for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
    {
        arr_32 [i_8 - 1] = ((/* implicit */_Bool) min((((((((/* implicit */_Bool) arr_26 [i_8] [i_8 - 1] [(_Bool)1])) && (((/* implicit */_Bool) var_3)))) ? (var_17) : (arr_21 [i_8] [(signed char)7]))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_26 [(unsigned short)10] [i_8] [i_8])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (arr_21 [i_8] [i_8 - 1])))) ? ((+(arr_21 [i_8] [i_8]))) : (((/* implicit */unsigned int) ((/* implicit */int) max((arr_30 [(_Bool)1]), (((/* implicit */unsigned short) var_0))))))))));
        var_36 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) ((arr_19 [i_8]) ? (var_4) : (((/* implicit */unsigned long long int) arr_21 [i_8] [i_8]))))) ? (var_12) : (arr_26 [i_8 - 1] [i_8 - 1] [i_8 - 1]))), (((((arr_26 [i_8] [i_8] [i_8]) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_16))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_8] [i_8])))))));
    }
    var_37 = ((/* implicit */unsigned short) max((((((min((var_9), (((/* implicit */int) var_16)))) + (2147483647))) << (((max((var_12), (((/* implicit */unsigned long long int) var_6)))) - (18446744071734456077ULL))))), (var_6)));
}
