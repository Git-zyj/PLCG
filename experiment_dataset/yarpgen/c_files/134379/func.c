/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134379
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134379 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134379
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
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) % (((/* implicit */int) (unsigned short)255))))) ? ((-(((/* implicit */int) (_Bool)1)))) : (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) var_1))))));
        var_19 -= arr_1 [i_0];
    }
    for (unsigned char i_1 = 0; i_1 < 17; i_1 += 3) 
    {
        var_20 |= ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) ((arr_2 [i_1]) ^ (arr_2 [i_1])))) && (((/* implicit */_Bool) var_7)))))) | (min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (_Bool)1))))), (arr_3 [i_1] [i_1])))));
        var_21 = ((((/* implicit */_Bool) -1201471263)) ? (((/* implicit */int) ((unsigned short) (signed char)42))) : (arr_2 [i_1]));
    }
    /* LoopSeq 2 */
    for (long long int i_2 = 0; i_2 < 24; i_2 += 2) 
    {
        var_22 = ((/* implicit */unsigned long long int) (~((+((((_Bool)1) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) var_9))))))));
        /* LoopNest 2 */
        for (signed char i_3 = 0; i_3 < 24; i_3 += 3) 
        {
            for (unsigned short i_4 = 0; i_4 < 24; i_4 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned short i_5 = 3; i_5 < 21; i_5 += 4) 
                    {
                        var_23 = ((/* implicit */unsigned char) (+(min((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (_Bool)1)) : (arr_9 [i_2] [i_2]))), (((/* implicit */int) (!((_Bool)1))))))));
                        var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) 1201471265)) % (var_13)));
                        var_25 = ((/* implicit */signed char) max((var_25), (((/* implicit */signed char) arr_10 [i_5 - 2] [i_5 + 2] [i_5 - 2]))));
                    }
                    for (unsigned short i_6 = 0; i_6 < 24; i_6 += 2) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned char i_7 = 0; i_7 < 24; i_7 += 2) 
                        {
                            var_26 = ((/* implicit */signed char) var_13);
                            var_27 = ((/* implicit */short) ((((/* implicit */_Bool) (+(var_11)))) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) (short)255)) ? (((/* implicit */int) (short)27739)) : (((/* implicit */int) var_9)))))))));
                            var_28 &= ((/* implicit */int) var_3);
                        }
                        for (unsigned char i_8 = 0; i_8 < 24; i_8 += 1) 
                        {
                            arr_22 [i_2] [i_3] [i_4] [i_2] [i_6] [i_8] [i_8] = ((/* implicit */signed char) (_Bool)1);
                            arr_23 [i_2] [i_3] [i_2] [i_2] [15] = ((/* implicit */_Bool) arr_5 [i_6]);
                        }
                        var_29 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-43))) & (var_3)))) ? ((~(arr_13 [i_2] [20] [i_2] [i_2]))) : (((/* implicit */int) arr_7 [i_2] [i_2] [i_6]))))));
                    }
                    var_30 += ((/* implicit */_Bool) arr_16 [i_2] [i_3] [(signed char)13] [i_4] [i_4]);
                }
            } 
        } 
        /* LoopSeq 2 */
        for (int i_9 = 0; i_9 < 24; i_9 += 4) /* same iter space */
        {
            var_31 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((~(((/* implicit */int) var_4)))) >> (((((/* implicit */int) ((unsigned short) var_10))) - (47194)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_2]))) : ((~(var_3)))));
            var_32 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) arr_5 [i_2])) ? (((/* implicit */int) ((unsigned char) var_4))) : ((~(((/* implicit */int) (signed char)-43))))))));
        }
        for (int i_10 = 0; i_10 < 24; i_10 += 4) /* same iter space */
        {
            arr_29 [i_10] = ((/* implicit */unsigned int) min((((/* implicit */int) (unsigned char)96)), (max((-7), (((((/* implicit */_Bool) -7)) ? (var_17) : (((/* implicit */int) arr_8 [i_10]))))))));
            var_33 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((unsigned short) arr_13 [i_2] [i_2] [i_2] [i_2])))));
            var_34 = ((/* implicit */int) var_8);
            /* LoopNest 2 */
            for (unsigned long long int i_11 = 0; i_11 < 24; i_11 += 2) 
            {
                for (int i_12 = 0; i_12 < 24; i_12 += 1) 
                {
                    {
                        var_35 = ((/* implicit */unsigned short) min((var_35), (((/* implicit */unsigned short) ((((/* implicit */int) var_5)) > (max((-1033810712), ((+(((/* implicit */int) var_1)))))))))));
                        arr_35 [i_2] |= ((/* implicit */signed char) (_Bool)1);
                        var_36 = ((/* implicit */unsigned char) ((((min(((~(arr_13 [i_2] [(unsigned short)21] [i_2] [i_2]))), (((/* implicit */int) min((((/* implicit */short) var_9)), ((short)-227)))))) + (2147483647))) >> ((((+(((/* implicit */int) arr_5 [i_2])))) - (61201)))));
                    }
                } 
            } 
        }
    }
    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
    {
        var_37 ^= ((/* implicit */unsigned long long int) var_13);
        /* LoopSeq 1 */
        for (unsigned short i_14 = 0; i_14 < 24; i_14 += 4) 
        {
            /* LoopSeq 1 */
            for (unsigned char i_15 = 0; i_15 < 24; i_15 += 1) 
            {
                var_38 -= ((/* implicit */unsigned char) max(((~((+(((/* implicit */int) (_Bool)1)))))), (((/* implicit */int) max((arr_31 [i_13] [i_14] [i_15] [(signed char)8]), (var_14))))));
                var_39 |= ((/* implicit */_Bool) (+((~(((((/* implicit */int) var_6)) ^ (((/* implicit */int) var_5))))))));
                var_40 = ((/* implicit */long long int) min((var_40), (((/* implicit */long long int) max((((/* implicit */unsigned short) arr_8 [i_15])), ((unsigned short)61900))))));
            }
            var_41 ^= ((/* implicit */unsigned int) ((short) 10640244171301934707ULL));
        }
        var_42 = ((/* implicit */signed char) ((max((((/* implicit */unsigned int) arr_25 [i_13] [i_13])), (var_13))) ^ (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) arr_25 [i_13] [i_13])) : (((/* implicit */int) arr_25 [21ULL] [i_13])))))));
        var_43 = ((/* implicit */int) ((((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_9))))) * (((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned long long int) arr_9 [i_13] [i_13])) : (7752351902916736070ULL))))) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))));
    }
    var_44 = ((/* implicit */_Bool) var_7);
    var_45 = ((/* implicit */_Bool) max((var_45), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) max((((/* implicit */short) min((((/* implicit */unsigned char) (_Bool)1)), (var_2)))), (var_1)))) : ((((+(((/* implicit */int) var_14)))) % (min((var_17), (((/* implicit */int) var_0)))))))))));
    var_46 &= ((/* implicit */unsigned char) 2147483647);
}
