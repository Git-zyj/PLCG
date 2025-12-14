/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114936
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114936 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114936
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
    var_15 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) 4287219244U)) ? (63488U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)19765)))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        var_16 = ((/* implicit */unsigned char) arr_0 [i_0] [i_0]);
        var_17 ^= ((/* implicit */unsigned char) max((((((/* implicit */_Bool) min((4294903807U), (((/* implicit */unsigned int) (signed char)89))))) ? (((/* implicit */int) (unsigned char)1)) : (((/* implicit */int) arr_1 [i_0])))), (((((/* implicit */_Bool) ((1150220285) - (((/* implicit */int) (unsigned char)229))))) ? (((/* implicit */int) (unsigned char)10)) : ((-(((/* implicit */int) arr_0 [i_0] [i_0]))))))));
    }
    /* LoopSeq 2 */
    for (unsigned char i_1 = 3; i_1 < 13; i_1 += 1) 
    {
        var_18 += ((/* implicit */_Bool) (unsigned char)1);
        arr_4 [i_1] = ((/* implicit */unsigned int) var_1);
        var_19 = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_1 + 3]))))) << (((((((/* implicit */_Bool) min((((/* implicit */unsigned char) var_11)), ((unsigned char)32)))) ? (var_10) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_1] [i_1]))))))) - (991528587)))));
    }
    /* vectorizable */
    for (unsigned char i_2 = 4; i_2 < 8; i_2 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned char i_3 = 0; i_3 < 12; i_3 += 3) /* same iter space */
        {
            var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) ((long long int) ((((/* implicit */_Bool) 1414060340)) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)54184)))))))));
            /* LoopNest 2 */
            for (unsigned short i_4 = 1; i_4 < 9; i_4 += 4) 
            {
                for (long long int i_5 = 0; i_5 < 12; i_5 += 2) 
                {
                    {
                        var_21 *= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_6 [i_2 + 4]))));
                        var_22 -= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_6 [i_2 + 4])) ? (arr_16 [i_5] [i_2 - 3] [i_2 - 3] [i_4 + 1] [i_3]) : (((/* implicit */long long int) (~(((/* implicit */int) var_8)))))));
                    }
                } 
            } 
        }
        for (unsigned char i_6 = 0; i_6 < 12; i_6 += 3) /* same iter space */
        {
            arr_21 [i_2] = ((_Bool) (unsigned char)14);
            arr_22 [(unsigned short)0] [i_6] [(unsigned short)0] &= ((/* implicit */unsigned int) (unsigned char)137);
            /* LoopNest 3 */
            for (unsigned int i_7 = 4; i_7 < 11; i_7 += 1) 
            {
                for (unsigned char i_8 = 0; i_8 < 12; i_8 += 3) 
                {
                    for (int i_9 = 1; i_9 < 11; i_9 += 2) 
                    {
                        {
                            arr_30 [i_2] [i_6] [i_7] [i_8] [i_9] [i_2] [i_2] = ((/* implicit */int) (-(((arr_11 [i_9] [i_8] [3ULL] [3ULL]) ? (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_6] [i_2] [i_9]))) : (var_6)))));
                            arr_31 [i_2] [3U] [i_7] [i_2] [i_2] = ((/* implicit */unsigned char) ((signed char) (_Bool)1));
                            arr_32 [i_2] [i_8] [i_7] [i_8] [i_2] [i_2] [i_9 + 1] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) > (2531922707211093417ULL)));
                        }
                    } 
                } 
            } 
            var_23 = ((/* implicit */signed char) ((arr_0 [(short)7] [i_2]) ? (((/* implicit */int) arr_12 [7ULL] [i_2 + 1] [i_2])) : (((/* implicit */int) arr_0 [i_2] [i_2]))));
            /* LoopNest 3 */
            for (long long int i_10 = 0; i_10 < 12; i_10 += 4) 
            {
                for (unsigned char i_11 = 1; i_11 < 10; i_11 += 4) 
                {
                    for (unsigned char i_12 = 3; i_12 < 10; i_12 += 3) 
                    {
                        {
                            var_24 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_37 [i_2]))));
                            var_25 = ((/* implicit */signed char) max((var_25), (((/* implicit */signed char) (unsigned char)118))));
                            var_26 = ((/* implicit */int) ((unsigned long long int) ((((/* implicit */_Bool) (signed char)102)) ? (((/* implicit */int) (unsigned char)103)) : (-2036341604))));
                        }
                    } 
                } 
            } 
        }
        var_27 ^= ((/* implicit */unsigned char) ((int) -8212764934228331041LL));
    }
    var_28 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(var_2)))) ? (((/* implicit */long long int) ((((((/* implicit */int) var_4)) <= (((/* implicit */int) (signed char)7)))) ? (((/* implicit */int) (_Bool)1)) : (min((((/* implicit */int) var_0)), (-1150220310)))))) : (((((((/* implicit */_Bool) (unsigned char)137)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)24))) : (var_1))) | (((/* implicit */long long int) ((/* implicit */int) var_11)))))));
    var_29 &= ((/* implicit */unsigned char) max((774089379U), (((/* implicit */unsigned int) (signed char)125))));
}
