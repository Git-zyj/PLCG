/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125968
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125968 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125968
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
    var_12 = ((/* implicit */unsigned short) (((~(-3357381650918318822LL))) << (((((int) var_6)) - (795170661)))));
    var_13 = ((/* implicit */unsigned long long int) var_11);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 10; i_3 += 4) 
                    {
                        {
                            var_14 *= ((/* implicit */unsigned long long int) min((((/* implicit */int) min((arr_9 [i_3] [i_3]), (arr_9 [i_1] [i_1])))), (((((/* implicit */_Bool) arr_9 [i_0] [i_3])) ? (((/* implicit */int) arr_9 [i_0] [i_1])) : (((/* implicit */int) arr_9 [i_0] [i_1]))))));
                            arr_11 [i_1] [i_1] [i_1] [i_1] [i_1] [i_2] = ((/* implicit */long long int) ((unsigned char) ((unsigned long long int) arr_3 [i_0])));
                            var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) ((((/* implicit */int) min((arr_1 [i_2] [i_3]), (arr_1 [i_1] [i_2])))) << ((((~(-549371899))) - (549371886))))))));
                            arr_12 [i_0] [i_0] [i_2] = ((/* implicit */unsigned int) ((unsigned long long int) arr_7 [i_1] [i_1] [i_1]));
                            /* LoopSeq 3 */
                            for (unsigned long long int i_4 = 0; i_4 < 10; i_4 += 1) /* same iter space */
                            {
                                var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_9 [i_2] [i_2])) ? (((unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_2] [i_2])) ? (16777214) : (((/* implicit */int) (unsigned short)11237))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) 7534779560450566090ULL))))));
                                arr_16 [i_0] [i_1] [1] [i_3] [i_0] [i_2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)255)) ? ((-(arr_0 [i_3]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_15 [i_0] [i_0] [i_1] [i_0] [i_2] [i_3] [i_2]) ? (((/* implicit */unsigned long long int) arr_7 [i_0] [i_1] [i_3])) : (arr_2 [i_0] [i_1] [5LL])))) ? (((/* implicit */int) ((_Bool) -137960535))) : (((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)0)), ((unsigned short)65524)))))))));
                                arr_17 [0U] [i_1] [0U] [i_1] [i_1] &= ((/* implicit */unsigned int) min((((unsigned long long int) (~((-9223372036854775807LL - 1LL))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_13 [i_4] [i_3] [i_2] [i_1] [i_0])) ? (((((/* implicit */_Bool) 1308156055U)) ? (((/* implicit */long long int) ((/* implicit */int) (short)0))) : (var_3))) : ((+(arr_0 [i_3]))))))));
                                arr_18 [i_1] [i_1] [i_2] [i_3] [i_4] [i_1] [i_2] = ((/* implicit */short) (-(arr_6 [i_4] [i_2] [i_0])));
                                var_17 += ((/* implicit */_Bool) arr_10 [i_4] [i_1] [i_2] [i_1]);
                            }
                            /* vectorizable */
                            for (unsigned long long int i_5 = 0; i_5 < 10; i_5 += 1) /* same iter space */
                            {
                                var_18 = ((/* implicit */unsigned char) arr_3 [i_2]);
                                var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_9 [i_0] [i_2])) ? (arr_8 [i_0] [i_0] [i_2] [i_3] [i_5]) : (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_3] [i_2])))));
                            }
                            for (unsigned long long int i_6 = 0; i_6 < 10; i_6 += 1) /* same iter space */
                            {
                                arr_24 [i_0] [i_0] [i_0] [i_0] [i_2] [i_0] = ((/* implicit */short) var_5);
                                arr_25 [i_2] [i_1] [i_2] [i_3] [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((max((9223372036854775807LL), (((/* implicit */long long int) 0U)))) >> (((((((/* implicit */_Bool) arr_20 [9LL] [i_3] [i_2] [i_0] [i_1] [i_0])) ? (7419837865694256818ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)54269))))) - (7419837865694256805ULL)))))) ? ((~(((/* implicit */int) ((short) (short)-23842))))) : (((/* implicit */int) (unsigned short)65533))));
                                arr_26 [i_0] [(_Bool)1] [i_2] [i_0] [i_2] = ((/* implicit */unsigned long long int) (((-9223372036854775807LL - 1LL)) > (((/* implicit */long long int) ((/* implicit */int) (unsigned short)58261)))));
                            }
                        }
                    } 
                } 
                arr_27 [i_1] = ((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */_Bool) arr_14 [(unsigned short)0] [i_1] [i_0] [i_0] [i_0] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_0] [i_1] [i_1] [i_1] [i_0] [i_1]))) : (arr_22 [i_0] [i_1] [i_1] [i_1] [i_1]))));
                arr_28 [i_0] [i_1] = (+(((((/* implicit */_Bool) arr_10 [i_0] [i_0] [8] [i_1])) ? (arr_22 [i_0] [i_0] [i_0] [i_0] [i_1]) : (arr_22 [i_0] [i_0] [i_1] [i_1] [i_1]))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) (short)-27371)) ? (((/* implicit */int) var_11)) : (-1037441658)))) <= (var_8)))))))));
}
