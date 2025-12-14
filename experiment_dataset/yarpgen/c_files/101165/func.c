/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101165
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101165 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101165
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
    var_20 = ((/* implicit */unsigned char) max((((/* implicit */unsigned short) var_15)), (var_6)));
    /* LoopSeq 3 */
    for (unsigned char i_0 = 1; i_0 < 23; i_0 += 2) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned int) max((((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_15)))))))), (max((min((((/* implicit */int) var_0)), (var_3))), (min((488995849), (((/* implicit */int) (signed char)91))))))));
        /* LoopNest 2 */
        for (unsigned int i_1 = 2; i_1 < 23; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 25; i_2 += 4) 
            {
                {
                    arr_9 [i_2] [i_2] = ((/* implicit */signed char) (~(min((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_16))))), (min((((/* implicit */unsigned long long int) var_10)), (var_12)))))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned int i_3 = 0; i_3 < 25; i_3 += 2) /* same iter space */
                    {
                        arr_12 [i_0] [i_0] [i_0] [i_0] [i_0 + 2] [i_0 + 2] = ((/* implicit */signed char) (-(((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) var_11)) : (var_12)))));
                        arr_13 [i_0] [i_1] [i_1] = ((/* implicit */int) (+((-(var_4)))));
                    }
                    for (unsigned int i_4 = 0; i_4 < 25; i_4 += 2) /* same iter space */
                    {
                        arr_16 [1LL] [i_0] [i_0] [i_2] [(unsigned short)20] = ((/* implicit */_Bool) var_2);
                        arr_17 [i_0] [i_1] [i_4] [i_4] [0U] [i_2] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) max((var_19), (((/* implicit */long long int) var_7))))), (min((min((((/* implicit */unsigned long long int) var_4)), (var_12))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) var_3)) : (var_11))))))));
                        var_21 = ((/* implicit */unsigned long long int) min((max((((/* implicit */long long int) var_14)), (max((((/* implicit */long long int) (signed char)120)), (6763685513283861015LL))))), (((/* implicit */long long int) var_17))));
                        var_22 = ((/* implicit */unsigned int) (+(((/* implicit */int) max(((_Bool)1), ((_Bool)1))))));
                    }
                }
            } 
        } 
    }
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_6 = 0; i_6 < 12; i_6 += 3) 
        {
            for (unsigned int i_7 = 0; i_7 < 12; i_7 += 1) 
            {
                {
                    arr_26 [(short)1] [(short)1] [(short)1] [i_5] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min(((unsigned char)248), (((/* implicit */unsigned char) (_Bool)1)))))));
                    var_23 = ((/* implicit */unsigned int) min((((/* implicit */unsigned short) (signed char)123)), ((unsigned short)20876)));
                    var_24 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((var_6), (((/* implicit */unsigned short) var_17))))) ? (((((/* implicit */_Bool) (short)-20)) ? (((/* implicit */int) (signed char)63)) : (((/* implicit */int) (signed char)-76)))) : (((/* implicit */int) min((var_0), (((/* implicit */unsigned short) var_9)))))))), (max((((/* implicit */unsigned long long int) var_10)), (min((((/* implicit */unsigned long long int) 1100411822)), (11720348981974388185ULL)))))));
                    arr_27 [i_5] [i_5] [i_5] [i_5] = ((/* implicit */signed char) min((((/* implicit */long long int) (!(((/* implicit */_Bool) var_4))))), (min((((/* implicit */long long int) var_15)), (var_2)))));
                    var_25 = ((/* implicit */short) max((((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_8)))), (((/* implicit */int) max((var_0), (((/* implicit */unsigned short) var_15)))))))), (max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_11))))), (min((var_12), (((/* implicit */unsigned long long int) var_19))))))));
                }
            } 
        } 
        var_26 += ((/* implicit */unsigned char) var_3);
        arr_28 [i_5] = ((/* implicit */short) min((((((/* implicit */_Bool) max((((/* implicit */long long int) var_9)), (var_19)))) ? (((/* implicit */long long int) (-(((/* implicit */int) var_17))))) : (min((var_4), (((/* implicit */long long int) var_6)))))), (((/* implicit */long long int) min(((-(853878557U))), (((/* implicit */unsigned int) var_5)))))));
        /* LoopNest 2 */
        for (long long int i_8 = 0; i_8 < 12; i_8 += 1) 
        {
            for (signed char i_9 = 0; i_9 < 12; i_9 += 4) 
            {
                {
                    var_27 += ((/* implicit */signed char) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_5)), (var_1))))));
                    arr_34 [i_5] [i_8] [i_5] = ((/* implicit */unsigned char) max((min((((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (var_1))), (((/* implicit */unsigned long long int) var_7)))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_9)))))));
                    /* LoopNest 2 */
                    for (signed char i_10 = 2; i_10 < 10; i_10 += 1) 
                    {
                        for (signed char i_11 = 0; i_11 < 12; i_11 += 2) 
                        {
                            {
                                var_28 = ((/* implicit */int) var_15);
                                arr_40 [i_5] [i_5] = ((/* implicit */short) (~(max((((/* implicit */long long int) min((((/* implicit */unsigned short) var_17)), (var_6)))), (var_4)))));
                            }
                        } 
                    } 
                    arr_41 [i_8] [i_8] [i_5] = ((/* implicit */unsigned long long int) var_4);
                }
            } 
        } 
        var_29 = ((/* implicit */_Bool) max((var_29), (((/* implicit */_Bool) var_6))));
    }
    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned short i_13 = 0; i_13 < 23; i_13 += 3) 
        {
            for (signed char i_14 = 0; i_14 < 23; i_14 += 3) 
            {
                {
                    var_30 += ((/* implicit */_Bool) min((max((((/* implicit */unsigned short) (signed char)117)), ((unsigned short)65533))), (((/* implicit */unsigned short) max((var_17), (max((var_15), (var_18))))))));
                    var_31 = ((/* implicit */_Bool) min((((/* implicit */short) var_13)), (var_15)));
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned long long int i_15 = 0; i_15 < 23; i_15 += 3) 
        {
            for (unsigned int i_16 = 0; i_16 < 23; i_16 += 3) 
            {
                {
                    arr_57 [i_12] [i_12] [i_12] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_0))))), (min((((/* implicit */unsigned long long int) var_9)), (var_12)))))) ? (min((((((/* implicit */_Bool) var_9)) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))))), (((/* implicit */unsigned long long int) max((var_4), (((/* implicit */long long int) var_16))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_18)))));
                    arr_58 [i_12] [i_16] = ((/* implicit */short) max((((((/* implicit */_Bool) min((var_11), (((/* implicit */long long int) var_10))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_18)))))) : (min((var_12), (((/* implicit */unsigned long long int) var_8)))))), (((/* implicit */unsigned long long int) max((3441088711U), (((/* implicit */unsigned int) (unsigned short)65533)))))));
                }
            } 
        } 
        var_32 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (signed char)-117)) : (((/* implicit */int) (signed char)65))))), (((((/* implicit */_Bool) (+(853878561U)))) ? (((/* implicit */unsigned long long int) (~(var_7)))) : (max((((/* implicit */unsigned long long int) var_7)), (var_1)))))));
    }
    var_33 = ((/* implicit */unsigned short) max((max((max((((/* implicit */long long int) var_3)), (var_11))), (min((((/* implicit */long long int) var_3)), (var_4))))), (((/* implicit */long long int) var_14))));
    var_34 = ((/* implicit */int) max((((((/* implicit */_Bool) min((var_0), (((/* implicit */unsigned short) var_9))))) ? (var_19) : (((/* implicit */long long int) (~(((/* implicit */int) var_14))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) -1)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)250))) : (2828853038U)))) ? (var_19) : (var_2)))));
    var_35 = ((/* implicit */signed char) var_17);
}
