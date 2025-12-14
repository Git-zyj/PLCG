/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165486
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165486 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165486
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
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 25; i_2 += 2) 
            {
                {
                    arr_7 [i_0] [14ULL] [(signed char)21] = ((/* implicit */short) ((((/* implicit */_Bool) var_18)) ? (((int) (_Bool)1)) : (((/* implicit */int) ((_Bool) (-2147483647 - 1))))));
                    arr_8 [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) (unsigned char)127)) : (((/* implicit */int) (unsigned short)41068)))) : (((/* implicit */int) var_13))))) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) var_12)))) : (((((/* implicit */_Bool) arr_5 [i_2] [i_1] [i_0])) ? (((long long int) var_16)) : (((/* implicit */long long int) ((/* implicit */int) var_2))))));
                    var_20 ^= ((/* implicit */signed char) arr_6 [i_2] [i_2] [i_2] [i_2]);
                }
            } 
        } 
        arr_9 [i_0] = ((((/* implicit */_Bool) 4156660444824008237ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)0)));
        var_21 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((int) var_12)))));
        arr_10 [i_0] = ((short) var_19);
    }
    /* vectorizable */
    for (signed char i_3 = 0; i_3 < 11; i_3 += 2) 
    {
        arr_14 [i_3] [i_3] = ((/* implicit */_Bool) (+(((/* implicit */int) var_10))));
        var_22 = ((/* implicit */short) min((var_22), (((short) ((arr_6 [8LL] [i_3] [i_3] [i_3]) < (((/* implicit */int) var_8)))))));
        arr_15 [i_3] [i_3] |= ((/* implicit */unsigned char) var_17);
        arr_16 [i_3] [i_3] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_7)) ? (((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) var_6)))) : (((/* implicit */int) (signed char)47))));
        arr_17 [i_3] = ((/* implicit */unsigned char) ((((int) (unsigned char)141)) % (((/* implicit */int) arr_11 [i_3]))));
    }
    for (signed char i_4 = 0; i_4 < 21; i_4 += 2) 
    {
        var_23 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_4]))) ^ (var_9)))) ? (((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (var_5))) : (((/* implicit */unsigned long long int) arr_19 [i_4]))));
        var_24 = ((/* implicit */short) arr_5 [i_4] [i_4] [i_4]);
        /* LoopNest 3 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            for (unsigned int i_6 = 0; i_6 < 21; i_6 += 2) 
            {
                for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
                {
                    {
                        var_25 = ((/* implicit */unsigned long long int) max((var_25), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)115)) ? (((((/* implicit */_Bool) arr_28 [i_7 + 1] [10U] [i_5] [i_4] [i_4])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_16))) : (var_9))) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_24 [i_6] [i_7 + 1] [i_7])))))))));
                        var_26 = ((/* implicit */unsigned long long int) (signed char)18);
                        arr_30 [i_4] [i_5] [i_6] [13ULL] [i_5] [13ULL] = ((/* implicit */signed char) max((((/* implicit */int) var_6)), (((((/* implicit */_Bool) ((var_6) ? (var_5) : (((/* implicit */unsigned long long int) var_9))))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned char)123)))) : (((/* implicit */int) (unsigned short)53914))))));
                        var_27 = ((/* implicit */long long int) min((var_27), (((/* implicit */long long int) var_16))));
                    }
                } 
            } 
        } 
    }
    var_28 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (var_0)))) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_2)) : (var_17))) : (((((/* implicit */int) var_18)) + (((/* implicit */int) var_13))))))) ? (min((var_0), (((/* implicit */unsigned long long int) var_16)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) ((unsigned char) (unsigned short)12866))) >= (var_11)))))));
    var_29 *= ((unsigned short) ((_Bool) max((var_17), (((/* implicit */int) var_10)))));
    var_30 = ((/* implicit */unsigned char) var_10);
}
