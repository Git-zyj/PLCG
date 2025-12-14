/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101950
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101950 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101950
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
    var_14 = ((/* implicit */unsigned char) var_10);
    /* LoopSeq 4 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 4 */
        for (unsigned short i_1 = 2; i_1 < 20; i_1 += 1) /* same iter space */
        {
            arr_4 [i_1] = ((/* implicit */unsigned short) var_12);
            arr_5 [i_0] |= ((/* implicit */signed char) (-(((/* implicit */int) var_4))));
            var_15 += ((/* implicit */int) (-9223372036854775807LL - 1LL));
        }
        for (unsigned short i_2 = 2; i_2 < 20; i_2 += 1) /* same iter space */
        {
            arr_8 [i_2] = ((/* implicit */unsigned short) ((int) 6));
            var_16 = ((/* implicit */signed char) (-(var_13)));
            arr_9 [8LL] [i_2] = ((/* implicit */long long int) (-((+(arr_1 [i_0])))));
        }
        for (unsigned short i_3 = 2; i_3 < 20; i_3 += 1) /* same iter space */
        {
            arr_13 [i_0] [i_3] = ((/* implicit */unsigned int) arr_0 [i_0] [i_0]);
            arr_14 [i_0] [i_3] [i_3 - 2] = ((/* implicit */signed char) min((((/* implicit */unsigned int) ((((/* implicit */int) var_9)) << (1)))), (var_10)));
        }
        for (int i_4 = 4; i_4 < 18; i_4 += 1) 
        {
            arr_18 [i_0] = ((/* implicit */unsigned char) max(((+(((6999812884384535282LL) >> (((((/* implicit */int) var_4)) + (92))))))), (((/* implicit */long long int) min((((((/* implicit */int) var_8)) < (((/* implicit */int) arr_15 [i_0])))), (arr_7 [8] [i_4 - 3]))))));
            /* LoopNest 3 */
            for (signed char i_5 = 4; i_5 < 19; i_5 += 3) 
            {
                for (unsigned int i_6 = 0; i_6 < 21; i_6 += 3) 
                {
                    for (short i_7 = 0; i_7 < 21; i_7 += 1) 
                    {
                        {
                            var_17 = ((/* implicit */signed char) (+(((/* implicit */int) ((short) arr_15 [6U])))));
                            arr_25 [i_0] [i_4] [i_5] [i_6] [i_7] = ((/* implicit */short) arr_3 [i_5 - 3] [i_4 + 3] [i_4 + 3]);
                            arr_26 [i_0] [i_4 + 1] [i_5] [i_6] [i_7] [i_5] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((min((var_9), ((_Bool)1))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1))))) : (max((((/* implicit */unsigned int) arr_21 [i_5] [i_4] [i_5 + 2] [i_5])), (arr_1 [i_7])))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (((((_Bool)1) ? (arr_1 [i_7]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)9874))))) <= (((/* implicit */unsigned int) (+(arr_19 [6U] [i_4] [i_6] [i_6])))))))));
                            var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) ((((((/* implicit */_Bool) (+(-581214634)))) ? ((~(((/* implicit */int) arr_21 [(unsigned short)8] [(unsigned short)8] [i_6] [i_7])))) : (((/* implicit */int) ((((/* implicit */int) var_2)) != (((/* implicit */int) (signed char)123))))))) / (max(((+(((/* implicit */int) arr_20 [i_7] [i_6] [i_0])))), (((/* implicit */int) arr_10 [i_4 + 1] [14U])))))))));
                        }
                    } 
                } 
            } 
            var_19 = (!(((/* implicit */_Bool) (+(((((/* implicit */int) arr_10 [i_0] [(short)6])) * (((/* implicit */int) (unsigned short)65535))))))));
            var_20 = ((/* implicit */short) (~(((((/* implicit */_Bool) arr_11 [(signed char)19] [i_4])) ? (((/* implicit */int) arr_11 [i_0] [i_4 - 4])) : (((/* implicit */int) arr_11 [i_0] [i_4 - 2]))))));
        }
        arr_27 [i_0] = ((/* implicit */signed char) ((((((/* implicit */_Bool) -15)) ? (((/* implicit */int) (unsigned short)55506)) : (((/* implicit */int) (_Bool)0)))) * (((((/* implicit */_Bool) 2895108193U)) ? (((/* implicit */int) arr_11 [i_0] [i_0])) : (((/* implicit */int) (unsigned short)55661))))));
        var_21 = (((-(-581214634))) >> (min((((/* implicit */int) (_Bool)0)), (((int) 0)))));
        arr_28 [i_0] = 1756416117;
    }
    for (long long int i_8 = 1; i_8 < 16; i_8 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned int i_9 = 2; i_9 < 13; i_9 += 1) 
        {
            for (long long int i_10 = 0; i_10 < 17; i_10 += 4) 
            {
                for (unsigned char i_11 = 4; i_11 < 14; i_11 += 3) 
                {
                    {
                        var_22 = ((/* implicit */int) min((var_22), (((arr_7 [i_10] [i_8]) ? (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) arr_30 [i_8])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (1399859103U))))) : ((~(arr_19 [i_8] [i_9 + 4] [i_10] [i_11 - 1])))))));
                        var_23 = ((/* implicit */int) min((var_23), (((/* implicit */int) (_Bool)1))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) 
        {
            for (_Bool i_13 = 0; i_13 < 0; i_13 += 1) 
            {
                {
                    arr_44 [i_13] = ((/* implicit */long long int) min((((/* implicit */unsigned int) min((arr_38 [i_13 + 1] [i_12] [i_8 - 1] [i_12 - 1]), (((/* implicit */unsigned char) ((signed char) arr_32 [i_8] [i_12] [i_13])))))), (max(((-(4294967295U))), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) 70744268)) : (0U)))))));
                    var_24 = ((/* implicit */unsigned int) min((var_24), (((/* implicit */unsigned int) (+(((/* implicit */int) ((unsigned char) arr_32 [i_13 + 1] [i_13] [i_13]))))))));
                    arr_45 [i_13] [i_12] [i_13] = min((((/* implicit */unsigned int) min((((/* implicit */int) max((var_4), (((/* implicit */signed char) (_Bool)0))))), (((((/* implicit */int) arr_37 [i_8 - 1] [i_8 - 1] [i_8] [i_8] [i_8 + 1] [i_8])) - (var_13)))))), ((-(arr_30 [i_8]))));
                }
            } 
        } 
        var_25 *= ((/* implicit */unsigned char) ((int) max((((/* implicit */int) ((unsigned char) arr_6 [i_8] [i_8 - 1]))), (var_5))));
    }
    for (unsigned char i_14 = 0; i_14 < 12; i_14 += 2) 
    {
        arr_48 [i_14] = ((/* implicit */unsigned char) ((unsigned int) min((arr_16 [i_14] [i_14]), (arr_16 [i_14] [i_14]))));
        var_26 *= ((/* implicit */short) ((((_Bool) (_Bool)1)) ? (((((/* implicit */_Bool) 0)) ? (((/* implicit */int) (!(((/* implicit */_Bool) 70744268))))) : ((-(((/* implicit */int) (_Bool)1)))))) : (max((-9), (arr_22 [i_14] [i_14] [i_14] [i_14])))));
    }
    for (long long int i_15 = 0; i_15 < 16; i_15 += 1) 
    {
        arr_51 [i_15] = ((/* implicit */unsigned int) min((max((((/* implicit */int) arr_38 [i_15] [i_15] [i_15] [i_15])), ((~(((/* implicit */int) (unsigned char)5)))))), (((/* implicit */int) arr_43 [i_15] [i_15] [i_15]))));
        var_27 |= ((/* implicit */signed char) ((short) max((((arr_32 [i_15] [i_15] [i_15]) * (0LL))), (((((/* implicit */_Bool) (unsigned char)163)) ? (8682166605642832338LL) : (((/* implicit */long long int) 17U)))))));
    }
    var_28 = ((/* implicit */_Bool) max((var_28), ((((-(((((/* implicit */_Bool) 698207529U)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) var_12))))))) <= (((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_9))))) ? (max((var_13), (((/* implicit */int) (signed char)107)))) : (((/* implicit */int) min((((/* implicit */unsigned short) (short)-13)), ((unsigned short)55661)))))))))));
    var_29 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) (unsigned char)2)) ? ((~((-9223372036854775807LL - 1LL)))) : (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned char) var_4)), ((unsigned char)2)))))))));
}
