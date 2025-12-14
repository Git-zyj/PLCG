/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159549
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159549 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159549
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
    var_13 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((max((((/* implicit */long long int) var_12)), (var_0))) ^ (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) var_12)), (var_2))))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (unsigned short)0))));
        var_14 = ((/* implicit */unsigned long long int) arr_0 [i_0] [i_0]);
        var_15 = ((/* implicit */unsigned short) var_0);
        arr_3 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)5))))) ? (((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_0]))) & (arr_1 [i_0]))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)8)))));
    }
    for (long long int i_1 = 0; i_1 < 23; i_1 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 4) 
        {
            for (unsigned long long int i_3 = 0; i_3 < 23; i_3 += 1) 
            {
                for (unsigned int i_4 = 0; i_4 < 23; i_4 += 2) 
                {
                    {
                        arr_17 [(signed char)20] [i_2] [i_3] [i_4] = ((/* implicit */unsigned short) var_0);
                        /* LoopSeq 3 */
                        for (unsigned long long int i_5 = 3; i_5 < 21; i_5 += 4) 
                        {
                            arr_20 [i_5] [i_5] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */long long int) (~(min((arr_15 [i_5 - 3] [6] [6] [i_5] [i_5 - 2] [i_5]), (((/* implicit */unsigned long long int) (!(var_9))))))));
                            arr_21 [i_1] [i_1] [i_1] [i_4] [i_5 - 1] [i_4] [i_5] = ((/* implicit */int) var_3);
                            arr_22 [8ULL] [8ULL] [i_1] [16U] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)2)) < (((/* implicit */int) (unsigned short)1))))), (((var_6) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))))) ? (((((/* implicit */_Bool) arr_5 [i_5])) ? (((/* implicit */int) arr_19 [i_5] [i_4] [i_4] [i_5] [i_2] [i_1] [i_1])) : (((((/* implicit */int) (unsigned short)7)) >> (((/* implicit */int) (unsigned short)5)))))) : (((/* implicit */int) ((_Bool) ((var_9) ? (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_4]))) : (var_0)))))));
                            var_16 = ((/* implicit */unsigned long long int) (+(max((((/* implicit */int) ((signed char) (unsigned short)5))), ((-(((/* implicit */int) var_1))))))));
                        }
                        for (unsigned int i_6 = 0; i_6 < 23; i_6 += 4) 
                        {
                            var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_9 [i_2] [i_3] [(unsigned short)17]))))) ? (((/* implicit */int) arr_25 [i_1] [i_2] [i_3] [i_4] [i_6])) : ((-(((/* implicit */int) var_1))))));
                            arr_26 [i_3] [i_3] [9LL] [9LL] = ((/* implicit */unsigned short) max((max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)1)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned short)65535))))), ((-(var_6))))), (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned short)65522)) : (((/* implicit */int) var_9)))), (((/* implicit */int) var_12)))))));
                            var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)10)) ? (((/* implicit */int) min(((unsigned short)4), (max((((/* implicit */unsigned short) arr_5 [i_1])), ((unsigned short)9)))))) : ((~(((((/* implicit */_Bool) (unsigned short)65534)) ? (((/* implicit */int) (unsigned short)8)) : (((/* implicit */int) var_1))))))));
                        }
                        for (unsigned long long int i_7 = 0; i_7 < 23; i_7 += 3) 
                        {
                            var_19 += ((/* implicit */signed char) (+(((/* implicit */int) var_2))));
                            arr_29 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) arr_12 [i_1] [i_3] [i_3])) ? (((/* implicit */long long int) ((((/* implicit */int) var_1)) << (((var_8) - (1300130434683081383LL)))))) : (((((/* implicit */_Bool) arr_12 [i_1] [i_2] [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65534))) : (arr_12 [i_1] [i_1] [i_1])))));
                            var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((max((((/* implicit */long long int) var_12)), (var_0))) | (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)2)) || (((/* implicit */_Bool) var_1))))))))) || (((/* implicit */_Bool) (+(((/* implicit */int) var_4)))))));
                        }
                    }
                } 
            } 
        } 
        arr_30 [(_Bool)1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) var_7))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)2))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) - (arr_27 [10ULL] [(_Bool)1] [i_1] [i_1] [i_1] [(_Bool)0] [i_1])))))) || (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_0)), (var_6))))));
        arr_31 [i_1] = ((/* implicit */short) ((unsigned long long int) ((long long int) var_11)));
        var_21 = ((/* implicit */unsigned char) ((((((/* implicit */long long int) ((/* implicit */int) (unsigned short)18))) <= (var_0))) ? (min((var_10), (((/* implicit */long long int) (~(((/* implicit */int) var_2))))))) : (((/* implicit */long long int) (+(((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_4)))))))));
    }
}
