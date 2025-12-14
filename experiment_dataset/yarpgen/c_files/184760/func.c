/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184760
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184760 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184760
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
    var_12 = ((/* implicit */unsigned char) max((((/* implicit */long long int) var_8)), (var_5)));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        var_13 = ((/* implicit */unsigned int) (+(((/* implicit */int) var_3))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            for (unsigned short i_2 = 2; i_2 < 20; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 23; i_4 += 1) 
                        {
                            {
                                arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] |= ((/* implicit */_Bool) (+(var_6)));
                                var_14 = ((/* implicit */unsigned short) ((_Bool) var_6));
                                var_15 = ((/* implicit */_Bool) ((((unsigned int) var_8)) << (((var_5) + (1912106467758561881LL)))));
                            }
                        } 
                    } 
                    arr_15 [i_2 + 1] = ((/* implicit */unsigned short) (-(((/* implicit */int) var_9))));
                }
            } 
        } 
        var_16 = var_0;
    }
    for (unsigned int i_5 = 2; i_5 < 9; i_5 += 4) 
    {
        var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) ((int) (-9223372036854775807LL - 1LL))))));
        /* LoopSeq 1 */
        for (unsigned char i_6 = 0; i_6 < 11; i_6 += 1) 
        {
            /* LoopSeq 3 */
            /* vectorizable */
            for (unsigned short i_7 = 1; i_7 < 10; i_7 += 2) 
            {
                arr_23 [i_5] &= ((/* implicit */unsigned short) ((unsigned int) (unsigned char)219));
                var_18 = ((/* implicit */unsigned int) (-(var_7)));
            }
            for (int i_8 = 1; i_8 < 10; i_8 += 4) 
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned char i_9 = 1; i_9 < 10; i_9 += 4) /* same iter space */
                {
                    var_19 = ((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)0))));
                    var_20 *= ((/* implicit */signed char) (~(var_1)));
                    var_21 = ((/* implicit */short) ((((/* implicit */_Bool) var_5)) ? (var_2) : (((/* implicit */unsigned int) var_1))));
                }
                for (unsigned char i_10 = 1; i_10 < 10; i_10 += 4) /* same iter space */
                {
                    var_22 = min((((/* implicit */int) ((_Bool) var_6))), ((-(((/* implicit */int) var_4)))));
                    var_23 ^= ((/* implicit */unsigned int) var_5);
                }
                var_24 = ((/* implicit */int) ((_Bool) max((((/* implicit */int) var_9)), ((-(((/* implicit */int) var_9)))))));
                var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) (~(((/* implicit */int) var_3))))) : (((((/* implicit */_Bool) (~(var_0)))) ? (min((((/* implicit */unsigned int) var_3)), (var_11))) : (((/* implicit */unsigned int) ((/* implicit */int) var_10))))))))));
                /* LoopNest 2 */
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    for (long long int i_12 = 1; i_12 < 9; i_12 += 1) 
                    {
                        {
                            arr_38 [i_5] [i_6] [i_11] [i_11] [i_6] = ((/* implicit */short) max((((((/* implicit */_Bool) var_4)) ? (var_6) : (var_6))), (((/* implicit */int) (!(((/* implicit */_Bool) 1203332132U)))))));
                            var_26 = ((/* implicit */long long int) max((min((((/* implicit */int) var_9)), (var_0))), (((/* implicit */int) ((_Bool) var_6)))));
                            var_27 *= ((/* implicit */int) (!(((/* implicit */_Bool) ((short) var_6)))));
                            var_28 = ((/* implicit */unsigned int) var_6);
                            arr_39 [i_11] [i_11] [i_11] [i_8] [i_6] [i_11] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) min((var_5), (((/* implicit */long long int) var_3))))) ? (var_1) : (var_1))), (max((var_6), (((/* implicit */int) var_3))))));
                        }
                    } 
                } 
                arr_40 [i_5] [i_5] [i_6] [i_8] = ((/* implicit */short) min((((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (var_11) : (((/* implicit */unsigned int) var_0))))), ((-(var_5)))));
            }
            /* vectorizable */
            for (int i_13 = 0; i_13 < 11; i_13 += 3) 
            {
                var_29 = ((/* implicit */unsigned short) min((var_29), (((/* implicit */unsigned short) var_3))));
                var_30 &= ((/* implicit */_Bool) (-(var_11)));
                var_31 = ((/* implicit */unsigned short) ((short) var_4));
                var_32 = ((/* implicit */short) max((var_32), (((/* implicit */short) ((unsigned int) var_2)))));
                /* LoopNest 2 */
                for (short i_14 = 0; i_14 < 11; i_14 += 1) 
                {
                    for (unsigned int i_15 = 0; i_15 < 11; i_15 += 3) 
                    {
                        {
                            var_33 -= ((/* implicit */unsigned short) ((unsigned char) var_9));
                            var_34 = ((((/* implicit */_Bool) var_0)) ? (var_7) : (var_0));
                        }
                    } 
                } 
            }
            var_35 = ((/* implicit */long long int) min((var_35), (((/* implicit */long long int) min((((unsigned int) var_11)), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) || (((_Bool) var_0))))))))));
            arr_51 [5ULL] [i_5 + 1] [(signed char)8] = ((/* implicit */short) ((unsigned int) var_8));
        }
    }
    var_36 = ((/* implicit */_Bool) var_1);
    var_37 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+(((/* implicit */int) ((short) var_6))))))));
}
