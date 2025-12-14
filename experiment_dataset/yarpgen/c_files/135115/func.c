/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135115
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135115 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135115
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
    var_12 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? ((((((_Bool)1) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (_Bool)1)))) - (((((/* implicit */int) (unsigned short)65530)) + (((/* implicit */int) (_Bool)1)))))) : ((+(((/* implicit */int) (_Bool)1))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */int) ((signed char) (_Bool)0));
        var_13 ^= ((/* implicit */short) ((arr_0 [i_0]) ^ (((/* implicit */unsigned long long int) -1))));
    }
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_1 = 1; i_1 < 14; i_1 += 4) 
    {
        arr_6 [i_1] = ((/* implicit */signed char) (-(((((/* implicit */_Bool) 15192775966353801674ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)40199))))));
        arr_7 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */int) arr_4 [i_1])) : (((/* implicit */int) arr_5 [i_1]))));
        /* LoopSeq 1 */
        for (short i_2 = 2; i_2 < 16; i_2 += 2) 
        {
            var_14 &= ((/* implicit */signed char) ((short) arr_5 [i_2]));
            /* LoopSeq 2 */
            for (unsigned short i_3 = 1; i_3 < 16; i_3 += 3) 
            {
                arr_13 [i_1] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */int) arr_5 [i_1])) > (((/* implicit */int) (signed char)-120)))))));
                arr_14 [i_2] [i_1] [i_3] [i_1] = ((/* implicit */unsigned long long int) ((int) arr_8 [i_1] [i_1]));
                var_15 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */int) (unsigned char)64)) - (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (short)12414))));
            }
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                arr_17 [i_1] [i_2] [i_1] = ((/* implicit */short) arr_9 [i_1]);
                arr_18 [i_1] [i_1] = (i_1 % 2 == zero) ? (((/* implicit */unsigned long long int) ((arr_12 [i_1 + 2] [i_2 + 1] [i_2 - 2] [4]) % (((arr_9 [i_1]) << (((3726326651U) - (3726326651U)))))))) : (((/* implicit */unsigned long long int) ((arr_12 [i_1 + 2] [i_2 + 1] [i_2 - 2] [4]) % (((((arr_9 [i_1]) + (2147483647))) << (((3726326651U) - (3726326651U))))))));
            }
            var_16 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) >= (3327241737135476307ULL)));
        }
        /* LoopSeq 3 */
        for (unsigned char i_5 = 0; i_5 < 17; i_5 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned int i_6 = 0; i_6 < 17; i_6 += 4) 
            {
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    {
                        var_17 = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)-64)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1]))) : (18198808866550471634ULL)));
                        var_18 = ((/* implicit */unsigned long long int) max((var_18), (((((/* implicit */_Bool) (unsigned short)3753)) ? (3327241737135476289ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)5776)))))));
                        arr_27 [(unsigned short)8] [i_1] [(unsigned short)8] [i_7] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 8588327197293728327ULL)) ? (3976806021577343412ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)37582)))))) ? (((/* implicit */int) arr_24 [i_1 + 1] [i_1 + 1] [i_6])) : (((/* implicit */int) ((unsigned short) (short)22583)))));
                    }
                } 
            } 
            var_19 = ((/* implicit */signed char) arr_11 [5] [5] [i_1 + 3]);
            var_20 *= ((/* implicit */short) ((((int) 9214364837600034816ULL)) ^ (((/* implicit */int) (!(arr_20 [i_5]))))));
            /* LoopNest 2 */
            for (signed char i_8 = 4; i_8 < 14; i_8 += 2) 
            {
                for (short i_9 = 0; i_9 < 17; i_9 += 1) 
                {
                    {
                        arr_34 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_10 [(_Bool)1] [i_8 + 1] [i_8]))));
                        arr_35 [i_1] [i_5] [i_8 + 2] [i_9] = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_25 [i_1 - 1] [i_1 + 3] [i_8 - 1]))));
                        arr_36 [i_1] [9ULL] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_1])) ? (((/* implicit */int) (short)12114)) : (((/* implicit */int) (signed char)(-127 - 1)))))) ? (((((/* implicit */_Bool) arr_28 [i_1] [i_1] [i_8] [i_9])) ? (arr_30 [i_9]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-22576))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [(unsigned char)6] [(short)0] [(signed char)3])))));
                        arr_37 [i_1] [14] [i_8] [i_9] = ((/* implicit */unsigned short) ((_Bool) ((int) 14581575336569728381ULL)));
                    }
                } 
            } 
            arr_38 [i_5] [i_1] [7U] = ((/* implicit */unsigned short) 10631264091654392438ULL);
        }
        for (unsigned short i_10 = 0; i_10 < 17; i_10 += 3) 
        {
            var_21 = ((/* implicit */long long int) ((3ULL) << (((((-2147483633) - (-2147483607))) + (75)))));
            arr_42 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)28118)) ? (((/* implicit */int) arr_24 [i_1 + 1] [i_1 - 1] [i_1 + 3])) : (((/* implicit */int) arr_24 [i_1 - 1] [i_1 + 1] [i_1 + 2]))));
        }
        for (unsigned long long int i_11 = 1; i_11 < 15; i_11 += 4) 
        {
            arr_45 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) arr_16 [i_1 + 2] [i_1] [i_1 + 2])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_16 [i_1 + 1] [i_1] [i_1 + 1]))));
            arr_46 [i_1] = ((/* implicit */signed char) (((!(((/* implicit */_Bool) (signed char)-119)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_22 [16] [6LL] [i_1 - 1])) ? (2147483647) : (((/* implicit */int) (signed char)29))))) : (arr_19 [i_1 - 1])));
            var_22 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_20 [i_1 + 2])) >> (((((/* implicit */_Bool) arr_23 [i_1] [i_11] [i_1] [16ULL])) ? (3ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_1])))))));
            arr_47 [i_1] [i_1] [i_1] = ((((((/* implicit */_Bool) (unsigned char)80)) ? (((/* implicit */int) arr_5 [i_1])) : (((/* implicit */int) (unsigned short)33994)))) > (((/* implicit */int) ((((/* implicit */int) (short)22571)) != (((/* implicit */int) (signed char)27))))));
        }
        var_23 = ((/* implicit */signed char) ((unsigned int) (signed char)-29));
    }
    /* vectorizable */
    for (unsigned long long int i_12 = 0; i_12 < 21; i_12 += 1) 
    {
        var_24 *= ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)2848)) != (((/* implicit */int) (short)22553))));
        var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) arr_48 [i_12] [i_12]))));
        var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_49 [i_12])) ^ (((/* implicit */int) arr_49 [i_12]))));
    }
    var_27 &= ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((((((((/* implicit */int) var_9)) - (((/* implicit */int) (signed char)40)))) + (2147483647))) << (((((/* implicit */int) ((signed char) 5796740373200453200LL))) - (80)))))) : (((((/* implicit */_Bool) max((var_4), (var_4)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)51)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_2))))) : (min((var_8), (((/* implicit */unsigned long long int) 2147483648U)))))));
}
