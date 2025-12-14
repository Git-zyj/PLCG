/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170964
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170964 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170964
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
    var_12 = ((/* implicit */unsigned short) var_7);
    /* LoopSeq 1 */
    for (short i_0 = 1; i_0 < 18; i_0 += 1) 
    {
        var_13 = ((/* implicit */unsigned short) max((var_13), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((var_4), (((/* implicit */unsigned int) max((arr_1 [16]), (((/* implicit */unsigned short) var_0)))))))))))));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 1; i_1 < 16; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 20; i_2 += 2) 
            {
                {
                    /* LoopSeq 4 */
                    for (unsigned short i_3 = 0; i_3 < 20; i_3 += 3) 
                    {
                        arr_11 [i_0] [i_0] [i_2] [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_2 [i_0 + 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (arr_6 [2ULL] [(unsigned short)0] [8]))))))));
                        /* LoopSeq 3 */
                        for (unsigned short i_4 = 0; i_4 < 20; i_4 += 1) 
                        {
                            var_14 *= ((/* implicit */unsigned short) arr_7 [i_0] [(_Bool)1] [i_2] [i_3]);
                            var_15 = ((/* implicit */int) arr_15 [i_0 + 2] [i_1] [i_2] [i_2] [i_0 + 2]);
                            arr_16 [i_0] = ((/* implicit */long long int) arr_9 [(unsigned short)15] [i_4]);
                        }
                        for (signed char i_5 = 0; i_5 < 20; i_5 += 1) 
                        {
                            arr_20 [i_0] [i_5] = ((/* implicit */long long int) max((((/* implicit */unsigned int) (signed char)43)), (arr_0 [i_5] [(unsigned char)10])));
                            arr_21 [(short)19] [i_1] [i_2] [i_0] [i_5] [i_0] [(short)19] = ((((((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-44))) : (var_6))) | (((/* implicit */long long int) arr_13 [i_1 + 2] [i_1 + 2] [i_0])))) >= (((/* implicit */long long int) arr_19 [i_0] [i_1 + 2] [i_0])));
                            var_16 = ((/* implicit */unsigned int) (+(min((var_6), (((/* implicit */long long int) ((4294967295U) <= (((/* implicit */unsigned int) ((/* implicit */int) var_5))))))))));
                            arr_22 [i_0] [i_0] [i_0 + 1] [i_0] [i_0] = (+(((((/* implicit */int) ((((/* implicit */int) (unsigned short)10068)) == (((/* implicit */int) var_11))))) - ((-(((/* implicit */int) (unsigned char)254)))))));
                        }
                        for (unsigned char i_6 = 0; i_6 < 20; i_6 += 3) 
                        {
                            var_17 *= ((/* implicit */short) var_1);
                            var_18 *= ((/* implicit */short) var_4);
                        }
                        arr_25 [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) (short)-22382))));
                        arr_26 [i_0] [i_1] [i_1] [i_1] [i_1] [i_0] = ((/* implicit */long long int) max((((var_11) ? (arr_5 [i_0]) : (arr_5 [i_0]))), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((var_4) + (var_4)))) / (((((/* implicit */_Bool) arr_12 [i_3] [i_2] [i_2] [i_0] [i_1 - 1] [i_1 - 1] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (-8041723207965808577LL))))))));
                    }
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        var_19 = min((((/* implicit */unsigned int) (unsigned char)255)), (arr_6 [i_7] [i_2] [i_0]));
                        var_20 = ((/* implicit */signed char) (~(2906818491U)));
                        arr_30 [i_0] [i_0] [(signed char)13] [i_2] [i_0] [i_7] = ((/* implicit */long long int) ((((/* implicit */_Bool) max(((+(((/* implicit */int) var_1)))), (arr_13 [i_0] [i_2] [i_0])))) ? (((/* implicit */int) ((min((((/* implicit */unsigned int) var_1)), (arr_7 [i_0] [18] [i_0] [i_2]))) <= (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_5))))))))) : (((((/* implicit */_Bool) arr_6 [i_0 + 1] [i_1 + 3] [i_2])) ? (((457888634) / (((/* implicit */int) arr_15 [i_1] [i_1] [i_2] [i_0] [(_Bool)1])))) : (((/* implicit */int) ((signed char) (short)32758)))))));
                    }
                    for (unsigned int i_8 = 0; i_8 < 20; i_8 += 2) 
                    {
                        var_21 = (((!(((/* implicit */_Bool) (-(arr_29 [6LL] [i_0] [i_0] [i_0])))))) && (((/* implicit */_Bool) arr_0 [i_8] [(unsigned char)18])));
                        /* LoopSeq 1 */
                        for (short i_9 = 0; i_9 < 20; i_9 += 2) 
                        {
                            var_22 = ((/* implicit */signed char) arr_7 [i_1] [i_1] [i_0] [i_8]);
                            var_23 = ((/* implicit */unsigned int) ((unsigned long long int) (unsigned short)29082));
                            arr_37 [i_0] [i_0] [16LL] [i_0 - 1] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) == (281022363712578627ULL)));
                            var_24 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((arr_2 [i_2]), (((/* implicit */int) (signed char)121)))))));
                            arr_38 [(_Bool)1] [i_1 + 2] [i_0] [i_1 + 2] [i_9] = ((/* implicit */unsigned short) (~(((arr_7 [i_0 + 1] [i_1] [i_0] [i_0 + 1]) + (arr_7 [i_0 + 2] [i_1 + 3] [i_0] [i_1 + 3])))));
                        }
                        var_25 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned int) ((((/* implicit */long long int) ((/* implicit */int) var_0))) * (var_10))))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) ((short) (short)231)))));
                    }
                    for (unsigned char i_10 = 2; i_10 < 18; i_10 += 3) 
                    {
                        var_26 = ((/* implicit */_Bool) (short)-1);
                        var_27 = ((/* implicit */unsigned short) (+(max((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)126))) <= (var_4)))), (arr_19 [i_0 + 1] [i_1] [i_0])))));
                        var_28 = ((/* implicit */unsigned char) arr_7 [i_10 - 2] [i_0] [i_0] [i_0 + 2]);
                    }
                    var_29 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_0 - 1])) ? (((/* implicit */int) arr_17 [i_0 - 1])) : (((/* implicit */int) arr_17 [i_0 - 1]))))) ? (((-304589490) / ((-2147483647 - 1)))) : (((/* implicit */int) var_7))));
                    var_30 = ((/* implicit */unsigned short) min((var_30), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_11))) - (var_10)))) ? (((((/* implicit */_Bool) var_5)) ? (arr_18 [i_2] [i_1 + 1] [i_1 + 3] [i_1 + 3] [i_0 + 1] [i_2]) : (((/* implicit */long long int) ((/* implicit */int) var_3))))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_13 [i_0 + 2] [i_0 + 2] [i_2])))))))));
                }
            } 
        } 
        var_31 = ((/* implicit */unsigned int) max((var_31), (((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) var_2)))))))));
    }
    var_32 = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((unsigned long long int) var_2)) <= (((/* implicit */unsigned long long int) var_4)))))) != (min((1804655084U), (max((1388148804U), (((/* implicit */unsigned int) var_2))))))));
}
