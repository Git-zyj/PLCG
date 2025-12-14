/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140274
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140274 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140274
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
    for (short i_0 = 1; i_0 < 15; i_0 += 1) 
    {
        var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) min((((((/* implicit */_Bool) 448U)) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_3 [i_0])) * (((/* implicit */int) arr_3 [i_0]))))) : ((-(var_14))))), (((/* implicit */unsigned int) var_5)))))));
        var_18 += ((/* implicit */signed char) (+(((/* implicit */int) ((signed char) var_5)))));
    }
    for (short i_1 = 0; i_1 < 22; i_1 += 2) 
    {
        arr_6 [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) ((short) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_4 [i_1]))))))) % ((+(((((/* implicit */_Bool) (unsigned char)253)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1])))))))));
        var_19 = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */int) arr_4 [i_1])) : (((/* implicit */int) arr_4 [i_1]))))));
    }
    for (unsigned int i_2 = 1; i_2 < 19; i_2 += 4) 
    {
        var_20 &= ((/* implicit */int) ((signed char) ((((/* implicit */int) arr_4 [i_2 - 1])) ^ (((/* implicit */int) arr_4 [i_2 - 1])))));
        arr_9 [i_2] [i_2] = ((/* implicit */_Bool) var_10);
    }
    /* LoopSeq 2 */
    for (signed char i_3 = 1; i_3 < 18; i_3 += 2) 
    {
        var_21 = ((/* implicit */unsigned short) ((var_14) | (((/* implicit */unsigned int) -1))));
        var_22 = ((((/* implicit */_Bool) arr_7 [i_3 + 1])) ? (((/* implicit */long long int) max((((int) (unsigned short)3045)), (((/* implicit */int) arr_10 [i_3] [i_3]))))) : (((min((((/* implicit */long long int) var_15)), (var_6))) / (((/* implicit */long long int) ((/* implicit */int) ((325791783U) != (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_3]))))))))));
        /* LoopSeq 3 */
        for (unsigned short i_4 = 1; i_4 < 16; i_4 += 1) 
        {
            /* LoopNest 2 */
            for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
            {
                for (short i_6 = 0; i_6 < 19; i_6 += 1) 
                {
                    {
                        var_23 = ((/* implicit */unsigned short) var_7);
                        arr_21 [i_3] [i_5] = ((/* implicit */short) var_4);
                        arr_22 [i_3] [i_4] [i_4] [i_5] [i_5] [i_3] = ((/* implicit */unsigned short) (+((-(arr_16 [i_5] [i_3] [i_3] [i_3])))));
                    }
                } 
            } 
            var_24 = ((/* implicit */unsigned int) min((var_24), (((/* implicit */unsigned int) (+(((((/* implicit */int) arr_4 [i_3 + 1])) - (((/* implicit */int) (short)25476)))))))));
        }
        for (long long int i_7 = 0; i_7 < 19; i_7 += 1) 
        {
            arr_25 [i_3] = (i_3 % 2 == zero) ? (((/* implicit */unsigned short) min((arr_19 [i_3] [i_3]), (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_10 [i_3] [i_3])) << (((((/* implicit */int) arr_10 [i_3] [i_3])) - (148)))))))))))) : (((/* implicit */unsigned short) min((arr_19 [i_3] [i_3]), (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_10 [i_3] [i_3])) << (((((((/* implicit */int) arr_10 [i_3] [i_3])) - (148))) + (83))))))))))));
            arr_26 [(_Bool)0] [i_3] [i_7] &= ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) var_16)))) : (max((var_6), (((/* implicit */long long int) arr_15 [i_3] [i_7] [i_3] [14])))))));
        }
        for (long long int i_8 = 0; i_8 < 19; i_8 += 1) 
        {
            /* LoopNest 2 */
            for (int i_9 = 0; i_9 < 19; i_9 += 1) 
            {
                for (long long int i_10 = 0; i_10 < 19; i_10 += 2) 
                {
                    {
                        var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) ((((/* implicit */_Bool) arr_14 [i_3] [i_10])) ? (min((((/* implicit */long long int) arr_32 [i_3] [i_8] [i_9] [i_10])), (((long long int) arr_30 [i_9] [i_8] [i_3])))) : (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_3] [i_10]))))))));
                        arr_33 [i_3] [i_8] [i_3] [i_10] = ((/* implicit */short) ((int) (!(((/* implicit */_Bool) ((int) var_9))))));
                        /* LoopSeq 4 */
                        for (short i_11 = 0; i_11 < 19; i_11 += 2) 
                        {
                            var_26 = (~(((/* implicit */int) ((unsigned short) min((((/* implicit */int) var_3)), (var_16))))));
                            var_27 = ((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */int) (unsigned short)59494)) <= (((/* implicit */int) (!(((/* implicit */_Bool) arr_31 [i_11] [i_10] [i_9] [i_8]))))))));
                        }
                        for (unsigned int i_12 = 4; i_12 < 17; i_12 += 4) 
                        {
                            var_28 *= var_12;
                            var_29 = ((/* implicit */_Bool) min((((/* implicit */signed char) arr_32 [i_8] [i_9] [i_10] [i_3])), (var_0)));
                            var_30 = ((/* implicit */long long int) ((_Bool) (-(((/* implicit */int) arr_12 [i_3])))));
                        }
                        for (unsigned char i_13 = 2; i_13 < 16; i_13 += 2) 
                        {
                            var_31 = ((/* implicit */short) (-(((((((/* implicit */unsigned int) ((/* implicit */int) var_4))) > (arr_15 [i_3] [i_9] [i_8] [i_3]))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_11)))) : (arr_7 [i_3 - 1])))));
                            arr_40 [i_3] [i_3] = ((/* implicit */_Bool) arr_27 [i_9] [i_8]);
                        }
                        for (short i_14 = 0; i_14 < 19; i_14 += 1) 
                        {
                            arr_45 [i_3] [i_8] [i_9] [i_3] [i_14] = var_3;
                            arr_46 [i_3] [i_10] [i_9] [i_10] [i_14] &= ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */int) (signed char)77)), (arr_20 [i_3] [i_10] [i_8] [i_3 - 1])))) ? ((-(((/* implicit */int) arr_17 [i_3 - 1])))) : (((((/* implicit */_Bool) arr_42 [i_3 - 1] [i_3 + 1] [i_3] [i_9] [i_9] [i_9])) ? (((/* implicit */int) arr_17 [i_3 - 1])) : (arr_20 [i_3] [i_10] [i_9] [i_3 + 1])))));
                            arr_47 [i_3] [i_10] [i_10] [i_9] [i_8] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)77))))) ? (((((/* implicit */_Bool) (unsigned short)8505)) ? (((/* implicit */int) (signed char)-78)) : (((/* implicit */int) (short)31234)))) : (((/* implicit */int) (((-(((/* implicit */int) arr_12 [i_3])))) >= (((/* implicit */int) arr_27 [i_9] [i_3 + 1])))))));
                        }
                        var_32 = ((/* implicit */unsigned char) min((var_32), (((/* implicit */unsigned char) (short)14290))));
                    }
                } 
            } 
            /* LoopSeq 1 */
            for (int i_15 = 3; i_15 < 16; i_15 += 4) 
            {
                /* LoopSeq 1 */
                for (int i_16 = 2; i_16 < 18; i_16 += 4) 
                {
                    var_33 = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_35 [i_3] [i_8] [i_3 - 1] [i_16] [i_3] [i_3] [i_16]))));
                    arr_54 [i_3] [i_8] [i_15] [i_3] = ((/* implicit */signed char) arr_44 [i_3] [i_3] [i_15] [i_3] [i_16]);
                    var_34 = ((/* implicit */short) min((var_34), (((/* implicit */short) (+(min((((((/* implicit */int) arr_37 [i_3] [i_8] [i_16] [i_16] [i_15])) * (((/* implicit */int) arr_41 [i_3] [i_3] [i_8] [i_8] [i_15] [i_16])))), (((((/* implicit */int) arr_18 [i_3] [i_16] [i_15] [i_16] [i_16])) ^ (((/* implicit */int) arr_41 [i_3] [i_15] [i_16] [i_15] [i_8] [i_16])))))))))));
                }
                arr_55 [i_3] [i_3] [i_15] [i_15] = ((/* implicit */long long int) max((var_8), (var_14)));
            }
        }
    }
    for (int i_17 = 2; i_17 < 13; i_17 += 4) 
    {
        var_35 = ((/* implicit */unsigned short) max((var_35), (((/* implicit */unsigned short) (+((-(((/* implicit */int) arr_23 [i_17] [i_17] [i_17 + 3])))))))));
        var_36 = ((/* implicit */signed char) arr_15 [i_17] [i_17] [i_17] [i_17]);
    }
    var_37 = ((/* implicit */unsigned char) var_5);
    var_38 = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */_Bool) ((unsigned int) var_13))) || (((/* implicit */_Bool) var_12))))) << (((/* implicit */int) ((((/* implicit */_Bool) ((var_11) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_0))))) && ((!(((/* implicit */_Bool) var_9)))))))));
    var_39 ^= var_16;
}
