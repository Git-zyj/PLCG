/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141264
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141264 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141264
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
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) 0U);
        /* LoopNest 2 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (long long int i_2 = 4; i_2 < 19; i_2 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned int i_3 = 0; i_3 < 21; i_3 += 4) /* same iter space */
                    {
                        arr_12 [i_0] = ((/* implicit */short) ((unsigned int) arr_8 [i_0] [(unsigned char)19] [i_2]));
                        arr_13 [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((_Bool) var_8));
                        arr_14 [i_0] [(unsigned char)9] [i_0] [5] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (signed char)51)))))));
                    }
                    for (unsigned int i_4 = 0; i_4 < 21; i_4 += 4) /* same iter space */
                    {
                        var_13 = ((/* implicit */long long int) ((((/* implicit */int) (short)0)) ^ (((/* implicit */int) (short)31158))));
                        arr_19 [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 0U)) ? (arr_1 [i_2]) : (((/* implicit */unsigned long long int) 0U))))) ? (arr_7 [i_1 - 1] [(short)10] [i_2 - 4] [i_4]) : (((/* implicit */int) (short)-31171)))))));
                        var_14 = min((((/* implicit */unsigned int) (((~(((/* implicit */int) (short)31159)))) | ((-(((/* implicit */int) (signed char)111))))))), (((((3177129848U) / (((/* implicit */unsigned int) ((/* implicit */int) (short)-31158))))) / (arr_17 [i_0] [i_0] [i_1 - 1] [i_2 - 1]))));
                        arr_20 [i_0] [i_0] [i_0] [i_0] [i_0] = (((!(((/* implicit */_Bool) ((1152921504606846976ULL) << (((1954550288651875851LL) - (1954550288651875834LL)))))))) ? (17293822569102704639ULL) : (((/* implicit */unsigned long long int) ((long long int) ((1954550288651875851LL) | (((/* implicit */long long int) ((/* implicit */int) (short)-31171))))))));
                    }
                    /* vectorizable */
                    for (unsigned int i_5 = 0; i_5 < 21; i_5 += 4) /* same iter space */
                    {
                        arr_25 [i_0] [i_1] [i_2 - 1] [i_5] [i_5] = ((/* implicit */unsigned int) (-((+(arr_15 [i_0])))));
                        var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) ((unsigned short) var_1)))));
                        /* LoopSeq 1 */
                        for (unsigned int i_6 = 1; i_6 < 20; i_6 += 3) 
                        {
                            var_16 = 4294967295U;
                            arr_28 [i_2] [i_2] [i_1] [i_0] = arr_23 [i_0] [i_0] [i_1] [i_2 - 3] [(_Bool)1] [i_6];
                        }
                        var_17 = ((/* implicit */long long int) arr_9 [(_Bool)1] [i_1] [i_2] [i_5]);
                        /* LoopSeq 2 */
                        for (short i_7 = 0; i_7 < 21; i_7 += 3) 
                        {
                            arr_31 [i_0] [10U] [20U] [(signed char)3] [i_5] [12ULL] [(signed char)7] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_1 - 1] [i_1] [i_2 - 3] [i_7]))) & (arr_4 [i_1 - 1] [i_1])));
                            var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) arr_30 [i_0] [i_0] [i_2] [i_5] [i_2] [1])) | (3948335192108579285LL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 3177129848U)))))) : (1117837466U))))));
                            var_19 = ((((((/* implicit */int) arr_27 [i_0] [11] [17LL] [i_5] [i_7] [i_2] [i_7])) | (((/* implicit */int) var_3)))) | ((-(((/* implicit */int) var_10)))));
                        }
                        for (unsigned char i_8 = 0; i_8 < 21; i_8 += 3) 
                        {
                            var_20 *= ((/* implicit */unsigned int) (short)-31150);
                            arr_34 [i_0] [i_1] [i_2 - 4] [i_5] [16ULL] [1ULL] [i_2] = ((/* implicit */unsigned char) ((1117837448U) >> ((((~(1152921504606847004ULL))) - (17293822569102704588ULL)))));
                            arr_35 [i_0] [i_1 - 1] [i_2 - 2] [18] [i_2 - 2] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_26 [18LL] [i_0] [i_2] [(short)7] [i_0])) >> (((((/* implicit */_Bool) (short)31150)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (4294967295U)))));
                        }
                    }
                    arr_36 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) (short)-31169)))) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) ((((/* implicit */_Bool) 4294967295U)) && (((/* implicit */_Bool) (short)0)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-31158))) : (((((/* implicit */_Bool) arr_27 [17U] [i_2] [i_2] [i_1 - 1] [17U] [(unsigned char)1] [(unsigned char)1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)31165))) : (17293822569102704640ULL)))));
                }
            } 
        } 
        var_21 = ((/* implicit */short) ((((/* implicit */long long int) (-(min((1U), (((/* implicit */unsigned int) (unsigned short)63))))))) / (((((/* implicit */_Bool) ((var_9) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (arr_8 [14LL] [(unsigned char)8] [i_0])))) ? (((/* implicit */long long int) ((/* implicit */int) ((short) (short)31170)))) : (((((/* implicit */_Bool) 4081701081963475391LL)) ? (var_11) : (((/* implicit */long long int) arr_4 [i_0] [i_0]))))))));
        var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((-5556944335903341696LL) | (-9216113259884606268LL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-55))) : (var_8)))) ? (((/* implicit */long long int) 0U)) : (((long long int) ((((/* implicit */_Bool) (short)5329)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (unsigned short)57649)))))));
    }
    for (unsigned short i_9 = 0; i_9 < 11; i_9 += 2) 
    {
        /* LoopNest 2 */
        for (short i_10 = 4; i_10 < 9; i_10 += 3) 
        {
            for (short i_11 = 0; i_11 < 11; i_11 += 1) 
            {
                {
                    var_23 = ((/* implicit */_Bool) arr_43 [(signed char)9] [6ULL]);
                    var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((((/* implicit */_Bool) (unsigned char)0)) ? (1152921504606846976ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)28917))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 3177129848U))))))))) ? (((((/* implicit */_Bool) (unsigned char)220)) ? (min((((/* implicit */unsigned int) var_7)), (arr_8 [i_9] [i_9] [i_11]))) : (((/* implicit */unsigned int) (~(((/* implicit */int) var_3))))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-31159)) ? (((/* implicit */int) (signed char)-112)) : (((/* implicit */int) (signed char)0)))))));
                }
            } 
        } 
        var_25 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)4948)) ? (((/* implicit */int) (short)16765)) : (((/* implicit */int) (short)-31171))))) : (1117837447U))) / (((/* implicit */unsigned int) arr_3 [i_9] [(_Bool)1] [i_9]))));
        var_26 |= ((/* implicit */unsigned short) ((min((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_9] [i_9] [i_9] [(_Bool)1]))) & (17293822569102704639ULL))), (((/* implicit */unsigned long long int) arr_16 [i_9] [(unsigned short)17] [i_9] [i_9])))) & (((/* implicit */unsigned long long int) (~(min((1073741824), (((/* implicit */int) (unsigned short)32714)))))))));
    }
    for (unsigned char i_12 = 0; i_12 < 16; i_12 += 2) 
    {
        var_27 = ((/* implicit */unsigned short) (short)-31171);
        var_28 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_5)) ? (17293822569102704639ULL) : (((/* implicit */unsigned long long int) arr_48 [i_12])))) * ((+(arr_11 [i_12] [i_12] [i_12] [i_12] [11ULL] [i_12])))))) ? (5556944335903341686LL) : (((/* implicit */long long int) (~(((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (signed char)-1)))))))));
    }
    /* LoopNest 3 */
    for (signed char i_13 = 3; i_13 < 9; i_13 += 1) 
    {
        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
        {
            for (long long int i_15 = 4; i_15 < 7; i_15 += 2) 
            {
                {
                    var_29 = ((/* implicit */unsigned int) max((var_29), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_13 + 1] [i_13 - 3] [i_13 - 3] [i_13 - 2] [i_13 - 2] [i_13 - 1])) ? (((/* implicit */int) ((_Bool) arr_3 [i_13] [i_14] [i_14]))) : ((+(((/* implicit */int) (short)31158))))))) * ((~(((1152921504606846976ULL) | (((/* implicit */unsigned long long int) 4035141210U)))))))))));
                    arr_58 [i_13] [i_15] [8U] [i_15] |= ((((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */int) (short)-17131)) != (((/* implicit */int) (signed char)0)))))))) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_26 [i_13] [i_13 - 2] [12ULL] [i_13] [i_13 - 3]))) != (((((/* implicit */_Bool) var_0)) ? (17293822569102704639ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)281))))))))));
                    var_30 = ((/* implicit */unsigned int) min((var_30), (((((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_32 [15LL] [i_14] [i_15] [i_14] [i_15 - 1]) ? (((/* implicit */int) (unsigned char)74)) : (-1073741825)))) ? (((/* implicit */int) ((((/* implicit */int) var_6)) != (((/* implicit */int) (_Bool)1))))) : (((/* implicit */int) var_4))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) min((((/* implicit */short) arr_47 [i_15 - 3])), ((short)31158))))))) : (min((((/* implicit */unsigned int) ((((/* implicit */_Bool) -267309335460966509LL)) && (((/* implicit */_Bool) var_1))))), ((+(1419645095U)))))))));
                    /* LoopNest 2 */
                    for (unsigned short i_16 = 4; i_16 < 8; i_16 += 4) 
                    {
                        for (short i_17 = 2; i_17 < 8; i_17 += 4) 
                        {
                            {
                                arr_66 [i_13] [0] [(short)8] [i_13] [i_17] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)32767)) ? (min((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_7)))), (arr_51 [i_13] [(signed char)0]))) : (((/* implicit */int) (signed char)-88))));
                                arr_67 [i_13] [(short)1] = ((/* implicit */int) (-(((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) arr_30 [i_17] [i_17 - 2] [i_17] [20LL] [i_17] [i_17 - 1])) : (2490200448121174458LL)))));
                                var_31 *= ((/* implicit */_Bool) min((((((/* implicit */_Bool) (unsigned short)3976)) ? ((-(((/* implicit */int) (signed char)(-127 - 1))))) : (((/* implicit */int) var_3)))), ((~(arr_7 [i_13 - 1] [i_13 - 1] [i_17 + 1] [(unsigned short)13])))));
                            }
                        } 
                    } 
                    var_32 = ((/* implicit */unsigned long long int) 2875322200U);
                }
            } 
        } 
    } 
    var_33 = ((/* implicit */signed char) var_8);
}
