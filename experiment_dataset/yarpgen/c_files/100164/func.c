/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100164
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100164 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100164
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
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        var_19 = ((/* implicit */signed char) min(((short)-22885), ((short)22884)));
        var_20 = ((/* implicit */signed char) arr_1 [i_0] [i_0]);
        arr_2 [(_Bool)1] [(_Bool)1] |= ((/* implicit */_Bool) (short)-29277);
    }
    for (short i_1 = 0; i_1 < 17; i_1 += 4) 
    {
        var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)0))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)123))))) : (max((((/* implicit */int) (!(((/* implicit */_Bool) (short)-22885))))), (((((/* implicit */_Bool) var_18)) ? (arr_3 [i_1] [i_1]) : (((/* implicit */int) var_11))))))));
        var_22 = ((/* implicit */unsigned short) (short)-7684);
        /* LoopSeq 2 */
        for (short i_2 = 0; i_2 < 17; i_2 += 2) /* same iter space */
        {
            var_23 -= ((/* implicit */short) max((((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)0)), (var_6)))), ((-((+(((/* implicit */int) arr_5 [i_1]))))))));
            /* LoopNest 2 */
            for (unsigned short i_3 = 2; i_3 < 14; i_3 += 4) 
            {
                for (short i_4 = 0; i_4 < 17; i_4 += 1) 
                {
                    {
                        var_24 = ((/* implicit */signed char) (short)3194);
                        arr_15 [i_1] [9U] [i_2] [i_3] [i_4] = ((/* implicit */short) max((((/* implicit */unsigned short) var_3)), (max(((unsigned short)0), (((/* implicit */unsigned short) ((((/* implicit */int) var_6)) == (((/* implicit */int) var_3)))))))));
                        var_25 = ((/* implicit */unsigned short) (-(((/* implicit */int) ((((/* implicit */int) ((signed char) (unsigned short)8126))) == ((+(((/* implicit */int) (unsigned short)0)))))))));
                        /* LoopSeq 1 */
                        for (short i_5 = 0; i_5 < 17; i_5 += 2) 
                        {
                            arr_19 [i_1] [i_1] [i_1] [(signed char)3] [(signed char)3] [0] [(signed char)9] = ((/* implicit */unsigned long long int) ((unsigned short) (~(((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_5 [i_4])))))));
                            var_26 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) max(((short)-3195), (((/* implicit */short) (_Bool)0)))))))) ? (min((((((/* implicit */_Bool) 1U)) ? (((/* implicit */int) (short)-7684)) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (unsigned char)235)))) : (((((/* implicit */int) (signed char)7)) + (((/* implicit */int) arr_8 [i_3] [i_3 - 2]))))));
                        }
                        arr_20 [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((short) (_Bool)0))) ? (((/* implicit */int) (((~(((/* implicit */int) var_2)))) == (min((((/* implicit */int) var_12)), (1262758450)))))) : (((/* implicit */int) (short)3195))));
                    }
                } 
            } 
        }
        for (short i_6 = 0; i_6 < 17; i_6 += 2) /* same iter space */
        {
            var_27 = ((/* implicit */short) max((var_27), (((/* implicit */short) max((((int) (signed char)-84)), (((((/* implicit */int) var_11)) + (((/* implicit */int) arr_8 [i_1] [i_6])))))))));
            var_28 |= ((/* implicit */short) arr_16 [i_1]);
        }
        arr_23 [i_1] = ((/* implicit */_Bool) (signed char)-48);
        arr_24 [(signed char)4] [i_1] = ((/* implicit */short) (+(((((/* implicit */unsigned long long int) ((int) (short)25064))) - (min((((/* implicit */unsigned long long int) arr_17 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])), (12036339779160342078ULL)))))));
    }
    /* LoopSeq 1 */
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
    {
        arr_29 [i_7] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_22 [i_7] [i_7])) ? (((((/* implicit */_Bool) (-(((/* implicit */int) var_15))))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_27 [(signed char)9] [i_7])))) : ((+(((((/* implicit */int) arr_21 [i_7] [i_7])) - (((/* implicit */int) arr_11 [i_7] [(short)6] [i_7] [(unsigned char)10]))))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned short i_8 = 1; i_8 < 12; i_8 += 3) 
        {
            var_29 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) var_3)) * (((/* implicit */int) (unsigned char)20))))) ? ((-(((/* implicit */int) arr_1 [(short)10] [(_Bool)1])))) : (((/* implicit */int) (unsigned char)236))));
            arr_33 [i_7] [i_8] [i_8] = ((/* implicit */unsigned int) var_6);
        }
        for (signed char i_9 = 0; i_9 < 14; i_9 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned int i_10 = 0; i_10 < 14; i_10 += 4) 
            {
                for (short i_11 = 4; i_11 < 13; i_11 += 2) 
                {
                    {
                        arr_41 [i_7] = ((/* implicit */int) arr_38 [i_11 - 4] [i_11] [i_11] [i_11]);
                        var_30 = ((/* implicit */short) (_Bool)0);
                    }
                } 
            } 
            var_31 = ((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned char)253))));
        }
        arr_42 [i_7] [i_7] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */int) (unsigned char)223)) : (((/* implicit */int) min(((_Bool)0), ((_Bool)1)))))), (((((/* implicit */_Bool) arr_14 [i_7] [i_7])) ? (((((/* implicit */int) arr_18 [i_7] [i_7] [i_7] [i_7] [i_7])) & (((/* implicit */int) arr_12 [i_7] [i_7] [i_7] [11U])))) : (((/* implicit */int) (signed char)0))))));
    }
    var_32 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)2)) ? (min((((/* implicit */int) (unsigned char)226)), (((((/* implicit */_Bool) (signed char)114)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (short)32767)))))) : (((/* implicit */int) (_Bool)0))));
}
