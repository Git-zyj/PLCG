/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164331
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164331 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164331
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
    var_16 *= ((/* implicit */unsigned char) (+(min((((((/* implicit */_Bool) var_6)) ? (var_5) : (((/* implicit */long long int) var_7)))), (((/* implicit */long long int) var_15))))));
    var_17 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_5))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (long long int i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            var_18 = ((/* implicit */signed char) ((((/* implicit */int) var_8)) >= (((/* implicit */int) (!(((/* implicit */_Bool) var_15)))))));
            /* LoopSeq 1 */
            for (unsigned short i_2 = 0; i_2 < 25; i_2 += 1) 
            {
                var_19 = ((/* implicit */int) ((signed char) arr_1 [i_0]));
                var_20 &= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_2 [22] [i_2] [i_2])) ? (((/* implicit */int) (unsigned short)26919)) : (((/* implicit */int) (_Bool)1))));
            }
        }
        /* LoopNest 2 */
        for (short i_3 = 0; i_3 < 25; i_3 += 2) 
        {
            for (unsigned short i_4 = 3; i_4 < 24; i_4 += 3) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned char i_5 = 0; i_5 < 25; i_5 += 1) /* same iter space */
                    {
                        var_21 = ((/* implicit */unsigned short) var_2);
                        var_22 &= ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) arr_4 [i_5] [(unsigned short)24] [i_3])) ? (7841499377865786371ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 10605244695843765246ULL)) ? (9075121U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)192))))))))));
                    }
                    for (unsigned char i_6 = 0; i_6 < 25; i_6 += 1) /* same iter space */
                    {
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (short i_7 = 0; i_7 < 25; i_7 += 3) 
                        {
                            var_23 = ((/* implicit */signed char) (+(((/* implicit */int) arr_10 [1ULL] [i_3]))));
                            var_24 |= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((long long int) arr_16 [i_0] [(unsigned char)16] [i_4 - 3] [i_3] [i_7])))));
                        }
                        for (unsigned short i_8 = 0; i_8 < 25; i_8 += 1) 
                        {
                            var_25 = ((/* implicit */int) max((var_25), (((/* implicit */int) ((((/* implicit */int) (unsigned char)216)) >= (((/* implicit */int) (unsigned char)244)))))));
                            var_26 = ((/* implicit */int) ((((((/* implicit */_Bool) var_5)) ? (var_13) : (((/* implicit */unsigned long long int) 268435455)))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) min((arr_19 [i_8] [i_6] [i_3] [i_3] [i_0]), (((/* implicit */long long int) arr_2 [i_0] [i_3] [(signed char)21])))))))))));
                        }
                        for (int i_9 = 3; i_9 < 24; i_9 += 3) 
                        {
                            var_27 = ((/* implicit */unsigned int) ((int) 2444353369431415649ULL));
                            var_28 &= ((/* implicit */unsigned char) max((((/* implicit */int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) ^ (arr_12 [(unsigned short)18] [i_3] [i_4 - 2] [(unsigned short)1] [(unsigned short)19]))) == (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)244)) ? (((/* implicit */int) (unsigned char)62)) : (((/* implicit */int) (unsigned short)20946)))))))), (((((/* implicit */_Bool) min(((unsigned char)244), (var_1)))) ? (((/* implicit */int) (unsigned short)20946)) : (((/* implicit */int) ((((/* implicit */int) var_14)) >= (((/* implicit */int) (unsigned short)63)))))))));
                        }
                        var_29 = ((/* implicit */unsigned long long int) max((var_29), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_12))))))))));
                        var_30 = ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned char) ((long long int) (unsigned char)119)))) > (((/* implicit */int) var_14))));
                        var_31 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */int) arr_13 [i_4 - 1] [i_6] [i_6] [i_6])), (var_7)))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) ((((/* implicit */_Bool) var_15)) || (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_15)), (7841499377865786371ULL)))))))));
                    }
                    /* vectorizable */
                    for (unsigned char i_10 = 0; i_10 < 25; i_10 += 1) 
                    {
                        var_32 = ((/* implicit */int) arr_23 [i_0] [(signed char)7] [(unsigned short)7] [20] [i_4] [i_10] [(_Bool)1]);
                        var_33 = ((/* implicit */unsigned short) max((var_33), (((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65470))) < (4052535272582961460ULL))))));
                    }
                    var_34 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((long long int) ((int) var_9)))) > (((((/* implicit */unsigned long long int) ((((/* implicit */int) var_10)) - (((/* implicit */int) var_9))))) | (((((/* implicit */_Bool) (unsigned short)56607)) ? (((/* implicit */unsigned long long int) arr_22 [i_0] [i_3] [i_3] [i_3] [2ULL] [i_0] [i_0])) : (10605244695843765245ULL)))))));
                }
            } 
        } 
    }
    var_35 = ((/* implicit */unsigned short) min((var_35), (((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */int) var_3)), (((((/* implicit */int) (unsigned char)192)) << (((var_4) - (14620617668998007933ULL)))))))) ? (((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) 57052864)) : (var_5))) : (var_5))) : (((/* implicit */long long int) ((/* implicit */int) var_8))))))));
    var_36 = ((/* implicit */_Bool) var_1);
}
