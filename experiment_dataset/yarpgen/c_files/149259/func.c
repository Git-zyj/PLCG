/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149259
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149259 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149259
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
    var_11 = ((/* implicit */_Bool) min((min((var_4), (min((var_4), (((/* implicit */unsigned int) var_0)))))), (((/* implicit */unsigned int) var_3))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            {
                /* LoopSeq 3 */
                for (unsigned short i_2 = 0; i_2 < 17; i_2 += 4) 
                {
                    arr_8 [i_0] [14LL] [i_2] = ((((/* implicit */_Bool) (+(-1597096876)))) || (((/* implicit */_Bool) (+(var_8)))));
                    var_12 = ((/* implicit */unsigned short) (+((+((+(((/* implicit */int) var_5))))))));
                    /* LoopSeq 3 */
                    for (unsigned char i_3 = 0; i_3 < 17; i_3 += 1) 
                    {
                        arr_12 [i_0] [(unsigned short)10] [i_3] [i_0] = min((((/* implicit */long long int) var_0)), (((((long long int) (unsigned char)58)) >> (((8778913153024LL) - (8778913152996LL))))));
                        arr_13 [i_3] [(unsigned short)7] [i_3] [i_3] [(short)4] [(unsigned short)7] = ((/* implicit */unsigned long long int) min((((1597096876) | (((/* implicit */int) (short)-14323)))), (((((/* implicit */int) var_7)) << (((((/* implicit */int) var_5)) - (38114)))))));
                    }
                    for (short i_4 = 0; i_4 < 17; i_4 += 2) 
                    {
                        var_13 -= ((/* implicit */unsigned short) (+(((/* implicit */int) ((((((/* implicit */int) var_7)) == (((/* implicit */int) var_1)))) || (((/* implicit */_Bool) var_5)))))));
                        var_14 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_5))))))))) != (min((((/* implicit */long long int) (+(var_4)))), (((var_2) % (((/* implicit */long long int) ((/* implicit */int) var_10)))))))));
                        arr_16 [i_1] = (+(((/* implicit */int) ((unsigned short) min((((/* implicit */unsigned short) var_1)), (var_5))))));
                    }
                    for (unsigned char i_5 = 0; i_5 < 17; i_5 += 4) 
                    {
                        var_15 = ((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */_Bool) var_6)) || (((((/* implicit */int) var_6)) >= (((/* implicit */int) var_6)))))))));
                        arr_21 [i_2] [i_2] = ((/* implicit */long long int) min((((signed char) var_2)), (((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_8)))) == (var_4))))));
                        var_16 = ((((/* implicit */_Bool) (+(((int) var_7))))) || (((/* implicit */_Bool) ((unsigned char) (short)-396))));
                        var_17 = ((/* implicit */unsigned short) (+((+(min((var_2), (((/* implicit */long long int) var_5))))))));
                        /* LoopSeq 1 */
                        for (unsigned char i_6 = 0; i_6 < 17; i_6 += 3) 
                        {
                            arr_25 [i_6] [(unsigned char)16] [i_6] [i_6] [(_Bool)1] = ((((/* implicit */_Bool) ((var_2) - (((/* implicit */long long int) ((/* implicit */int) var_9)))))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_10)))) : (((/* implicit */int) min((var_0), (((/* implicit */unsigned char) var_9))))));
                            var_18 = ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))) ? ((+(17507189989658161204ULL))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_10))))))) == (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-378)) ? (((/* implicit */int) (short)407)) : (((/* implicit */int) (short)380)))))));
                            var_19 += ((/* implicit */unsigned char) (+(((((/* implicit */int) min((var_7), (var_7)))) & (((((/* implicit */int) var_9)) + (((/* implicit */int) var_7))))))));
                            arr_26 [i_0] [i_6] [(unsigned char)14] [i_2] [i_6] [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((var_8), (var_4))))));
                        }
                    }
                }
                for (long long int i_7 = 0; i_7 < 17; i_7 += 2) 
                {
                    /* LoopSeq 1 */
                    for (signed char i_8 = 0; i_8 < 17; i_8 += 3) 
                    {
                        var_20 ^= ((/* implicit */unsigned char) (+(min((((/* implicit */long long int) ((short) var_2))), (var_2)))));
                        var_21 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) ((unsigned char) 1597096864))) ? (6093905864291300731LL) : (6093905864291300729LL)))));
                    }
                    var_22 |= ((/* implicit */signed char) (+(((/* implicit */int) (short)24464))));
                    arr_33 [(short)16] [(short)16] = ((/* implicit */signed char) ((short) (short)-397));
                }
                /* vectorizable */
                for (unsigned short i_9 = 0; i_9 < 17; i_9 += 3) 
                {
                    var_23 += ((/* implicit */unsigned short) (+(((unsigned long long int) var_4))));
                    arr_37 [i_0] [i_0] [(short)9] [i_9] = ((/* implicit */unsigned int) (+(((/* implicit */int) var_9))));
                    var_24 = ((/* implicit */short) ((var_2) << (((((/* implicit */int) var_10)) - (18068)))));
                    arr_38 [i_0] [i_1] [i_0] = ((/* implicit */short) ((_Bool) (+(((/* implicit */int) var_9)))));
                    var_25 = ((/* implicit */short) (+(((/* implicit */int) var_1))));
                }
                var_26 = ((/* implicit */_Bool) min((var_26), (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((1597096870) == (1597096856))))) - (((unsigned long long int) (unsigned char)96)))))));
                var_27 = ((/* implicit */short) ((((/* implicit */_Bool) ((short) var_3))) ? (min((var_4), (((/* implicit */unsigned int) var_3)))) : (((/* implicit */unsigned int) (+(((/* implicit */int) var_6)))))));
                arr_39 [(_Bool)0] [i_1] = ((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */int) var_0)) | (((/* implicit */int) var_10)))));
            }
        } 
    } 
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_10 = 0; i_10 < 19; i_10 += 2) 
    {
        /* LoopNest 2 */
        for (long long int i_11 = 3; i_11 < 15; i_11 += 1) 
        {
            for (long long int i_12 = 0; i_12 < 19; i_12 += 1) 
            {
                {
                    arr_48 [i_12] [i_11] [i_12] [i_12] = ((/* implicit */unsigned int) (+(((/* implicit */int) ((unsigned char) var_3)))));
                    var_28 = ((/* implicit */unsigned long long int) var_5);
                }
            } 
        } 
        var_29 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned short) var_0))) ? (((/* implicit */int) var_6)) : ((+(((/* implicit */int) var_3))))));
        var_30 -= ((/* implicit */long long int) ((unsigned short) var_5));
    }
    for (long long int i_13 = 0; i_13 < 12; i_13 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned short i_14 = 0; i_14 < 12; i_14 += 2) 
        {
            for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
            {
                {
                    var_31 = ((/* implicit */short) (~(((((/* implicit */int) (unsigned short)18401)) << (((((((/* implicit */int) (short)-382)) + (407))) - (25)))))));
                    arr_55 [i_15] [i_15] [i_15] [i_14] = ((/* implicit */_Bool) (+((+(((/* implicit */int) var_0))))));
                    /* LoopNest 2 */
                    for (_Bool i_16 = 0; i_16 < 0; i_16 += 1) 
                    {
                        for (signed char i_17 = 1; i_17 < 10; i_17 += 4) 
                        {
                            {
                                arr_64 [i_13] [i_15] = ((/* implicit */unsigned long long int) (((+(var_2))) & (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) var_6))))))));
                                var_32 = ((/* implicit */short) min((((/* implicit */int) min((var_10), (var_10)))), ((+(((/* implicit */int) var_0))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_65 [i_13] [i_13] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)253)) % (1597096856)))) || (((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) -3722297365920569696LL)) || ((_Bool)1)))), ((+(3819448661U))))))));
    }
    var_33 |= ((/* implicit */short) ((((/* implicit */_Bool) (+(((var_2) / (((/* implicit */long long int) ((/* implicit */int) var_7)))))))) ? (((/* implicit */int) var_1)) : ((+(((((((/* implicit */int) var_9)) + (2147483647))) << (((var_4) - (1224005147U)))))))));
    var_34 = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) (unsigned short)62293)) ? (1597096864) : (((/* implicit */int) (short)383))))));
}
