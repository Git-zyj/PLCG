/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180207
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180207 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180207
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
    for (unsigned long long int i_0 = 1; i_0 < 23; i_0 += 3) 
    {
        for (unsigned int i_1 = 2; i_1 < 20; i_1 += 4) 
        {
            {
                arr_5 [i_0] [i_1] [i_1] = ((/* implicit */unsigned short) (~(1282261724222710310ULL)));
                var_15 = ((/* implicit */short) ((unsigned short) max((((/* implicit */short) (_Bool)1)), ((short)7658))));
                var_16 *= ((short) (~(var_9)));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) var_2))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_2 = 0; i_2 < 20; i_2 += 1) 
    {
        /* LoopNest 3 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            for (short i_4 = 0; i_4 < 20; i_4 += 4) 
            {
                for (unsigned short i_5 = 0; i_5 < 20; i_5 += 3) 
                {
                    {
                        arr_16 [i_4] = ((/* implicit */unsigned char) (+(((/* implicit */int) (signed char)0))));
                        var_18 = (signed char)0;
                        arr_17 [i_2] [i_3] = ((/* implicit */unsigned long long int) ((unsigned short) var_3));
                        /* LoopSeq 4 */
                        for (short i_6 = 0; i_6 < 20; i_6 += 3) 
                        {
                            var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_12 [i_2] [i_3] [i_4] [i_5]))))) ? (((/* implicit */int) arr_11 [i_2] [i_3])) : (((/* implicit */int) (signed char)-121))));
                            var_20 &= ((/* implicit */short) ((((/* implicit */_Bool) ((0U) >> (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) arr_12 [i_2] [i_3] [i_5] [i_6])) : (((((/* implicit */int) arr_10 [i_2] [i_3] [i_4])) >> (((((/* implicit */int) (unsigned short)2544)) - (2517)))))));
                        }
                        for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                        {
                            arr_23 [i_2] [i_3] [i_4] [i_4] [i_5] [i_7] [i_7 - 1] &= 39414220U;
                            arr_24 [i_2] [i_4] [i_5] [i_7] = ((/* implicit */short) ((((3093164395U) * (((/* implicit */unsigned int) 2147483647)))) != (2291795922U)));
                            arr_25 [i_2] [i_4] = ((/* implicit */_Bool) var_3);
                        }
                        for (short i_8 = 0; i_8 < 20; i_8 += 4) 
                        {
                            var_21 += ((/* implicit */short) var_12);
                            arr_29 [i_2] [i_3] [i_4] [i_5] [i_8] = ((/* implicit */short) ((int) ((unsigned short) arr_15 [i_8] [i_3])));
                            var_22 = ((/* implicit */unsigned short) ((arr_9 [i_8]) >= (((/* implicit */unsigned int) var_4))));
                            var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) ((_Bool) arr_0 [i_4])))));
                        }
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                        {
                            arr_33 [i_2] [i_3] [i_4] [i_5] [i_3] [i_9] [i_3] = ((/* implicit */unsigned short) (+((+(((/* implicit */int) var_12))))));
                            arr_34 [i_2] [i_3] [i_4] [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_32 [i_9])) ? (arr_26 [i_2] [i_3] [i_4] [i_5] [i_9]) : (((/* implicit */int) ((short) var_4)))));
                            arr_35 [i_5] [i_9] = ((/* implicit */_Bool) var_8);
                        }
                    }
                } 
            } 
        } 
        /* LoopSeq 3 */
        for (short i_10 = 0; i_10 < 20; i_10 += 2) /* same iter space */
        {
            var_24 = ((unsigned short) arr_12 [i_2] [i_2] [i_10] [i_10]);
            arr_39 [i_2] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)48031)) ? (((/* implicit */int) (short)7658)) : (((/* implicit */int) (unsigned short)0))));
            var_25 = 4255553075U;
        }
        for (short i_11 = 0; i_11 < 20; i_11 += 2) /* same iter space */
        {
            var_26 ^= ((/* implicit */unsigned short) (-(((/* implicit */int) (short)-32))));
            var_27 &= ((/* implicit */unsigned char) (~(((/* implicit */int) var_8))));
        }
        for (short i_12 = 0; i_12 < 20; i_12 += 2) /* same iter space */
        {
            /* LoopNest 3 */
            for (unsigned short i_13 = 0; i_13 < 20; i_13 += 4) 
            {
                for (int i_14 = 0; i_14 < 20; i_14 += 1) 
                {
                    for (int i_15 = 2; i_15 < 19; i_15 += 3) 
                    {
                        {
                            var_28 *= ((/* implicit */unsigned char) ((((/* implicit */int) var_0)) - (((/* implicit */int) (unsigned short)0))));
                            var_29 = ((/* implicit */_Bool) min((var_29), (((/* implicit */_Bool) (-((-(var_14))))))));
                            var_30 = ((/* implicit */unsigned long long int) ((((_Bool) var_9)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (short)-4120))));
                            arr_54 [i_15 - 2] [i_14] [i_13] [i_12] [i_2] = ((/* implicit */short) arr_26 [i_15] [i_12] [i_15 - 1] [i_14] [i_15 + 1]);
                        }
                    } 
                } 
            } 
            var_31 ^= ((/* implicit */unsigned int) arr_45 [i_12] [i_12] [i_12]);
        }
    }
    var_32 -= ((/* implicit */_Bool) var_11);
}
