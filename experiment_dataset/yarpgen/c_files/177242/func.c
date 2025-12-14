/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177242
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177242 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177242
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
    var_10 = ((/* implicit */unsigned short) max((var_10), (((/* implicit */unsigned short) max((((/* implicit */long long int) ((((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (var_5))) / (((/* implicit */unsigned int) ((int) var_1)))))), (((min((((/* implicit */long long int) var_8)), (var_3))) * (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_8))) * (var_2)))))))))));
    var_11 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_1)), (-2931766530704623033LL)))) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) -7593597137677670545LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (var_4)))) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) var_0)))))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 1; i_1 < 23; i_1 += 2) 
        {
            var_12 -= ((/* implicit */unsigned int) (-(max((((/* implicit */long long int) -1943173732)), (7593597137677670542LL)))));
            var_13 = ((/* implicit */long long int) ((((/* implicit */int) ((_Bool) ((7593597137677670544LL) ^ (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))) * (((/* implicit */int) var_6))));
            arr_6 [i_0] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [6U] [i_1])) ? ((-(((((/* implicit */_Bool) 18446744073709551615ULL)) ? (15850323267651689938ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)0))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [(unsigned char)7] [i_1])))))) ? (((/* implicit */long long int) min((((/* implicit */unsigned int) var_1)), (arr_3 [i_1] [i_0])))) : (max((arr_2 [i_0] [i_0]), (((/* implicit */long long int) var_8)))))))));
            var_14 += ((/* implicit */_Bool) ((((/* implicit */int) ((((-7593597137677670545LL) == (((/* implicit */long long int) ((/* implicit */int) var_1))))) || (((/* implicit */_Bool) max((arr_2 [17] [i_1]), (((/* implicit */long long int) arr_1 [i_0])))))))) ^ (((/* implicit */int) max(((unsigned short)0), (((/* implicit */unsigned short) arr_1 [i_1 + 1])))))));
        }
        /* LoopSeq 1 */
        for (signed char i_2 = 0; i_2 < 24; i_2 += 1) 
        {
            /* LoopSeq 4 */
            for (long long int i_3 = 0; i_3 < 24; i_3 += 3) /* same iter space */
            {
                /* LoopSeq 1 */
                for (unsigned int i_4 = 1; i_4 < 21; i_4 += 2) 
                {
                    var_15 = ((/* implicit */signed char) 7593597137677670541LL);
                    var_16 += ((/* implicit */signed char) max((((/* implicit */long long int) arr_1 [21])), (var_3)));
                    var_17 = ((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned short) ((arr_8 [i_3] [i_4]) / (((/* implicit */unsigned int) ((/* implicit */int) var_1))))))) & (arr_15 [i_0] [i_2] [(_Bool)1] [(unsigned short)11])));
                }
                /* LoopSeq 2 */
                for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                {
                    /* LoopSeq 1 */
                    for (short i_6 = 2; i_6 < 23; i_6 += 4) 
                    {
                        var_18 ^= ((/* implicit */unsigned int) max((min((((arr_10 [i_0] [i_0] [i_0] [10LL]) >> (((arr_19 [i_0] [i_2] [i_3] [i_2] [i_0] [i_2]) - (1016281521))))), (((/* implicit */long long int) (unsigned short)65535)))), (7593597137677670544LL)));
                        var_19 = ((/* implicit */int) min((max((arr_16 [i_6 - 2] [i_5 - 1]), (((/* implicit */unsigned int) var_0)))), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) arr_16 [i_6 - 2] [i_5 - 1])) != (var_4))))));
                    }
                    /* LoopSeq 1 */
                    for (unsigned short i_7 = 0; i_7 < 24; i_7 += 4) 
                    {
                        var_20 -= ((/* implicit */unsigned char) arr_1 [(short)8]);
                        var_21 = ((/* implicit */int) max((var_21), ((-(var_7)))));
                    }
                    var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) max(((signed char)112), (((/* implicit */signed char) ((((/* implicit */_Bool) 7593597137677670544LL)) || (((/* implicit */_Bool) var_3))))))))));
                }
                /* vectorizable */
                for (int i_8 = 0; i_8 < 24; i_8 += 4) 
                {
                    var_23 = (~(((/* implicit */int) arr_0 [i_3] [i_8])));
                    arr_28 [i_3] [(_Bool)0] [i_2] [i_3] = ((arr_23 [i_0] [i_0] [i_3] [(unsigned short)9]) | (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (var_5))));
                }
                /* LoopSeq 1 */
                for (long long int i_9 = 0; i_9 < 24; i_9 += 4) 
                {
                    var_24 *= ((/* implicit */_Bool) ((unsigned char) ((((/* implicit */int) arr_0 [i_0] [i_2])) % (((/* implicit */int) arr_22 [i_9] [i_3] [i_0] [i_0] [i_0] [i_0])))));
                    var_25 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) 1698166606U)), (max(((+(18446744073709551598ULL))), (((/* implicit */unsigned long long int) ((unsigned short) (short)-1)))))));
                    /* LoopSeq 1 */
                    for (int i_10 = 0; i_10 < 24; i_10 += 1) 
                    {
                        var_26 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) arr_27 [i_3] [3LL])), (max((3796773471615228675ULL), (((/* implicit */unsigned long long int) ((((((/* implicit */int) var_6)) + (2147483647))) << (((7593597137677670544LL) - (7593597137677670544LL))))))))));
                        var_27 = ((/* implicit */long long int) 13774694254545968287ULL);
                        var_28 = ((/* implicit */_Bool) 7593597137677670542LL);
                    }
                }
            }
            for (long long int i_11 = 0; i_11 < 24; i_11 += 3) /* same iter space */
            {
                arr_36 [i_11] [i_11] [i_11] [15ULL] = ((/* implicit */unsigned int) ((long long int) ((arr_17 [i_2] [16U] [16U] [i_2] [i_2]) != (arr_17 [i_0] [i_0] [i_0] [i_2] [i_11]))));
                var_29 = ((/* implicit */int) max((var_29), (((/* implicit */int) ((long long int) ((((/* implicit */_Bool) arr_33 [i_0] [i_11])) ? ((-(7593597137677670544LL))) : (var_9)))))));
            }
            for (long long int i_12 = 0; i_12 < 24; i_12 += 3) /* same iter space */
            {
                var_30 = ((/* implicit */unsigned char) max((var_30), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */long long int) (+(((/* implicit */int) arr_32 [5LL] [(_Bool)1]))))) / ((+(var_9)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_23 [i_0] [i_0] [i_0] [i_12])) || (((/* implicit */_Bool) var_8)))))) : ((-(max((((/* implicit */unsigned int) (short)-29)), (var_5))))))))));
                arr_41 [i_0] [i_12] [i_0] = ((/* implicit */unsigned long long int) arr_11 [i_0] [i_2] [i_12]);
            }
            for (short i_13 = 0; i_13 < 24; i_13 += 3) 
            {
                var_31 = ((/* implicit */_Bool) min((var_31), (((/* implicit */_Bool) arr_19 [i_13] [i_13] [i_13] [i_2] [i_0] [i_0]))));
                var_32 = ((/* implicit */short) ((unsigned short) arr_33 [i_13] [i_13]));
                arr_44 [i_13] [i_13] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) arr_34 [i_13] [i_13])) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_35 [(_Bool)1] [(_Bool)1] [i_2] [i_13])) && (((/* implicit */_Bool) 3758096384U))))) : (var_7)))));
                arr_45 [i_13] [i_2] [i_13] = ((/* implicit */long long int) var_4);
            }
            var_33 *= ((/* implicit */int) ((max((((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */long long int) 1698166606U)) : (var_3))), (((/* implicit */long long int) ((int) 81432674))))) < (((/* implicit */long long int) (((!(((/* implicit */_Bool) var_8)))) ? (arr_25 [17] [i_0] [i_2] [i_2] [22LL]) : (max((((/* implicit */unsigned int) (unsigned short)25997)), (4294967295U))))))));
            var_34 = ((/* implicit */_Bool) (+(((/* implicit */int) ((arr_4 [i_0]) < (((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_2] [i_0] [i_0] [i_0] [i_0] [i_0]))))))));
        }
        var_35 = ((/* implicit */_Bool) ((((((/* implicit */int) arr_18 [21] [i_0] [i_0])) << (((/* implicit */int) arr_18 [i_0] [i_0] [(signed char)18])))) * (((arr_18 [i_0] [0] [i_0]) ? (((/* implicit */int) arr_18 [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_18 [i_0] [i_0] [i_0]))))));
        /* LoopSeq 2 */
        for (short i_14 = 0; i_14 < 24; i_14 += 3) 
        {
            var_36 -= min((arr_13 [i_0] [(signed char)2] [22] [i_14]), (min((max((((/* implicit */unsigned char) arr_27 [i_0] [i_14])), (var_8))), (((/* implicit */unsigned char) ((((/* implicit */long long int) arr_5 [i_0] [i_0] [i_0])) != (var_9)))))));
            arr_48 [i_14] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) var_1))));
            arr_49 [i_14] [(signed char)15] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)0))));
            var_37 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (var_3) : (((long long int) arr_2 [i_0] [i_0]))));
            var_38 = ((/* implicit */int) max((var_38), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((arr_24 [i_0] [i_0] [i_0] [i_0] [i_14] [i_14]) & (((int) arr_19 [i_0] [i_14] [i_0] [i_14] [i_14] [i_0]))))) % (((((/* implicit */unsigned long long int) ((var_3) / (arr_30 [i_0] [(signed char)10])))) - (((((/* implicit */unsigned long long int) var_9)) * (var_4))))))))));
        }
        for (unsigned long long int i_15 = 2; i_15 < 23; i_15 += 1) 
        {
            var_39 = ((/* implicit */unsigned long long int) 3697940102U);
            arr_52 [i_0] [i_0] [i_15 - 2] = max((((((/* implicit */_Bool) var_4)) ? ((+(14649970602094322939ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))), (((/* implicit */unsigned long long int) ((unsigned short) 501847172U))));
            var_40 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (max((((/* implicit */long long int) max((((/* implicit */int) (unsigned short)39565)), (-81432675)))), ((-(var_3))))) : (((/* implicit */long long int) max((arr_14 [i_15 - 2] [i_15 - 2] [3LL] [i_15]), (arr_14 [i_15 - 2] [i_15 - 1] [i_0] [i_15 - 2]))))));
        }
    }
    var_41 *= max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) 14649970602094322924ULL))))), (((((unsigned int) 2262487319U)) & (2596800689U))));
    var_42 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1)))) - (-7593597137677670545LL))) - (((/* implicit */long long int) ((/* implicit */int) (short)-14)))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((var_4) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))) ? (((var_7) - (((/* implicit */int) var_8)))) : (((((/* implicit */int) (short)-7)) + (var_7)))))) : (((unsigned int) var_7))));
}
