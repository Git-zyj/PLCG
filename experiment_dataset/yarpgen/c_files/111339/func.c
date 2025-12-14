/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111339
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111339 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111339
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
    var_15 -= var_0;
    var_16 &= ((/* implicit */int) var_9);
    var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned short)34451)), ((~(var_1))))))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 11; i_2 += 4) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned long long int i_3 = 0; i_3 < 11; i_3 += 1) 
                    {
                        var_18 += ((/* implicit */short) ((_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_7 [i_1] [i_2] [i_3]))) < (arr_3 [i_3]))));
                        var_19 = ((/* implicit */unsigned int) (unsigned short)31093);
                    }
                    for (long long int i_4 = 0; i_4 < 11; i_4 += 4) 
                    {
                        /* LoopSeq 1 */
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) max((var_8), ((+(arr_15 [8ULL] [(short)4] [i_2] [i_4] [(unsigned char)2]))))))));
                            var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_12 [i_4]) >> (((arr_12 [i_4]) - (3248842667444052983ULL)))))) ? (((arr_12 [i_0]) & (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)34451))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_12 [i_0])) || (((/* implicit */_Bool) arr_12 [i_2])))))))))));
                            var_22 = ((/* implicit */int) (unsigned short)31085);
                            var_23 = ((/* implicit */int) var_10);
                        }
                        var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [i_1])) ? (min((7312434851500490872ULL), (((/* implicit */unsigned long long int) 2734404450U)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_11), (((/* implicit */short) var_13))))))))) ? (((/* implicit */unsigned long long int) 506794966U)) : (min((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_14 [i_0] [i_0] [i_4] [i_0]))))), (arr_12 [i_4]))))))));
                    }
                    for (unsigned long long int i_6 = 0; i_6 < 11; i_6 += 1) 
                    {
                        var_25 = ((/* implicit */_Bool) max((var_25), (((/* implicit */_Bool) ((((((/* implicit */int) ((_Bool) -888000739))) > (((/* implicit */int) (_Bool)1)))) ? (((/* implicit */int) ((_Bool) (~(arr_17 [(unsigned char)4] [i_1] [i_2] [i_1] [i_2]))))) : (min((((/* implicit */int) var_11)), ((-(((/* implicit */int) (unsigned short)34451)))))))))));
                        arr_19 [i_0] [i_0] [i_2] [i_6] [i_1] |= ((unsigned short) max(((unsigned short)16896), (min(((unsigned short)34439), ((unsigned short)31085)))));
                        var_26 += ((/* implicit */unsigned long long int) (((+(((/* implicit */int) arr_5 [i_1] [i_1])))) & ((+(((/* implicit */int) min((((/* implicit */unsigned short) arr_18 [i_2] [(_Bool)1] [i_2] [i_2])), (var_4))))))));
                    }
                    /* LoopSeq 2 */
                    for (unsigned short i_7 = 0; i_7 < 11; i_7 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned long long int i_8 = 0; i_8 < 11; i_8 += 4) 
                        {
                            var_27 = ((/* implicit */unsigned long long int) max((var_27), (((/* implicit */unsigned long long int) (unsigned short)31080))));
                            var_28 &= ((/* implicit */int) ((min((((((/* implicit */_Bool) (unsigned short)31085)) ? (769188438217660782LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)19174))))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [3U] [4LL] [i_1])) && (((/* implicit */_Bool) arr_24 [i_0]))))))) != (((/* implicit */long long int) (+(((((/* implicit */_Bool) arr_2 [i_0] [i_2] [i_2])) ? (((/* implicit */int) (unsigned short)31107)) : (-889437337))))))));
                        }
                        for (signed char i_9 = 0; i_9 < 11; i_9 += 3) 
                        {
                            var_29 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)93)) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [i_0] [i_0] [10])))))) ? (((((/* implicit */int) arr_6 [i_0] [i_0] [i_2] [10U])) * (((/* implicit */int) arr_6 [i_7] [i_2] [i_2] [i_0])))) : (((/* implicit */int) ((((/* implicit */int) arr_6 [i_2] [i_2] [i_2] [i_2])) != (((/* implicit */int) arr_6 [i_1] [i_0] [i_7] [i_0]))))));
                            arr_28 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 0U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)31097)))))) : (((unsigned long long int) arr_27 [i_0] [6] [i_2] [i_1] [i_9]))));
                            var_30 -= ((/* implicit */_Bool) var_1);
                            var_31 *= ((/* implicit */long long int) max(((!(((/* implicit */_Bool) (unsigned short)31085)))), ((_Bool)1)));
                        }
                        arr_29 [i_1] = ((/* implicit */unsigned short) (((-(((/* implicit */int) ((((/* implicit */int) arr_1 [5])) > (((/* implicit */int) arr_1 [i_2]))))))) > (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)93))) : (var_3)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_1] [i_1] [i_1]))))) : (((/* implicit */int) arr_11 [i_1] [5ULL] [i_7]))))));
                        var_32 &= ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) (short)32579)) ? (8622681461681059574LL) : (((/* implicit */long long int) 94129351))))));
                    }
                    for (unsigned long long int i_10 = 0; i_10 < 11; i_10 += 2) 
                    {
                        var_33 -= ((/* implicit */unsigned long long int) (((+(((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)10947))) : (9LL))))) | (max((arr_8 [i_0] [i_0] [i_1] [i_2] [i_10]), (((/* implicit */long long int) arr_32 [i_0] [(unsigned short)9]))))));
                        var_34 = ((/* implicit */long long int) var_11);
                        arr_34 [i_0] [i_1] = ((/* implicit */long long int) min((((/* implicit */short) ((unsigned char) arr_10 [i_0] [i_1] [i_2] [i_10] [i_0] [i_10]))), (((short) arr_26 [i_0] [i_1] [i_1] [i_1] [i_1]))));
                    }
                    var_35 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (max((((/* implicit */unsigned long long int) var_6)), (max((((/* implicit */unsigned long long int) arr_24 [i_0])), (var_5))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) -94129369)), (arr_0 [i_1] [i_1])))) ? (((((/* implicit */_Bool) arr_20 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) (_Bool)1)) : (var_14))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)54602))))))))));
                    var_36 ^= ((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) var_10)) ? (arr_9 [i_0] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)55))))));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned long long int i_11 = 3; i_11 < 23; i_11 += 2) 
    {
        var_37 = ((/* implicit */unsigned long long int) max((var_37), (((/* implicit */unsigned long long int) (~(((/* implicit */int) ((arr_37 [i_11 - 1]) || (((/* implicit */_Bool) max((((/* implicit */long long int) (unsigned short)10927)), (var_3))))))))))));
        /* LoopSeq 1 */
        for (unsigned int i_12 = 0; i_12 < 24; i_12 += 2) 
        {
            var_38 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_39 [i_11 - 2])), ((unsigned short)34439)))) ? (max((var_7), (((/* implicit */unsigned int) ((((/* implicit */int) var_13)) < (((/* implicit */int) (unsigned short)34456))))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned short)34442)) : (((/* implicit */int) arr_38 [i_11] [i_12] [i_11 - 2])))))));
            /* LoopNest 3 */
            for (unsigned long long int i_13 = 1; i_13 < 23; i_13 += 4) 
            {
                for (long long int i_14 = 3; i_14 < 22; i_14 += 3) 
                {
                    for (unsigned int i_15 = 0; i_15 < 24; i_15 += 3) 
                    {
                        {
                            var_39 = ((/* implicit */long long int) (+(arr_43 [i_14 - 3] [i_13 - 1] [i_12] [i_11 - 3] [20LL])));
                            var_40 = ((/* implicit */unsigned long long int) min((var_40), (((/* implicit */unsigned long long int) max((((((((/* implicit */int) arr_37 [3ULL])) <= (((/* implicit */int) var_11)))) ? (max((arr_36 [4ULL]), (((/* implicit */long long int) (_Bool)1)))) : (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)34425)) + (((/* implicit */int) (unsigned short)34451))))))), (((/* implicit */long long int) max((((/* implicit */unsigned int) (_Bool)1)), (max((var_9), (((/* implicit */unsigned int) var_11))))))))))));
                            var_41 = ((/* implicit */long long int) max((var_41), (((/* implicit */long long int) ((((/* implicit */_Bool) (-(3788172330U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((min((6857570683469740931ULL), (2483023768859814373ULL))) >= (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_37 [i_11]))))))))) : (arr_40 [i_11 + 1] [i_12] [i_13]))))));
                        }
                    } 
                } 
            } 
        }
        var_42 = ((/* implicit */signed char) min((var_42), ((signed char)-96)));
    }
}
