/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141710
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141710 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141710
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
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 3) /* same iter space */
    {
        /* LoopSeq 2 */
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            var_10 = ((/* implicit */unsigned char) arr_3 [i_0] [i_1]);
            var_11 = ((/* implicit */unsigned char) min((var_11), (((/* implicit */unsigned char) (~(((/* implicit */int) ((short) arr_6 [i_0] [i_0] [i_1]))))))));
        }
        /* vectorizable */
        for (short i_2 = 0; i_2 < 16; i_2 += 3) 
        {
            arr_11 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_2] [i_0])) ? (arr_8 [i_0] [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0] [i_0])))))) ? (((unsigned int) arr_0 [i_2] [i_0])) : (((/* implicit */unsigned int) (+(((/* implicit */int) arr_6 [i_0] [i_2] [i_2])))))));
            var_12 = ((/* implicit */long long int) (unsigned short)58517);
        }
        var_13 = ((/* implicit */unsigned short) max((((((_Bool) (signed char)-1)) ? (max((((/* implicit */unsigned int) arr_6 [i_0] [i_0] [i_0])), (4294967286U))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0]))))), (((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)21)))))));
        arr_12 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-32756)) ? (((/* implicit */int) (signed char)-99)) : (((/* implicit */int) var_9))));
    }
    for (unsigned short i_3 = 0; i_3 < 16; i_3 += 3) /* same iter space */
    {
        /* LoopSeq 2 */
        for (unsigned char i_4 = 2; i_4 < 14; i_4 += 1) 
        {
            arr_18 [i_3] [i_3] = ((/* implicit */unsigned int) ((min((((/* implicit */unsigned long long int) arr_17 [i_3] [i_3])), (((((/* implicit */_Bool) arr_7 [i_3])) ? (arr_8 [i_4] [i_4]) : (arr_8 [i_4 - 2] [i_4]))))) / (var_2)));
            var_14 = ((/* implicit */unsigned char) (-(((/* implicit */int) min((((signed char) var_6)), (((/* implicit */signed char) ((((/* implicit */int) (signed char)-51)) >= (1693955129)))))))));
        }
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            var_15 = ((/* implicit */_Bool) (unsigned short)58517);
            arr_21 [i_3] [i_5] = ((/* implicit */unsigned int) min(((unsigned char)0), (((/* implicit */unsigned char) (signed char)18))));
            var_16 = ((/* implicit */short) arr_14 [i_5] [i_3]);
        }
        /* LoopSeq 1 */
        for (unsigned short i_6 = 2; i_6 < 15; i_6 += 4) 
        {
            var_17 += ((/* implicit */unsigned int) ((short) min((((/* implicit */long long int) min((((/* implicit */unsigned int) var_9)), (arr_2 [i_3] [i_6 + 1])))), (((long long int) (signed char)-66)))));
            /* LoopSeq 4 */
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                var_18 = ((/* implicit */unsigned int) ((unsigned char) max((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_10 [i_3])) : (((/* implicit */int) (unsigned short)56898)))), (((((/* implicit */int) (unsigned short)8646)) - (((/* implicit */int) (unsigned short)65535)))))));
                var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) (+(((/* implicit */int) var_3)))))));
                arr_29 [i_3] [i_6] = ((/* implicit */signed char) min((max((var_7), (((/* implicit */long long int) arr_15 [i_3] [i_3])))), (((/* implicit */long long int) (_Bool)0))));
                arr_30 [i_3] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((int) (!(((/* implicit */_Bool) arr_25 [i_3] [i_3] [i_6] [i_7])))))) && (((/* implicit */_Bool) max((arr_10 [i_6 - 1]), (arr_10 [i_6 - 2]))))));
            }
            for (unsigned long long int i_8 = 3; i_8 < 13; i_8 += 1) 
            {
                var_20 = ((/* implicit */unsigned char) min((((int) (+(((/* implicit */int) (signed char)65))))), (((/* implicit */int) var_9))));
                var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) ((((/* implicit */_Bool) ((unsigned short) var_2))) ? (((int) min((((/* implicit */short) arr_10 [i_3])), (arr_20 [(signed char)0])))) : (((((/* implicit */_Bool) ((unsigned char) (signed char)61))) ? (((/* implicit */int) ((unsigned char) (_Bool)1))) : (((/* implicit */int) min((arr_1 [i_3] [i_8]), (arr_1 [i_6] [i_6])))))))))));
            }
            for (_Bool i_9 = 0; i_9 < 0; i_9 += 1) 
            {
                var_22 = max((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_5 [i_6])) : (((/* implicit */int) ((_Bool) (_Bool)0))))), (((/* implicit */int) (!(((/* implicit */_Bool) -966697257))))));
                arr_35 [i_3] [i_3] [i_3] [i_9] = ((/* implicit */unsigned short) max((((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [(unsigned short)2] [(_Bool)1]))))), (((((arr_27 [i_3]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_1)))) - (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)228)) && (((/* implicit */_Bool) (signed char)65)))))))));
            }
            for (short i_10 = 0; i_10 < 16; i_10 += 4) 
            {
                /* LoopSeq 1 */
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) 4011459349U)) ? ((+(((/* implicit */int) (!(((/* implicit */_Bool) (short)31250))))))) : (((/* implicit */int) min((min((((/* implicit */unsigned short) (_Bool)1)), (var_8))), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) (signed char)75))))))))));
                    var_24 = ((/* implicit */unsigned char) (unsigned short)8637);
                    /* LoopSeq 1 */
                    for (unsigned short i_12 = 0; i_12 < 16; i_12 += 3) 
                    {
                        arr_43 [i_3] [i_6 - 1] [(short)5] [i_11] [i_11] [i_10] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((long long int) arr_28 [i_3] [i_6 + 1]))) ? (((/* implicit */int) min((min(((unsigned char)4), (arr_25 [i_3] [i_3] [i_10] [i_11]))), (((unsigned char) arr_36 [i_3] [i_11] [i_3]))))) : (((/* implicit */int) arr_34 [i_10] [i_10] [i_6] [12]))));
                        var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) ((int) ((_Bool) ((((/* implicit */_Bool) (unsigned char)28)) ? (((/* implicit */int) (unsigned short)43526)) : (((/* implicit */int) var_3)))))))));
                        arr_44 [i_3] [i_3] [i_3] [(unsigned char)0] [i_3] = ((/* implicit */_Bool) (+(((/* implicit */int) ((arr_26 [i_3] [i_6]) >= (((/* implicit */long long int) ((/* implicit */int) (unsigned short)8652))))))));
                        var_26 = ((/* implicit */unsigned short) max((var_26), (((/* implicit */unsigned short) ((short) var_0)))));
                        var_27 *= ((/* implicit */signed char) ((((/* implicit */_Bool) (-(max((((/* implicit */int) (signed char)-66)), (423596526)))))) ? (arr_8 [i_11] [i_12]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(var_1)))))));
                    }
                }
                /* LoopSeq 2 */
                for (unsigned short i_13 = 0; i_13 < 16; i_13 += 1) 
                {
                    /* LoopSeq 1 */
                    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                    {
                        arr_51 [i_10] [i_6] [i_3] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_14])) ? (((((/* implicit */_Bool) arr_40 [(unsigned short)3] [i_6] [i_3])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (short)13615)))) : (((/* implicit */int) (unsigned short)65533))))) ? (min((arr_19 [i_13] [i_13]), (((/* implicit */int) arr_25 [(signed char)12] [i_10] [i_10] [i_13])))) : (((/* implicit */int) ((((/* implicit */int) max(((unsigned short)26164), (((/* implicit */unsigned short) var_9))))) <= (((/* implicit */int) arr_1 [i_6 - 1] [i_6 - 1])))))));
                        var_28 = (-(((((/* implicit */_Bool) arr_13 [i_6 - 1])) ? (arr_33 [i_3] [i_10] [(_Bool)1] [i_3]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)18))))));
                        var_29 = ((/* implicit */unsigned int) arr_37 [i_3] [i_3] [i_3] [i_3]);
                    }
                    var_30 = ((/* implicit */_Bool) (unsigned char)112);
                    var_31 = ((/* implicit */unsigned short) arr_48 [i_3] [i_6] [i_3] [(unsigned char)9]);
                }
                /* vectorizable */
                for (unsigned short i_15 = 0; i_15 < 16; i_15 += 2) 
                {
                    var_32 = ((/* implicit */unsigned char) (_Bool)1);
                    var_33 ^= ((/* implicit */unsigned int) arr_0 [i_3] [i_6]);
                    arr_54 [i_3] [i_3] [i_10] [i_15] = ((/* implicit */_Bool) ((unsigned int) arr_45 [i_15] [i_6 - 1] [i_15] [i_15]));
                }
                var_34 = ((/* implicit */unsigned int) arr_50 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] [i_10]);
                var_35 = ((/* implicit */_Bool) ((arr_3 [i_3] [i_3]) ? (arr_42 [i_6 - 1] [i_6 - 1]) : (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_23 [i_10] [i_6 - 2] [i_3])) || (((/* implicit */_Bool) arr_4 [i_3])))))) / (((long long int) 579298701U)))))));
            }
        }
    }
    var_36 = ((/* implicit */long long int) var_2);
    var_37 = ((/* implicit */unsigned int) var_5);
    var_38 = 4023894326U;
}
