/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122364
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122364 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122364
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
    var_10 = ((/* implicit */unsigned short) ((((/* implicit */int) var_7)) >= ((+(((/* implicit */int) (short)0))))));
    var_11 = ((/* implicit */unsigned short) 3297004878U);
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        var_12 = ((/* implicit */short) ((((/* implicit */int) (unsigned char)106)) + (((/* implicit */int) (signed char)-86))));
        var_13 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) (unsigned short)21941)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) var_6))))) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0])))));
        var_14 = ((/* implicit */unsigned long long int) arr_0 [i_0]);
        var_15 = ((/* implicit */unsigned int) var_6);
        var_16 &= ((/* implicit */unsigned short) var_5);
    }
    for (signed char i_1 = 0; i_1 < 22; i_1 += 3) /* same iter space */
    {
        arr_5 [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1] [i_1]))) ^ (arr_3 [i_1] [i_1])))) ? (min((arr_3 [i_1] [i_1]), (((/* implicit */long long int) arr_4 [i_1] [i_1])))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_4 [i_1] [i_1])) : (((/* implicit */int) arr_4 [i_1] [i_1])))))));
        var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) (+(min((min((-3427333437948416200LL), (arr_3 [i_1] [i_1]))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_1] [i_1])) && (((/* implicit */_Bool) var_4))))))))))));
        /* LoopSeq 1 */
        for (unsigned int i_2 = 0; i_2 < 22; i_2 += 3) 
        {
            var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */int) (short)7240)) <= (((/* implicit */int) (unsigned char)120)))))))) ? (((((((/* implicit */_Bool) arr_3 [i_1] [i_2])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (unsigned char)2)))) - (((/* implicit */int) min((((/* implicit */short) (unsigned char)111)), ((short)-2607)))))) : (((((/* implicit */_Bool) var_2)) ? (((((/* implicit */int) (unsigned short)0)) - (((/* implicit */int) (unsigned short)8687)))) : (((/* implicit */int) ((short) var_7)))))));
            var_19 = ((/* implicit */unsigned int) ((((/* implicit */int) var_0)) >> (((16505047620688510072ULL) - (16505047620688510054ULL)))));
            /* LoopSeq 1 */
            for (signed char i_3 = 1; i_3 < 20; i_3 += 3) 
            {
                var_20 = ((/* implicit */unsigned int) ((signed char) (!(((/* implicit */_Bool) var_6)))));
                arr_11 [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) var_7);
            }
            /* LoopNest 2 */
            for (unsigned int i_4 = 2; i_4 < 20; i_4 += 4) 
            {
                for (signed char i_5 = 0; i_5 < 22; i_5 += 4) 
                {
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (signed char i_6 = 0; i_6 < 22; i_6 += 2) /* same iter space */
                        {
                            var_21 = ((/* implicit */unsigned short) (~(arr_17 [i_2] [i_2] [i_1] [i_1] [i_1] [i_2] [i_6])));
                            arr_21 [i_6] [i_6] [i_6] [i_2] [i_1] |= ((/* implicit */unsigned short) var_8);
                            arr_22 [i_1] [i_2] [i_2] [i_5] [i_6] [i_1] [i_2] = ((/* implicit */short) ((_Bool) var_9));
                            arr_23 [i_1] [4LL] [i_2] [i_4] [i_5] [4LL] = ((/* implicit */short) ((((/* implicit */_Bool) arr_19 [i_1] [i_2] [i_4 + 1] [i_5] [(_Bool)1])) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_9)))) : (((((/* implicit */_Bool) (short)0)) ? (((/* implicit */int) (unsigned char)114)) : (((/* implicit */int) (short)31120))))));
                        }
                        /* vectorizable */
                        for (signed char i_7 = 0; i_7 < 22; i_7 += 2) /* same iter space */
                        {
                            var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) arr_3 [i_1] [i_1]))));
                            var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) (-(((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_3)))))))));
                            var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_8)))) : (((/* implicit */int) var_3))));
                        }
                        arr_27 [i_1] [i_1] [i_1] [i_1] [i_1] [i_5] &= ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_25 [i_1] [i_4 - 2] [i_4 - 2] [i_5] [i_4]))))) || (((/* implicit */_Bool) min((arr_25 [i_1] [i_4 - 2] [i_2] [i_5] [i_5]), (arr_25 [i_4] [i_4 - 2] [i_4 - 1] [i_5] [i_5]))))));
                        var_25 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_6)), (2104934229U)))) ? (((((/* implicit */_Bool) arr_17 [i_1] [i_1] [i_1] [i_2] [i_1] [i_4] [i_5])) ? (((/* implicit */long long int) ((/* implicit */int) arr_20 [i_1] [i_1] [i_2] [i_2] [i_4] [i_4] [i_5]))) : (var_5))) : (((/* implicit */long long int) ((/* implicit */int) min((var_3), ((unsigned char)147))))))) - (((/* implicit */long long int) ((((/* implicit */_Bool) min((var_6), (((/* implicit */signed char) (_Bool)1))))) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_13 [i_1] [i_1] [i_1] [i_1])) : (((/* implicit */int) var_9)))) : (((/* implicit */int) arr_24 [i_1] [i_2] [i_2] [i_1] [i_4] [i_5])))))));
                    }
                } 
            } 
            var_26 *= ((/* implicit */signed char) var_9);
        }
    }
    for (signed char i_8 = 0; i_8 < 22; i_8 += 3) /* same iter space */
    {
        var_27 = ((/* implicit */unsigned char) (unsigned short)0);
        var_28 = ((/* implicit */_Bool) arr_9 [i_8] [i_8]);
        arr_30 [i_8] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)13639))))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_8] [i_8]))) : (arr_6 [i_8]))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [i_8])) ? (((/* implicit */int) arr_4 [i_8] [i_8])) : (((/* implicit */int) var_6)))))));
    }
    var_29 = ((/* implicit */unsigned long long int) var_4);
}
