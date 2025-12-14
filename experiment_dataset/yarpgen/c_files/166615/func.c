/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166615
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166615 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166615
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
    for (unsigned char i_0 = 2; i_0 < 13; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            {
                /* LoopSeq 4 */
                /* vectorizable */
                for (signed char i_2 = 0; i_2 < 16; i_2 += 2) 
                {
                    var_16 = ((/* implicit */long long int) 511);
                    arr_8 [i_0] [i_1] [i_2] [(short)8] = ((/* implicit */unsigned long long int) ((long long int) arr_7 [i_0 + 2]));
                    /* LoopSeq 1 */
                    for (int i_3 = 0; i_3 < 16; i_3 += 1) 
                    {
                        /* LoopSeq 3 */
                        for (unsigned short i_4 = 0; i_4 < 16; i_4 += 4) /* same iter space */
                        {
                            arr_14 [5] [i_1] [i_2] [(_Bool)1] [i_3] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_15))));
                            var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) arr_4 [(unsigned char)15]))));
                            var_18 += ((/* implicit */unsigned char) ((((((/* implicit */_Bool) 4194303ULL)) ? (4194303ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)7))))) - (((/* implicit */unsigned long long int) var_2))));
                        }
                        for (unsigned short i_5 = 0; i_5 < 16; i_5 += 4) /* same iter space */
                        {
                            var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_12 [i_0] [i_0 + 2] [i_0] [i_0 + 2] [i_1])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_1])) ? (821731886) : (((/* implicit */int) var_5))))) : (((((/* implicit */unsigned long long int) -511)) + (13255794553910566302ULL)))));
                            arr_19 [i_0] [i_3] [i_2] [i_2] [i_0] [14U] = arr_5 [(_Bool)1] [(unsigned char)5] [(_Bool)1];
                            var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) (-(((3970477564022807623ULL) << (((arr_9 [12U] [(unsigned char)8] [i_3] [(unsigned char)6]) + (550292549))))))))));
                        }
                        for (unsigned short i_6 = 0; i_6 < 16; i_6 += 4) /* same iter space */
                        {
                            var_21 = ((/* implicit */unsigned char) (+((-(((/* implicit */int) (unsigned char)27))))));
                            var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) ((long long int) arr_3 [i_0] [i_1] [0])))));
                            arr_22 [i_0] [i_0 + 1] [i_0] [i_3] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) arr_2 [i_0 + 2])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)65535)) ? (32767LL) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1])))))) : ((((_Bool)1) ? (4194315ULL) : (((/* implicit */unsigned long long int) var_2))))));
                        }
                        var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) ((unsigned char) 281474976710400LL)))));
                        arr_23 [i_0] [i_0 - 1] [i_3] [(unsigned short)10] = ((/* implicit */short) var_3);
                    }
                }
                for (unsigned int i_7 = 0; i_7 < 16; i_7 += 3) /* same iter space */
                {
                    var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) ((int) ((((/* implicit */int) arr_17 [i_7] [i_0 + 3] [i_1] [i_7] [i_1] [(unsigned char)12] [i_7])) >> (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)2)))))))))));
                    var_25 += (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_2 [i_0 - 2]))))));
                }
                for (unsigned int i_8 = 0; i_8 < 16; i_8 += 3) /* same iter space */
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned char i_9 = 2; i_9 < 13; i_9 += 1) 
                    {
                        var_26 = ((/* implicit */unsigned char) 545875936U);
                        arr_33 [i_0] [i_0] [i_8] = ((/* implicit */unsigned long long int) (-(((3749091354U) | (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_0])))))));
                    }
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (_Bool i_11 = 0; i_11 < 0; i_11 += 1) 
                        {
                            var_27 = ((/* implicit */unsigned char) (unsigned short)2483);
                            var_28 = ((/* implicit */short) ((unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_16 [i_0] [i_0] [i_8] [6U] [i_10] [i_11])) ? (arr_1 [i_0]) : (((/* implicit */int) (unsigned char)254))))) * (min((((/* implicit */unsigned long long int) (_Bool)0)), (14454771038658316095ULL))))));
                            var_29 = ((/* implicit */unsigned short) max((var_29), (((/* implicit */unsigned short) ((((/* implicit */_Bool) 4194316ULL)) ? (((((/* implicit */int) arr_17 [2ULL] [2ULL] [i_0] [(_Bool)1] [(unsigned short)4] [i_10] [(_Bool)1])) << (((((var_12) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)63488)))) - (63475))))) : (((/* implicit */int) arr_4 [i_10])))))));
                        }
                        var_30 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((arr_6 [i_0] [i_0 + 1]) | (((/* implicit */int) arr_32 [i_0 + 3] [i_0 + 1] [i_0 + 1] [i_0 + 3] [i_0 + 3] [i_0 + 1])))))));
                    }
                    var_31 = ((/* implicit */int) arr_37 [(unsigned char)2] [i_8]);
                }
                for (unsigned int i_12 = 0; i_12 < 16; i_12 += 3) /* same iter space */
                {
                    /* LoopSeq 2 */
                    for (short i_13 = 0; i_13 < 16; i_13 += 4) /* same iter space */
                    {
                        var_32 += ((/* implicit */unsigned int) (unsigned char)60);
                        arr_43 [(unsigned short)8] [i_1] [i_12] [i_13] = ((/* implicit */unsigned int) (+(((/* implicit */int) var_11))));
                    }
                    for (short i_14 = 0; i_14 < 16; i_14 += 4) /* same iter space */
                    {
                        var_33 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((arr_44 [i_12]), (((/* implicit */unsigned long long int) (unsigned char)81))))) ? (((/* implicit */int) arr_34 [i_0 + 2] [i_12] [i_12])) : (((/* implicit */int) arr_17 [i_0] [i_1] [i_12] [i_12] [(unsigned short)15] [(unsigned short)13] [8]))));
                        var_34 = ((/* implicit */unsigned char) min((var_34), (((/* implicit */unsigned char) arr_20 [i_0] [i_0] [11]))));
                    }
                    arr_46 [i_12] [5] [11ULL] = ((/* implicit */_Bool) arr_10 [i_0]);
                    /* LoopNest 2 */
                    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                    {
                        for (long long int i_16 = 3; i_16 < 14; i_16 += 1) 
                        {
                            {
                                arr_53 [i_12] [(unsigned char)14] [i_12] [i_12] [i_15] [(unsigned char)14] = ((/* implicit */_Bool) (-((+(((/* implicit */int) arr_25 [i_12]))))));
                                var_35 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) (+((-(((/* implicit */int) (short)311))))))), (max((arr_28 [i_12] [i_1]), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) -658325165)), (arr_37 [i_0] [i_12]))))))));
                                arr_54 [i_0] [i_12] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_6 [i_0] [i_0 - 2]) : (((/* implicit */int) (!(((/* implicit */_Bool) 262080U)))))))) || (((/* implicit */_Bool) (unsigned char)68))));
                                arr_55 [i_12] [i_12] [i_12] [i_15] [11U] = ((/* implicit */unsigned long long int) ((unsigned char) arr_13 [i_12] [i_12]));
                                var_36 = ((/* implicit */unsigned char) max((var_36), (((/* implicit */unsigned char) arr_34 [i_12] [i_1] [i_16 - 3]))));
                            }
                        } 
                    } 
                    var_37 = ((/* implicit */_Bool) (~(((int) 72057594037927935ULL))));
                }
                arr_56 [i_0] [i_1] = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) arr_28 [i_1] [i_0 + 1])) ? (arr_28 [i_1] [i_0 + 1]) : (arr_28 [i_0] [i_0 + 1])))));
                arr_57 [i_0 + 1] [i_0 + 1] [11LL] = ((/* implicit */short) ((((/* implicit */int) min((arr_10 [i_0 - 1]), (arr_10 [i_0 - 1])))) >> (((((((/* implicit */int) arr_10 [i_0 - 1])) << (((((/* implicit */int) arr_10 [i_0 + 3])) - (99))))) - (27361)))));
            }
        } 
    } 
    var_38 = ((/* implicit */unsigned long long int) var_12);
}
