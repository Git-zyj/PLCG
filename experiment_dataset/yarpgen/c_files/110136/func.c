/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110136
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110136 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110136
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
    var_11 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) var_1))) < (min((1240053752U), (((/* implicit */unsigned int) ((short) 1297550436010558554LL)))))));
    /* LoopSeq 4 */
    for (short i_0 = 0; i_0 < 24; i_0 += 2) /* same iter space */
    {
        var_12 ^= ((/* implicit */unsigned int) max((((((arr_1 [i_0] [i_0]) & (arr_1 [18] [18]))) & (arr_1 [9LL] [i_0]))), ((((-(-1))) + (((/* implicit */int) var_6))))));
        var_13 ^= ((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) var_4))) <= (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (arr_0 [i_0])))))), ((-(((((/* implicit */unsigned int) arr_1 [i_0] [i_0])) / (arr_0 [i_0])))))));
    }
    for (short i_1 = 0; i_1 < 24; i_1 += 2) /* same iter space */
    {
        arr_4 [i_1] = ((/* implicit */unsigned short) max((-1), (-1)));
        var_14 = ((/* implicit */unsigned char) max((var_14), (((/* implicit */unsigned char) (+(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned short) var_0)), (var_1))))) <= (arr_0 [i_1])))))))));
    }
    for (long long int i_2 = 0; i_2 < 22; i_2 += 4) 
    {
        arr_7 [i_2] [i_2] = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)8190))))) ? (((((/* implicit */int) var_0)) / (arr_3 [i_2]))) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) <= (var_3))))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (long long int i_3 = 0; i_3 < 22; i_3 += 3) 
        {
            arr_12 [(unsigned short)13] [i_3] = ((/* implicit */short) (!(((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)13230)))))));
            arr_13 [i_2] [i_3] = ((/* implicit */long long int) ((var_4) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [(signed char)20] [(short)13]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) -1)))))));
        }
        arr_14 [(signed char)13] [(signed char)13] = ((/* implicit */int) min((1240053757U), (1240053752U)));
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 10; i_4 += 3) 
    {
        arr_18 [i_4] [i_4] = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_4]))) >= ((-(7312791852203668731LL)))));
        /* LoopNest 2 */
        for (unsigned char i_5 = 1; i_5 < 7; i_5 += 4) 
        {
            for (int i_6 = 0; i_6 < 10; i_6 += 3) 
            {
                {
                    arr_25 [i_4] [i_4] [9] [i_6] = ((/* implicit */short) ((_Bool) -7378634178239417618LL));
                    arr_26 [i_4] = ((/* implicit */unsigned short) (+(-1297550436010558554LL)));
                }
            } 
        } 
    }
}
