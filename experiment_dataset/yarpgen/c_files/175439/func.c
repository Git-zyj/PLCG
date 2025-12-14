/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175439
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175439 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175439
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
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (short i_1 = 1; i_1 < 19; i_1 += 1) 
        {
            arr_5 [i_0] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_0] [i_1 + 1])) || (((/* implicit */_Bool) (signed char)55))))) & (((/* implicit */int) arr_2 [i_1 + 2]))));
            /* LoopSeq 1 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                var_19 = ((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) 4041083152306320685ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0]))) : (arr_1 [i_1]))));
                var_20 = ((/* implicit */unsigned long long int) arr_2 [i_2]);
                arr_9 [(unsigned short)15] [(short)13] [i_1] [i_0] = ((/* implicit */_Bool) var_15);
                arr_10 [i_0] [i_0] [i_2] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (signed char)55)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (15956851009726454045ULL))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
            }
        }
        /* vectorizable */
        for (unsigned char i_3 = 0; i_3 < 22; i_3 += 1) 
        {
            var_21 *= ((/* implicit */_Bool) ((((((/* implicit */int) (signed char)-55)) + (2147483647))) << (((((/* implicit */int) ((7697032323979730613ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) - (1)))));
            var_22 = ((/* implicit */short) ((((/* implicit */_Bool) 15956851009726454045ULL)) ? (6456918627735607715ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_18))))));
            var_23 = ((/* implicit */int) max((var_23), (((/* implicit */int) ((((/* implicit */unsigned int) 1222841022)) >= (2578368332U))))));
            arr_14 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_13 [i_0] [i_0])) || (((/* implicit */_Bool) arr_13 [i_0] [i_0]))));
        }
        arr_15 [i_0] = var_10;
    }
    /* LoopNest 3 */
    for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
    {
        for (unsigned short i_5 = 0; i_5 < 24; i_5 += 3) 
        {
            for (unsigned short i_6 = 0; i_6 < 24; i_6 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (signed char i_7 = 0; i_7 < 24; i_7 += 3) 
                    {
                        var_24 = ((/* implicit */unsigned long long int) max((var_24), (((/* implicit */unsigned long long int) (_Bool)0))));
                        var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) 5043040311254431962ULL))));
                        /* LoopSeq 1 */
                        for (int i_8 = 0; i_8 < 24; i_8 += 1) 
                        {
                            var_26 = ((/* implicit */long long int) ((((((/* implicit */int) arr_19 [i_8])) & (((/* implicit */int) (_Bool)0)))) >= (((/* implicit */int) arr_21 [5ULL]))));
                            var_27 = ((/* implicit */unsigned char) max((var_27), (((/* implicit */unsigned char) ((((/* implicit */_Bool) 924035169)) || (((((/* implicit */long long int) ((/* implicit */int) var_6))) == (arr_17 [i_4 + 1]))))))));
                            arr_29 [i_8] [i_7] [i_7] [i_5] [16] = ((/* implicit */int) ((((((/* implicit */int) (signed char)7)) >= (((/* implicit */int) (unsigned short)37048)))) || (((/* implicit */_Bool) 13789428887697293071ULL))));
                            arr_30 [i_8] [i_7] [i_7] [i_5] [i_4 + 1] = ((((/* implicit */int) arr_18 [i_4 + 1] [i_4 + 1])) >= (((/* implicit */int) arr_18 [i_4 + 1] [i_4 + 1])));
                            var_28 = ((arr_17 [i_7]) & (((/* implicit */long long int) ((/* implicit */int) (unsigned char)206))));
                        }
                        var_29 = ((/* implicit */unsigned int) (_Bool)1);
                    }
                    var_30 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_22 [(short)14] [i_4] [i_5] [i_6])) ? (((/* implicit */long long int) ((-1698346111) - (((((/* implicit */int) arr_18 [i_4 + 1] [(unsigned short)4])) - (((/* implicit */int) arr_19 [i_4]))))))) : (((long long int) var_14))));
                    arr_31 [i_6] [i_5] [i_4] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_19 [i_4 + 1])) ? (var_16) : (5078964287056794348ULL))) - (((/* implicit */unsigned long long int) ((long long int) arr_19 [i_4 + 1])))));
                }
            } 
        } 
    } 
    var_31 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_17))) * (((((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) & (((var_10) << (((var_10) - (15688413092418577099ULL)))))))));
}
