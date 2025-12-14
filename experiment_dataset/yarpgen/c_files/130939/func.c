/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130939
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130939 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130939
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
    var_14 = ((/* implicit */long long int) ((unsigned char) var_7));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 4) /* same iter space */
    {
        /* LoopSeq 3 */
        for (int i_1 = 1; i_1 < 21; i_1 += 4) 
        {
            var_15 = ((/* implicit */unsigned int) arr_4 [i_1 - 1] [i_1 - 1]);
            var_16 ^= ((/* implicit */unsigned int) var_12);
        }
        for (signed char i_2 = 1; i_2 < 21; i_2 += 1) 
        {
            /* LoopSeq 2 */
            for (unsigned long long int i_3 = 3; i_3 < 18; i_3 += 4) 
            {
                arr_12 [i_2] [i_2] [i_3] [i_2] = ((/* implicit */long long int) (!(((((unsigned long long int) arr_5 [i_2])) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_2] [i_2])))))));
                var_17 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (~(((/* implicit */int) ((short) (signed char)-121))))))));
            }
            for (int i_4 = 2; i_4 < 18; i_4 += 4) 
            {
                /* LoopNest 2 */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    for (unsigned int i_6 = 0; i_6 < 22; i_6 += 4) 
                    {
                        {
                            var_18 = ((/* implicit */_Bool) var_9);
                            arr_19 [i_0] [i_2] [i_0] [i_0] [i_5] [i_6] = ((/* implicit */int) max((max((((/* implicit */long long int) 4197304966U)), (((((/* implicit */_Bool) 2220596155U)) ? (1125899906842623LL) : (((/* implicit */long long int) arr_0 [i_0] [i_5])))))), (((((/* implicit */_Bool) var_1)) ? (var_9) : (var_1)))));
                        }
                    } 
                } 
                arr_20 [i_0] [i_2] [(signed char)9] [i_4] = (~((+(((/* implicit */int) (_Bool)1)))));
                arr_21 [i_2] [i_2] [i_4] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_14 [i_4] [i_2] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [i_0] [i_4]))) : (((((/* implicit */_Bool) arr_14 [i_0] [i_2] [i_4])) ? (((arr_4 [(_Bool)1] [i_2]) ? (((/* implicit */long long int) var_6)) : (var_11))) : (((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)230)))))))));
            }
            var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_7 [i_2 + 1] [i_2]))))) ? (((/* implicit */int) ((short) arr_7 [i_2 - 1] [i_2]))) : ((~(((/* implicit */int) arr_7 [i_2 - 1] [i_2]))))));
        }
        for (int i_7 = 0; i_7 < 22; i_7 += 1) 
        {
            var_20 = ((/* implicit */long long int) (short)18934);
            var_21 += ((/* implicit */signed char) var_13);
            arr_25 [i_0] &= ((/* implicit */short) ((((unsigned long long int) (~(var_3)))) <= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_16 [i_0] [i_0] [i_7] [i_7] [i_7])) : (((/* implicit */int) arr_16 [i_0] [i_7] [i_0] [i_0] [i_7])))))));
        }
        arr_26 [i_0] = max(((~(arr_24 [i_0] [i_0] [i_0]))), (((/* implicit */unsigned int) ((_Bool) arr_17 [i_0] [i_0] [i_0] [i_0] [0] [i_0]))));
        var_22 -= ((/* implicit */signed char) ((long long int) ((((/* implicit */_Bool) var_12)) ? (arr_17 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_0] [i_0] [i_0]))))));
    }
    for (unsigned int i_8 = 0; i_8 < 22; i_8 += 4) /* same iter space */
    {
        var_23 = (-(((/* implicit */int) var_0)));
        /* LoopNest 3 */
        for (int i_9 = 0; i_9 < 22; i_9 += 4) 
        {
            for (unsigned short i_10 = 2; i_10 < 18; i_10 += 4) 
            {
                for (long long int i_11 = 0; i_11 < 22; i_11 += 4) 
                {
                    {
                        arr_37 [4ULL] [i_8] [i_9] [i_8] = min((((/* implicit */int) arr_8 [i_8] [i_8] [i_10])), ((~(arr_14 [i_10] [i_8] [i_10]))));
                        /* LoopSeq 3 */
                        for (int i_12 = 0; i_12 < 22; i_12 += 4) 
                        {
                            var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) arr_24 [i_12] [i_12] [i_12]))));
                            arr_40 [i_8] [(unsigned short)3] [16U] [i_11] [i_12] = ((/* implicit */short) var_1);
                        }
                        for (long long int i_13 = 2; i_13 < 20; i_13 += 4) 
                        {
                            var_25 += ((/* implicit */long long int) (~(var_13)));
                            var_26 = ((/* implicit */int) max((var_26), (((/* implicit */int) (((((~(1444796629U))) < (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) 1444796629U)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_22 [i_10 - 2] [i_10 + 2] [i_13 - 1])) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))) : (((arr_17 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8]) | (((/* implicit */unsigned long long int) var_12)))))))));
                            var_27 = ((/* implicit */short) arr_6 [i_8]);
                            arr_44 [i_13] [i_11] [i_10 + 4] [16ULL] [i_9] [i_8] = max((((/* implicit */unsigned long long int) (unsigned char)234)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_31 [i_11])) ? (arr_0 [i_10] [i_13]) : (((/* implicit */int) arr_16 [i_13] [i_11] [i_10] [i_9] [(short)7]))))) ? (((/* implicit */unsigned long long int) min((((/* implicit */long long int) (unsigned short)44877)), (var_3)))) : (((((/* implicit */unsigned long long int) arr_38 [i_8] [i_9] [i_9] [i_10] [i_11] [i_11] [i_13])) ^ (arr_18 [i_10] [i_11] [i_13]))))));
                            var_28 = ((/* implicit */short) max((var_28), (((/* implicit */short) (signed char)-29))));
                        }
                        for (long long int i_14 = 0; i_14 < 22; i_14 += 4) 
                        {
                            arr_47 [i_8] [19LL] = ((/* implicit */unsigned short) (+(-1LL)));
                            arr_48 [i_10] [i_9] [14LL] [i_11] [i_14] [i_10] = ((/* implicit */unsigned short) var_4);
                            arr_49 [i_8] [(short)6] [i_10] [(short)6] [i_8] = ((/* implicit */_Bool) var_8);
                        }
                        /* LoopSeq 2 */
                        for (short i_15 = 0; i_15 < 22; i_15 += 4) 
                        {
                            var_29 = ((/* implicit */short) min((((/* implicit */unsigned short) ((((/* implicit */unsigned int) 1066023183)) != (arr_33 [i_8] [i_10 - 2])))), (arr_29 [i_10])));
                            var_30 = ((/* implicit */int) var_0);
                        }
                        for (short i_16 = 0; i_16 < 22; i_16 += 4) 
                        {
                            var_31 = ((/* implicit */long long int) (+(max((-722955105), (arr_0 [i_10 - 2] [i_9])))));
                            var_32 = ((/* implicit */int) min((var_32), (((/* implicit */int) ((unsigned int) (signed char)-124)))));
                        }
                    }
                } 
            } 
        } 
        var_33 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(arr_52 [i_8] [i_8] [9ULL] [i_8] [i_8] [(unsigned short)12])))) ? (min((((var_1) - (var_3))), (6727922414575607915LL))) : (max((((long long int) arr_45 [i_8] [(short)7] [i_8] [i_8] [(short)7] [i_8])), (((/* implicit */long long int) (+(((/* implicit */int) var_2)))))))));
        arr_56 [i_8] [i_8] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) (+(((/* implicit */int) (short)23814))))) ? (var_7) : (arr_15 [i_8] [i_8] [i_8] [i_8]))), (((/* implicit */unsigned int) (+(var_4))))));
    }
}
