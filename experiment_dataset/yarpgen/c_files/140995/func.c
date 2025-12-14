/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140995
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140995 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140995
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
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            for (signed char i_2 = 2; i_2 < 23; i_2 += 1) 
            {
                for (short i_3 = 2; i_3 < 24; i_3 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned short i_4 = 2; i_4 < 21; i_4 += 1) 
                        {
                            var_17 += ((((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) var_9)) ? (var_14) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)2358))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) var_5)))) : (((unsigned int) ((var_14) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0] [i_0] [i_1] [i_3])))))));
                            arr_15 [i_0] [i_1] [i_2] [i_3 - 1] [i_4] [i_0] = ((/* implicit */unsigned short) max((((/* implicit */short) var_0)), (var_9)));
                            var_18 = ((/* implicit */signed char) ((((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) arr_13 [i_2 + 1] [i_0] [i_4] [i_4 + 1] [i_3 - 2])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [i_2 + 1] [i_1] [i_4] [i_4 + 1] [i_3 + 1]))))) : ((+(((/* implicit */int) arr_13 [i_2 - 1] [i_2 - 1] [i_4] [i_4 - 1] [i_3 + 1]))))));
                        }
                        var_19 = ((/* implicit */int) max((3549512128U), (((unsigned int) (((_Bool)1) ? (((/* implicit */unsigned long long int) 3549512121U)) : (8127992764129975357ULL))))));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_5 = 0; i_5 < 25; i_5 += 1) 
                        {
                            var_20 -= ((/* implicit */unsigned short) (~(((/* implicit */int) (_Bool)1))));
                            arr_19 [i_3 + 1] [i_3 + 1] [i_2 + 1] [i_3 + 1] [i_3 + 1] [i_2 + 1] &= ((/* implicit */short) var_8);
                            var_21 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) * (var_6))))));
                        }
                        var_22 = ((/* implicit */short) max((((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 6095431937935743774ULL)) ? (-3391977094835695224LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)10)))))) > (max((var_13), (((/* implicit */unsigned long long int) (signed char)-46))))))), (max((var_14), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) > (10318751309579576245ULL))))))));
                        /* LoopSeq 1 */
                        for (long long int i_6 = 0; i_6 < 25; i_6 += 1) 
                        {
                            var_23 = ((/* implicit */int) min((var_23), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_1 [i_2 + 2])))) & (((unsigned long long int) 4891996313934750072LL)))))));
                            arr_24 [i_1] [i_3] [i_1] [i_1] [i_0] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_10)))), (((((/* implicit */int) arr_12 [i_3 - 2] [i_3 - 2] [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_3 - 1] [i_3 - 1])) - (((/* implicit */int) arr_12 [i_3 + 1] [i_3 - 2] [i_3 - 1] [i_3 - 1] [i_3 - 2] [i_3 - 1] [i_3 + 1]))))));
                            arr_25 [i_2] [i_2] [i_2 + 1] = ((/* implicit */signed char) var_13);
                        }
                    }
                } 
            } 
        } 
        var_24 = ((/* implicit */short) (~(((/* implicit */int) ((arr_0 [i_0]) > (arr_0 [i_0]))))));
        arr_26 [i_0] [i_0] = ((((/* implicit */_Bool) arr_7 [i_0] [i_0])) && (((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_21 [i_0])) && (((/* implicit */_Bool) arr_2 [i_0] [i_0])))) ? (min((-986564251), (((/* implicit */int) (signed char)-107)))) : (((/* implicit */int) arr_20 [i_0] [i_0] [i_0] [i_0]))))));
    }
    for (long long int i_7 = 0; i_7 < 14; i_7 += 1) 
    {
        arr_30 [i_7] = ((/* implicit */long long int) (~(arr_18 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7])));
        var_25 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) var_12)), ((~(4294967293U))))))));
    }
    var_26 = ((((/* implicit */_Bool) var_4)) ? (var_11) : (var_2));
}
