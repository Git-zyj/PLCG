/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18123
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18123 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18123
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
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        arr_2 [21LL] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_0]))) - (((-7255240705636039822LL) * (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
        var_20 ^= ((/* implicit */long long int) ((unsigned char) arr_0 [i_0] [i_0]));
        arr_3 [i_0] = ((/* implicit */int) ((signed char) (signed char)-4));
        arr_4 [i_0] = ((/* implicit */int) (unsigned char)126);
        var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)126)) ? (((/* implicit */int) (unsigned char)243)) : (((/* implicit */int) arr_0 [i_0] [i_0]))));
    }
    for (unsigned char i_1 = 0; i_1 < 14; i_1 += 3) 
    {
        /* LoopNest 3 */
        for (short i_2 = 0; i_2 < 14; i_2 += 1) 
        {
            for (long long int i_3 = 0; i_3 < 14; i_3 += 2) 
            {
                for (unsigned long long int i_4 = 0; i_4 < 14; i_4 += 3) 
                {
                    {
                        var_22 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */int) ((((/* implicit */int) arr_0 [i_1] [i_4])) == (((/* implicit */int) (unsigned short)2))))) : (((/* implicit */int) ((unsigned short) 4095LL)))))));
                        var_23 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned short) arr_0 [i_4] [i_3]))) ? (((/* implicit */int) min((arr_0 [i_1] [i_4]), (arr_0 [i_1] [i_2])))) : (((/* implicit */int) arr_0 [i_1] [i_3]))));
                        /* LoopSeq 2 */
                        for (unsigned short i_5 = 0; i_5 < 14; i_5 += 1) 
                        {
                            arr_16 [i_2] [i_2] [i_3] [i_4] [i_5] = ((/* implicit */long long int) 4159847901U);
                            var_24 ^= ((/* implicit */short) ((((/* implicit */int) max((((/* implicit */unsigned char) (signed char)29)), (arr_13 [i_4] [i_2] [i_3] [i_4])))) > (((/* implicit */int) ((((/* implicit */int) arr_13 [i_1] [i_2] [i_2] [(unsigned char)5])) == (((/* implicit */int) arr_13 [i_1] [i_3] [i_4] [i_5])))))));
                        }
                        for (short i_6 = 0; i_6 < 14; i_6 += 4) 
                        {
                            var_25 = ((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)14202))));
                            arr_19 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */int) arr_18 [i_3] [i_4]);
                        }
                        arr_20 [i_1] [i_2] [i_1] [i_4] = (~(8488091821350643284LL));
                    }
                } 
            } 
        } 
        arr_21 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)56559)) < (((/* implicit */int) (unsigned short)40589))));
        arr_22 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((long long int) arr_12 [i_1] [i_1]))) ? (((int) (unsigned char)238)) : (((((/* implicit */int) var_14)) + (arr_12 [i_1] [i_1])))));
        arr_23 [i_1] [i_1] &= ((/* implicit */unsigned int) ((unsigned char) min(((unsigned char)214), (((/* implicit */unsigned char) var_9)))));
        arr_24 [i_1] = ((/* implicit */unsigned char) max((((((/* implicit */int) (unsigned short)65535)) << (((/* implicit */int) (_Bool)1)))), ((~(((/* implicit */int) ((signed char) (unsigned char)88)))))));
    }
    /* LoopSeq 1 */
    for (unsigned int i_7 = 0; i_7 < 12; i_7 += 3) 
    {
        arr_28 [i_7] [i_7] = ((/* implicit */long long int) min((((/* implicit */int) min(((unsigned short)65535), (((/* implicit */unsigned short) arr_27 [i_7] [i_7]))))), (((((/* implicit */_Bool) (unsigned short)42192)) ? (((/* implicit */int) arr_10 [(short)2])) : (((/* implicit */int) var_16))))));
        /* LoopNest 3 */
        for (unsigned char i_8 = 0; i_8 < 12; i_8 += 1) 
        {
            for (unsigned long long int i_9 = 1; i_9 < 11; i_9 += 1) 
            {
                for (unsigned char i_10 = 0; i_10 < 12; i_10 += 1) 
                {
                    {
                        arr_37 [i_8] = ((/* implicit */unsigned long long int) max((((/* implicit */int) min((arr_11 [i_7] [i_9 - 1] [i_9 - 1]), (arr_11 [i_8] [i_9 + 1] [i_9 + 1])))), (((((/* implicit */int) arr_11 [i_7] [i_9 + 1] [i_9 - 1])) * (((/* implicit */int) arr_11 [i_7] [i_9 + 1] [i_9 + 1]))))));
                        var_26 = ((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned short) max((var_1), (((/* implicit */unsigned char) (_Bool)1)))))) & (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)42)) && (((/* implicit */_Bool) (unsigned short)14)))))));
                    }
                } 
            } 
        } 
        arr_38 [i_7] [i_7] = ((/* implicit */long long int) max((arr_5 [i_7]), (((/* implicit */signed char) ((((/* implicit */int) ((unsigned char) 4072085815U))) != (((/* implicit */int) (unsigned short)0)))))));
        arr_39 [i_7] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)27)) ? (398648568) : (1023)));
    }
    var_27 = ((/* implicit */int) 2065716535U);
    var_28 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) ((unsigned char) 6U))) ? (((/* implicit */int) min((((/* implicit */short) var_2)), (var_12)))) : (var_13))), ((~(3)))));
}
