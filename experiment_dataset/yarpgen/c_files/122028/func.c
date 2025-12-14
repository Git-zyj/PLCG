/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122028
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122028 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122028
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
    var_20 &= ((/* implicit */signed char) (short)19393);
    var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) (~(((/* implicit */int) (_Bool)0))))) : (((var_6) ? (632027318849428258LL) : (((/* implicit */long long int) var_13))))))) ? (((/* implicit */int) min((((/* implicit */unsigned short) ((((/* implicit */_Bool) 632027318849428258LL)) || (((/* implicit */_Bool) (unsigned short)28672))))), (max((var_15), (((/* implicit */unsigned short) var_6))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((1231232921U) * (((/* implicit */unsigned int) ((/* implicit */int) var_12)))))))))));
    /* LoopSeq 4 */
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        arr_2 [i_0] [i_0] = ((((/* implicit */_Bool) 9151314442816847872LL)) ? (((/* implicit */int) (unsigned char)248)) : (((/* implicit */int) ((arr_0 [i_0]) > (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned char) (signed char)-107)), (var_18)))))))));
        var_22 = ((/* implicit */short) ((((/* implicit */_Bool) max(((~(((/* implicit */int) var_10)))), (((/* implicit */int) min((((/* implicit */unsigned short) arr_1 [i_0] [i_0])), (var_2))))))) ? (((((/* implicit */_Bool) min((((/* implicit */long long int) 4130176841U)), (8793694132956017087LL)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0]))))) : (((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (short)19396)))))) : ((+(((/* implicit */int) (!(((/* implicit */_Bool) var_16)))))))));
        var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) max((((/* implicit */int) (unsigned short)36863)), (((((/* implicit */_Bool) -911998757)) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)35723)) || (((/* implicit */_Bool) var_4))))) : (((/* implicit */int) (short)-12611)))))))));
        arr_3 [i_0] = ((/* implicit */unsigned char) arr_0 [i_0]);
        arr_4 [i_0] = ((/* implicit */_Bool) max((((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */int) (unsigned char)69)) == (((/* implicit */int) var_4)))))))), (max((((1930661405U) & (((/* implicit */unsigned int) ((/* implicit */int) (short)12597))))), (((/* implicit */unsigned int) (short)19381))))));
    }
    for (short i_1 = 3; i_1 < 14; i_1 += 4) 
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 16; i_2 += 4) 
        {
            for (signed char i_3 = 1; i_3 < 15; i_3 += 1) 
            {
                {
                    var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) (+(((((/* implicit */int) ((_Bool) (unsigned char)248))) ^ (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)27))))))))))));
                    arr_13 [i_1 - 1] [i_2] [i_2] [i_3 + 1] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((((/* implicit */int) var_1)) >> (((arr_6 [i_3 + 1]) + (1379801001)))))) == (((((/* implicit */long long int) ((arr_12 [i_1 - 3] [i_2] [i_3 + 1]) / (((/* implicit */int) var_3))))) / (min((((/* implicit */long long int) var_14)), ((-9223372036854775807LL - 1LL))))))));
                }
            } 
        } 
        var_25 ^= var_2;
        var_26 = ((/* implicit */short) (+(1689741295U)));
        arr_14 [i_1 + 1] [i_1 + 2] = ((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */_Bool) (short)12615)) || (((/* implicit */_Bool) 5886071575593607769LL)))))));
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 22; i_4 += 1) 
    {
        /* LoopNest 2 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            for (signed char i_6 = 3; i_6 < 20; i_6 += 2) 
            {
                {
                    var_27 = ((/* implicit */unsigned int) max((var_27), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 114149682)) ? (((/* implicit */int) arr_21 [i_4])) : (((/* implicit */int) (unsigned short)65535))))) ? (((/* implicit */int) (unsigned char)126)) : (((/* implicit */int) var_9)))))));
                    arr_22 [i_4] [i_5] [(unsigned char)19] = ((/* implicit */int) ((((/* implicit */int) ((signed char) (unsigned short)36863))) == (((/* implicit */int) arr_20 [i_6 - 1] [i_4] [21LL] [i_5]))));
                }
            } 
        } 
        var_28 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_8)) : (var_5)))) ? (arr_17 [i_4]) : (((/* implicit */unsigned int) ((/* implicit */int) ((arr_19 [i_4] [i_4] [i_4]) <= (((/* implicit */long long int) var_19))))))));
    }
    /* vectorizable */
    for (unsigned short i_7 = 3; i_7 < 15; i_7 += 4) 
    {
        arr_25 [i_7 - 1] = (~(((/* implicit */int) arr_15 [i_7 - 2] [i_7 - 2])));
        var_29 *= ((/* implicit */short) ((-2004734424) % (((/* implicit */int) var_4))));
        var_30 = ((/* implicit */unsigned short) max((var_30), (((/* implicit */unsigned short) ((-911998758) | (((/* implicit */int) (short)-15992)))))));
    }
    /* LoopNest 3 */
    for (unsigned int i_8 = 3; i_8 < 19; i_8 += 2) 
    {
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            for (int i_10 = 0; i_10 < 22; i_10 += 2) 
            {
                {
                    var_31 &= ((/* implicit */signed char) ((((((/* implicit */_Bool) (unsigned short)56317)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (unsigned short)65533)))) > (((/* implicit */int) (short)-19364))));
                    var_32 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (~(((/* implicit */int) arr_16 [i_10] [i_10]))))) ? (((/* implicit */int) arr_15 [i_10] [i_9])) : (((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)68)))))) - (((((/* implicit */int) arr_15 [(unsigned char)8] [i_9])) ^ (((((/* implicit */int) arr_20 [i_10] [i_9] [i_8] [i_8 + 1])) | (((/* implicit */int) (unsigned short)0))))))));
                    var_33 = ((/* implicit */unsigned char) (+(((/* implicit */int) (short)18669))));
                    var_34 += ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)246)) ? (((/* implicit */int) (short)19386)) : (((/* implicit */int) (unsigned short)36851))))) ? ((((+(((/* implicit */int) (unsigned short)65515)))) >> (((arr_19 [i_8 - 3] [i_8] [i_10]) + (3699779575608600793LL))))) : (((/* implicit */int) var_2))));
                }
            } 
        } 
    } 
}
