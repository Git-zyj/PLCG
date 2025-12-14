/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153262
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153262 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153262
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
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                var_16 = ((/* implicit */long long int) min((((/* implicit */int) (!((_Bool)1)))), ((+(((/* implicit */int) ((((/* implicit */int) arr_0 [i_0])) < (((/* implicit */int) (_Bool)1)))))))));
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 15; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            arr_9 [i_0] [i_0] [i_2] [i_3] [i_1] [(short)7] = ((/* implicit */long long int) arr_3 [i_3] [(unsigned short)7] [i_0]);
                            var_17 = ((/* implicit */_Bool) var_10);
                        }
                    } 
                } 
                arr_10 [8LL] = ((/* implicit */_Bool) (+((((_Bool)1) ? ((-(var_6))) : (((((/* implicit */int) (_Bool)0)) / (var_6)))))));
                var_18 = ((/* implicit */unsigned char) (~(min((((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) var_15)) > (arr_6 [i_1] [(signed char)8] [i_1] [i_0])))), (max((15264743652298976738ULL), (((/* implicit */unsigned long long int) 2LL))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_4 = 0; i_4 < 21; i_4 += 4) 
    {
        for (short i_5 = 2; i_5 < 20; i_5 += 2) 
        {
            {
                /* LoopSeq 4 */
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    /* LoopNest 2 */
                    for (long long int i_7 = 0; i_7 < 21; i_7 += 3) 
                    {
                        for (long long int i_8 = 4; i_8 < 19; i_8 += 4) 
                        {
                            {
                                arr_24 [i_5] [i_4] = ((/* implicit */_Bool) var_1);
                                var_19 = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) (signed char)-9)))) ? (((/* implicit */int) ((((((/* implicit */_Bool) (short)0)) ? (((/* implicit */long long int) 639581251)) : (var_15))) >= (((/* implicit */long long int) ((/* implicit */int) (short)-14135)))))) : ((+(((/* implicit */int) ((9026438656481027256ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))))))))));
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */_Bool) ((arr_23 [i_4] [i_5 + 1] [i_5] [i_5] [i_5]) ? (arr_15 [i_5]) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) ((274877906943ULL) <= (((/* implicit */unsigned long long int) -7010272354396036275LL))))) <= (((/* implicit */int) min((arr_22 [i_5] [i_5]), ((_Bool)1))))))))));
                }
                for (long long int i_9 = 0; i_9 < 21; i_9 += 4) 
                {
                    var_21 = (!(((/* implicit */_Bool) min((((/* implicit */long long int) (!(((/* implicit */_Bool) arr_20 [i_4] [i_9] [i_5] [i_4]))))), (var_7)))));
                    var_22 = arr_23 [i_4] [(unsigned char)8] [i_4] [i_4] [i_4];
                }
                for (unsigned int i_10 = 0; i_10 < 21; i_10 += 2) 
                {
                    /* LoopNest 2 */
                    for (long long int i_11 = 1; i_11 < 19; i_11 += 2) 
                    {
                        for (short i_12 = 2; i_12 < 20; i_12 += 2) 
                        {
                            {
                                var_23 = ((/* implicit */unsigned long long int) (+(min((4135485154U), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_33 [i_4])) && (((/* implicit */_Bool) var_1)))))))));
                                arr_36 [i_4] [i_12 - 1] [i_12 - 1] [(_Bool)1] = ((/* implicit */short) -2343364325446912325LL);
                            }
                        } 
                    } 
                    var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) arr_15 [i_4]))));
                    arr_37 [20] = ((/* implicit */short) (-(arr_19 [i_5 - 1] [i_5 - 1] [i_5 - 2] [i_5 - 2] [i_5 + 1])));
                    arr_38 [i_4] [(unsigned char)14] [(unsigned char)14] [i_4] = ((/* implicit */long long int) min(((+(((unsigned int) var_1)))), (var_1)));
                    /* LoopNest 2 */
                    for (unsigned int i_13 = 1; i_13 < 19; i_13 += 1) 
                    {
                        for (unsigned int i_14 = 0; i_14 < 21; i_14 += 2) 
                        {
                            {
                                var_25 = ((/* implicit */unsigned short) (+(((/* implicit */int) ((((/* implicit */_Bool) arr_44 [i_10] [i_10])) && (((/* implicit */_Bool) var_7)))))));
                                var_26 = ((/* implicit */signed char) ((((/* implicit */int) var_13)) > (((/* implicit */int) arr_26 [2LL] [2LL] [2LL] [2LL]))));
                            }
                        } 
                    } 
                }
                for (unsigned long long int i_15 = 2; i_15 < 20; i_15 += 2) 
                {
                    var_27 = 15264743652298976732ULL;
                    var_28 = ((/* implicit */unsigned long long int) arr_13 [i_4]);
                }
                var_29 = ((/* implicit */_Bool) max((var_29), (((((arr_22 [i_5 + 1] [i_4]) ? (((/* implicit */int) arr_22 [i_4] [i_4])) : (((/* implicit */int) arr_22 [(unsigned short)12] [i_5])))) <= (((/* implicit */int) arr_22 [i_4] [i_5]))))));
                arr_47 [7LL] [i_4] = ((/* implicit */unsigned int) (-((+(((/* implicit */int) ((8272614244888891047ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32767))))))))));
            }
        } 
    } 
}
