/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138822
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138822 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138822
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
    var_14 = ((/* implicit */long long int) max((var_14), (((/* implicit */long long int) var_12))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        /* LoopSeq 3 */
        for (long long int i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (var_3)))), (var_10)))) ? (((/* implicit */int) max((((/* implicit */short) arr_3 [i_1] [i_0])), (var_5)))) : (((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) << (((var_10) - (8953463800308383678ULL)))))) ? (((/* implicit */int) ((((/* implicit */int) var_9)) != (((/* implicit */int) var_2))))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_2 [i_1])) : (((/* implicit */int) arr_6 [15ULL] [i_1] [i_1]))))))));
            /* LoopSeq 1 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((arr_4 [i_2]) + (2147483647))) << (((((((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-12706))) : (var_6))) + (12730LL))) - (23LL)))))) && (((/* implicit */_Bool) min((((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) + (var_7))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (short)-12692)) : (arr_4 [i_1])))))))));
                var_17 = ((/* implicit */short) ((((/* implicit */_Bool) ((((long long int) var_8)) << (((((/* implicit */int) (short)8189)) - (8160)))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) arr_5 [18ULL] [(signed char)15]))) ? (((((/* implicit */_Bool) var_2)) ? (2852650448816754277ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0] [i_0] [i_0]))))) : (((((/* implicit */_Bool) 33554431)) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_1]))))))))));
                var_18 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) var_8)) ^ (((/* implicit */int) ((signed char) 15594093624892797339ULL)))))) ? (min((((/* implicit */long long int) arr_1 [i_2] [i_1])), (((long long int) (short)-8214)))) : (((/* implicit */long long int) ((var_1) & (((/* implicit */int) arr_1 [i_0] [i_2])))))));
                arr_9 [i_2] [i_1] [i_0] = ((/* implicit */unsigned short) ((_Bool) (!(((/* implicit */_Bool) 16269220380958188165ULL)))));
            }
        }
        /* vectorizable */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned short i_4 = 0; i_4 < 22; i_4 += 3) 
            {
                for (short i_5 = 0; i_5 < 22; i_5 += 2) 
                {
                    {
                        arr_16 [i_3] = ((/* implicit */unsigned short) ((unsigned long long int) 2852650448816754284ULL));
                        var_19 = ((/* implicit */_Bool) min((var_19), (((((/* implicit */int) (unsigned char)170)) == (((/* implicit */int) (unsigned short)24703))))));
                    }
                } 
            } 
            arr_17 [i_0] [i_3] |= ((/* implicit */short) (!(((/* implicit */_Bool) 16521607705422707599ULL))));
        }
        for (unsigned short i_6 = 0; i_6 < 22; i_6 += 4) 
        {
            /* LoopNest 2 */
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                for (unsigned int i_8 = 3; i_8 < 19; i_8 += 2) 
                {
                    {
                        var_20 += ((/* implicit */short) arr_25 [i_0] [i_0] [(short)0] [i_8]);
                        var_21 = ((/* implicit */short) ((unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) var_12))))) ? (min((var_11), (((/* implicit */int) (unsigned char)19)))) : (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) var_4)) : (var_11))))));
                    }
                } 
            } 
            arr_27 [i_0] = ((/* implicit */int) var_8);
        }
        var_22 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((((/* implicit */int) var_9)) | (((/* implicit */int) var_2))))) || (((_Bool) -8263485595544221257LL)))) ? (((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_5)), (var_3)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_23 [(short)10] [i_0] [i_0] [i_0])) : (((/* implicit */int) (unsigned short)41956)))))))) : (min((((/* implicit */int) var_13)), (((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0] [17LL])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_9))))))));
    }
    var_23 |= ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (var_1) : (2147483647)))) ? (((/* implicit */unsigned int) max((var_11), (((/* implicit */int) var_2))))) : (((unsigned int) var_7))))));
    var_24 = ((/* implicit */signed char) ((unsigned char) var_7));
}
