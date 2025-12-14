/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172880
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172880 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172880
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
    var_13 += ((/* implicit */signed char) ((((/* implicit */int) var_10)) * (((/* implicit */int) ((unsigned short) max((((/* implicit */unsigned short) var_1)), (var_8)))))));
    var_14 = ((/* implicit */_Bool) var_3);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 10; i_1 += 3) 
        {
            {
                var_15 = ((/* implicit */short) (((((!(((/* implicit */_Bool) var_5)))) ? (arr_2 [i_1 + 1] [(_Bool)1]) : (((/* implicit */int) ((((/* implicit */int) arr_0 [i_0])) != (((/* implicit */int) arr_1 [(unsigned short)3]))))))) + (((/* implicit */int) ((((/* implicit */int) ((unsigned short) (signed char)-112))) < (((/* implicit */int) var_1)))))));
                var_16 = ((((/* implicit */_Bool) ((((/* implicit */int) arr_5 [i_1 + 1])) + (((/* implicit */int) arr_1 [i_1 - 1]))))) ? ((-(arr_7 [i_1 + 1]))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (signed char)-118)) >= (((/* implicit */int) arr_4 [i_1 - 1])))))));
                var_17 = ((/* implicit */int) max((var_17), (((/* implicit */int) (+(max((((((/* implicit */long long int) ((/* implicit */int) var_7))) / (887559939623276647LL))), (((/* implicit */long long int) (-(((/* implicit */int) arr_1 [(signed char)10]))))))))))));
                /* LoopSeq 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
                {
                    var_18 = ((/* implicit */int) ((short) var_11));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 11; i_3 += 3) 
                    {
                        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned int) min((var_19), ((+(min((((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)48))) : (arr_6 [i_2]))), (((/* implicit */unsigned int) min((var_6), (((/* implicit */unsigned short) (signed char)-110)))))))))));
                                arr_15 [i_0] [i_2] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) max(((!(((/* implicit */_Bool) arr_13 [i_1 + 1] [i_2])))), (((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) arr_13 [i_1 + 1] [i_2]))))));
                                var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) (-((+(((/* implicit */int) arr_4 [i_4 - 1])))))))));
                                var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) (((((-(((/* implicit */int) ((arr_11 [i_0] [i_1] [i_3] [i_0] [7ULL] [(unsigned short)1]) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_0])))))))) + (2147483647))) >> (((((/* implicit */_Bool) ((var_1) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_10 [i_0] [6ULL] [i_2] [i_2]))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_0] [(signed char)6])) || (((/* implicit */_Bool) var_11))))) : (((/* implicit */int) ((_Bool) var_6))))))))));
                            }
                        } 
                    } 
                }
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
                {
                    var_22 -= ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) (unsigned short)51574)), (12284812272840159509ULL)));
                    var_23 = ((/* implicit */short) min((((((arr_12 [i_5] [i_1] [8ULL] [i_1] [8ULL] [i_1]) + (((/* implicit */unsigned int) ((/* implicit */int) (short)21981))))) >> (((((((/* implicit */_Bool) arr_3 [i_1] [7LL])) ? (3836278535U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0]))))) - (3836278511U))))), (max((((/* implicit */unsigned int) min((((/* implicit */int) var_10)), (583728879)))), (arr_6 [i_1 - 1])))));
                    /* LoopNest 2 */
                    for (short i_6 = 0; i_6 < 11; i_6 += 2) 
                    {
                        for (int i_7 = 0; i_7 < 11; i_7 += 3) 
                        {
                            {
                                var_24 -= ((/* implicit */unsigned short) min(((-(arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))), (((/* implicit */unsigned long long int) ((unsigned short) (short)-6773)))));
                                arr_23 [i_0] [i_0] [i_5] [i_0] [i_0] = ((/* implicit */signed char) var_10);
                                var_25 *= ((/* implicit */long long int) ((((/* implicit */int) max((min(((signed char)-117), (((/* implicit */signed char) (_Bool)1)))), (((/* implicit */signed char) ((((/* implicit */int) (unsigned char)108)) > (((/* implicit */int) arr_17 [i_7] [i_0] [i_0] [i_0])))))))) & (-583728880)));
                                var_26 *= ((/* implicit */signed char) (-((((!(((/* implicit */_Bool) arr_7 [i_7])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -887559939623276648LL)) ? (((/* implicit */int) arr_20 [i_0] [i_1] [(short)9] [(short)9] [i_1])) : (((/* implicit */int) var_8))))) : (((unsigned long long int) (signed char)104))))));
                            }
                        } 
                    } 
                    arr_24 [i_0] [i_1] [i_5] [i_5] = var_1;
                }
                var_27 = ((/* implicit */int) ((((/* implicit */unsigned int) (~(((((/* implicit */_Bool) arr_8 [i_1] [i_0] [i_0])) ? (((/* implicit */int) (unsigned short)12010)) : (arr_19 [(unsigned short)4] [i_0] [i_0] [i_0])))))) ^ (((unsigned int) ((((/* implicit */int) var_7)) | (((/* implicit */int) var_2)))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_8 = 0; i_8 < 14; i_8 += 4) 
    {
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            {
                var_28 |= min((((/* implicit */unsigned long long int) (unsigned char)192)), (11071092391350174560ULL));
                var_29 *= ((/* implicit */short) min((min((((/* implicit */int) var_2)), (((((/* implicit */_Bool) arr_25 [i_9])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_27 [i_9] [i_8])))))), (((/* implicit */int) ((((/* implicit */int) var_8)) <= (((/* implicit */int) arr_30 [(unsigned short)10] [i_8] [i_8])))))));
            }
        } 
    } 
}
