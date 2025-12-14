/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147229
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147229 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147229
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
    var_13 = ((/* implicit */unsigned int) var_6);
    /* LoopSeq 2 */
    for (int i_0 = 1; i_0 < 17; i_0 += 4) 
    {
        var_14 *= ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -1314752637)) ? (2287653294U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))))) / (((unsigned long long int) ((var_12) - (((/* implicit */unsigned long long int) var_6))))));
        /* LoopSeq 4 */
        for (short i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            /* LoopNest 2 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (unsigned int i_3 = 0; i_3 < 19; i_3 += 1) 
                {
                    {
                        /* LoopSeq 3 */
                        for (short i_4 = 3; i_4 < 16; i_4 += 2) 
                        {
                            var_15 = (((~(((((/* implicit */_Bool) var_4)) ? (arr_6 [i_0] [i_0] [i_3] [i_4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))))))) & (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned short) arr_3 [(signed char)0] [i_4 - 3]))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) arr_11 [i_3] [i_3] [i_3] [i_4]))))) : (((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_3] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (var_7)))))));
                            var_16 = ((/* implicit */short) arr_3 [i_2] [i_3]);
                        }
                        for (unsigned int i_5 = 2; i_5 < 17; i_5 += 3) 
                        {
                            var_17 *= ((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_13 [i_0] [i_0 + 1] [i_0 - 1] [i_2] [i_5 + 2] [18] [i_0 + 1])) ? ((~(17536947316692491685ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned short)7254), (((/* implicit */unsigned short) var_3))))))))));
                            arr_18 [i_0] [i_3] = ((int) arr_12 [i_1] [i_1] [(signed char)6] [(signed char)6]);
                        }
                        for (long long int i_6 = 1; i_6 < 17; i_6 += 4) 
                        {
                            arr_21 [i_0 + 1] [i_1] [i_3] [i_3] [i_6] = ((/* implicit */_Bool) ((unsigned short) 12331813123782135958ULL));
                            arr_22 [i_0] [i_1] [i_2] [i_2] [i_3] [i_3] = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) arr_15 [i_0 + 1] [i_1] [i_3] [4ULL] [i_3] [i_6])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_5))))));
                            arr_23 [i_3] [i_3] [i_3] = ((/* implicit */unsigned long long int) var_11);
                            var_18 = ((/* implicit */unsigned long long int) (!(var_1)));
                            arr_24 [i_0 + 1] [i_1] [i_0 + 1] [i_3] [i_6] = ((/* implicit */signed char) max((((/* implicit */long long int) (+(arr_9 [i_0 - 1] [i_3] [i_0 - 1])))), (min((((/* implicit */long long int) (~(((/* implicit */int) var_4))))), (var_6)))));
                        }
                        arr_25 [i_3] [i_1] [i_2] [i_3] [i_3] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_13 [18U] [i_1] [i_1] [i_1] [i_2] [i_2] [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (max((((/* implicit */unsigned int) max((arr_0 [i_1]), (((/* implicit */unsigned char) arr_11 [i_3] [i_2] [i_1] [i_3]))))), (max((arr_8 [0U] [0U] [i_2] [i_1]), (12U)))))));
                        var_19 = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) min(((unsigned short)6786), ((unsigned short)65535)))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (_Bool)1)) : (-59658556))))), (((/* implicit */int) ((((/* implicit */int) arr_19 [i_0 + 1] [i_0] [i_0] [i_0 - 1] [i_0 + 2])) > (((/* implicit */int) arr_17 [i_0] [i_1] [i_0 + 2] [i_3])))))));
                    }
                } 
            } 
            arr_26 [i_0] = (~(((((/* implicit */_Bool) arr_7 [i_0 + 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0 + 2]))) : (var_7))));
            var_20 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-5625)) ? ((~(((/* implicit */int) ((signed char) arr_1 [i_0 + 1]))))) : (arr_13 [i_0 + 2] [i_0 - 1] [i_1] [i_1] [i_1] [i_1] [i_1])));
            var_21 = ((/* implicit */short) ((unsigned long long int) ((((((/* implicit */_Bool) (unsigned short)4317)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (5938908810093370546ULL))) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_0] [i_0] [i_1] [4]))))));
        }
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            var_22 *= arr_0 [i_0];
            /* LoopSeq 1 */
            for (unsigned long long int i_8 = 0; i_8 < 19; i_8 += 3) 
            {
                var_23 = ((/* implicit */unsigned int) ((long long int) 4042935557112751495ULL));
                arr_34 [i_0] [i_7] [i_8] [i_7] = ((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) (short)-5625)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) ((_Bool) (unsigned short)7))))));
                var_24 = ((/* implicit */unsigned char) ((unsigned long long int) (-(min((((/* implicit */unsigned int) (unsigned short)49282)), (2699321439U))))));
            }
            arr_35 [i_7] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_10 [(_Bool)1] [i_0 + 2] [i_0] [i_0])) : (((/* implicit */int) arr_10 [i_0 + 1] [i_0 + 1] [i_0] [i_0 + 2])))) + (((((/* implicit */_Bool) 909796757017059931ULL)) ? (((/* implicit */int) (unsigned char)61)) : (((/* implicit */int) (unsigned short)16266))))));
        }
        for (long long int i_9 = 0; i_9 < 19; i_9 += 3) 
        {
            var_25 = ((/* implicit */unsigned short) (-(3426516241830306714ULL)));
            var_26 *= ((/* implicit */int) min((((/* implicit */unsigned long long int) (~((~(((/* implicit */int) (unsigned short)22045))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) -1314752637)) ? (((/* implicit */unsigned long long int) 542883617U)) : (18446744073709551615ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [(short)12] [(short)12] [(short)12] [i_0 - 1]))) : (var_10)))));
        }
        for (unsigned int i_10 = 0; i_10 < 19; i_10 += 4) 
        {
            arr_41 [i_0] [i_10] = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) ((((/* implicit */int) arr_10 [i_0 + 2] [i_10] [i_10] [i_10])) * (((/* implicit */int) arr_10 [i_0 - 1] [i_0 + 1] [i_10] [i_10]))))), (3347952883U)));
            var_27 = ((/* implicit */unsigned char) ((max((arr_36 [i_10] [i_0]), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) -542987260)), (684360345236173685LL)))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_10])) || ((!(((/* implicit */_Bool) var_4))))))))));
            arr_42 [i_0] [i_0] [i_10] = ((/* implicit */int) (+(((unsigned int) ((((/* implicit */_Bool) -684360345236173686LL)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_10 [i_0] [i_0 + 2] [i_10] [i_0 + 2])))))));
        }
    }
    for (long long int i_11 = 0; i_11 < 17; i_11 += 4) 
    {
        var_28 *= ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) (-(((/* implicit */int) arr_0 [i_11]))))) ? (((((/* implicit */_Bool) arr_16 [i_11] [i_11] [i_11] [i_11] [i_11])) ? (((/* implicit */int) (unsigned short)41479)) : (((/* implicit */int) arr_11 [i_11] [i_11] [i_11] [i_11])))) : ((-(((/* implicit */int) (_Bool)1))))))));
        /* LoopSeq 1 */
        for (unsigned long long int i_12 = 0; i_12 < 17; i_12 += 1) 
        {
            var_29 *= ((/* implicit */int) ((((/* implicit */_Bool) max(((-(arr_9 [i_11] [i_12] [i_12]))), (arr_31 [i_11] [i_12] [i_12] [i_12])))) || (((/* implicit */_Bool) max((var_10), (max((((/* implicit */unsigned long long int) var_5)), (var_12))))))));
            /* LoopSeq 3 */
            /* vectorizable */
            for (short i_13 = 0; i_13 < 17; i_13 += 4) 
            {
                var_30 = ((/* implicit */unsigned short) ((unsigned int) arr_8 [i_11] [i_12] [i_13] [i_13]));
                var_31 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)32765))))) ? (var_0) : (((/* implicit */int) arr_11 [i_13] [i_12] [i_12] [i_13]))));
                var_32 = ((/* implicit */unsigned long long int) ((short) var_2));
                arr_52 [i_11] [9ULL] [i_13] [i_12] = ((/* implicit */_Bool) ((unsigned int) var_9));
            }
            for (int i_14 = 0; i_14 < 17; i_14 += 4) 
            {
                var_33 = ((/* implicit */signed char) min((var_33), (((/* implicit */signed char) (+((-2147483647 - 1)))))));
                arr_55 [i_11] [i_11] [i_12] [i_14] = ((/* implicit */short) (_Bool)1);
            }
            /* vectorizable */
            for (signed char i_15 = 0; i_15 < 17; i_15 += 4) 
            {
                var_34 = ((/* implicit */_Bool) max((var_34), (((/* implicit */_Bool) (((_Bool)1) ? (15020227831879244902ULL) : (((/* implicit */unsigned long long int) 9802511003377653LL)))))));
                var_35 = ((/* implicit */unsigned short) arr_48 [i_11]);
            }
        }
        var_36 = ((/* implicit */unsigned long long int) min((var_36), (max((max((var_10), (((/* implicit */unsigned long long int) arr_57 [i_11] [i_11] [i_11])))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_57 [i_11] [i_11] [i_11])) ? (arr_57 [i_11] [(_Bool)1] [i_11]) : (arr_57 [i_11] [i_11] [i_11]))))))));
        arr_59 [2] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_30 [i_11] [i_11] [i_11]))));
    }
    var_37 = ((/* implicit */_Bool) max((var_37), (((/* implicit */_Bool) ((max((((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) > (var_10))), (((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) var_8)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))) : (((((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (var_10))) >> (((var_12) - (4093160000360271579ULL))))))))));
}
