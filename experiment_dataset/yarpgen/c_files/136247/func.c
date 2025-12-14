/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136247
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136247 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136247
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 1; i_0 < 12; i_0 += 4) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 14; i_2 += 2) 
            {
                {
                    var_16 = ((/* implicit */unsigned char) (-((-(-3077986844650001943LL)))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 14; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 14; i_4 += 1) 
                        {
                            {
                                arr_15 [i_1] [i_2] [i_1] = ((/* implicit */unsigned char) arr_13 [i_0] [i_1] [i_3] [i_3]);
                                var_17 = min(((unsigned char)255), (((/* implicit */unsigned char) ((3077986844650001943LL) == (((long long int) -3077986844650001951LL))))));
                                var_18 = (i_1 % 2 == 0) ? (((((/* implicit */_Bool) 1928325592)) ? (max((((((-3077986844650001939LL) + (9223372036854775807LL))) << (((((arr_6 [i_0 + 1] [i_1] [(unsigned char)0]) + (6779614810141416131LL))) - (18LL))))), (max((((/* implicit */long long int) var_7)), (35184372088831LL))))) : (min((-3077986844650001943LL), (((/* implicit */long long int) (~(((/* implicit */int) arr_10 [i_0] [i_1 - 1] [i_0] [i_3] [i_4]))))))))) : (((((/* implicit */_Bool) 1928325592)) ? (max((((((-3077986844650001939LL) + (9223372036854775807LL))) << (((((((((arr_6 [i_0 + 1] [i_1] [(unsigned char)0]) - (6779614810141416131LL))) - (18LL))) + (3261878263734093422LL))) - (28LL))))), (max((((/* implicit */long long int) var_7)), (35184372088831LL))))) : (min((-3077986844650001943LL), (((/* implicit */long long int) (~(((/* implicit */int) arr_10 [i_0] [i_1 - 1] [i_0] [i_3] [i_4])))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (int i_5 = 1; i_5 < 20; i_5 += 2) 
    {
        for (long long int i_6 = 0; i_6 < 23; i_6 += 3) 
        {
            {
                var_19 = ((/* implicit */unsigned long long int) (~(max((((((/* implicit */_Bool) arr_19 [i_5])) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_5]))))), (((/* implicit */long long int) min((var_10), ((short)-23085))))))));
                var_20 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) 3077986844650001952LL))) ? (min((3024687443U), (((/* implicit */unsigned int) arr_19 [7])))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_5 + 3] [i_6])))))) ? (((((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) arr_19 [i_6])))) ? (((/* implicit */long long int) ((/* implicit */int) max((arr_17 [i_5]), ((unsigned char)127))))) : (4419069943993185298LL))) : (((/* implicit */long long int) ((((/* implicit */int) arr_16 [i_5 - 1] [i_5 - 1])) * (((/* implicit */int) (unsigned short)39228))))));
                /* LoopSeq 3 */
                for (unsigned long long int i_7 = 0; i_7 < 23; i_7 += 1) 
                {
                    var_21 = ((/* implicit */unsigned int) min((((/* implicit */long long int) min((((/* implicit */unsigned short) (short)32767)), ((unsigned short)26305)))), (max((((((/* implicit */_Bool) 13045976896266596926ULL)) ? (9223372036854775807LL) : (8480888722021012545LL))), (((/* implicit */long long int) (unsigned short)39219))))));
                    var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) 8480888722021012545LL)) ? ((+(5400767177442954676ULL))) : (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_0)), (var_2)))))) < (max((5400767177442954690ULL), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_22 [i_5] [(signed char)16] [i_7])), (3077986844650001943LL)))))))))));
                    var_23 = ((/* implicit */unsigned char) max((((((/* implicit */int) max((((/* implicit */unsigned short) (short)-1)), (arr_21 [i_5 - 1] [i_5 - 1] [i_7])))) | (((/* implicit */int) (unsigned char)154)))), ((+(((/* implicit */int) arr_22 [i_5 + 3] [i_7] [i_5 + 2]))))));
                }
                /* vectorizable */
                for (unsigned int i_8 = 0; i_8 < 23; i_8 += 3) 
                {
                    var_24 = ((/* implicit */unsigned char) (~(((/* implicit */int) (!(((/* implicit */_Bool) 244234865U)))))));
                    var_25 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)89))) / (5400767177442954690ULL)))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1))))) : (13045976896266596926ULL)));
                }
                for (short i_9 = 0; i_9 < 23; i_9 += 2) 
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned short i_10 = 2; i_10 < 19; i_10 += 4) 
                    {
                        arr_34 [i_5] [i_5] [i_5 + 2] [i_5] = ((/* implicit */int) arr_32 [i_6] [i_6] [i_5 - 1] [i_10]);
                        var_26 = ((/* implicit */short) min((var_26), (((/* implicit */short) arr_27 [i_10 + 2]))));
                        arr_35 [i_5] [i_5] [i_5 + 3] [i_5] [i_5] = ((/* implicit */_Bool) arr_33 [i_5] [i_6] [i_9] [i_9] [i_10 + 2]);
                    }
                    arr_36 [i_5 + 2] [i_6] [i_9] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((long long int) arr_24 [i_5 + 2])))));
                    /* LoopSeq 1 */
                    for (unsigned char i_11 = 0; i_11 < 23; i_11 += 3) 
                    {
                        var_27 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_27 [i_5 - 1]))) + (7470759839421484851LL)))) ? (((/* implicit */int) arr_23 [i_5] [i_6] [i_5] [i_11])) : (max((((/* implicit */int) ((unsigned short) (unsigned short)65535))), ((-(((/* implicit */int) arr_27 [i_5]))))))));
                        var_28 = ((/* implicit */unsigned short) ((((/* implicit */long long int) (-(((/* implicit */int) arr_40 [i_5 - 1] [20LL] [i_9] [i_11]))))) / (((long long int) ((((/* implicit */_Bool) arr_24 [i_9])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)17762)))))));
                    }
                    var_29 += ((/* implicit */unsigned long long int) var_11);
                }
            }
        } 
    } 
    var_30 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min(((~(var_13))), (((/* implicit */unsigned int) ((short) var_14)))))) ? (((/* implicit */int) min(((unsigned char)85), (((/* implicit */unsigned char) (_Bool)1))))) : (((int) ((((/* implicit */_Bool) (signed char)-89)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (-1LL))))));
}
