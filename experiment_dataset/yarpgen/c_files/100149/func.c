/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100149
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100149 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100149
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
    var_20 = ((/* implicit */_Bool) ((short) var_14));
    var_21 = ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) (signed char)-83)))) + (1494830513U)))) ? (4294967295U) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (max((0), (((/* implicit */int) (unsigned char)100)))) : (((/* implicit */int) (unsigned char)222))))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 8; i_1 += 1) 
        {
            for (unsigned int i_2 = 1; i_2 < 9; i_2 += 1) 
            {
                {
                    var_22 *= ((((/* implicit */_Bool) arr_4 [0U] [i_1 + 1] [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((var_2) <= (((/* implicit */long long int) var_6)))))) : (((((/* implicit */_Bool) arr_2 [i_2])) ? ((-(2822627415U))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)4)))))))));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned int i_3 = 0; i_3 < 10; i_3 += 1) 
                    {
                        var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (arr_9 [i_1 + 1] [i_1 + 1] [i_1] [i_2 - 1]) : (var_17)));
                        arr_11 [4] [4] [i_1] [i_2] [i_3] [i_2] = (+(((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_16)))));
                    }
                    /* vectorizable */
                    for (short i_4 = 0; i_4 < 10; i_4 += 1) 
                    {
                        arr_15 [i_0] [i_2] [i_4] = 1494830518U;
                        arr_16 [i_4] = ((/* implicit */_Bool) ((unsigned int) ((2800136769U) == (0U))));
                        var_24 = ((/* implicit */_Bool) 4294967295U);
                        var_25 = ((/* implicit */long long int) max((var_25), (((/* implicit */long long int) ((((/* implicit */_Bool) 4288731418U)) ? (((/* implicit */int) (_Bool)1)) : (arr_10 [i_4] [7U] [i_0]))))));
                    }
                    for (unsigned int i_5 = 3; i_5 < 8; i_5 += 3) 
                    {
                        var_26 = ((/* implicit */unsigned char) max((max((max((((/* implicit */unsigned short) (short)9965)), ((unsigned short)19428))), (((/* implicit */unsigned short) arr_14 [i_0] [i_1] [(unsigned char)3] [i_1] [(unsigned char)3])))), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_9)))))));
                        arr_21 [i_1 - 1] [i_1 - 1] = ((/* implicit */unsigned int) (((+(((/* implicit */int) ((unsigned short) 2800136773U))))) & (((/* implicit */int) max((((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_10 [i_2] [i_1 + 1] [i_0]))))), (max((((/* implicit */unsigned char) var_10)), (var_0))))))));
                    }
                }
            } 
        } 
        var_27 = ((/* implicit */unsigned int) max((var_27), (((/* implicit */unsigned int) ((long long int) ((arr_10 [i_0] [i_0] [i_0]) == (arr_10 [i_0] [i_0] [i_0])))))));
    }
    for (unsigned char i_6 = 0; i_6 < 10; i_6 += 3) /* same iter space */
    {
        arr_25 [i_6] = ((/* implicit */unsigned short) 1494830513U);
        /* LoopNest 2 */
        for (unsigned int i_7 = 0; i_7 < 10; i_7 += 2) 
        {
            for (unsigned int i_8 = 0; i_8 < 10; i_8 += 4) 
            {
                {
                    var_28 = ((/* implicit */unsigned short) ((((arr_13 [i_7] [i_7] [i_8] [i_8] [i_8]) / (((/* implicit */int) (short)25359)))) <= (min((arr_17 [i_8] [i_7] [i_7] [i_7] [i_6] [i_6]), (((/* implicit */int) var_12))))));
                    arr_33 [i_6] [i_6] [i_6] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) var_1))))) ^ (((int) (_Bool)0))))) ? (((((/* implicit */_Bool) (unsigned char)107)) ? (2800136791U) : (3889799465U))) : (((/* implicit */unsigned int) ((/* implicit */int) min((((short) -1518982526)), (((/* implicit */short) ((var_19) > (((/* implicit */unsigned int) arr_1 [i_7] [i_6])))))))))));
                }
            } 
        } 
        arr_34 [i_6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_10 [i_6] [i_6] [i_6]) | (((/* implicit */int) ((signed char) 17987112U)))))) && (((/* implicit */_Bool) (unsigned char)205))));
        var_29 -= ((/* implicit */signed char) arr_26 [i_6] [(_Bool)1]);
        arr_35 [(_Bool)1] = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))) <= (max((1504808317U), (((/* implicit */unsigned int) arr_13 [i_6] [i_6] [i_6] [i_6] [i_6]))))));
    }
    var_30 = ((/* implicit */unsigned short) var_12);
    /* LoopNest 3 */
    for (unsigned char i_9 = 0; i_9 < 17; i_9 += 2) 
    {
        for (int i_10 = 1; i_10 < 16; i_10 += 4) 
        {
            for (unsigned short i_11 = 0; i_11 < 17; i_11 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (int i_12 = 3; i_12 < 16; i_12 += 2) 
                    {
                        arr_45 [i_9] [14] [i_11] [i_12] = ((/* implicit */_Bool) ((((unsigned int) var_12)) / (((unsigned int) 4294967295U))));
                        arr_46 [i_9] [i_10 - 1] [i_11] [i_12] = ((/* implicit */int) ((((/* implicit */unsigned int) (~(-855206813)))) < (((unsigned int) var_8))));
                    }
                    var_31 = ((/* implicit */int) min((var_31), (((/* implicit */int) max((((/* implicit */long long int) var_10)), (((arr_44 [i_10] [i_10 + 1] [i_10 - 1] [i_10 + 1] [i_10 + 1]) - (((/* implicit */long long int) 3350835572U)))))))));
                    var_32 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) var_11))) ? (var_5) : (((((/* implicit */_Bool) (unsigned char)6)) ? (3121695021U) : (1851220411U)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_36 [i_10 + 1] [i_10 - 1])) ? (arr_37 [i_10 - 1]) : (arr_36 [i_10 - 1] [i_10 + 1])))) : ((~(((((/* implicit */_Bool) var_5)) ? (arr_44 [i_9] [i_9] [i_9] [i_9] [(_Bool)1]) : (((/* implicit */long long int) 6235863U))))))));
                }
            } 
        } 
    } 
}
