/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1033
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1033 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1033
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
    for (signed char i_0 = 3; i_0 < 18; i_0 += 3) 
    {
        for (unsigned int i_1 = 1; i_1 < 20; i_1 += 4) 
        {
            {
                var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((arr_2 [i_0 - 3]), (arr_2 [i_1 - 1])))) ? (((/* implicit */int) arr_2 [i_1 + 1])) : ((~(((/* implicit */int) var_2))))));
                var_18 -= ((((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1 - 1] [i_1 - 1] [i_0 + 3]))) : (var_5))) < (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) arr_1 [(unsigned short)6])) ? (((/* implicit */int) (unsigned short)38153)) : (((/* implicit */int) var_9)))), (((/* implicit */int) arr_0 [i_0]))))));
                var_19 = ((/* implicit */signed char) ((arr_4 [i_0]) | (((/* implicit */unsigned int) max((((/* implicit */int) ((((/* implicit */unsigned long long int) -2147483633)) <= (var_5)))), ((+(2147483627))))))));
                /* LoopSeq 1 */
                for (signed char i_2 = 1; i_2 < 19; i_2 += 3) 
                {
                    arr_9 [i_0] [i_0] [i_2] = ((/* implicit */unsigned long long int) ((min((((/* implicit */int) arr_8 [i_0])), ((-(var_7))))) / ((-(((/* implicit */int) ((signed char) var_15)))))));
                    var_20 = ((/* implicit */int) arr_5 [i_1 + 1] [15] [i_1 + 1]);
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 21; i_3 += 2) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned long long int) var_9);
                                arr_15 [i_4] [i_1] [i_1 - 1] [i_1] [i_1] [i_1 - 1] [i_1 - 1] = ((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_0))) - (((var_16) ? (((/* implicit */long long int) -40967419)) : (6349287989071064150LL)))))) * (((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) 2147483633)) ? (var_15) : (((/* implicit */unsigned long long int) var_7)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))));
                            }
                        } 
                    } 
                }
                var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_13)))))) * (((6349287989071064150LL) / (((/* implicit */long long int) ((/* implicit */int) (unsigned short)4088)))))))) ? (549755809792LL) : (((/* implicit */long long int) (-(((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_5 [i_0 - 1] [i_1] [i_1 - 1])))))))));
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned char) (+(((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) var_0)) != (((/* implicit */int) var_8))))) >= (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_8)))))))));
    /* LoopSeq 1 */
    for (unsigned int i_5 = 0; i_5 < 20; i_5 += 4) 
    {
        arr_19 [i_5] [i_5] = ((/* implicit */signed char) ((((/* implicit */int) var_6)) < (((((/* implicit */_Bool) ((((/* implicit */int) (short)8784)) << (((4179319905U) - (4179319901U)))))) ? (((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (signed char)49)))) : (-2147483633)))));
        /* LoopSeq 3 */
        for (long long int i_6 = 2; i_6 < 17; i_6 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_7 = 3; i_7 < 19; i_7 += 4) 
            {
                for (unsigned short i_8 = 2; i_8 < 16; i_8 += 4) 
                {
                    {
                        arr_30 [i_5] [i_6] [i_7 - 1] [i_7] [(unsigned short)17] [i_6] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) ((((/* implicit */int) (signed char)-52)) > (var_10)))) : ((-(((/* implicit */int) (signed char)-56)))))))));
                        var_24 -= ((/* implicit */unsigned int) (~(1152780767118491648ULL)));
                        var_25 *= ((/* implicit */unsigned long long int) var_8);
                    }
                } 
            } 
            arr_31 [i_5] [i_5] [i_6] = ((((/* implicit */_Bool) ((var_0) ? (((/* implicit */unsigned long long int) arr_27 [(signed char)7] [i_6 + 2] [i_6 + 2] [i_6 + 2])) : (max((((/* implicit */unsigned long long int) var_13)), (var_5)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) -146209242)) ? (((/* implicit */int) (unsigned short)56740)) : (((/* implicit */int) var_16))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-17))) : (max((((/* implicit */unsigned long long int) arr_1 [i_5])), (var_5))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_3)) >= (((arr_17 [i_5] [i_5]) ? (((/* implicit */int) arr_17 [i_5] [i_5])) : (((/* implicit */int) var_6)))))))));
            var_26 *= ((/* implicit */signed char) ((((/* implicit */int) var_6)) * (((/* implicit */int) var_2))));
        }
        for (unsigned long long int i_9 = 0; i_9 < 20; i_9 += 2) 
        {
            var_27 = ((/* implicit */unsigned int) arr_6 [i_5] [(_Bool)1]);
            var_28 |= ((/* implicit */int) arr_12 [(unsigned short)5] [i_9] [i_9] [i_9] [(unsigned short)16] [i_9]);
        }
        for (unsigned short i_10 = 0; i_10 < 20; i_10 += 4) 
        {
            arr_37 [i_10] = ((((((((/* implicit */_Bool) 498351811)) ? (((/* implicit */long long int) 115647402U)) : (-6349287989071064150LL))) != (((/* implicit */long long int) ((var_7) / (((/* implicit */int) arr_23 [i_5] [i_5] [i_5]))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_17 [i_5] [i_5]))))) ^ ((-(var_1))))));
            var_29 = ((/* implicit */signed char) ((unsigned short) arr_35 [i_10] [i_10] [i_5]));
            var_30 = 2147483644;
        }
        var_31 = ((/* implicit */signed char) max((var_31), ((signed char)-52)));
    }
}
