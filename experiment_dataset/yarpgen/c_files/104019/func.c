/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104019
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104019 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104019
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
    var_14 = ((/* implicit */unsigned long long int) var_4);
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 13; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 15; i_1 += 3) 
        {
            {
                arr_6 [i_1 + 1] [(_Bool)1] &= ((/* implicit */short) ((unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) var_1)) << (((((/* implicit */int) arr_2 [i_0])) - (82)))))) ? ((~(arr_1 [i_0 + 1] [i_1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0] [i_1])))))))));
                /* LoopSeq 3 */
                for (unsigned int i_2 = 0; i_2 < 16; i_2 += 4) /* same iter space */
                {
                    var_15 ^= ((/* implicit */unsigned long long int) ((int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_3))))) ^ (((/* implicit */int) arr_2 [i_0 + 3])))));
                    var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) (~(((/* implicit */int) ((arr_0 [i_0 + 3] [i_1]) >= (arr_0 [i_0 + 2] [i_1 - 1])))))))));
                    arr_9 [(short)6] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned short) (!(var_12))))) ^ (((((/* implicit */_Bool) (unsigned char)204)) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) >= (arr_5 [i_2] [i_2])))) : (((/* implicit */int) var_9))))));
                }
                for (unsigned int i_3 = 0; i_3 < 16; i_3 += 4) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_4 = 3; i_4 < 15; i_4 += 4) 
                    {
                        for (int i_5 = 0; i_5 < 16; i_5 += 4) 
                        {
                            {
                                var_17 &= ((/* implicit */short) max((((2147483625) / (((/* implicit */int) arr_16 [(signed char)8] [i_5] [7] [(signed char)8] [7] [i_4 - 2] [13U])))), ((+(2147483625)))));
                                arr_20 [i_5] [i_4] [i_3] [i_1] [i_0] = ((/* implicit */unsigned long long int) (_Bool)0);
                                var_18 = ((/* implicit */int) arr_1 [i_0 + 2] [i_1]);
                                arr_21 [i_0] [i_0 - 1] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_1 - 1] [i_0 + 3] [i_0 + 3] [i_0] [i_0])) ? (((/* implicit */int) arr_15 [13] [i_0])) : (((/* implicit */int) (_Bool)1))))) ? (min((((/* implicit */unsigned long long int) arr_8 [i_1] [i_0 - 1] [i_0] [(signed char)7])), (arr_14 [i_1 - 1] [i_0 - 1] [i_0 + 1] [i_0 - 1] [i_0]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_8 [9ULL] [i_0 + 1] [i_0 + 3] [i_0]))))));
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */short) ((((/* implicit */_Bool) arr_19 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))) : (((((/* implicit */_Bool) arr_1 [i_1] [i_0 + 1])) ? ((~(var_6))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))));
                }
                for (unsigned int i_6 = 0; i_6 < 16; i_6 += 4) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (unsigned short i_7 = 0; i_7 < 16; i_7 += 1) 
                    {
                        for (unsigned int i_8 = 1; i_8 < 12; i_8 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_8))))), ((unsigned short)30560)))) || (((/* implicit */_Bool) arr_26 [i_1 + 1] [i_0 + 1]))));
                                var_21 -= ((/* implicit */unsigned long long int) (short)12536);
                                var_22 ^= ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((((/* implicit */_Bool) (signed char)27)) || (((/* implicit */_Bool) arr_1 [12LL] [i_8])))))))) - (max(((~(arr_14 [i_0] [i_0] [i_6] [10] [7ULL]))), (arr_26 [i_1] [i_1]))));
                                var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) (~(((((((/* implicit */_Bool) arr_18 [i_0] [i_1])) ? (((/* implicit */int) arr_8 [i_8] [i_7] [(_Bool)1] [i_1])) : (((/* implicit */int) arr_8 [i_0] [i_1] [i_0] [14U])))) | (min((-1974173527), (((/* implicit */int) arr_7 [i_0] [i_0] [i_0])))))))))));
                            }
                        } 
                    } 
                    arr_29 [i_1 - 1] [i_1 - 1] [i_0] &= ((/* implicit */unsigned int) ((unsigned char) ((unsigned char) 1828512960466022857ULL)));
                    /* LoopNest 2 */
                    for (signed char i_9 = 3; i_9 < 12; i_9 += 1) 
                    {
                        for (unsigned long long int i_10 = 2; i_10 < 13; i_10 += 1) 
                        {
                            {
                                var_24 += ((/* implicit */short) ((((/* implicit */_Bool) (~(arr_13 [i_0 + 2] [i_1] [i_9 - 1] [i_10 + 3] [4] [i_10 + 2])))) ? (arr_30 [i_6] [i_6] [i_6] [i_0 + 1] [i_1] [i_0 + 1]) : (((/* implicit */int) (!(((/* implicit */_Bool) 702496396)))))));
                                var_25 -= ((/* implicit */int) (!((!(((/* implicit */_Bool) (signed char)9))))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    var_26 = ((/* implicit */short) (~(((/* implicit */int) var_9))));
    var_27 = ((/* implicit */int) var_3);
    var_28 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((3191757131U) >> (((8388608) - (8388598)))))) ? (((/* implicit */int) ((_Bool) ((unsigned int) var_8)))) : (var_10)));
}
