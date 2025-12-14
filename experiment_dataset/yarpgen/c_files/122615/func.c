/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122615
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122615 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122615
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
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 1; i_0 < 15; i_0 += 2) 
    {
        arr_3 [(short)5] = ((/* implicit */_Bool) (+(min((((/* implicit */unsigned long long int) var_6)), (760496697222316700ULL)))));
        arr_4 [i_0] = ((/* implicit */unsigned short) min((var_8), (((/* implicit */long long int) ((unsigned short) min((((/* implicit */long long int) arr_0 [i_0] [i_0])), (var_3)))))));
    }
    for (unsigned short i_1 = 0; i_1 < 17; i_1 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 4) 
        {
            for (short i_3 = 0; i_3 < 17; i_3 += 4) 
            {
                {
                    var_10 = ((/* implicit */_Bool) min((var_10), (((/* implicit */_Bool) (signed char)11))));
                    var_11 = ((/* implicit */unsigned short) max((var_11), (((/* implicit */unsigned short) -173224473))));
                }
            } 
        } 
        /* LoopNest 3 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            for (unsigned long long int i_5 = 0; i_5 < 17; i_5 += 2) 
            {
                for (int i_6 = 1; i_6 < 13; i_6 += 2) 
                {
                    {
                        var_12 = ((/* implicit */short) ((((/* implicit */_Bool) ((max((((/* implicit */int) (short)2245)), (-173224460))) * (min((173224472), (((/* implicit */int) (short)2257))))))) ? (var_2) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-7903)) ? (((/* implicit */int) arr_7 [i_6 + 4])) : ((+(((/* implicit */int) arr_1 [i_1] [i_6])))))))));
                        var_13 = ((/* implicit */long long int) ((((((/* implicit */_Bool) max((5689567421892665642LL), (((/* implicit */long long int) (short)4365))))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) var_0)) : (11382966390939011014ULL))) : (((/* implicit */unsigned long long int) 173224437)))) >> (((-5689567421892665627LL) + (5689567421892665688LL)))));
                    }
                } 
            } 
        } 
        var_14 ^= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned char)239))));
        var_15 = ((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_19 [i_1] [i_1])) && (((/* implicit */_Bool) arr_9 [i_1] [i_1]))))), (max((max((((/* implicit */long long int) arr_9 [i_1] [i_1])), (var_8))), (((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)227)))))))));
        var_16 += ((/* implicit */unsigned short) max((max((((arr_16 [(_Bool)1] [0ULL] [0ULL]) ^ (var_7))), (arr_21 [i_1] [i_1]))), (((/* implicit */unsigned long long int) 173224460))));
    }
    for (unsigned short i_7 = 0; i_7 < 17; i_7 += 2) /* same iter space */
    {
        var_17 = ((/* implicit */short) max(((-(((/* implicit */int) arr_27 [i_7])))), (((/* implicit */int) ((signed char) arr_11 [i_7])))));
        /* LoopNest 2 */
        for (unsigned char i_8 = 0; i_8 < 17; i_8 += 2) 
        {
            for (signed char i_9 = 2; i_9 < 15; i_9 += 2) 
            {
                {
                    arr_33 [14U] [i_8] [15LL] [i_8] = ((/* implicit */int) (!(((/* implicit */_Bool) max((arr_6 [i_7] [i_8]), (arr_6 [i_7] [i_9 + 1]))))));
                    var_18 -= ((/* implicit */unsigned short) ((max(((~(((/* implicit */int) var_6)))), (((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)0)), ((unsigned char)0)))))) >= (((/* implicit */int) (!(((((/* implicit */int) arr_19 [i_7] [i_9])) >= (((/* implicit */int) arr_5 [(unsigned char)3])))))))));
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 17; i_10 += 3) 
                    {
                        for (unsigned char i_11 = 1; i_11 < 16; i_11 += 1) 
                        {
                            {
                                var_19 *= ((/* implicit */_Bool) arr_34 [i_11 + 1] [i_9 - 1]);
                                arr_40 [i_11 - 1] [i_10] [i_9] [i_8] [i_7] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_2 [i_11]))))) ? (((/* implicit */long long int) (-(arr_30 [6ULL])))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) 173224459)) : (var_0)))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)37415))) / (arr_21 [i_8] [i_8]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_31 [i_7] [i_8] [i_7] [i_10])))))));
                            }
                        } 
                    } 
                    arr_41 [i_7] [i_7] [i_9] [(unsigned char)13] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) - (var_5)))) ? (min((((/* implicit */unsigned long long int) (_Bool)0)), (var_2))) : (((/* implicit */unsigned long long int) arr_17 [i_8])))) > (((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_7] [i_8]))) / (var_5)))) ? (arr_16 [i_7] [i_9 - 2] [i_9]) : (arr_39 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7])))));
                }
            } 
        } 
        arr_42 [i_7] [i_7] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((((var_8) - (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) * (((/* implicit */long long int) ((/* implicit */int) ((var_9) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [(_Bool)1] [i_7] [i_7])))))))))), (((((/* implicit */_Bool) -1266592414)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [7ULL] [7ULL] [i_7]))) : (min((((/* implicit */unsigned long long int) arr_27 [i_7])), (9091723905224334945ULL)))))));
        var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) max((max((arr_30 [i_7]), (arr_30 [i_7]))), (((/* implicit */unsigned int) max((((short) arr_27 [i_7])), (arr_28 [i_7] [i_7])))))))));
        var_21 = ((/* implicit */unsigned char) (-(((long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [(unsigned char)1] [i_7]))) & (arr_16 [i_7] [13ULL] [i_7]))))));
    }
    var_22 = ((/* implicit */short) ((var_8) <= (((/* implicit */long long int) ((/* implicit */int) ((max((2146435072), (((/* implicit */int) var_1)))) != (((/* implicit */int) ((var_2) > (((/* implicit */unsigned long long int) -2146435073)))))))))));
    var_23 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) 7ULL)) && (((/* implicit */_Bool) (short)-31573)))))) ? (((/* implicit */unsigned long long int) var_3)) : (var_7)));
    var_24 = ((/* implicit */int) max((max((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)240))) / (var_2))), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_6)), (var_8)))))), (((/* implicit */unsigned long long int) var_0))));
}
