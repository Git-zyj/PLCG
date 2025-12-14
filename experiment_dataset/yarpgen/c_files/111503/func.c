/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111503
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111503 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111503
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
    for (long long int i_0 = 0; i_0 < 25; i_0 += 3) /* same iter space */
    {
        arr_2 [i_0] [i_0] = ((/* implicit */int) (~(((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_1 [i_0]) : (arr_1 [i_0])))));
        arr_3 [(unsigned short)24] [i_0] = ((/* implicit */unsigned long long int) arr_0 [i_0]);
    }
    for (long long int i_1 = 0; i_1 < 25; i_1 += 3) /* same iter space */
    {
        arr_6 [i_1] [i_1] &= (((-(arr_1 [i_1]))) << (((((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (((long long int) (signed char)16)))) - (39671LL))));
        var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) -1775557083))));
        var_15 = ((/* implicit */unsigned short) ((unsigned int) arr_1 [i_1]));
        /* LoopNest 2 */
        for (signed char i_2 = 1; i_2 < 24; i_2 += 3) 
        {
            for (unsigned int i_3 = 4; i_3 < 22; i_3 += 1) 
            {
                {
                    var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_8)) <= (((/* implicit */int) ((((/* implicit */_Bool) arr_12 [i_1] [i_2 - 1] [i_2 + 1])) && (((/* implicit */_Bool) max(((signed char)0), ((signed char)29)))))))));
                    arr_13 [i_1] [i_2] [i_2] = ((/* implicit */unsigned char) ((short) (-((-(((/* implicit */int) (signed char)-38)))))));
                    arr_14 [i_1] [i_2] [i_2] = ((/* implicit */long long int) arr_4 [i_2 + 1] [i_2 - 1]);
                    arr_15 [i_1] [i_2] [i_3] [i_3] = arr_0 [i_2];
                    arr_16 [i_2] [i_3] [i_2 + 1] [i_2] = ((/* implicit */unsigned short) (signed char)29);
                }
            } 
        } 
        arr_17 [i_1] = ((/* implicit */unsigned char) (signed char)-1);
    }
    /* vectorizable */
    for (long long int i_4 = 0; i_4 < 25; i_4 += 3) /* same iter space */
    {
        arr_20 [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_10 [i_4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [18]))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) arr_11 [(unsigned char)20] [i_4] [i_4] [i_4])) : (var_4)))));
        /* LoopNest 2 */
        for (long long int i_5 = 2; i_5 < 24; i_5 += 1) 
        {
            for (unsigned int i_6 = 0; i_6 < 25; i_6 += 1) 
            {
                {
                    var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)91)) ? (((/* implicit */int) arr_10 [i_5])) : ((~(((/* implicit */int) (unsigned char)167))))));
                    arr_27 [i_6] [i_5 + 1] [(_Bool)1] = ((/* implicit */unsigned long long int) ((((long long int) arr_26 [i_6] [i_4] [i_5 - 1] [i_4])) << (((((/* implicit */int) arr_19 [i_4])) - (19949)))));
                    /* LoopNest 2 */
                    for (int i_7 = 3; i_7 < 21; i_7 += 1) 
                    {
                        for (short i_8 = 0; i_8 < 25; i_8 += 3) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned char) (unsigned short)58218);
                                var_19 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_0 [(unsigned char)10])) + ((+(((/* implicit */int) (unsigned char)62))))));
                                var_20 = ((/* implicit */signed char) (~((~(arr_28 [i_4] [i_4] [i_4] [i_4])))));
                                arr_34 [i_7] [i_5] [i_6] = ((/* implicit */long long int) var_9);
                                arr_35 [i_4] [i_5] = ((((/* implicit */_Bool) arr_32 [i_7] [i_7 - 3] [i_7] [i_7] [i_7] [i_5 + 1] [i_5 - 1])) ? (arr_11 [(unsigned short)12] [i_6] [i_5] [(unsigned short)12]) : (((/* implicit */int) (signed char)17)));
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopNest 2 */
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            for (unsigned long long int i_10 = 0; i_10 < 25; i_10 += 3) 
            {
                {
                    var_21 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 12861513745817577513ULL)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (var_2)))) ? (arr_5 [i_9]) : (((/* implicit */long long int) ((/* implicit */int) arr_41 [i_4] [i_9] [(signed char)14])))));
                    var_22 = ((/* implicit */long long int) (-(((/* implicit */int) arr_22 [i_10] [i_9] [i_4]))));
                }
            } 
        } 
    }
    var_23 ^= ((/* implicit */_Bool) var_13);
    var_24 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_3)) : (((((/* implicit */_Bool) ((13487428166556736534ULL) << (((-4942510168407756837LL) + (4942510168407756845LL)))))) ? ((+(var_5))) : (((/* implicit */int) var_7))))));
    var_25 = ((/* implicit */short) ((((((/* implicit */_Bool) (+(var_5)))) ? ((+(((/* implicit */int) (unsigned short)61210)))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (signed char)-23)) : (var_0))))) > (((/* implicit */int) ((((((/* implicit */_Bool) -7336729689866694535LL)) ? (((/* implicit */int) var_8)) : (var_0))) <= (((/* implicit */int) ((_Bool) var_3))))))));
}
