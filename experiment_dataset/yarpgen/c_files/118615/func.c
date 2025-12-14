/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118615
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118615 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118615
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
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        /* LoopSeq 4 */
        for (unsigned char i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            /* LoopSeq 1 */
            for (long long int i_2 = 0; i_2 < 17; i_2 += 2) 
            {
                arr_8 [i_0] [i_1] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_4 [i_0 + 1] [i_0 + 1] [i_0])) >= (((/* implicit */int) arr_3 [(unsigned short)8] [i_0]))));
                var_12 = ((/* implicit */signed char) min((var_12), (((/* implicit */signed char) ((((/* implicit */_Bool) (-(-4438573743733611624LL)))) ? (4688235203819189405LL) : (-1739960362557800207LL))))));
                arr_9 [i_0] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_8))))) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-111)))));
            }
            var_13 = ((_Bool) ((((/* implicit */_Bool) var_9)) ? (-3847561895636251790LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)111)))));
            arr_10 [i_1] [i_0] &= ((/* implicit */int) (signed char)113);
            var_14 &= ((/* implicit */short) (-(((/* implicit */int) (signed char)92))));
            arr_11 [i_0] [i_1] = ((/* implicit */unsigned short) (+(((/* implicit */int) (signed char)117))));
        }
        for (signed char i_3 = 1; i_3 < 13; i_3 += 3) 
        {
            arr_16 [i_3] = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_13 [i_3] [i_3 + 4]))));
            var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) var_11))));
            arr_17 [i_0 + 1] [i_0] [i_3] = ((/* implicit */signed char) var_5);
        }
        for (signed char i_4 = 1; i_4 < 15; i_4 += 2) /* same iter space */
        {
            /* LoopSeq 1 */
            for (unsigned short i_5 = 3; i_5 < 16; i_5 += 4) 
            {
                var_16 = ((short) arr_14 [i_4]);
                /* LoopSeq 1 */
                for (unsigned short i_6 = 0; i_6 < 17; i_6 += 1) 
                {
                    arr_26 [i_0 + 1] [i_0] [i_4] [i_4] [(signed char)2] [i_6] = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_24 [i_0] [i_4] [i_5] [i_6]))));
                    arr_27 [i_4] [i_4] [i_4] [i_4] [i_4] = ((/* implicit */unsigned short) (+(var_5)));
                    arr_28 [i_0] [i_0] [i_4] [i_0] [(_Bool)1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)-25769)) ? (((/* implicit */int) (signed char)105)) : (((/* implicit */int) (signed char)-95))));
                }
            }
            arr_29 [i_4] = ((/* implicit */signed char) (-(((/* implicit */int) arr_23 [i_0 + 1] [i_0 + 1]))));
            arr_30 [i_4] = var_7;
            var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_20 [i_4] [(unsigned short)3] [i_0 + 1])) ? (((/* implicit */int) arr_20 [i_4] [i_0 + 1] [i_0 + 1])) : (((/* implicit */int) var_11))));
        }
        for (signed char i_7 = 1; i_7 < 15; i_7 += 2) /* same iter space */
        {
            var_18 = ((/* implicit */int) ((((/* implicit */_Bool) arr_12 [(unsigned short)4])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)1))) : (((unsigned int) var_8))));
            var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_10)) << (((((/* implicit */int) arr_3 [i_0] [i_0])) + (22952)))))) ? ((~(((/* implicit */int) var_7)))) : (((/* implicit */int) arr_14 [(signed char)6])))))));
        }
        var_20 &= ((/* implicit */unsigned int) (-((-(((/* implicit */int) (signed char)96))))));
    }
    /* vectorizable */
    for (long long int i_8 = 0; i_8 < 16; i_8 += 3) 
    {
        /* LoopSeq 1 */
        for (long long int i_9 = 0; i_9 < 16; i_9 += 2) 
        {
            var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) (-(((/* implicit */int) arr_25 [i_8] [i_8] [i_8] [(signed char)13] [i_8] [i_8])))))));
            var_22 = ((/* implicit */long long int) max((var_22), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_3))))) ? ((~(arr_35 [i_9]))) : ((+(var_2)))))));
            var_23 = ((/* implicit */long long int) arr_1 [i_9]);
            var_24 = ((/* implicit */signed char) (-(((/* implicit */int) (signed char)-74))));
        }
        var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_14 [6])))))));
    }
    for (signed char i_10 = 0; i_10 < 17; i_10 += 2) 
    {
        var_26 = ((/* implicit */short) arr_4 [i_10] [i_10] [i_10]);
        var_27 = ((/* implicit */short) max((var_27), (arr_3 [i_10] [i_10])));
        var_28 = ((/* implicit */unsigned char) var_7);
    }
    /* LoopSeq 2 */
    for (signed char i_11 = 0; i_11 < 19; i_11 += 1) /* same iter space */
    {
        arr_46 [i_11] = ((/* implicit */long long int) var_11);
        var_29 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_45 [i_11])))) : (((((/* implicit */_Bool) (+(arr_44 [i_11])))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) (signed char)-115))))) : (((/* implicit */int) var_0))))));
        var_30 = ((/* implicit */long long int) max((var_30), (((long long int) (signed char)48))));
    }
    for (signed char i_12 = 0; i_12 < 19; i_12 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        for (short i_13 = 0; i_13 < 19; i_13 += 4) 
        {
            var_31 = ((/* implicit */short) min((var_31), (((/* implicit */short) min((((/* implicit */long long int) ((unsigned short) ((short) (signed char)114)))), (arr_44 [i_13]))))));
            var_32 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_10) ? (((/* implicit */int) (signed char)113)) : (((/* implicit */int) (signed char)9))))) ? (((/* implicit */int) (signed char)90)) : (((/* implicit */int) (signed char)-121))))) ? (((unsigned int) (signed char)-99)) : (((/* implicit */unsigned int) (-(((/* implicit */int) arr_45 [i_13])))))));
            arr_52 [5] [i_13] = ((((((/* implicit */int) var_8)) <= (((/* implicit */int) arr_47 [i_13])))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((arr_49 [i_12] [i_12]), (arr_49 [i_13] [i_12]))))) : (((((/* implicit */_Bool) arr_44 [i_13])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_49 [i_12] [i_13]))) : (var_5))));
        }
        arr_53 [i_12] [i_12] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((1779796043), (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_9))) < (arr_48 [i_12]))))))) ? (((((/* implicit */_Bool) (-(((/* implicit */int) arr_45 [4LL]))))) ? (var_2) : (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)8191))) & (var_5)))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_4))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)198))) : (arr_48 [i_12])))));
    }
}
