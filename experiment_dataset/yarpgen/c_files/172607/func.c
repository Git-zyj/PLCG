/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172607
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172607 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172607
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
    var_14 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) var_5))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)3810)) && (((/* implicit */_Bool) -3132365132480691783LL))));
        arr_3 [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((signed char) arr_0 [i_0]))) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (var_7))) / (((((/* implicit */_Bool) (-(((/* implicit */int) var_2))))) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (((long long int) var_0))))));
        /* LoopSeq 4 */
        /* vectorizable */
        for (int i_1 = 0; i_1 < 25; i_1 += 4) /* same iter space */
        {
            var_16 -= ((/* implicit */unsigned int) arr_4 [(unsigned short)4] [i_0]);
            var_17 |= arr_0 [i_0];
        }
        for (int i_2 = 0; i_2 < 25; i_2 += 4) /* same iter space */
        {
            arr_8 [i_0] [i_2] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_8)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0] [i_0] [i_2]))))), (var_3)))) ? (((/* implicit */int) var_2)) : (((((/* implicit */int) arr_2 [i_0])) >> (((11976582779574264428ULL) - (11976582779574264410ULL)))))));
            /* LoopNest 3 */
            for (unsigned short i_3 = 0; i_3 < 25; i_3 += 4) 
            {
                for (unsigned short i_4 = 0; i_4 < 25; i_4 += 4) 
                {
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        {
                            arr_16 [4LL] [i_4] [21U] [i_2] [i_0] = ((/* implicit */unsigned long long int) ((unsigned char) max((arr_15 [i_0] [i_3] [i_3] [i_4] [i_3] [i_0] [i_4]), (arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))));
                            var_18 = ((/* implicit */unsigned short) max((var_18), (var_4)));
                        }
                    } 
                } 
            } 
            arr_17 [i_0] = ((/* implicit */_Bool) ((unsigned int) min((var_10), (((/* implicit */long long int) min((var_1), (var_1)))))));
            arr_18 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned short) (unsigned char)150))) ? ((+(((/* implicit */int) var_11)))) : (((/* implicit */int) ((unsigned char) var_7)))))) * (((((/* implicit */_Bool) arr_15 [i_0] [(unsigned short)20] [i_2] [i_2] [i_2] [7LL] [i_2])) ? (arr_15 [20U] [(unsigned char)3] [(unsigned char)12] [i_0] [i_2] [i_2] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))))));
            arr_19 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned int) var_5))) ? (((((-3132365132480691770LL) / (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))))) & (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_2] [(unsigned char)7] [i_2] [(unsigned char)7] [i_2] [i_2]))))) : (((/* implicit */long long int) ((unsigned int) var_9)))));
        }
        for (unsigned short i_6 = 0; i_6 < 25; i_6 += 1) 
        {
            /* LoopNest 2 */
            for (long long int i_7 = 0; i_7 < 25; i_7 += 2) 
            {
                for (unsigned long long int i_8 = 4; i_8 < 23; i_8 += 2) 
                {
                    {
                        var_19 = ((/* implicit */unsigned short) ((((/* implicit */int) ((_Bool) ((signed char) arr_2 [i_0])))) <= (((((/* implicit */_Bool) ((var_1) ? (arr_4 [i_0] [i_7]) : (((/* implicit */long long int) ((/* implicit */int) var_13)))))) ? ((+(((/* implicit */int) var_12)))) : (var_5)))));
                        arr_29 [14LL] [14LL] [i_7] [18U] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) arr_6 [i_8 - 4])) ? (((/* implicit */int) var_6)) : (arr_6 [i_8 - 1])))));
                        arr_30 [i_0] [i_0] [i_0] [i_7] [i_0] [(unsigned short)15] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0])) ? (arr_24 [13U] [i_7] [i_7]) : (((arr_15 [i_0] [i_6] [i_0] [(signed char)20] [8U] [i_8] [i_7]) / (((/* implicit */unsigned long long int) var_3)))))))));
                    }
                } 
            } 
            arr_31 [i_0] [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((var_5), (((/* implicit */int) var_12)))))));
        }
        /* vectorizable */
        for (unsigned short i_9 = 0; i_9 < 25; i_9 += 4) 
        {
            arr_36 [i_0] [i_9] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_34 [i_0] [i_0]))))) ? (((/* implicit */int) arr_2 [i_0])) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned short)57944)) : (((/* implicit */int) (unsigned char)255))))));
            /* LoopNest 2 */
            for (long long int i_10 = 0; i_10 < 25; i_10 += 2) 
            {
                for (unsigned char i_11 = 0; i_11 < 25; i_11 += 1) 
                {
                    {
                        arr_42 [2] [i_11] [i_11] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_4 [i_0] [i_9]))));
                        var_20 = ((/* implicit */unsigned int) ((_Bool) ((var_5) > (((/* implicit */int) var_11)))));
                        var_21 = ((/* implicit */_Bool) ((var_1) ? (((/* implicit */int) arr_21 [i_10] [i_10] [i_0])) : (((/* implicit */int) var_4))));
                    }
                } 
            } 
            var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_1) ? (((/* implicit */long long int) arr_1 [i_0])) : (var_10)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_5)))) : (((((/* implicit */_Bool) var_11)) ? (var_8) : (var_8)))));
        }
    }
}
