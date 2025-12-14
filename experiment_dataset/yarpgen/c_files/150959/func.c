/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150959
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150959 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150959
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
    for (unsigned int i_0 = 3; i_0 < 21; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */long long int) 2082191346);
        /* LoopSeq 1 */
        for (long long int i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            /* LoopSeq 1 */
            for (short i_2 = 0; i_2 < 23; i_2 += 3) 
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (long long int i_3 = 4; i_3 < 21; i_3 += 3) 
                {
                    /* LoopSeq 2 */
                    for (long long int i_4 = 0; i_4 < 23; i_4 += 4) 
                    {
                        var_10 = ((/* implicit */unsigned long long int) var_5);
                        arr_12 [i_0] [i_1] [i_2] [i_3] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((unsigned short) ((arr_11 [i_4] [(short)16] [i_0] [i_2] [i_1] [i_0]) == (((/* implicit */int) var_1)))));
                        arr_13 [1ULL] [1ULL] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_7 [i_0 - 2] [i_4]))));
                        arr_14 [i_2] [i_0] &= ((/* implicit */_Bool) -2082191334);
                    }
                    for (long long int i_5 = 1; i_5 < 20; i_5 += 4) 
                    {
                        var_11 |= ((/* implicit */unsigned char) ((long long int) 2338888820996896293ULL));
                        var_12 = ((/* implicit */long long int) arr_10 [i_0] [i_0] [i_3] [i_3] [i_5]);
                        var_13 = ((/* implicit */int) 3635461607U);
                        var_14 |= ((/* implicit */short) arr_1 [i_3]);
                    }
                    var_15 = ((/* implicit */int) (-(arr_1 [i_3])));
                    var_16 |= ((/* implicit */signed char) (!(((/* implicit */_Bool) (short)-23970))));
                }
                for (long long int i_6 = 1; i_6 < 19; i_6 += 3) 
                {
                    var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) 5920248160811313757LL))));
                    arr_19 [i_0] [i_0] [i_0] [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_7)) ? (3467965928368060681LL) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0] [i_1])))))))) ? ((+(((/* implicit */int) arr_16 [8] [8U] [8])))) : (-2082191347)));
                    var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) min((((/* implicit */unsigned short) ((arr_17 [i_1] [i_0 - 1] [i_1] [i_0 - 1]) >= (((/* implicit */int) arr_2 [i_6 + 4] [i_0 + 2]))))), (((unsigned short) ((((/* implicit */_Bool) 4047147104810368889ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [6] [i_0] [i_1] [i_2] [i_6]))) : (3555490035652038648ULL)))))))));
                    var_19 = ((/* implicit */int) (-(var_4)));
                    var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) (short)-23953))));
                }
                /* LoopNest 2 */
                for (unsigned long long int i_7 = 0; i_7 < 23; i_7 += 4) 
                {
                    for (unsigned long long int i_8 = 2; i_8 < 22; i_8 += 4) 
                    {
                        {
                            var_21 = arr_6 [i_0] [i_8 - 2] [i_2] [i_0 - 1];
                            arr_24 [i_1] [i_1] [(_Bool)1] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) min((((((/* implicit */_Bool) -1377593105)) && (((/* implicit */_Bool) 1377593104)))), (((((/* implicit */long long int) 3635461589U)) != (-5920248160811313770LL))))))) ^ (((unsigned long long int) arr_15 [i_0] [19U] [i_2] [i_7] [i_8 - 1]))));
                        }
                    } 
                } 
                arr_25 [i_0] [i_2] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) (short)-23970)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0] [i_1]))) : (arr_0 [(unsigned char)15]))) % (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) 2632409144U)))))))));
                var_22 = ((/* implicit */unsigned long long int) ((max((((((/* implicit */_Bool) (unsigned char)125)) ? (arr_4 [i_0] [i_0] [i_0]) : (((/* implicit */long long int) arr_21 [i_0] [i_0] [i_0] [i_0])))), (var_7))) + (((/* implicit */long long int) arr_18 [i_1]))));
            }
            arr_26 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)113)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-87))) : (-4635285882367804074LL)))) ? (min((((/* implicit */unsigned int) ((int) (signed char)81))), (((var_6) + (((/* implicit */unsigned int) ((/* implicit */int) var_5))))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_0] [i_0] [i_0] [i_1])) ? (((/* implicit */int) arr_16 [i_0] [i_0] [11LL])) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [20LL]))))) : (((/* implicit */int) (unsigned char)159)))))));
            /* LoopSeq 2 */
            for (unsigned long long int i_9 = 0; i_9 < 23; i_9 += 3) 
            {
                arr_30 [i_0] [i_1] [i_9] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)86)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)31946)) ? (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_9] [i_1] [i_0] [i_0]))) : (4635285882367804085LL)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_23 [i_9] [i_9] [i_0 - 2] [i_0 - 2] [i_0 - 2])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_9))))) : (min((var_7), (((/* implicit */long long int) (_Bool)1)))))) : (arr_1 [i_9])));
                /* LoopNest 2 */
                for (long long int i_10 = 0; i_10 < 23; i_10 += 3) 
                {
                    for (signed char i_11 = 2; i_11 < 22; i_11 += 4) 
                    {
                        {
                            arr_35 [i_11] [i_1] [i_9] [i_10] [i_11] [i_11] = ((/* implicit */unsigned int) arr_16 [i_0] [i_1] [i_0]);
                            arr_36 [i_0] [i_11] [i_0] [i_0] [(unsigned char)12] |= ((/* implicit */unsigned long long int) (-(min((((/* implicit */long long int) max((((/* implicit */unsigned short) (signed char)-60)), (var_3)))), (((long long int) arr_34 [i_0] [i_0] [i_0] [i_0] [i_1] [10LL] [i_0]))))));
                        }
                    } 
                } 
            }
            /* vectorizable */
            for (unsigned char i_12 = 0; i_12 < 23; i_12 += 4) 
            {
                var_23 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (4635285882367804068LL)))) ? (((((/* implicit */_Bool) var_6)) ? (432303752838765650ULL) : (((/* implicit */unsigned long long int) 1949715520U)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (arr_4 [i_0] [i_1] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) var_1))))))));
                arr_40 [i_0] [i_1] = ((/* implicit */unsigned long long int) (unsigned char)91);
                arr_41 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) (signed char)-112);
                var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) (+(((/* implicit */int) arr_10 [i_0 - 3] [i_0] [i_0] [i_0 + 2] [i_0])))))));
            }
        }
    }
    var_25 = ((/* implicit */_Bool) (-(min((((((/* implicit */_Bool) var_0)) ? (11122574299627754800ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) var_8))))))))));
}
