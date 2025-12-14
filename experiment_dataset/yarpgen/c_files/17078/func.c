/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17078
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17078 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17078
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 3; i_2 < 19; i_2 += 2) 
                {
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        {
                            var_11 = ((/* implicit */unsigned short) (-((~(var_6)))));
                            var_12 = var_6;
                        }
                    } 
                } 
                /* LoopSeq 4 */
                /* vectorizable */
                for (unsigned char i_4 = 0; i_4 < 22; i_4 += 1) /* same iter space */
                {
                    arr_12 [i_0] = ((((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (var_2))) + (((/* implicit */long long int) (~(var_7)))));
                    arr_13 [i_0] [i_0] [i_0] = ((((((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_4] [(_Bool)1])) <= (var_4))) && (((/* implicit */_Bool) ((arr_4 [i_0]) << (((((/* implicit */int) arr_1 [i_0] [i_0])) + (31208)))))));
                }
                for (unsigned char i_5 = 0; i_5 < 22; i_5 += 1) /* same iter space */
                {
                    var_13 ^= ((/* implicit */unsigned long long int) ((var_4) / ((+(((/* implicit */int) arr_5 [i_1] [i_0] [i_0 - 1] [i_0 - 1]))))));
                    arr_18 [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) var_3)) * (((var_3) ? (((var_7) & (((/* implicit */int) arr_0 [i_0])))) : (((((/* implicit */_Bool) 3289973031599500935ULL)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_8 [i_1]))))))));
                    var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_3)) - ((+(var_4)))));
                    /* LoopSeq 1 */
                    for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                    {
                        arr_22 [i_0] [i_1] [i_5] [i_5] [i_5] [i_0] = ((/* implicit */short) (!(((var_4) == (((/* implicit */int) arr_2 [i_0 - 1] [i_0] [i_6 - 1]))))));
                        var_15 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+(((/* implicit */int) min((arr_16 [i_5] [(unsigned short)4] [i_5] [i_6 - 1]), (((/* implicit */short) var_0))))))))));
                        var_16 = ((/* implicit */unsigned int) (((~(15156771042110050680ULL))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_5)) < (((/* implicit */int) min((var_0), (((/* implicit */unsigned char) var_10)))))))))));
                        arr_23 [i_0] [i_5] [i_0] = ((/* implicit */unsigned long long int) (~(((long long int) ((((/* implicit */int) arr_9 [i_0])) != (((/* implicit */int) arr_2 [i_0] [i_1] [i_0])))))));
                    }
                    arr_24 [i_0] = ((/* implicit */short) (+(((min((((/* implicit */long long int) var_7)), (var_2))) % (((/* implicit */long long int) (-(((/* implicit */int) arr_2 [i_0 - 1] [i_1] [i_5])))))))));
                }
                for (unsigned char i_7 = 0; i_7 < 22; i_7 += 1) /* same iter space */
                {
                    var_17 = ((/* implicit */long long int) ((unsigned char) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_7] [i_7]))) != (2246779604U))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_8))))) : (((((/* implicit */_Bool) var_8)) ? (arr_4 [i_0]) : (((/* implicit */unsigned long long int) var_4)))))));
                    var_18 &= ((/* implicit */unsigned short) var_2);
                    var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 4773843230224238413LL)) ? ((-(((((/* implicit */int) arr_10 [i_0] [i_0] [i_7])) / (-1691798559))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_1))))))))));
                    /* LoopSeq 1 */
                    for (signed char i_8 = 0; i_8 < 22; i_8 += 1) 
                    {
                        arr_31 [i_0] [i_7] [i_8] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_1))));
                        var_20 = ((/* implicit */short) ((((/* implicit */int) var_9)) - (((/* implicit */int) ((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_10)) : (var_7))) <= (((((/* implicit */int) (unsigned short)39882)) % (((/* implicit */int) var_8)))))))));
                    }
                }
                for (signed char i_9 = 2; i_9 < 21; i_9 += 2) 
                {
                    arr_34 [i_0] [i_0] [i_9] = ((/* implicit */unsigned char) var_7);
                    arr_35 [i_0] = ((/* implicit */unsigned short) var_7);
                }
                var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(var_2)))) ? (((var_5) ? (arr_15 [i_0 - 1] [i_0 - 1] [i_1]) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_0)) : (var_7))))) : ((+(((((/* implicit */_Bool) var_9)) ? (var_4) : (((/* implicit */int) arr_10 [i_0] [i_1] [15]))))))));
                /* LoopNest 3 */
                for (short i_10 = 4; i_10 < 18; i_10 += 1) 
                {
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        for (unsigned short i_12 = 0; i_12 < 22; i_12 += 1) 
                        {
                            {
                                var_22 += ((/* implicit */signed char) ((var_5) ? (((/* implicit */int) ((15156771042110050681ULL) != (((/* implicit */unsigned long long int) ((((/* implicit */long long int) var_4)) + (var_2))))))) : ((+((-(((/* implicit */int) arr_38 [i_0] [i_0] [i_12]))))))));
                                var_23 = ((/* implicit */unsigned char) (+((+(((/* implicit */int) (!(var_1))))))));
                                var_24 = ((/* implicit */long long int) min((var_24), (((((/* implicit */_Bool) ((arr_4 [i_1]) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (~(var_2)))) ? (((/* implicit */int) min((arr_29 [i_0] [i_1] [i_1] [i_11]), (var_0)))) : (((/* implicit */int) ((((/* implicit */int) var_3)) <= (((/* implicit */int) arr_1 [i_0] [10LL])))))))) : (((((/* implicit */_Bool) (unsigned short)54351)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_8)) : (var_7)))) : (arr_40 [i_0] [i_10 - 4] [i_11] [i_11])))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_25 = ((/* implicit */unsigned char) ((((/* implicit */long long int) (((!(((/* implicit */_Bool) var_10)))) ? (((/* implicit */int) var_5)) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned short)20494)) : (((/* implicit */int) var_0))))))) != (((((((/* implicit */_Bool) 15156771042110050690ULL)) && (((/* implicit */_Bool) var_8)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_1))))) : (((((/* implicit */_Bool) var_9)) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))));
}
