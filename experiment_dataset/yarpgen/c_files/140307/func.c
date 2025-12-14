/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140307
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140307 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140307
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_14 = ((/* implicit */_Bool) max(((-(max((arr_0 [i_0]), (((/* implicit */long long int) var_8)))))), ((-(max((arr_1 [i_0] [(signed char)13]), (arr_0 [(short)0])))))));
        var_15 = ((/* implicit */_Bool) (-2147483647 - 1));
    }
    /* vectorizable */
    for (short i_1 = 2; i_1 < 11; i_1 += 3) 
    {
        var_16 = ((/* implicit */int) arr_6 [i_1]);
        var_17 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2147483647)) ? (arr_2 [i_1]) : (((/* implicit */int) (short)-12802))))) ? (((/* implicit */long long int) arr_2 [i_1 + 1])) : (arr_0 [i_1 - 1])));
    }
    /* LoopSeq 2 */
    for (signed char i_2 = 0; i_2 < 20; i_2 += 3) /* same iter space */
    {
        var_18 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_7 [i_2])) ? (((/* implicit */int) arr_7 [i_2])) : (((/* implicit */int) arr_7 [i_2])))) * (((/* implicit */int) arr_9 [i_2]))));
        var_19 &= ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_7 [i_2])) ? (1706327388U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [(unsigned short)13]))))) % (((/* implicit */unsigned int) max((((/* implicit */int) arr_7 [i_2])), (-2147483631))))));
    }
    for (signed char i_3 = 0; i_3 < 20; i_3 += 3) /* same iter space */
    {
        /* LoopSeq 2 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) ((((long long int) max((((/* implicit */int) var_6)), (2147483647)))) == (((/* implicit */long long int) ((/* implicit */int) (short)2389))))))));
            var_21 -= ((/* implicit */unsigned long long int) ((((/* implicit */long long int) arr_12 [i_3] [i_3])) == (((arr_8 [i_3]) - (arr_8 [i_4])))));
            /* LoopNest 2 */
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                for (unsigned short i_6 = 0; i_6 < 20; i_6 += 2) 
                {
                    {
                        var_22 = ((/* implicit */short) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [5] [i_5] [i_5] [i_5]))) : (arr_12 [i_5] [i_5])))) ? (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)9)) | (((/* implicit */int) (unsigned short)38117))))) : (max((var_5), (((/* implicit */long long int) arr_15 [i_4] [i_5])))))), (((/* implicit */long long int) arr_13 [i_5]))));
                        var_23 *= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) (~(var_9)))) > (max((((/* implicit */unsigned long long int) arr_13 [i_3])), (((((/* implicit */_Bool) arr_9 [i_6])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_6]))) : (11246553959775939115ULL)))))));
                        var_24 = ((/* implicit */signed char) (+(((/* implicit */int) ((unsigned char) max(((short)-24879), (((/* implicit */short) (signed char)0))))))));
                    }
                } 
            } 
            var_25 -= ((/* implicit */int) (!(((/* implicit */_Bool) max((arr_11 [i_4] [i_3]), (arr_11 [i_3] [i_3]))))));
        }
        for (short i_7 = 2; i_7 < 19; i_7 += 3) 
        {
            /* LoopNest 3 */
            for (unsigned int i_8 = 1; i_8 < 19; i_8 += 1) 
            {
                for (unsigned char i_9 = 0; i_9 < 20; i_9 += 1) 
                {
                    for (int i_10 = 0; i_10 < 20; i_10 += 2) 
                    {
                        {
                            var_26 = ((/* implicit */long long int) arr_26 [i_3] [i_7] [i_3]);
                            var_27 = ((/* implicit */unsigned char) (((+((~(((/* implicit */int) (short)24879)))))) - (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) arr_22 [i_8] [i_7] [i_7 - 2])) != (((/* implicit */int) var_12))))) == (((/* implicit */int) max((var_12), (((/* implicit */unsigned char) var_3))))))))));
                            var_28 = ((/* implicit */unsigned short) min((var_28), (((/* implicit */unsigned short) arr_15 [i_10] [i_10]))));
                            var_29 = ((/* implicit */int) max((var_29), (((/* implicit */int) ((((unsigned long long int) arr_21 [(signed char)4] [i_7] [i_7])) / (((/* implicit */unsigned long long int) max((arr_12 [i_7 - 2] [i_7]), (((/* implicit */unsigned int) ((2147483647) - (((/* implicit */int) var_7)))))))))))));
                        }
                    } 
                } 
            } 
            var_30 = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_21 [i_7 - 1] [i_7] [i_3]))))) > (((int) -2147483612))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (long long int i_11 = 0; i_11 < 20; i_11 += 3) 
            {
                var_31 = ((/* implicit */int) 1064770472U);
                arr_35 [(unsigned char)6] [i_7] [(unsigned char)6] [i_7] = ((/* implicit */short) 581152890);
                var_32 = ((((/* implicit */_Bool) arr_21 [i_7 - 1] [i_7 - 2] [i_7 - 2])) ? (arr_21 [i_7 - 2] [i_7 - 2] [i_7 - 2]) : (arr_21 [i_7 - 1] [i_7 - 2] [i_7]));
                var_33 -= ((/* implicit */unsigned int) arr_14 [i_7 - 1] [16ULL] [i_11]);
            }
            arr_36 [i_7] = ((/* implicit */unsigned short) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_18 [i_7 - 1] [i_7] [7LL] [i_7])))))));
        }
        var_34 = ((/* implicit */int) ((unsigned char) ((arr_15 [(unsigned short)0] [i_3]) ? (((/* implicit */int) (!(((/* implicit */_Bool) -390645116))))) : (((/* implicit */int) var_1)))));
        var_35 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_20 [i_3] [0LL] [i_3])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_2)))), (((/* implicit */int) var_11)))))));
    }
}
