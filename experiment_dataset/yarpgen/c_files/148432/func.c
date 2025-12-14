/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148432
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148432 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148432
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
    for (long long int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (short i_1 = 4; i_1 < 22; i_1 += 3) 
        {
            {
                /* LoopSeq 4 */
                for (short i_2 = 0; i_2 < 23; i_2 += 4) 
                {
                    arr_9 [i_0] [9LL] = ((/* implicit */_Bool) arr_1 [i_0] [(_Bool)1]);
                    var_14 = ((/* implicit */unsigned short) var_4);
                    var_15 = ((/* implicit */unsigned int) ((15728640LL) >= (((/* implicit */long long int) (+(2626197397U))))));
                }
                for (int i_3 = 0; i_3 < 23; i_3 += 3) /* same iter space */
                {
                    arr_13 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) arr_11 [i_0] [(short)18] [i_1 - 4] [i_1 - 2])) ? (((/* implicit */int) arr_11 [i_1] [i_1] [i_1 - 2] [i_1 + 1])) : (((/* implicit */int) arr_11 [i_0] [i_0] [i_1 - 4] [i_1 + 1]))))));
                    /* LoopSeq 3 */
                    for (short i_4 = 1; i_4 < 21; i_4 += 2) 
                    {
                        arr_16 [(unsigned short)4] [i_1] [i_1] [i_1] [i_1] [i_1] = ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */long long int) 1588661110U)) : ((~(2973829839784245675LL))));
                        var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) (~(((((/* implicit */int) (unsigned char)183)) | (((((/* implicit */int) (unsigned char)65)) ^ (((/* implicit */int) (signed char)(-127 - 1))))))))))));
                    }
                    /* vectorizable */
                    for (unsigned short i_5 = 1; i_5 < 22; i_5 += 3) /* same iter space */
                    {
                        var_17 = ((/* implicit */short) ((((/* implicit */int) var_11)) / (arr_15 [i_3])));
                        arr_19 [i_5] [i_5] [(unsigned char)2] [i_5] [i_3] [i_5 + 1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)249)) ? (((/* implicit */int) (signed char)-108)) : (((/* implicit */int) (unsigned char)163)))))));
                    }
                    for (unsigned short i_6 = 1; i_6 < 22; i_6 += 3) /* same iter space */
                    {
                        var_18 = ((/* implicit */_Bool) min((((/* implicit */unsigned char) (signed char)36)), (var_4)));
                        arr_22 [i_0] [(short)6] [i_0] [i_0] = ((/* implicit */short) (-(((/* implicit */int) ((((/* implicit */int) (signed char)-96)) == (((/* implicit */int) var_2)))))));
                        arr_23 [i_1] [i_1 - 4] [i_3] [i_6] = ((/* implicit */short) ((unsigned int) -4657894203266652406LL));
                    }
                    /* LoopNest 2 */
                    for (short i_7 = 0; i_7 < 23; i_7 += 1) 
                    {
                        for (unsigned int i_8 = 0; i_8 < 23; i_8 += 4) 
                        {
                            {
                                arr_29 [i_0] [i_0] [i_0] [i_7] [i_7] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_28 [i_0] [i_8] [i_3] [i_3] [i_1 - 1] [i_8])) ? (((((/* implicit */_Bool) 1154270798)) ? (((/* implicit */int) (unsigned char)65)) : (((/* implicit */int) var_7)))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_3]))) >= (6378035845162554443ULL))))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_9)) & (((/* implicit */int) max((((/* implicit */signed char) var_7)), (arr_4 [i_3] [i_7]))))))) : (((((/* implicit */_Bool) (unsigned char)69)) ? (((/* implicit */unsigned int) 0)) : (1666833690U)))));
                                arr_30 [1ULL] [i_7] [i_7] [i_7] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_0 [i_0])) : ((-(((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) (unsigned char)54))))))));
                                var_19 = ((/* implicit */unsigned char) max(((+(((/* implicit */int) arr_0 [i_1 + 1])))), (((((int) var_6)) + ((-(((/* implicit */int) (_Bool)1))))))));
                                var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((short) arr_3 [i_0] [i_7] [i_8]))) || (arr_0 [i_3])));
                            }
                        } 
                    } 
                }
                for (int i_9 = 0; i_9 < 23; i_9 += 3) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (long long int i_10 = 0; i_10 < 23; i_10 += 2) 
                    {
                        for (unsigned char i_11 = 0; i_11 < 23; i_11 += 2) 
                        {
                            {
                                arr_40 [i_0] [i_0] [i_0] [(short)22] [(signed char)16] [i_0] [(short)22] = ((/* implicit */int) var_3);
                                arr_41 [(_Bool)1] [i_10] [(unsigned char)11] [i_1] [i_1] [(unsigned char)11] = min((((/* implicit */unsigned char) var_5)), (min((((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_6))))), ((unsigned char)185))));
                            }
                        } 
                    } 
                    arr_42 [i_0] [i_0] [i_9] = (~(arr_20 [i_0] [i_0] [(unsigned char)19] [i_0] [i_0] [(unsigned char)19]));
                    var_21 = ((/* implicit */long long int) (signed char)36);
                }
                for (int i_12 = 0; i_12 < 23; i_12 += 3) /* same iter space */
                {
                    arr_46 [i_12] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)5542)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (2741773026604725726LL)))))))));
                    var_22 = ((/* implicit */unsigned int) var_1);
                }
                arr_47 [i_0] [i_0] [22ULL] = ((/* implicit */_Bool) ((((((((/* implicit */int) arr_36 [i_0] [i_0] [i_1] [22U])) | (((/* implicit */int) var_2)))) != (((/* implicit */int) ((_Bool) var_3))))) ? (((((/* implicit */_Bool) (unsigned char)183)) ? (((/* implicit */int) (short)-10482)) : (((/* implicit */int) arr_37 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))) : (max((((((/* implicit */int) var_7)) >> (((/* implicit */int) var_1)))), (((((/* implicit */int) var_7)) >> (((var_3) + (393588045279265171LL)))))))));
                arr_48 [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_9))) ^ (max((((/* implicit */long long int) arr_17 [i_0] [i_0] [i_0] [i_1] [i_0] [(unsigned short)20])), (var_3)))))) ? (((((/* implicit */int) ((_Bool) var_0))) | (((/* implicit */int) (signed char)-38)))) : (-1297122693)));
            }
        } 
    } 
    var_23 = ((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_12)))) != (284738701U))))));
}
