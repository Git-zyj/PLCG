/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152362
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152362 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152362
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
    var_13 = (((!(((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))))) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) var_10))));
    var_14 = ((/* implicit */long long int) (~(((/* implicit */int) ((unsigned short) max((((/* implicit */long long int) (signed char)10)), (var_12)))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            for (unsigned char i_2 = 2; i_2 < 15; i_2 += 2) 
            {
                {
                    var_15 = ((/* implicit */unsigned long long int) var_12);
                    arr_7 [i_0] = ((/* implicit */int) ((long long int) ((long long int) (unsigned char)16)));
                    var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((var_12), (max((((/* implicit */long long int) (short)-18)), (0LL)))))) ? (((((/* implicit */_Bool) (+(-5528818715098747378LL)))) ? (((/* implicit */int) min(((_Bool)1), (arr_1 [i_2 + 2] [i_1])))) : (((((/* implicit */_Bool) var_3)) ? (var_6) : (((/* implicit */int) (_Bool)1)))))) : (((/* implicit */int) ((((/* implicit */int) (unsigned char)177)) == ((((_Bool)1) ? (((/* implicit */int) (unsigned char)4)) : (((/* implicit */int) (signed char)0)))))))));
                    /* LoopSeq 2 */
                    for (unsigned int i_3 = 0; i_3 < 17; i_3 += 1) 
                    {
                        arr_11 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */short) min((max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_2]))))), (((((/* implicit */_Bool) arr_8 [i_0])) ? (arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_2 - 2]))))))), ((~(arr_10 [i_0] [i_1] [i_2 + 2] [i_2 + 1] [i_3] [i_3])))));
                        var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) (+(((/* implicit */int) ((arr_9 [i_2 + 2] [i_2 + 1] [i_2] [i_2 - 2] [i_2 + 1] [i_0]) <= (arr_9 [i_3] [i_2 + 1] [i_2] [i_2 - 2] [i_1] [i_1])))))))));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_4 = 1; i_4 < 16; i_4 += 3) 
                    {
                        var_18 = (+(((/* implicit */int) ((((/* implicit */int) var_11)) != (((/* implicit */int) var_10))))));
                        arr_14 [i_4] |= ((/* implicit */signed char) ((((/* implicit */_Bool) -192275582)) ? (((1099511627520ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_0] [i_1] [i_2] [i_4]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!((_Bool)1)))))));
                        var_19 = ((/* implicit */unsigned char) var_10);
                        var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) ((((/* implicit */int) (((_Bool)1) && ((_Bool)1)))) >= (((/* implicit */int) (!(((/* implicit */_Bool) var_6))))))))));
                        arr_15 [i_0] [i_1] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((var_9) ? (arr_10 [i_0] [i_1] [i_2] [i_4] [i_1] [i_4]) : (var_2))) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                    }
                    var_21 = ((/* implicit */signed char) ((((((/* implicit */long long int) max((arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]), (((/* implicit */int) arr_6 [i_2]))))) & (max((((/* implicit */long long int) var_6)), (var_12))))) % (((/* implicit */long long int) ((/* implicit */int) var_8)))));
                }
            } 
        } 
    } 
}
