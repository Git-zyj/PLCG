/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128504
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128504 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128504
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
    var_19 = var_9;
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */_Bool) var_18);
        var_20 = (+(max((var_12), (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0]))))))));
        var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((4294967295U), (((/* implicit */unsigned int) (+(((/* implicit */int) var_5)))))))) ? (arr_0 [i_0]) : (arr_1 [i_0])));
    }
    for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 4) 
    {
        arr_6 [i_1] = ((/* implicit */_Bool) arr_4 [i_1]);
        var_22 = ((/* implicit */_Bool) min((((((/* implicit */int) arr_4 [i_1])) * (((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) arr_5 [i_1])))))), (((((var_9) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (unsigned char)128)))) << (((max((4294967295U), (((/* implicit */unsigned int) arr_5 [i_1])))) - (4294967288U)))))));
        arr_7 [i_1] = ((/* implicit */unsigned int) (unsigned char)127);
        var_23 = ((/* implicit */int) (-((-(((var_17) * (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))));
    }
    for (int i_2 = 0; i_2 < 21; i_2 += 4) 
    {
        arr_11 [i_2] [i_2] = ((/* implicit */signed char) (((((((_Bool)1) ? (((/* implicit */int) (unsigned char)107)) : (((/* implicit */int) (unsigned char)148)))) & (((/* implicit */int) arr_10 [i_2])))) != (((((/* implicit */_Bool) arr_10 [i_2])) ? (((var_5) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_10 [i_2])))) : (((var_9) ? (((/* implicit */int) (unsigned char)147)) : (((/* implicit */int) (unsigned char)139))))))));
        /* LoopNest 2 */
        for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
        {
            for (int i_4 = 1; i_4 < 19; i_4 += 4) 
            {
                {
                    arr_17 [i_3] [i_3 - 1] [i_3] = ((/* implicit */_Bool) (~(max((((/* implicit */int) var_14)), ((((_Bool)1) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_12 [i_3]))))))));
                    arr_18 [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(arr_15 [i_3] [i_3])))) ? ((-(arr_8 [i_4 + 2]))) : (((/* implicit */int) (((!(((/* implicit */_Bool) var_12)))) || (((/* implicit */_Bool) ((((/* implicit */int) var_9)) ^ (2147483647)))))))));
                    arr_19 [i_2] [i_3] [(_Bool)1] [(_Bool)1] = ((/* implicit */signed char) 4294967273U);
                    var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) (~((((-(((/* implicit */int) var_2)))) + (((/* implicit */int) var_2)))))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (long long int i_5 = 0; i_5 < 21; i_5 += 4) 
        {
            for (unsigned char i_6 = 1; i_6 < 18; i_6 += 2) 
            {
                {
                    var_25 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((var_8) + (((/* implicit */int) var_9))))) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */int) arr_16 [i_6 + 2] [i_6 + 3] [i_6 - 1] [i_6 + 1])) - (((/* implicit */int) arr_16 [i_6 + 2] [i_6 + 2] [i_6 + 2] [i_6]))))));
                    arr_24 [i_2] [i_2] [i_6 + 3] |= ((((/* implicit */_Bool) max((((/* implicit */unsigned short) (_Bool)1)), (arr_23 [i_6 + 2] [i_6 + 2] [i_6 - 1])))) ? (max((((/* implicit */long long int) var_14)), (9112673458170826650LL))) : (((/* implicit */long long int) ((/* implicit */int) var_11))));
                }
            } 
        } 
        /* LoopSeq 3 */
        for (unsigned short i_7 = 1; i_7 < 19; i_7 += 2) 
        {
            var_26 = (-((((_Bool)1) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_2)))));
            arr_27 [i_7] = ((/* implicit */short) (!(((/* implicit */_Bool) ((arr_13 [i_7 + 2] [i_7 + 2]) ? (((/* implicit */int) arr_13 [i_7 + 1] [i_7 - 1])) : (((/* implicit */int) arr_16 [i_7 - 1] [i_7 + 1] [i_7 + 1] [i_7 + 2])))))));
            arr_28 [i_7] = ((/* implicit */unsigned char) (~((+(((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) arr_26 [i_2] [i_7 + 1])) : (var_8)))))));
        }
        for (signed char i_8 = 0; i_8 < 21; i_8 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned short i_9 = 0; i_9 < 21; i_9 += 3) 
            {
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                {
                    {
                        var_27 = ((/* implicit */signed char) arr_14 [i_10]);
                        /* LoopSeq 2 */
                        for (short i_11 = 4; i_11 < 19; i_11 += 2) 
                        {
                            var_28 = ((((((/* implicit */_Bool) arr_29 [i_11 + 1])) || (((/* implicit */_Bool) (short)128)))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) - (arr_29 [i_11 - 1]))) : (((((/* implicit */_Bool) arr_29 [i_11 - 1])) ? (arr_29 [i_11 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))));
                            var_29 -= (_Bool)0;
                        }
                        for (unsigned short i_12 = 0; i_12 < 21; i_12 += 4) 
                        {
                            var_30 = ((/* implicit */_Bool) ((((var_6) ? (((((/* implicit */_Bool) var_1)) ? (1073741824) : (((/* implicit */int) var_4)))) : (((/* implicit */int) (short)32)))) + (var_12)));
                            var_31 = ((/* implicit */int) min((var_31), ((-(((/* implicit */int) (signed char)-1))))));
                            var_32 ^= ((/* implicit */long long int) (!(((/* implicit */_Bool) var_15))));
                        }
                        var_33 &= ((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_13)) ? (arr_8 [i_8]) : (arr_8 [i_8])))));
                    }
                } 
            } 
            arr_41 [i_8] = ((/* implicit */unsigned long long int) max((arr_38 [i_8] [i_8] [i_8] [i_8] [i_8]), (((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) arr_38 [i_8] [(unsigned short)16] [i_8] [17] [i_8])))))));
            /* LoopNest 3 */
            for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
            {
                for (_Bool i_14 = 1; i_14 < 1; i_14 += 1) 
                {
                    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                    {
                        {
                            arr_50 [i_2] [i_8] [i_8] [i_2] [i_15] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(max((((/* implicit */int) arr_12 [i_8])), (-1073741850)))))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_0)));
                            var_34 += ((/* implicit */unsigned int) max((((var_3) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_30 [i_2]))))), (((/* implicit */unsigned long long int) (short)14087))));
                            arr_51 [i_8] = (+((-(((/* implicit */int) arr_23 [i_15] [i_8] [i_2])))));
                        }
                    } 
                } 
            } 
            var_35 = ((/* implicit */_Bool) min((var_35), (((/* implicit */_Bool) var_2))));
        }
        for (signed char i_16 = 0; i_16 < 21; i_16 += 4) 
        {
            var_36 = ((/* implicit */unsigned long long int) ((unsigned char) (+(min((arr_52 [i_2]), (((/* implicit */unsigned int) var_6)))))));
            var_37 = ((/* implicit */signed char) (-((+(((/* implicit */int) arr_40 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] [i_2]))))));
            var_38 += ((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned char)128))));
            var_39 -= ((/* implicit */short) ((int) min((((/* implicit */unsigned long long int) var_15)), (min((((/* implicit */unsigned long long int) var_15)), (3251418066555892215ULL))))));
        }
        arr_54 [i_2] &= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) ((short) -366262612)))) | (max((var_0), (((/* implicit */long long int) arr_31 [i_2] [(signed char)12] [i_2] [i_2]))))))) ? (((((/* implicit */_Bool) arr_35 [i_2] [i_2])) ? (((/* implicit */long long int) ((var_8) + (((/* implicit */int) (unsigned char)164))))) : (max((((/* implicit */long long int) var_8)), (-1935049070348793903LL))))) : (((/* implicit */long long int) max((var_12), (((/* implicit */int) ((((/* implicit */long long int) 4294967295U)) < (var_0)))))))));
    }
}
