/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102362
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102362 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102362
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
    for (unsigned long long int i_0 = 2; i_0 < 7; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 8; i_1 += 4) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    var_11 = (((_Bool)1) ? (max((max((13001464584087159148ULL), (((/* implicit */unsigned long long int) arr_1 [i_0] [i_0])))), (((/* implicit */unsigned long long int) arr_0 [i_1] [i_1])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)55331))));
                    var_12 = var_8;
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 2; i_3 < 9; i_3 += 2) 
                    {
                        for (short i_4 = 0; i_4 < 10; i_4 += 1) 
                        {
                            {
                                var_13 = ((/* implicit */long long int) (((+(var_2))) <= (((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)54962)))))));
                                var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((arr_5 [i_0] [i_0]), (((/* implicit */unsigned long long int) (+(-885120491972021815LL))))))) ? (14407299491224845221ULL) : (((((/* implicit */unsigned long long int) (~(var_6)))) - ((+(9952238103841239406ULL)))))));
                                arr_13 [i_4] [i_2] [i_2] [i_0] = ((/* implicit */short) (((!(((/* implicit */_Bool) var_1)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) arr_4 [i_3 - 1])))))))) : (((unsigned long long int) arr_8 [i_2 - 1] [i_2] [i_2] [i_1]))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */_Bool) var_2);
    /* LoopSeq 1 */
    for (unsigned short i_5 = 0; i_5 < 17; i_5 += 1) 
    {
        var_16 &= ((/* implicit */unsigned long long int) ((_Bool) ((13001464584087159148ULL) ^ (((/* implicit */unsigned long long int) ((var_0) << (3ULL)))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            /* LoopSeq 1 */
            for (long long int i_7 = 1; i_7 < 16; i_7 += 1) 
            {
                /* LoopSeq 2 */
                for (unsigned long long int i_8 = 0; i_8 < 17; i_8 += 2) /* same iter space */
                {
                    arr_26 [i_5] [i_7] [i_5] [i_7] = ((/* implicit */unsigned short) (+(5501418553195472455ULL)));
                    var_17 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((var_0) & (((/* implicit */long long int) ((/* implicit */int) (short)-4555))))))));
                }
                for (unsigned long long int i_9 = 0; i_9 < 17; i_9 += 2) /* same iter space */
                {
                    var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -147509468867841701LL)) || (((/* implicit */_Bool) (~(11423693203305844987ULL))))));
                    arr_29 [i_9] [10ULL] [i_7] [i_9] = ((/* implicit */long long int) ((_Bool) arr_22 [i_5] [i_5] [i_7 - 1]));
                }
                var_19 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)24929)) ? (((/* implicit */int) ((15229420281779399845ULL) < (arr_18 [i_7] [i_6] [i_6])))) : (((/* implicit */int) (short)-12947))));
            }
            /* LoopSeq 1 */
            for (unsigned short i_10 = 0; i_10 < 17; i_10 += 1) 
            {
                var_20 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) 15229420281779399869ULL)) ? (4916405302391833815LL) : (((((/* implicit */_Bool) var_6)) ? (arr_15 [i_5]) : (((/* implicit */long long int) ((/* implicit */int) var_1)))))));
                /* LoopSeq 3 */
                for (unsigned long long int i_11 = 0; i_11 < 17; i_11 += 2) 
                {
                    var_21 = ((/* implicit */short) ((((/* implicit */_Bool) 8249548664155192905LL)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_5] [i_10] [i_11])))));
                    var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) ((((/* implicit */_Bool) 1025265064417562535ULL)) ? (arr_23 [i_11] [8ULL] [8ULL] [i_11]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_5] [i_5]))))))));
                    var_23 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -197960953307246965LL)))))) | (((var_5) % (-8249548664155192906LL)))));
                }
                for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) 
                {
                    /* LoopSeq 2 */
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                    {
                        arr_39 [i_5] [(unsigned short)13] [(short)13] [i_5] [i_12] = ((/* implicit */unsigned long long int) (unsigned short)64462);
                        var_24 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (2505909630955910983LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                        var_25 = ((/* implicit */unsigned short) max((var_25), (((/* implicit */unsigned short) (-(197960953307246965LL))))));
                        var_26 -= ((/* implicit */unsigned short) ((var_6) << ((((((+(((/* implicit */int) (short)-12961)))) + (12970))) - (9)))));
                    }
                    for (short i_14 = 0; i_14 < 17; i_14 += 2) 
                    {
                        var_27 += ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [i_12 - 1] [i_12 - 1] [i_12 - 1])) ? (arr_18 [6ULL] [i_12 - 1] [6ULL]) : (4102660796509096748ULL)));
                        arr_42 [i_12] [i_12] = ((/* implicit */unsigned long long int) (-(var_5)));
                        var_28 = ((/* implicit */short) max((var_28), (((/* implicit */short) (+(((/* implicit */int) arr_22 [i_12 - 1] [i_12 - 1] [i_12 - 1])))))));
                        arr_43 [(_Bool)1] [i_6] [(_Bool)1] [i_6] [i_12] = ((unsigned long long int) arr_17 [i_12 - 1] [i_12 - 1] [i_12 - 1]);
                    }
                    /* LoopSeq 1 */
                    for (short i_15 = 1; i_15 < 15; i_15 += 4) 
                    {
                        var_29 = ((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_16 [(unsigned short)4] [i_10]))))) + (arr_41 [i_12 - 1] [i_12] [i_12 - 1] [i_12] [i_12 - 1]));
                        arr_46 [i_12] = ((/* implicit */long long int) (-(((/* implicit */int) arr_44 [i_15] [i_15] [i_15] [(unsigned short)9] [i_15 + 2] [i_15]))));
                        arr_47 [i_12] [i_6] [i_10] [(short)15] [i_15] = ((/* implicit */unsigned long long int) (((-(6168803892666753669LL))) == (((/* implicit */long long int) ((/* implicit */int) arr_37 [4LL] [i_12 - 1] [i_12 - 1] [i_12] [i_12 - 1] [i_15 + 2])))));
                        var_30 = ((/* implicit */unsigned short) (short)-14322);
                    }
                    var_31 = (-(((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (var_5))));
                }
                for (unsigned short i_16 = 0; i_16 < 17; i_16 += 2) 
                {
                    var_32 = ((/* implicit */_Bool) (~(-1254387351786395281LL)));
                    arr_50 [(short)11] [i_6] [i_10] [i_16] = ((/* implicit */long long int) (+(arr_24 [i_5] [i_16] [i_10] [i_16])));
                }
            }
            arr_51 [8ULL] [i_6] [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_31 [i_5] [i_5] [i_5] [8ULL])) ? (((/* implicit */int) arr_32 [i_5] [i_6] [i_6] [i_6])) : (((/* implicit */int) arr_32 [i_6] [i_6] [i_5] [i_5]))));
        }
    }
}
