/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168335
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168335 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168335
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
    var_10 += ((/* implicit */signed char) var_0);
    var_11 = ((/* implicit */unsigned char) var_3);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            {
                var_12 = ((/* implicit */unsigned short) max((var_12), (((/* implicit */unsigned short) ((((int) var_7)) % (((/* implicit */int) var_1)))))));
                /* LoopSeq 1 */
                for (long long int i_2 = 0; i_2 < 18; i_2 += 4) 
                {
                    var_13 = ((/* implicit */int) ((short) ((unsigned int) var_2)));
                    var_14 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned long long int) var_3))) ? (((/* implicit */int) (((-9223372036854775807LL - 1LL)) <= (((/* implicit */long long int) 2165652068U))))) : (((/* implicit */int) ((short) var_0)))));
                    var_15 ^= ((/* implicit */unsigned long long int) ((signed char) var_9));
                }
                var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) ((short) ((unsigned int) var_1)))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned short)55079)) : (((/* implicit */int) var_1))))));
                /* LoopSeq 3 */
                for (signed char i_3 = 0; i_3 < 18; i_3 += 3) 
                {
                    /* LoopSeq 2 */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) 7881299347898368LL)))))) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (signed char)-94)))) : (((/* implicit */int) ((_Bool) var_3))))))));
                        arr_13 [i_3] [i_0] [i_3] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-86)) ? (((int) var_2)) : (((((/* implicit */_Bool) 7881299347898349LL)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_7))))));
                    }
                    for (unsigned short i_5 = 0; i_5 < 18; i_5 += 2) 
                    {
                        var_18 -= ((/* implicit */_Bool) ((signed char) ((signed char) var_4)));
                        var_19 = ((/* implicit */unsigned short) var_0);
                    }
                    var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned short) (_Bool)1))) ? (((/* implicit */int) (unsigned short)31877)) : (((((/* implicit */_Bool) ((var_2) ^ (7251729268247419331LL)))) ? (((/* implicit */int) var_1)) : (((((/* implicit */_Bool) var_0)) ? (var_6) : (var_6)))))));
                    /* LoopSeq 1 */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((7881299347898368LL) - (-8377016648642133086LL)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)46232)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1)))) : (-7251729268247419332LL))))));
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (unsigned long long int i_7 = 0; i_7 < 18; i_7 += 3) /* same iter space */
                        {
                            arr_24 [i_1] [i_3] [(signed char)0] &= ((/* implicit */unsigned short) ((signed char) (short)-5396));
                            arr_25 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)5411)) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-21370)))));
                            arr_26 [i_0] [i_0] = ((/* implicit */unsigned short) var_5);
                        }
                        /* vectorizable */
                        for (unsigned long long int i_8 = 0; i_8 < 18; i_8 += 3) /* same iter space */
                        {
                            var_22 = (unsigned short)1024;
                            arr_29 [i_0] [i_0] [i_3] [i_6] [i_8] = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_5)) >> (((((/* implicit */int) var_8)) - (32119)))));
                        }
                        for (unsigned long long int i_9 = 0; i_9 < 18; i_9 += 3) /* same iter space */
                        {
                            var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)2524))) : (var_0))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))));
                            var_24 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) (signed char)38)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) var_5))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)65517)) ? (((/* implicit */int) (short)5395)) : (((/* implicit */int) (unsigned char)117)))))));
                            var_25 -= ((/* implicit */unsigned short) ((short) ((unsigned short) var_0)));
                            var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_1)) ? (((long long int) var_8)) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) (short)24936))))));
                            var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned char)147)) : (((/* implicit */int) var_8))));
                        }
                        var_28 = ((/* implicit */_Bool) max((var_28), (((/* implicit */_Bool) ((unsigned short) ((((((/* implicit */_Bool) (signed char)-26)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (unsigned char)108)))) < (((/* implicit */int) var_8))))))));
                    }
                }
                for (unsigned short i_10 = 1; i_10 < 14; i_10 += 4) 
                {
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 18; i_11 += 3) 
                    {
                        for (unsigned short i_12 = 3; i_12 < 16; i_12 += 1) 
                        {
                            {
                                var_29 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)70)) ^ (((/* implicit */int) (signed char)30))))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) ((signed char) 7482590372145955222ULL)))));
                                var_30 -= ((/* implicit */long long int) var_3);
                            }
                        } 
                    } 
                    var_31 -= ((/* implicit */short) ((_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)16376)) ? (-7251729268247419331LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-31436)))))) ? (((long long int) var_9)) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (signed char)(-127 - 1)))))))));
                    var_32 = ((/* implicit */long long int) var_3);
                }
                for (short i_13 = 0; i_13 < 18; i_13 += 1) 
                {
                    var_33 += ((/* implicit */long long int) ((unsigned long long int) var_4));
                    arr_43 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)116)) ? (((unsigned long long int) var_8)) : ((((_Bool)0) ? (13998312505680066862ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))));
                    /* LoopNest 2 */
                    for (_Bool i_14 = 0; i_14 < 0; i_14 += 1) 
                    {
                        for (signed char i_15 = 2; i_15 < 15; i_15 += 2) 
                        {
                            {
                                var_34 *= ((/* implicit */signed char) ((_Bool) ((2147483648U) | (((/* implicit */unsigned int) ((/* implicit */int) (short)-20382))))));
                                var_35 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (short)-20374)) / (((/* implicit */int) var_9))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) 13797719788754257268ULL)))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (3747783411785435177ULL)))));
                            }
                        } 
                    } 
                    var_36 = ((/* implicit */_Bool) var_6);
                }
                var_37 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)8962)) ? (((/* implicit */long long int) ((/* implicit */int) (short)24947))) : (var_2)))) ? (((long long int) var_6)) : (((/* implicit */long long int) ((/* implicit */int) ((short) var_9))))));
            }
        } 
    } 
}
