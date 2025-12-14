/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187011
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187011 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187011
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
    for (signed char i_0 = 1; i_0 < 18; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_12 [i_0] [i_0] [i_2] [i_0] = ((/* implicit */unsigned short) (-(((/* implicit */int) (short)-1))));
                                var_12 = ((/* implicit */signed char) min((var_12), (((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0 + 1])) ? (((/* implicit */unsigned int) var_9)) : (arr_2 [i_0 + 1])))))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned long long int i_5 = 2; i_5 < 17; i_5 += 3) 
                {
                    for (long long int i_6 = 0; i_6 < 19; i_6 += 2) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (unsigned long long int i_7 = 2; i_7 < 18; i_7 += 2) 
                            {
                                var_13 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) ((unsigned short) arr_14 [i_1] [i_5] [i_0]))), (((((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_0] [i_0] [i_7 - 2] [i_6] [i_7] [i_7]))) % (4294967295U))))))));
                                arr_20 [i_7] [i_0] [18U] [i_5] [i_5] [i_0] [i_0] = ((/* implicit */long long int) (((!(((/* implicit */_Bool) (short)-18869)))) ? (min((min((((/* implicit */unsigned long long int) (short)-8402)), (var_7))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (short)18869))))))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)154)))))));
                                var_14 = ((/* implicit */unsigned int) min((var_14), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (arr_1 [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))) ? (((/* implicit */int) ((((/* implicit */int) arr_14 [(signed char)6] [i_1] [i_6])) < (var_0)))) : (((/* implicit */int) arr_17 [i_1] [i_7] [i_5 + 2] [i_6] [i_6] [i_7]))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_0 - 1] [i_5] [i_5] [i_1] [i_7 - 1] [i_1] [i_0])) ? (arr_1 [i_0] [(short)3]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [(unsigned char)2] [i_7] [(_Bool)1] [i_6] [i_6] [i_6])))))) ? (max((var_11), (((/* implicit */unsigned long long int) var_8)))) : (((/* implicit */unsigned long long int) ((2845087117U) << (((arr_18 [i_0] [i_1] [i_5] [(short)9]) + (1385000112)))))))) : (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_16 [i_7])))), (((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (unsigned char)252))))))))))));
                            }
                            var_15 ^= ((/* implicit */unsigned long long int) min(((-(((/* implicit */int) arr_3 [i_5 - 2])))), (((((/* implicit */_Bool) (unsigned char)252)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (_Bool)1))))));
                            var_16 = ((/* implicit */unsigned int) (-(((unsigned long long int) min((var_9), (((/* implicit */int) (unsigned short)53458)))))));
                            arr_21 [i_0 - 1] [i_0] [i_5] [i_6] = ((/* implicit */signed char) max((var_0), ((+(((/* implicit */int) (!(((/* implicit */_Bool) arr_14 [i_0] [i_1] [i_0])))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) 175616967415658044ULL)) ? (15935503967285204806ULL) : (0ULL)))));
    var_18 = ((/* implicit */unsigned char) var_3);
}
