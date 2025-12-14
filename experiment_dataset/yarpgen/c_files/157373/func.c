/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157373
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157373 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157373
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
    var_11 = ((/* implicit */unsigned short) (+((+((~(((/* implicit */int) (signed char)42))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 12; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 16; i_2 += 2) 
                {
                    for (signed char i_3 = 0; i_3 < 16; i_3 += 3) 
                    {
                        {
                            var_12 = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-29256)) ? (4294967293U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-1)))))) <= (arr_4 [i_0] [i_0] [i_2] [i_3])))) < (((((/* implicit */_Bool) arr_5 [i_3] [(short)0] [i_3])) ? (((/* implicit */int) max((arr_8 [i_0] [i_2] [i_2]), (((/* implicit */unsigned char) arr_9 [(short)15] [i_1] [i_1] [i_1] [i_1] [i_2]))))) : ((+(((/* implicit */int) var_9))))))));
                            /* LoopSeq 2 */
                            for (short i_4 = 0; i_4 < 16; i_4 += 4) 
                            {
                                var_13 = min((min((arr_5 [i_0 + 4] [i_0 + 4] [i_0 + 1]), (arr_5 [i_0 - 1] [i_0 + 1] [i_0 + 3]))), (((/* implicit */long long int) (!(((/* implicit */_Bool) max((((/* implicit */long long int) arr_7 [i_0] [i_0] [i_0] [(unsigned short)15] [i_3])), (7675508940422677636LL))))))));
                                arr_13 [i_0] [i_0] [i_2] [i_3] [i_3] = ((/* implicit */int) ((long long int) 897093782U));
                                arr_14 [i_3] [i_4] [i_3] [i_3] [i_3] = ((/* implicit */unsigned int) ((((7675508940422677636LL) <= (((/* implicit */long long int) -2046796159)))) ? (((((/* implicit */long long int) 781426582)) / (((-7675508940422677643LL) / (((/* implicit */long long int) var_6)))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_3] [i_0 - 1] [i_2] [i_3] [i_4] [i_3]))))))));
                                var_14 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) arr_4 [i_0] [0] [i_2] [i_3]))) ? (((/* implicit */long long int) var_8)) : (-7675508940422677643LL)))) ? ((-(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)127))))))) : (((/* implicit */int) (!(((((/* implicit */int) arr_10 [i_4] [i_3] [(unsigned short)3] [i_1] [i_1] [i_0])) <= (((/* implicit */int) var_3))))))));
                                var_15 = ((/* implicit */signed char) var_8);
                            }
                            for (unsigned char i_5 = 3; i_5 < 15; i_5 += 4) 
                            {
                                arr_17 [i_3] [i_5 - 3] [9ULL] [i_1] [i_1] [i_1] [i_3] = (((+(arr_16 [i_0 + 3] [i_5 - 1] [i_5 - 3] [i_0 + 3] [i_3]))) - (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_12 [i_0] [(unsigned short)4] [i_0 + 3] [i_5] [i_5 + 1] [i_5 - 3]), (arr_12 [(unsigned char)6] [(unsigned char)6] [i_0 + 3] [i_1] [i_5 + 1] [i_5 + 1]))))));
                                var_16 = ((/* implicit */signed char) var_8);
                                arr_18 [i_3] [i_3] = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) (-(((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)0)), ((unsigned char)255))))))), (3397873514U)));
                                arr_19 [i_0] [4] [i_2] [i_3] [i_5] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 897093782U)) - (16888726001250260069ULL)))) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (unsigned char)208)))))));
                            }
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_6 = 0; i_6 < 16; i_6 += 2) 
                {
                    for (int i_7 = 2; i_7 < 12; i_7 += 2) 
                    {
                        {
                            arr_25 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) arr_22 [i_0] [i_0 - 1] [i_0 - 1]);
                            var_17 = ((/* implicit */unsigned char) var_3);
                        }
                    } 
                } 
            }
        } 
    } 
    var_18 = ((/* implicit */int) var_0);
    var_19 = ((/* implicit */short) var_4);
    var_20 = ((/* implicit */int) max((-1289772773210265780LL), (7675508940422677655LL)));
}
