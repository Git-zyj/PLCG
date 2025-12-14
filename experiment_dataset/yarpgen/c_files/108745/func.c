/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108745
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108745 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108745
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
    for (unsigned char i_0 = 1; i_0 < 18; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (short i_1 = 3; i_1 < 21; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                for (unsigned short i_3 = 3; i_3 < 20; i_3 += 2) 
                {
                    {
                        arr_8 [i_0] = ((/* implicit */signed char) arr_2 [i_0 - 1]);
                        var_15 = ((((/* implicit */_Bool) (+(((/* implicit */int) var_11))))) ? ((-(((/* implicit */int) (unsigned char)170)))) : (((((/* implicit */_Bool) arr_1 [i_0])) ? (33344255) : (((/* implicit */int) var_0)))));
                    }
                } 
            } 
        } 
        var_16 = ((/* implicit */unsigned short) (-(((/* implicit */int) (signed char)-88))));
        var_17 = ((/* implicit */signed char) (short)-7033);
        /* LoopNest 3 */
        for (unsigned long long int i_4 = 0; i_4 < 22; i_4 += 1) 
        {
            for (unsigned short i_5 = 0; i_5 < 22; i_5 += 3) 
            {
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    {
                        var_18 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (unsigned char)193))))) ? (max((((/* implicit */int) ((_Bool) 31ULL))), (((((/* implicit */_Bool) 18203402)) ? (((/* implicit */int) (short)-13977)) : (((/* implicit */int) (unsigned char)0)))))) : (0)));
                        var_19 = ((/* implicit */unsigned long long int) (unsigned short)960);
                        var_20 = ((/* implicit */unsigned long long int) ((long long int) (+(((((/* implicit */int) (unsigned char)255)) * (((/* implicit */int) var_1)))))));
                        arr_17 [(_Bool)1] [i_0] [i_5] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */int) (((!(((/* implicit */_Bool) arr_9 [i_0 + 1] [(signed char)20])))) && ((!(((/* implicit */_Bool) (unsigned short)27306))))))) / (((/* implicit */int) ((short) (short)13977)))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (long long int i_7 = 0; i_7 < 22; i_7 += 4) 
        {
            for (long long int i_8 = 1; i_8 < 21; i_8 += 2) 
            {
                {
                    var_21 = ((/* implicit */short) (!(((((/* implicit */_Bool) -1476325898)) || ((!(((/* implicit */_Bool) arr_12 [i_8 - 1] [i_7] [i_0]))))))));
                    var_22 = var_0;
                    var_23 = ((/* implicit */long long int) (+(((((/* implicit */_Bool) max((((/* implicit */unsigned short) (unsigned char)62)), ((unsigned short)18310)))) ? (((/* implicit */int) (unsigned char)0)) : ((~(33344255)))))));
                }
            } 
        } 
    }
    for (unsigned short i_9 = 4; i_9 < 20; i_9 += 1) 
    {
        var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) (((!(((/* implicit */_Bool) max((4294967295U), (((/* implicit */unsigned int) arr_25 [i_9]))))))) ? (var_14) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((int) var_7))) ? (((/* implicit */int) ((unsigned short) arr_23 [4]))) : (33344255)))))))));
        /* LoopNest 3 */
        for (unsigned short i_10 = 0; i_10 < 22; i_10 += 2) 
        {
            for (signed char i_11 = 3; i_11 < 20; i_11 += 3) 
            {
                for (signed char i_12 = 3; i_12 < 20; i_12 += 2) 
                {
                    {
                        var_25 = ((/* implicit */unsigned long long int) (-(max((min((-33344255), (((/* implicit */int) var_1)))), (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)194)))))))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned short i_13 = 2; i_13 < 18; i_13 += 2) /* same iter space */
                        {
                            var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_22 [i_13 - 2] [i_12 - 2] [i_11 - 3])) ? (arr_22 [i_13 + 4] [i_12 - 3] [i_11 - 1]) : (arr_22 [i_13 + 3] [i_12 + 2] [4ULL])));
                            var_27 = ((/* implicit */short) (+(((/* implicit */int) (short)-32751))));
                        }
                        for (unsigned short i_14 = 2; i_14 < 18; i_14 += 2) /* same iter space */
                        {
                            arr_41 [i_9] [i_9] [i_9] [i_9] [i_9] = ((/* implicit */long long int) 0U);
                            arr_42 [i_9] [i_10] [i_10] [(_Bool)1] [i_10] = ((/* implicit */unsigned char) (-((~(((((/* implicit */_Bool) 1543564467539683687ULL)) ? (((/* implicit */int) arr_21 [i_9])) : (((/* implicit */int) var_12))))))));
                            var_28 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(var_9)))) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned char)62)))) : (((/* implicit */int) (signed char)-70))));
                            var_29 = ((/* implicit */_Bool) max((min((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))) * (4294967295U))), (((/* implicit */unsigned int) min((arr_15 [i_9] [i_9] [i_11]), (var_2)))))), (((/* implicit */unsigned int) arr_25 [i_14]))));
                        }
                        var_30 = ((/* implicit */int) max((var_30), ((-(((/* implicit */int) var_0))))));
                    }
                } 
            } 
        } 
        arr_43 [i_9] [i_9] = ((/* implicit */signed char) min(((+(((((/* implicit */_Bool) 33344255)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))) : (var_9))))), (((/* implicit */unsigned long long int) var_8))));
        var_31 = ((/* implicit */unsigned char) arr_15 [i_9] [i_9] [i_9]);
    }
    /* LoopNest 3 */
    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
    {
        for (unsigned char i_16 = 1; i_16 < 17; i_16 += 3) 
        {
            for (unsigned short i_17 = 0; i_17 < 19; i_17 += 3) 
            {
                {
                    arr_56 [i_16] = ((/* implicit */unsigned int) ((max(((-(((/* implicit */int) arr_1 [5ULL])))), (((/* implicit */int) arr_2 [i_16 - 1])))) << (((((/* implicit */int) var_12)) - (39820)))));
                    var_32 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_39 [i_16] [i_16] [i_16 - 1] [i_16 - 1] [(signed char)11] [i_16 + 1])) ? (((/* implicit */int) (unsigned short)35928)) : (((/* implicit */int) arr_39 [i_16] [i_16] [i_16 + 1] [i_16 + 2] [i_16] [i_16 + 2]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_39 [(_Bool)1] [i_15] [i_16 + 2] [i_16 - 1] [i_16 + 2] [i_16 + 2])))))) : (max((((/* implicit */unsigned long long int) arr_39 [(unsigned short)8] [i_16] [i_16 + 1] [i_16 + 1] [21ULL] [i_16 + 1])), (var_14)))));
                }
            } 
        } 
    } 
}
