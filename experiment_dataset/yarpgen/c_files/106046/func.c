/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106046
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106046 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106046
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
    for (short i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (short i_1 = 2; i_1 < 23; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 2; i_2 < 23; i_2 += 1) 
                {
                    for (unsigned int i_3 = 2; i_3 < 22; i_3 += 4) 
                    {
                        {
                            /* LoopSeq 4 */
                            for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) /* same iter space */
                            {
                                var_17 = ((((((/* implicit */_Bool) (-(((/* implicit */int) arr_0 [i_0]))))) ? (arr_3 [i_0] [i_0]) : (((/* implicit */long long int) ((1190814774U) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [11ULL] [i_0])))))))) == (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (~(arr_13 [i_0] [i_0] [i_2 + 1] [i_2 + 1] [(unsigned char)16] [i_2 + 1])))))))));
                                arr_14 [i_2 + 1] [i_0] [i_4] = ((/* implicit */_Bool) (+(((/* implicit */int) var_10))));
                            }
                            /* vectorizable */
                            for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) /* same iter space */
                            {
                                var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_9) / (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_0] [(unsigned char)7] [i_0] [(unsigned short)18] [i_0])))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_16 [i_5] [i_1] [i_0] [i_1] [i_0]))))) : ((+(((/* implicit */int) var_10))))));
                                var_19 = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_16 [i_0] [i_0] [i_0] [i_3 + 2] [i_5 + 1]))));
                                var_20 = ((/* implicit */unsigned int) (~(4611685949707911168LL)));
                                var_21 &= ((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_16)))) < (-1455271203821927211LL));
                            }
                            for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) /* same iter space */
                            {
                                var_22 = ((/* implicit */unsigned char) var_4);
                                var_23 ^= ((/* implicit */short) min((var_14), (-4611685949707911178LL)));
                                var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_12)), (arr_17 [i_0] [i_0] [i_0] [i_0] [i_0])))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)51))) : (arr_9 [i_6] [12U] [i_2 + 1] [i_1])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_13))))) : (((/* implicit */int) (!(((/* implicit */_Bool) max((var_5), (arr_3 [i_0] [i_0])))))))));
                                var_25 = ((/* implicit */_Bool) (((((~(arr_3 [i_0] [i_3 - 1]))) + (9223372036854775807LL))) >> (((((/* implicit */_Bool) arr_10 [i_1] [i_1 + 1] [i_2] [i_2 + 1] [i_3 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (4918782098290867548LL)))));
                            }
                            for (unsigned long long int i_7 = 0; i_7 < 24; i_7 += 1) 
                            {
                                var_26 = ((/* implicit */unsigned short) ((min((((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1))))), (max((((/* implicit */long long int) (_Bool)1)), (4611685949707911178LL))))) >= (((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) (signed char)42)) < (((/* implicit */int) var_16))))) ^ (((/* implicit */int) arr_18 [i_0] [i_1 - 1] [i_2] [i_3] [i_0] [i_7])))))));
                                var_27 = (+(((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) (_Bool)1)))))) * ((~(1048544U))))));
                                var_28 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) ((var_5) ^ (((/* implicit */long long int) ((/* implicit */int) var_1)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_19 [i_1 + 1] [i_2 + 1] [i_2 - 1] [i_1 + 1] [i_0] [(short)3]), (arr_19 [i_2] [i_2 - 2] [23LL] [i_1 + 1] [23LL] [i_1 - 2]))))) : (8812151020134706028ULL)));
                                var_29 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((((/* implicit */int) arr_23 [i_0] [i_1])) << (((/* implicit */int) (_Bool)1))))) ^ (((1040993420U) | (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_7] [i_3] [i_2] [i_1 - 1] [i_0] [i_0])))))))), (((((/* implicit */_Bool) arr_5 [i_0] [i_3 - 1] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_0] [i_0]))) : (((var_2) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (short)31)))))))));
                            }
                            var_30 = ((/* implicit */unsigned short) (_Bool)1);
                        }
                    } 
                } 
                var_31 = ((long long int) min((4611685949707911190LL), (((/* implicit */long long int) (short)20484))));
            }
        } 
    } 
    var_32 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((8760349059356953803LL), (((/* implicit */long long int) min((((/* implicit */unsigned int) (short)-27656)), (3738140614U))))))) ? (var_2) : (((/* implicit */unsigned long long int) 4463162553568652692LL))));
    /* LoopNest 2 */
    for (signed char i_8 = 0; i_8 < 18; i_8 += 1) 
    {
        for (int i_9 = 0; i_9 < 18; i_9 += 3) 
        {
            {
                var_33 = max((((((/* implicit */int) ((((/* implicit */int) var_4)) == (((/* implicit */int) arr_23 [i_8] [i_8]))))) == (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)15))))))), ((!(((/* implicit */_Bool) arr_24 [i_8] [i_8])))));
                /* LoopSeq 1 */
                for (signed char i_10 = 0; i_10 < 18; i_10 += 2) 
                {
                    var_34 = ((/* implicit */unsigned short) (((~(arr_20 [i_9] [i_10] [i_9] [i_8] [23ULL] [i_8] [i_8]))) - (((/* implicit */long long int) ((/* implicit */int) ((arr_20 [i_8] [i_9] [i_9] [i_9] [i_9] [i_8] [i_8]) == (((/* implicit */long long int) arr_11 [i_8] [(_Bool)1] [i_10] [3LL] [i_10] [(short)5]))))))));
                    var_35 = ((/* implicit */short) ((((((/* implicit */int) arr_7 [i_8] [i_9] [i_10] [i_8])) >> (((((/* implicit */int) arr_7 [i_8] [2ULL] [(short)10] [i_8])) - (11600))))) >> (((((((/* implicit */_Bool) arr_7 [i_10] [i_8] [i_9] [i_8])) ? (((/* implicit */int) arr_7 [i_10] [18ULL] [i_8] [i_8])) : (((/* implicit */int) (signed char)100)))) - (11605)))));
                    var_36 = ((/* implicit */short) ((9442982830975611029ULL) == (((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_8] [i_8]))))) * (((/* implicit */int) arr_4 [i_8] [13U] [i_8])))))));
                    var_37 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) arr_31 [i_8])), (((((/* implicit */_Bool) ((9003761242733940583ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-48)))))) ? (13675632097430406376ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_10))))))));
                }
            }
        } 
    } 
    var_38 = ((/* implicit */short) ((((/* implicit */_Bool) ((2097144) ^ (((/* implicit */int) var_7))))) ? ((-((-(((/* implicit */int) var_4)))))) : ((~(((/* implicit */int) (short)21594))))));
}
