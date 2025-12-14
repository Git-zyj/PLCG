/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180226
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180226 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180226
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_13 = ((/* implicit */unsigned char) ((var_3) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))));
        /* LoopSeq 3 */
        for (unsigned int i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            arr_6 [i_1] [(unsigned char)15] [i_0 - 1] &= ((/* implicit */unsigned char) var_1);
            /* LoopSeq 1 */
            for (unsigned char i_2 = 0; i_2 < 25; i_2 += 3) 
            {
                arr_11 [i_0] [i_0] [i_0] [i_0 - 1] = ((/* implicit */long long int) ((((/* implicit */int) var_1)) - (((/* implicit */int) var_12))));
                var_14 &= ((/* implicit */unsigned short) ((var_7) < (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (var_3)))));
                var_15 = ((/* implicit */short) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))) : (((unsigned long long int) var_0))));
            }
        }
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (long long int i_4 = 0; i_4 < 25; i_4 += 4) 
            {
                for (long long int i_5 = 1; i_5 < 22; i_5 += 1) 
                {
                    {
                        arr_20 [i_0] [i_0] [(_Bool)1] [i_5] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)255)) ? (((/* implicit */int) (short)768)) : (((/* implicit */int) (_Bool)0))));
                        var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) var_5)) : (var_3)));
                        arr_21 [i_5] = ((/* implicit */signed char) (~((+(((/* implicit */int) var_9))))));
                        arr_22 [i_5] [i_5] [i_4] [i_3] [i_5] = ((/* implicit */short) ((var_6) < (((/* implicit */unsigned long long int) var_0))));
                    }
                } 
            } 
            var_17 = ((/* implicit */long long int) var_9);
            arr_23 [i_3] [(_Bool)1] [(_Bool)1] = ((/* implicit */_Bool) (-(((/* implicit */int) var_10))));
        }
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
        {
            arr_26 [i_0] [i_0] [(signed char)0] |= ((/* implicit */long long int) (+(var_6)));
            arr_27 [i_6] = ((/* implicit */long long int) ((short) var_2));
            arr_28 [i_6] = ((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))));
        }
    }
    for (unsigned char i_7 = 0; i_7 < 16; i_7 += 4) 
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (signed char i_8 = 0; i_8 < 16; i_8 += 2) 
        {
            var_18 = ((/* implicit */unsigned char) ((((/* implicit */int) var_11)) >= (((/* implicit */int) var_11))));
            /* LoopNest 3 */
            for (unsigned int i_9 = 0; i_9 < 16; i_9 += 2) 
            {
                for (unsigned short i_10 = 0; i_10 < 16; i_10 += 2) 
                {
                    for (unsigned short i_11 = 0; i_11 < 16; i_11 += 4) 
                    {
                        {
                            arr_40 [i_10] = ((/* implicit */long long int) var_6);
                            arr_41 [i_7] [11LL] [14U] [i_10] [i_11] = ((/* implicit */unsigned char) var_12);
                        }
                    } 
                } 
            } 
        }
        for (long long int i_12 = 3; i_12 < 14; i_12 += 4) 
        {
            arr_45 [i_7] [i_12] = ((/* implicit */unsigned short) ((var_0) | (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) (~(var_3))))))));
            /* LoopNest 3 */
            for (unsigned int i_13 = 1; i_13 < 15; i_13 += 1) 
            {
                for (long long int i_14 = 0; i_14 < 16; i_14 += 4) 
                {
                    for (unsigned char i_15 = 0; i_15 < 16; i_15 += 4) 
                    {
                        {
                            arr_55 [i_7] [i_14] &= ((/* implicit */unsigned long long int) ((unsigned short) (-(((/* implicit */int) var_8)))));
                            arr_56 [i_7] [7U] [7U] [7U] [i_13] [i_14] = ((/* implicit */unsigned long long int) ((unsigned short) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) var_12)))))), (((var_7) >> (((var_0) - (1762900074U))))))));
                            var_19 = ((/* implicit */unsigned int) min((((long long int) var_11)), (((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (var_0))))));
                        }
                    } 
                } 
            } 
            /* LoopNest 3 */
            for (long long int i_16 = 2; i_16 < 14; i_16 += 2) 
            {
                for (unsigned int i_17 = 0; i_17 < 16; i_17 += 3) 
                {
                    for (unsigned int i_18 = 3; i_18 < 13; i_18 += 2) 
                    {
                        {
                            var_20 = ((/* implicit */signed char) ((var_4) && (((/* implicit */_Bool) ((signed char) var_1)))));
                            var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) ((unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((long long int) var_0)) : (((long long int) var_1))))))));
                        }
                    } 
                } 
            } 
            var_22 = ((/* implicit */long long int) ((short) min((((/* implicit */unsigned short) var_11)), (var_8))));
            /* LoopNest 2 */
            for (long long int i_19 = 0; i_19 < 16; i_19 += 3) 
            {
                for (unsigned long long int i_20 = 0; i_20 < 16; i_20 += 3) 
                {
                    {
                        var_23 ^= ((/* implicit */unsigned char) ((_Bool) (unsigned char)1));
                        arr_74 [i_20] [i_19] [i_19] [11ULL] [13LL] [i_7] = ((_Bool) (+(min((((/* implicit */long long int) var_0)), (var_5)))));
                        var_24 = ((/* implicit */long long int) ((int) ((((/* implicit */_Bool) var_7)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) var_11))))));
                    }
                } 
            } 
        }
        for (unsigned int i_21 = 0; i_21 < 16; i_21 += 1) 
        {
            arr_77 [(signed char)3] [i_21] = max((((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_1)))) > ((~(((/* implicit */int) var_1)))))), ((!(((/* implicit */_Bool) (-(var_6)))))));
            arr_78 [i_21] [i_21] = ((/* implicit */unsigned long long int) ((unsigned char) ((_Bool) ((_Bool) var_0))));
            /* LoopSeq 2 */
            for (unsigned char i_22 = 1; i_22 < 13; i_22 += 1) 
            {
                var_25 = ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(var_4))))) + (((unsigned long long int) ((((/* implicit */int) var_2)) >> (((((/* implicit */int) var_1)) - (30271)))))));
                arr_81 [i_7] [i_21] [i_21] = ((/* implicit */unsigned long long int) var_5);
                var_26 = ((/* implicit */unsigned short) (-(((/* implicit */int) ((unsigned char) ((signed char) var_12))))));
            }
            for (long long int i_23 = 4; i_23 < 15; i_23 += 1) 
            {
                var_27 = ((long long int) (((!(((/* implicit */_Bool) var_8)))) ? (((/* implicit */int) ((signed char) var_0))) : (((/* implicit */int) var_9))));
                var_28 = ((/* implicit */unsigned char) ((max((var_6), (((/* implicit */unsigned long long int) var_5)))) >= (((/* implicit */unsigned long long int) ((((var_6) > (((/* implicit */unsigned long long int) var_0)))) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_2)))) : (((/* implicit */int) min(((short)32766), (((/* implicit */short) (signed char)115))))))))));
            }
        }
        var_29 = ((unsigned long long int) min((3588725523820260273LL), (((/* implicit */long long int) ((unsigned char) var_6)))));
    }
    /* LoopNest 2 */
    for (short i_24 = 0; i_24 < 24; i_24 += 3) 
    {
        for (_Bool i_25 = 1; i_25 < 1; i_25 += 1) 
        {
            {
                arr_88 [(unsigned char)22] [i_25] = (+(((((/* implicit */_Bool) var_7)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))))));
                arr_89 [i_24] [i_24] [i_25] = ((/* implicit */unsigned char) ((((((_Bool) var_3)) ? (((/* implicit */unsigned long long int) min((var_5), (((/* implicit */long long int) var_4))))) : (var_6))) > (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((unsigned char) var_8))))))));
                arr_90 [i_25] = ((/* implicit */_Bool) var_9);
                arr_91 [i_25] = ((/* implicit */unsigned char) ((_Bool) (+(((/* implicit */int) var_11)))));
            }
        } 
    } 
    var_30 = ((/* implicit */_Bool) ((unsigned long long int) max((var_0), (((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)0))))))));
    var_31 -= ((/* implicit */int) var_10);
}
