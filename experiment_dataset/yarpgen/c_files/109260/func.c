/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109260
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109260 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109260
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
    for (unsigned short i_0 = 4; i_0 < 15; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            {
                arr_5 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */int) var_6)), (((1034127001) >> (((((/* implicit */int) (short)896)) - (886)))))))) ? (max((((/* implicit */unsigned long long int) (short)911)), (var_1))) : (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_6))) / (arr_1 [i_1] [i_0 - 2]))))));
                arr_6 [(unsigned char)2] = ((/* implicit */unsigned int) max(((+(arr_1 [i_0] [i_0]))), (((/* implicit */long long int) var_11))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 17; i_2 += 2) 
                {
                    for (unsigned int i_3 = 0; i_3 < 17; i_3 += 1) 
                    {
                        {
                            arr_14 [(short)14] [i_1] [(short)14] [i_3] [1U] = ((/* implicit */unsigned long long int) (~(var_5)));
                            /* LoopSeq 2 */
                            for (signed char i_4 = 1; i_4 < 16; i_4 += 2) /* same iter space */
                            {
                                var_12 = ((/* implicit */short) min((var_12), (((/* implicit */short) (~(max((((/* implicit */long long int) var_5)), (((((/* implicit */_Bool) (short)-889)) ? (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_4 + 1] [i_3] [i_2]))) : (var_8))))))))));
                                arr_18 [i_0] [i_0 - 1] [i_3] [i_0] [i_0] = ((/* implicit */signed char) (unsigned char)112);
                            }
                            /* vectorizable */
                            for (signed char i_5 = 1; i_5 < 16; i_5 += 2) /* same iter space */
                            {
                                var_13 = ((/* implicit */unsigned long long int) max((var_13), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)110)) ? (((arr_7 [i_0 - 3] [i_0] [i_0 - 3] [i_0]) ? (1770500748) : (((/* implicit */int) (signed char)127)))) : (((/* implicit */int) arr_11 [i_5] [i_5 - 1] [i_5] [i_5 + 1] [(_Bool)1])))))));
                                var_14 = (!(((/* implicit */_Bool) ((signed char) (short)1507))));
                                var_15 = ((/* implicit */signed char) ((((/* implicit */int) ((_Bool) -1LL))) ^ (var_2)));
                                var_16 = ((arr_3 [i_3] [i_3]) >= (var_10));
                            }
                            var_17 = ((/* implicit */int) -1660190373593880997LL);
                        }
                    } 
                } 
            }
        } 
    } 
    var_18 = var_4;
    var_19 += ((/* implicit */unsigned long long int) var_8);
    /* LoopSeq 2 */
    for (unsigned int i_6 = 0; i_6 < 11; i_6 += 3) /* same iter space */
    {
        var_20 = ((/* implicit */int) max((var_20), ((~(((/* implicit */int) (unsigned char)1))))));
        /* LoopNest 2 */
        for (signed char i_7 = 0; i_7 < 11; i_7 += 3) 
        {
            for (long long int i_8 = 0; i_8 < 11; i_8 += 1) 
            {
                {
                    var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) min((13ULL), (((/* implicit */unsigned long long int) (unsigned char)112)))))))))))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_9 = 1; i_9 < 9; i_9 += 3) 
                    {
                        arr_30 [i_6] [i_6] [i_6] [i_8] [i_8] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) var_2)) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_29 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6])) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) (unsigned char)150))))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)25))) : (min((((/* implicit */long long int) (signed char)54)), (-1LL)))))));
                        var_22 = ((((/* implicit */long long int) min(((~(((/* implicit */int) (short)-9392)))), (2147483520)))) ^ (5764522871252247167LL));
                    }
                    arr_31 [i_6] [i_7] [i_6] = ((/* implicit */short) (~(((/* implicit */int) min((arr_27 [i_6] [i_6] [i_6]), (arr_15 [i_6] [i_7] [i_7] [i_8] [i_8]))))));
                    arr_32 [i_6] [i_6] [i_8] = ((/* implicit */short) min((((unsigned int) (+(((/* implicit */int) (unsigned short)28545))))), (((/* implicit */unsigned int) ((unsigned char) -9119768595185068617LL)))));
                }
            } 
        } 
        var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_6] [i_6] [i_6] [i_6] [i_6])) ? (((((/* implicit */_Bool) arr_3 [i_6] [i_6])) ? (arr_3 [i_6] [i_6]) : (((/* implicit */long long int) 2670561947U)))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))));
    }
    /* vectorizable */
    for (unsigned int i_10 = 0; i_10 < 11; i_10 += 3) /* same iter space */
    {
        var_24 = ((/* implicit */unsigned long long int) arr_20 [i_10] [i_10] [i_10] [i_10] [i_10]);
        var_25 = ((/* implicit */unsigned short) (unsigned char)134);
        var_26 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_33 [i_10])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (short)8))))));
    }
    var_27 = ((/* implicit */signed char) max((min(((~(var_3))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)111)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)134))) : (var_11)))))), (((/* implicit */unsigned long long int) var_5))));
}
