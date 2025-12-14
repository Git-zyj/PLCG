/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124379
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124379 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124379
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_2)) : (((((/* implicit */int) arr_4 [i_0])) * (((/* implicit */int) ((unsigned short) (signed char)0)))))));
            var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-1))))) ? (((arr_5 [i_0] [(signed char)3]) / (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0]))))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-6)))));
            arr_7 [i_0] = ((/* implicit */unsigned int) max((((/* implicit */int) (signed char)0)), (max((((/* implicit */int) var_18)), (((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */int) (short)-1611)) : (973120435)))))));
            /* LoopNest 3 */
            for (short i_2 = 0; i_2 < 14; i_2 += 1) 
            {
                for (unsigned char i_3 = 1; i_3 < 10; i_3 += 2) 
                {
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        {
                            var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) (unsigned char)60))));
                            var_22 = ((/* implicit */_Bool) arr_13 [i_0]);
                            arr_16 [i_0] [i_0] [i_0] [i_0] [(_Bool)1] [i_3] = ((_Bool) ((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((_Bool) var_12)))));
                        }
                    } 
                } 
            } 
            /* LoopSeq 3 */
            for (long long int i_5 = 0; i_5 < 14; i_5 += 3) /* same iter space */
            {
                var_23 &= ((/* implicit */signed char) ((((/* implicit */_Bool) min(((~(var_5))), (((/* implicit */long long int) max((((/* implicit */unsigned int) -973120436)), (arr_15 [i_5] [i_5] [i_5] [(unsigned char)6] [i_0] [i_0] [i_0]))))))) ? (((((/* implicit */long long int) (~(((/* implicit */int) (signed char)-64))))) | (((((/* implicit */_Bool) 2305843009213693951LL)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)39))) : (arr_8 [i_0] [i_1] [i_5] [i_0]))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (0U)))) || (((/* implicit */_Bool) min((((/* implicit */unsigned short) (unsigned char)0)), ((unsigned short)20759))))))))));
                var_24 = ((/* implicit */int) min((var_24), ((-(((/* implicit */int) (unsigned short)12871))))));
            }
            for (long long int i_6 = 0; i_6 < 14; i_6 += 3) /* same iter space */
            {
                /* LoopNest 2 */
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        {
                            var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_17 [(signed char)13] [i_1] [i_0]) ? (((/* implicit */int) (unsigned short)31)) : (((/* implicit */int) (signed char)39))))) ? (((9163617130020496099LL) + (-2305843009213693939LL))) : (((((/* implicit */_Bool) 9178459429539443681LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)80))) : ((-9223372036854775807LL - 1LL))))));
                            arr_25 [i_0] = ((/* implicit */unsigned char) (_Bool)1);
                            var_26 |= (~(((32767LL) + (arr_13 [i_1]))));
                        }
                    } 
                } 
                var_27 = ((/* implicit */int) ((((/* implicit */_Bool) ((arr_2 [i_1]) / (((/* implicit */unsigned long long int) 623665115U))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-2419))) : (min((var_4), (((/* implicit */unsigned long long int) var_9))))));
            }
            for (long long int i_9 = 0; i_9 < 14; i_9 += 3) /* same iter space */
            {
                var_28 = ((/* implicit */unsigned int) -32767LL);
                var_29 &= ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) var_12)), (((((/* implicit */_Bool) arr_6 [i_9] [i_1] [i_0])) ? (((((/* implicit */_Bool) var_14)) ? (var_7) : (((/* implicit */unsigned long long int) -973120436)))) : (((/* implicit */unsigned long long int) ((long long int) var_5)))))));
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned int i_10 = 0; i_10 < 14; i_10 += 3) 
                {
                    var_30 += ((/* implicit */short) ((int) arr_2 [i_1]));
                    var_31 = ((/* implicit */_Bool) ((((/* implicit */_Bool) -32741LL)) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)4095))))) : (var_17)));
                    var_32 = ((/* implicit */long long int) (unsigned char)135);
                    arr_30 [i_0] [i_1] [i_9] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned short) var_11))) ? (((unsigned int) (unsigned short)55093)) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)73)))));
                }
                for (unsigned char i_11 = 0; i_11 < 14; i_11 += 3) 
                {
                    var_33 = ((/* implicit */_Bool) (+(max((((/* implicit */long long int) var_1)), (arr_13 [i_0])))));
                    var_34 = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_13 [i_0])), (14211085750709794052ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)12851))) : (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_18 [i_0] [i_0] [i_0])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (signed char)58))))) | (((((/* implicit */_Bool) (unsigned short)65526)) ? (((/* implicit */unsigned long long int) 0LL)) : (0ULL)))))));
                }
                for (unsigned short i_12 = 3; i_12 < 12; i_12 += 3) 
                {
                    var_35 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (short)-22662))) | (-9178459429539443679LL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-43))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_14 [i_0] [i_0] [1LL] [1LL] [13] [i_12])))))) : (var_7)))));
                    arr_36 [i_9] [i_1] [i_9] [9] [i_12] [i_12 - 1] = ((/* implicit */unsigned char) (_Bool)1);
                    var_36 = ((/* implicit */long long int) arr_11 [i_0] [i_1] [(_Bool)1] [i_12 + 2] [i_1] [i_9]);
                    var_37 *= ((/* implicit */signed char) arr_4 [i_1]);
                }
            }
        }
        var_38 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)7677))) ^ (4433971033504414241LL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)12852))) : (arr_6 [i_0] [i_0] [i_0])));
    }
    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) /* same iter space */
    {
        var_39 = ((/* implicit */unsigned long long int) arr_29 [i_13] [(unsigned short)8] [i_13] [i_13] [i_13]);
        var_40 = ((/* implicit */long long int) (signed char)6);
    }
    var_41 = ((/* implicit */short) max((((/* implicit */unsigned long long int) min((2217675287U), (149228132U)))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_18))))) ? (((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (13835058055282163712ULL))) : (((/* implicit */unsigned long long int) var_10))))));
    var_42 = ((/* implicit */signed char) var_11);
    /* LoopSeq 1 */
    for (signed char i_14 = 0; i_14 < 18; i_14 += 3) 
    {
        var_43 = ((/* implicit */signed char) arr_41 [i_14]);
        var_44 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_41 [i_14]))) : (68719476735ULL)))));
    }
}
