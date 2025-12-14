/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134641
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134641 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134641
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
    var_10 = ((/* implicit */unsigned long long int) max((max((((/* implicit */long long int) min((var_8), (var_8)))), (((var_0) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (1637270186612284407LL))))), (((/* implicit */long long int) (_Bool)1))));
    var_11 = ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) ((((/* implicit */int) var_7)) < ((((_Bool)1) ? (((/* implicit */int) (unsigned char)3)) : (((/* implicit */int) var_1))))))));
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 4) /* same iter space */
    {
        var_12 = ((/* implicit */unsigned long long int) var_5);
        var_13 = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) max((((/* implicit */int) arr_0 [i_0] [i_0])), (arr_1 [i_0])))) ? (((/* implicit */int) ((((/* implicit */int) arr_0 [i_0] [8])) >= (((/* implicit */int) var_8))))) : (((var_7) ? (944172036) : (((/* implicit */int) var_2))))))));
    }
    for (signed char i_1 = 0; i_1 < 14; i_1 += 4) /* same iter space */
    {
        arr_4 [i_1] = arr_3 [i_1];
        var_14 = ((/* implicit */unsigned int) max((var_14), (((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)-40)))))));
        arr_5 [i_1] = ((/* implicit */unsigned int) max((((((/* implicit */int) var_3)) - (((/* implicit */int) (signed char)46)))), ((((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-47)))) | (0)))));
        /* LoopNest 3 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (signed char i_3 = 0; i_3 < 14; i_3 += 4) 
            {
                for (unsigned char i_4 = 0; i_4 < 14; i_4 += 4) 
                {
                    {
                        /* LoopSeq 3 */
                        for (unsigned long long int i_5 = 0; i_5 < 14; i_5 += 1) 
                        {
                            var_15 -= ((/* implicit */signed char) (-(((/* implicit */int) arr_10 [i_1] [3ULL] [i_5] [i_5]))));
                            arr_16 [i_2] [(_Bool)1] [i_3] [i_4] [i_5] = ((((/* implicit */_Bool) max((min((((/* implicit */int) var_2)), (var_9))), (((/* implicit */int) max((((/* implicit */unsigned char) var_5)), ((unsigned char)244))))))) ? (((((/* implicit */int) arr_14 [i_1] [i_2] [i_3] [i_1] [i_5])) + (((var_2) ? (((/* implicit */int) (unsigned char)244)) : (((/* implicit */int) (unsigned char)79)))))) : (arr_3 [i_5]));
                            var_16 |= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 1125891316908032ULL)) ? (((/* implicit */int) min((((/* implicit */signed char) var_0)), (arr_14 [i_1] [i_4] [1ULL] [i_4] [i_5])))) : (((/* implicit */int) ((((/* implicit */int) var_1)) <= (((/* implicit */int) (_Bool)0))))))))));
                        }
                        for (unsigned int i_6 = 0; i_6 < 14; i_6 += 4) 
                        {
                            arr_21 [i_1] [i_1] [i_2] [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((var_0) ? (((/* implicit */int) (_Bool)1)) : (arr_1 [i_1]))) & ((-(((/* implicit */int) arr_10 [i_1] [i_1] [i_3] [i_4]))))))) ? (((min((var_4), (arr_2 [i_6]))) ^ (((/* implicit */int) arr_6 [i_3] [i_4])))) : ((-(-1369104514)))));
                            arr_22 [i_1] [i_2] [i_3] [i_4] [i_4] [i_6] [i_6] = ((/* implicit */unsigned char) max((min((((((/* implicit */_Bool) (unsigned short)511)) ? (((/* implicit */int) var_0)) : (arr_8 [i_2] [i_2] [i_4]))), ((((_Bool)1) ? (-2081902002) : (((/* implicit */int) (_Bool)1)))))), ((((!(((/* implicit */_Bool) (unsigned char)77)))) ? (((((/* implicit */_Bool) 16074238999246528144ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)511)))) : (((((/* implicit */int) var_8)) - (var_6)))))));
                        }
                        /* vectorizable */
                        for (int i_7 = 0; i_7 < 14; i_7 += 4) 
                        {
                            var_17 = ((/* implicit */_Bool) (+(((/* implicit */int) arr_12 [i_1] [i_3] [i_4]))));
                            var_18 = ((/* implicit */signed char) (-(((/* implicit */int) (signed char)76))));
                            var_19 = ((/* implicit */int) min((var_19), ((~((~(((/* implicit */int) var_1))))))));
                            var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) 2274236612U)) ? (((/* implicit */int) (signed char)21)) : (((/* implicit */int) (signed char)59))));
                            arr_26 [7LL] [i_2] [i_3] [i_4] [i_2] [i_7] [i_7] = ((/* implicit */unsigned long long int) var_7);
                        }
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned int i_8 = 0; i_8 < 14; i_8 += 3) 
                        {
                            var_21 |= (signed char)59;
                            var_22 |= ((/* implicit */int) ((((/* implicit */_Bool) (+(var_6)))) ? (((/* implicit */unsigned long long int) arr_2 [i_8])) : (arr_25 [i_2] [i_2] [i_2] [i_2] [i_2] [i_3] [i_2])));
                            arr_29 [i_1] [i_1] [i_2] [12ULL] [i_2] [(signed char)11] [i_8] = ((/* implicit */unsigned long long int) var_8);
                            arr_30 [i_2] = ((/* implicit */long long int) arr_8 [i_2] [i_2] [i_3]);
                        }
                    }
                } 
            } 
        } 
    }
}
