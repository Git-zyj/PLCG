/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151060
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151060 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151060
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
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            {
                var_14 = ((/* implicit */short) ((-8439741522631818951LL) / (((/* implicit */long long int) ((/* implicit */int) ((short) min((677742683U), (((/* implicit */unsigned int) arr_4 [i_1] [i_0] [i_0])))))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned int i_2 = 0; i_2 < 11; i_2 += 3) 
                {
                    var_15 ^= ((/* implicit */unsigned int) (-(131070)));
                    arr_9 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_0])) ? (arr_3 [i_2]) : (arr_3 [i_0])));
                }
                arr_10 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned int) (short)25479))) ? (((/* implicit */int) ((short) min((2494708165U), (((/* implicit */unsigned int) 131070)))))) : (((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_13)), (var_5)))) || (((/* implicit */_Bool) arr_7 [(unsigned char)9] [i_1] [i_0] [i_0])))))));
                var_16 = ((/* implicit */short) (((-(3617224612U))) >> (((((((((/* implicit */_Bool) (short)-23506)) ? (131070) : (((/* implicit */int) (unsigned char)0)))) >> (((((((/* implicit */_Bool) var_6)) ? (arr_2 [i_0]) : (var_4))) - (3447314433822349086LL))))) - (32753)))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (short i_3 = 0; i_3 < 20; i_3 += 1) 
    {
        for (int i_4 = 0; i_4 < 20; i_4 += 1) 
        {
            for (short i_5 = 2; i_5 < 17; i_5 += 2) 
            {
                {
                    var_17 = ((/* implicit */short) ((((/* implicit */_Bool) min(((~(((/* implicit */int) (short)-8503)))), (((/* implicit */int) (short)10032))))) ? (((/* implicit */long long int) ((/* implicit */int) (short)23505))) : (min((((long long int) arr_16 [(short)13] [i_4] [i_3])), (((((/* implicit */long long int) ((/* implicit */int) (short)-21516))) % (7922223411653785894LL)))))));
                    arr_19 [i_3] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned char) var_0))) ? (((/* implicit */long long int) ((min((((/* implicit */unsigned int) var_10)), (arr_16 [(short)12] [i_4] [i_5]))) + (((((/* implicit */_Bool) arr_12 [(short)9] [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_3] [(short)2] [10U]))) : (3617224612U)))))) : (min((((/* implicit */long long int) arr_15 [i_5 - 2])), (9111057615806805556LL)))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned short) 3536286178U);
    /* LoopSeq 4 */
    for (short i_6 = 0; i_6 < 21; i_6 += 2) /* same iter space */
    {
        /* LoopNest 3 */
        for (long long int i_7 = 0; i_7 < 21; i_7 += 2) 
        {
            for (short i_8 = 0; i_8 < 21; i_8 += 2) 
            {
                for (unsigned short i_9 = 0; i_9 < 21; i_9 += 2) 
                {
                    {
                        var_19 = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (short)12)), (1717380860U)))) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_24 [18U] [18U] [i_8]))) * (min((8191U), (((/* implicit */unsigned int) arr_30 [i_6] [i_7])))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_24 [i_6] [i_6] [i_6]))) != ((+(arr_29 [2] [2])))))))));
                        var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) min((((/* implicit */unsigned int) ((unsigned short) var_7))), (((unsigned int) ((short) arr_27 [i_6] [i_6] [i_6]))))))));
                        var_21 += ((/* implicit */long long int) arr_20 [i_7]);
                    }
                } 
            } 
        } 
        arr_31 [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) ((arr_27 [i_6] [i_6] [i_6]) / (arr_27 [i_6] [i_6] [i_6])))) ? (min((arr_27 [i_6] [i_6] [i_6]), (arr_27 [i_6] [i_6] [i_6]))) : (((((/* implicit */_Bool) var_3)) ? (arr_27 [i_6] [i_6] [i_6]) : (arr_27 [i_6] [i_6] [i_6])))));
        arr_32 [12LL] = ((/* implicit */unsigned short) ((((((/* implicit */long long int) (-(((/* implicit */int) arr_24 [i_6] [i_6] [i_6]))))) / (min((var_4), (((/* implicit */long long int) var_2)))))) <= (((/* implicit */long long int) ((/* implicit */int) ((arr_22 [i_6] [i_6]) > (arr_22 [i_6] [i_6])))))));
        arr_33 [i_6] = ((/* implicit */unsigned char) arr_24 [i_6] [i_6] [i_6]);
    }
    for (short i_10 = 0; i_10 < 21; i_10 += 2) /* same iter space */
    {
        arr_38 [i_10] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */int) (unsigned char)99)) >= (((/* implicit */int) arr_36 [i_10])))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_0))))) ? (((long long int) -1222017605429226347LL)) : (((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_0))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)23336)))))) : ((+(var_6))))))));
        var_22 = ((/* implicit */short) min((((/* implicit */long long int) var_3)), (((((/* implicit */_Bool) -9111057615806805561LL)) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)144)))))));
        arr_39 [i_10] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [(unsigned short)8] [i_10])) ? (((/* implicit */long long int) ((/* implicit */int) arr_34 [i_10] [i_10]))) : (((-332305596941632735LL) ^ (((/* implicit */long long int) 716607150U))))))) ? (((/* implicit */int) min((arr_36 [i_10]), (((/* implicit */unsigned short) arr_21 [i_10]))))) : ((+(((((/* implicit */int) var_9)) + (((/* implicit */int) arr_28 [i_10] [i_10] [(short)12]))))))));
    }
    for (int i_11 = 3; i_11 < 12; i_11 += 4) 
    {
        var_23 &= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_37 [i_11 + 1])) ? (arr_37 [i_11 + 1]) : (((/* implicit */long long int) ((/* implicit */int) (short)29678)))))) ? (((long long int) arr_37 [i_11 - 2])) : ((-(arr_37 [i_11 - 3])))));
        var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) (+(((((/* implicit */_Bool) 7153219496876664400LL)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_9))))) : (((/* implicit */int) (short)-32759)))))))));
        arr_42 [i_11] = ((/* implicit */unsigned short) ((min((((long long int) var_11)), (((/* implicit */long long int) (-(var_6)))))) + (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (short)-1)) != (((/* implicit */int) arr_28 [i_11 - 3] [i_11 - 3] [i_11 - 3]))))))));
        var_25 = ((/* implicit */short) min((min((((((/* implicit */_Bool) arr_12 [i_11] [i_11])) ? (536870911U) : (var_8))), (var_8))), (((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) -1983016924)) ? (var_8) : (var_7)))))));
    }
    for (int i_12 = 0; i_12 < 10; i_12 += 3) 
    {
        var_26 = ((/* implicit */unsigned short) min((-9111057615806805581LL), (((/* implicit */long long int) var_3))));
        var_27 = ((/* implicit */short) var_2);
        arr_45 [i_12] [i_12] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (short)25000))) / (-332305596941632734LL)))) ? (var_6) : ((~(arr_27 [i_12] [(short)12] [i_12])))))) ? (((/* implicit */long long int) arr_13 [i_12])) : (arr_2 [i_12])));
    }
}
