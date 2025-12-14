/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159816
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159816 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159816
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
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 1; i_0 < 12; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (short i_1 = 3; i_1 < 11; i_1 += 1) 
        {
            /* LoopNest 3 */
            for (unsigned long long int i_2 = 4; i_2 < 13; i_2 += 4) 
            {
                for (unsigned char i_3 = 3; i_3 < 14; i_3 += 4) 
                {
                    for (unsigned char i_4 = 1; i_4 < 12; i_4 += 1) 
                    {
                        {
                            var_16 -= ((/* implicit */unsigned short) min((((8191348972554634227ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_3 + 1] [i_3 - 1]))))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_4 [i_3 + 1] [i_3 + 1])))))));
                            var_17 = ((/* implicit */unsigned short) arr_3 [2LL] [13]);
                            var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) ((unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!((_Bool)1))))) - (10255395101154917389ULL)))))));
                            var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) ((10255395101154917403ULL) >> ((((!(((/* implicit */_Bool) arr_9 [(unsigned char)0] [(unsigned char)0] [i_2] [(signed char)6])))) ? (((/* implicit */int) ((short) var_11))) : (((/* implicit */int) ((((/* implicit */_Bool) 8191348972554634241ULL)) || (((/* implicit */_Bool) 8191348972554634228ULL))))))))))));
                        }
                    } 
                } 
            } 
            arr_12 [i_0] [i_1] = 8191348972554634227ULL;
            /* LoopSeq 2 */
            for (short i_5 = 1; i_5 < 13; i_5 += 2) 
            {
                arr_16 [i_5] [i_1] [i_5 + 1] [i_1] = ((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))));
                var_20 *= ((/* implicit */unsigned char) ((max((((((/* implicit */_Bool) arr_9 [i_0] [i_0] [(short)10] [i_0])) ? (((/* implicit */unsigned long long int) 12LL)) : (8191348972554634227ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_0] [i_0 + 2])) ? (arr_5 [i_0] [i_0] [i_0] [i_0 + 1]) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [6] [i_5])))))))) | (((/* implicit */unsigned long long int) (~(var_13))))));
                var_21 = ((8191348972554634226ULL) > (8191348972554634232ULL));
                /* LoopSeq 1 */
                for (unsigned char i_6 = 1; i_6 < 13; i_6 += 4) 
                {
                    arr_20 [i_5 - 1] [i_1] = ((/* implicit */_Bool) ((long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) -1LL))))) >> (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)15))) & (8191348972554634226ULL))))));
                    arr_21 [i_0] [10ULL] [i_6] [i_6 - 1] [i_1] [i_5] &= ((/* implicit */long long int) (((+(((/* implicit */int) arr_14 [i_1 + 4] [i_5 - 1] [i_0 - 1] [i_6 + 2])))) - (((/* implicit */int) ((_Bool) arr_1 [i_0 + 3])))));
                }
            }
            for (short i_7 = 2; i_7 < 14; i_7 += 4) 
            {
                var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) 27LL)) ? (((/* implicit */int) arr_18 [i_0] [i_1] [i_0])) : (((/* implicit */int) ((((((/* implicit */_Bool) -16LL)) || (((/* implicit */_Bool) arr_5 [6ULL] [(signed char)12] [i_1 + 4] [i_7 - 1])))) && (((/* implicit */_Bool) ((unsigned char) 9LL))))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned char i_8 = 3; i_8 < 13; i_8 += 3) 
                {
                    var_23 ^= ((/* implicit */int) (-9223372036854775807LL - 1LL));
                    arr_28 [i_7] [i_1] [i_7] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) 10255395101154917388ULL)) ? (((((/* implicit */int) arr_8 [i_7] [i_7])) >> (((1504216333U) - (1504216326U))))) : (((/* implicit */int) arr_19 [i_1 - 2] [i_7] [i_7 - 2] [i_1 - 2]))));
                    var_24 = ((/* implicit */int) ((long long int) -13LL));
                    var_25 = ((/* implicit */int) -3LL);
                }
            }
            var_26 = ((/* implicit */unsigned int) min((var_26), (((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) arr_18 [i_0] [12] [i_1])), ((+(8191348972554634240ULL))))))));
            /* LoopNest 2 */
            for (unsigned short i_9 = 2; i_9 < 14; i_9 += 1) 
            {
                for (unsigned long long int i_10 = 0; i_10 < 15; i_10 += 2) 
                {
                    {
                        var_27 = ((/* implicit */unsigned int) max((var_27), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_1 [i_1 - 2])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (16LL))) << (((((/* implicit */int) arr_1 [i_1 + 4])) - (21406))))))));
                        var_28 ^= ((/* implicit */short) max((((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -8137587484144337032LL)) ? (arr_24 [i_10] [(unsigned short)6] [(unsigned short)10] [i_10]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1]))))))))), (min((((/* implicit */unsigned short) arr_14 [(signed char)1] [(unsigned char)5] [i_9 - 1] [(unsigned char)5])), (((unsigned short) 14LL))))));
                        var_29 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(min((-1LL), (((/* implicit */long long int) var_3))))))) || (((((/* implicit */_Bool) (short)11707)) && ((!(((/* implicit */_Bool) arr_14 [i_0] [i_1] [i_9] [i_10]))))))));
                    }
                } 
            } 
        }
        var_30 = ((/* implicit */unsigned short) (-(-1LL)));
    }
    for (long long int i_11 = 0; i_11 < 20; i_11 += 4) 
    {
        var_31 = ((/* implicit */_Bool) min((var_31), (((min(((~(var_11))), (((/* implicit */unsigned long long int) -13LL)))) != (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_37 [i_11])) ? (((/* implicit */long long int) ((/* implicit */int) arr_37 [(_Bool)1]))) : (25LL)))) ? (arr_36 [i_11]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)62561))) != (arr_36 [i_11])))))))))));
        var_32 = ((/* implicit */unsigned char) ((unsigned long long int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_15)) || (((/* implicit */_Bool) arr_37 [i_11]))))), ((+(5234570641758237847ULL))))));
        var_33 += ((/* implicit */int) (!((!(((/* implicit */_Bool) arr_37 [i_11]))))));
        /* LoopNest 2 */
        for (unsigned long long int i_12 = 0; i_12 < 20; i_12 += 4) 
        {
            for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
            {
                {
                    var_34 = ((/* implicit */unsigned char) ((short) (short)4234));
                    var_35 = ((/* implicit */int) ((((/* implicit */long long int) ((arr_35 [i_12] [i_12]) | (arr_35 [i_11] [i_11])))) ^ (max((((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)51055))))), ((((_Bool)1) ? (-12LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))));
                }
            } 
        } 
    }
    var_36 = ((/* implicit */unsigned short) ((((/* implicit */long long int) (+(((/* implicit */int) ((unsigned char) var_13)))))) != (-27LL)));
    var_37 = ((/* implicit */int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (((unsigned int) ((unsigned char) var_6)))));
}
