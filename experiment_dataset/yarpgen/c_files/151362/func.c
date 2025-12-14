/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151362
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151362 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151362
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
    var_16 = ((/* implicit */_Bool) min((var_16), (var_6)));
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            var_17 = ((/* implicit */short) (signed char)-46);
            var_18 = ((/* implicit */_Bool) ((((-1419659482) + (2147483647))) >> (((/* implicit */int) ((((/* implicit */int) var_0)) > (((/* implicit */int) arr_2 [i_0] [i_0] [i_0])))))));
            /* LoopNest 3 */
            for (unsigned char i_2 = 0; i_2 < 14; i_2 += 1) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    for (long long int i_4 = 0; i_4 < 14; i_4 += 1) 
                    {
                        {
                            var_19 ^= ((/* implicit */short) (_Bool)1);
                            arr_13 [i_1] [i_2] [i_2] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_6 [i_2] [i_1] [i_1]))));
                        }
                    } 
                } 
            } 
        }
        for (unsigned long long int i_5 = 0; i_5 < 14; i_5 += 1) 
        {
            arr_16 [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)0)) ? (min((arr_10 [i_0] [i_0] [i_5] [i_5]), (arr_10 [i_0] [i_0] [i_0] [i_5]))) : ((~(arr_10 [i_0] [i_0] [i_0] [i_5])))));
            var_20 *= ((/* implicit */unsigned long long int) min((((((/* implicit */int) (signed char)-24)) * (((/* implicit */int) arr_2 [i_5] [i_0] [i_0])))), (((/* implicit */int) arr_2 [i_0] [i_5] [i_0]))));
            var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)101)))))));
            var_22 &= ((/* implicit */unsigned int) ((unsigned long long int) ((((/* implicit */int) ((arr_10 [i_0] [i_0] [i_0] [i_0]) > (((/* implicit */int) (short)-4))))) % ((-(((/* implicit */int) (_Bool)1)))))));
            arr_17 [i_0] [i_0] = ((/* implicit */signed char) ((max(((+(arr_10 [i_5] [(_Bool)1] [(_Bool)1] [i_5]))), ((((_Bool)1) ? (((/* implicit */int) arr_15 [i_0] [i_0] [i_5])) : (((/* implicit */int) (_Bool)1)))))) >> (((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_5] [i_5])))))));
        }
        var_23 ^= ((short) ((((/* implicit */int) (unsigned char)6)) ^ (((/* implicit */int) (unsigned short)62511))));
    }
    /* vectorizable */
    for (short i_6 = 0; i_6 < 23; i_6 += 1) 
    {
        var_24 = ((/* implicit */_Bool) ((arr_18 [i_6] [i_6]) ? (((/* implicit */int) arr_18 [i_6] [i_6])) : (((/* implicit */int) arr_18 [i_6] [i_6]))));
        var_25 |= ((/* implicit */short) (+(((/* implicit */int) (!((_Bool)1))))));
    }
    for (unsigned long long int i_7 = 1; i_7 < 15; i_7 += 1) 
    {
        arr_25 [i_7] = ((/* implicit */_Bool) ((((/* implicit */int) min(((signed char)-1), (((/* implicit */signed char) (_Bool)1))))) ^ (1924306369)));
        var_26 = ((/* implicit */short) min((var_26), (((/* implicit */short) ((((((/* implicit */int) (signed char)0)) | (((((/* implicit */int) var_8)) | (var_10))))) + (((/* implicit */int) var_9)))))));
    }
}
