/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128120
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128120 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128120
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
    var_17 |= ((/* implicit */signed char) ((unsigned char) (((_Bool)0) ? (((/* implicit */int) (unsigned short)28067)) : (((/* implicit */int) (short)-32424)))));
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 12; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            {
                var_18 = ((/* implicit */short) ((((/* implicit */_Bool) max((arr_3 [i_0 - 2] [i_0 - 1]), (((/* implicit */int) (signed char)48))))) ? (min((((/* implicit */int) (signed char)47)), (arr_3 [i_0 + 2] [i_0 + 4]))) : (((((/* implicit */_Bool) (unsigned short)28066)) ? (arr_3 [i_0 + 3] [i_0 - 1]) : (arr_3 [i_0 + 4] [i_0 + 1])))));
                arr_5 [(signed char)11] = ((/* implicit */short) arr_3 [i_1] [i_1]);
                var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) var_7))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (signed char i_2 = 1; i_2 < 21; i_2 += 4) 
    {
        /* LoopNest 2 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            for (short i_4 = 4; i_4 < 21; i_4 += 4) 
            {
                {
                    arr_15 [i_2 - 1] [i_3] [i_4] [i_4] |= ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (~((~(((/* implicit */int) arr_7 [i_2]))))))), (((((/* implicit */_Bool) -3918693254654954817LL)) ? (arr_9 [i_4 - 4]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)61)))))));
                    /* LoopSeq 2 */
                    for (unsigned short i_5 = 1; i_5 < 21; i_5 += 2) 
                    {
                        var_20 = ((/* implicit */short) var_15);
                        arr_19 [i_3] [11] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) -3918693254654954830LL)))) ? (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)89)) / (((/* implicit */int) var_12))))) : (((((/* implicit */_Bool) (unsigned short)52982)) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (3918693254654954800LL)))))) ? (((arr_11 [i_5 - 1] [i_4 - 3] [i_2 + 1]) % (arr_11 [i_5 + 1] [i_4 - 4] [i_2 - 1]))) : (((/* implicit */unsigned int) (~(((/* implicit */int) var_1)))))));
                        var_21 = ((/* implicit */unsigned short) ((_Bool) (+((~(var_8))))));
                    }
                    for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
                    {
                        arr_23 [(unsigned short)20] [i_3] [i_3] [i_3] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) ((((/* implicit */int) (short)23531)) != (((/* implicit */int) arr_16 [i_2] [i_2] [i_4]))))), (var_11)))) ? (((/* implicit */int) (short)2011)) : (((((/* implicit */_Bool) arr_12 [i_6 + 1] [i_2 + 1] [i_4 + 1] [i_6 + 1])) ? (((((/* implicit */_Bool) (signed char)72)) ? (((/* implicit */int) (short)(-32767 - 1))) : (arr_18 [i_2 + 1] [i_2] [(unsigned short)17] [i_2] [i_2]))) : (((/* implicit */int) arr_20 [i_2 - 1] [i_2]))))));
                        var_22 -= ((/* implicit */_Bool) (unsigned short)28067);
                        var_23 += min((min((((/* implicit */short) (!(((/* implicit */_Bool) arr_6 [i_3] [i_3]))))), (max(((short)32409), ((short)-31617))))), (((/* implicit */short) ((signed char) (short)5476))));
                        var_24 = ((/* implicit */long long int) min((var_24), (max(((-((((_Bool)1) ? (-3918693254654954814LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-73))))))), (((((/* implicit */_Bool) arr_11 [i_6 + 1] [i_2 + 1] [i_2 + 1])) ? ((-(-1365436905813772541LL))) : (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) (unsigned short)1259)) : (((/* implicit */int) (unsigned short)1274)))))))))));
                        var_25 = ((/* implicit */long long int) max((var_25), (((/* implicit */long long int) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_6] [i_4] [i_3] [i_2 + 1])) ? (((/* implicit */int) arr_7 [i_6])) : (((/* implicit */int) (short)30351))))))) ? (max((((/* implicit */unsigned long long int) 1365436905813772511LL)), (((((/* implicit */unsigned long long int) arr_18 [i_2 + 1] [i_2 + 1] [i_4] [i_2 + 1] [i_2 + 1])) ^ (var_6))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)56)) ? ((~(arr_9 [i_3]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_9 [i_3]))))))))))));
                    }
                    /* LoopSeq 2 */
                    for (signed char i_7 = 0; i_7 < 22; i_7 += 4) 
                    {
                        var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -3918693254654954801LL)) ? (((/* implicit */long long int) ((/* implicit */int) max((arr_14 [i_2] [i_3] [i_3]), (arr_14 [i_7] [i_3] [i_4]))))) : (((((/* implicit */_Bool) arr_7 [(signed char)4])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-42))) : (7425225839231510734LL)))))) ? ((+(((((/* implicit */_Bool) arr_20 [i_2] [i_2 - 1])) ? (3918693254654954775LL) : (((/* implicit */long long int) arr_11 [i_2] [i_3] [i_3])))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_8 [i_2 + 1])) ? (((/* implicit */int) arr_8 [i_2 + 1])) : (((/* implicit */int) arr_8 [i_2 + 1])))))));
                        arr_26 [i_3] [i_2] [i_3] [i_3] [i_3] [i_2] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_22 [i_2 + 1] [i_3] [i_2 - 1])))))));
                        var_27 = ((/* implicit */unsigned int) min((((/* implicit */long long int) 3943446425U)), (((((/* implicit */_Bool) arr_13 [i_2 + 1] [i_3] [i_3])) ? (8924356676762743463LL) : (-1365436905813772498LL)))));
                    }
                    for (unsigned int i_8 = 2; i_8 < 19; i_8 += 1) 
                    {
                        var_28 += ((/* implicit */_Bool) ((((/* implicit */int) (signed char)-48)) * ((-(((/* implicit */int) arr_8 [i_2 + 1]))))));
                        var_29 = ((/* implicit */unsigned int) max((var_29), (((/* implicit */unsigned int) (~(((((/* implicit */_Bool) (-(1365436905813772511LL)))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_16 [i_4] [i_3] [i_2])) >= (((/* implicit */int) (unsigned short)21341)))))) : (((((/* implicit */long long int) ((/* implicit */int) (short)9660))) ^ (arr_17 [i_4]))))))))));
                        var_30 = ((/* implicit */_Bool) min((var_30), (((/* implicit */_Bool) 2932897173U))));
                        arr_29 [i_2] [i_3] [i_4 + 1] [i_8 + 3] [i_8] = ((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) ((arr_17 [i_3]) % (((/* implicit */long long int) ((/* implicit */int) (signed char)-13)))))))))));
                    }
                    /* LoopNest 2 */
                    for (short i_9 = 3; i_9 < 21; i_9 += 4) 
                    {
                        for (unsigned int i_10 = 0; i_10 < 22; i_10 += 1) 
                        {
                            {
                                var_31 |= ((/* implicit */short) ((((/* implicit */_Bool) (-(arr_33 [9] [9] [i_9 - 2] [i_3])))) ? ((-(((((/* implicit */_Bool) (short)-21117)) ? (((/* implicit */int) (unsigned short)22726)) : (((/* implicit */int) (short)1023)))))) : ((+(arr_36 [i_2] [i_3] [i_4 - 4] [i_9] [2U])))));
                                var_32 = ((/* implicit */short) min((var_32), (((/* implicit */short) ((((((/* implicit */_Bool) arr_36 [i_2 + 1] [i_3] [i_4 - 1] [i_4 - 1] [i_9])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-24562))) : (arr_11 [i_2 - 1] [(signed char)18] [i_4 - 4]))) >= (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */short) arr_34 [i_2 - 1] [i_3] [i_4 - 4] [i_2 - 1] [i_9] [i_9 + 1] [14LL])), ((short)9660))))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_37 [i_2] |= ((/* implicit */unsigned short) (short)-15534);
    }
}
