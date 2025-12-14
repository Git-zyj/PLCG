/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157157
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157157 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157157
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
    var_10 = min((((/* implicit */unsigned int) ((unsigned char) ((unsigned long long int) (short)32767)))), (var_6));
    var_11 = ((/* implicit */short) ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 7809244041323715546LL)) ? (((/* implicit */int) (short)31245)) : (((/* implicit */int) (unsigned short)1))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)106))) : (var_2))) : ((-(((-4371423648911641278LL) + (((/* implicit */long long int) ((/* implicit */int) (short)(-32767 - 1))))))))));
    var_12 = ((/* implicit */long long int) min((var_12), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_5))) - (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_4)))) : (((unsigned int) 4294967272U)))))))));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 1; i_0 < 10; i_0 += 1) 
    {
        var_13 = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) arr_3 [i_0])) ? (arr_0 [i_0 - 1]) : (arr_0 [i_0 - 1])))));
        arr_4 [i_0] = ((/* implicit */_Bool) max(((~(arr_0 [i_0 - 1]))), (((/* implicit */unsigned int) min((arr_1 [i_0 + 1]), (arr_1 [i_0 + 1]))))));
        arr_5 [i_0] = ((/* implicit */short) min(((-(((((/* implicit */unsigned int) ((/* implicit */int) (short)31268))) + (arr_0 [i_0]))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((0ULL), (var_7)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (arr_3 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_5)))))))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_10 [i_1] [i_1] = ((/* implicit */short) var_2);
        arr_11 [i_1] [i_1] = ((/* implicit */unsigned char) -7187209386796368043LL);
        arr_12 [i_1] [i_1] = ((/* implicit */signed char) ((arr_6 [i_1]) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_9 [i_1] [i_1]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_1]))))) : (((/* implicit */int) arr_9 [i_1] [i_1]))))) : ((-(((((/* implicit */long long int) ((/* implicit */int) arr_9 [i_1] [i_1]))) | (var_8)))))));
    }
    /* vectorizable */
    for (int i_2 = 2; i_2 < 15; i_2 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_3 = 0; i_3 < 17; i_3 += 3) 
        {
            /* LoopNest 2 */
            for (long long int i_4 = 0; i_4 < 17; i_4 += 1) 
            {
                for (long long int i_5 = 0; i_5 < 17; i_5 += 1) 
                {
                    {
                        arr_24 [i_5] [i_5] [8ULL] [8ULL] [i_3] [i_2] &= ((/* implicit */unsigned short) arr_8 [i_5]);
                        arr_25 [i_4] [i_3] [i_4] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_9 [i_4] [i_2 - 2])) ? (((/* implicit */long long int) (-(((/* implicit */int) (short)-31245))))) : (((var_8) - (var_8)))));
                        arr_26 [i_2] [i_3] [i_4] [i_5] [i_5] [i_5] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((short) arr_18 [i_2] [i_3] [i_4] [i_5])))));
                    }
                } 
            } 
            var_14 = ((/* implicit */unsigned int) max((var_14), (((/* implicit */unsigned int) 18446744073709551615ULL))));
            arr_27 [i_2] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_15 [i_2 + 2] [i_3] [i_2 + 1]))));
        }
        var_15 ^= ((((/* implicit */_Bool) 1539788823)) ? (((/* implicit */int) var_4)) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (short)-31236)) : (((/* implicit */int) arr_6 [i_2])))));
        /* LoopNest 2 */
        for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
        {
            for (short i_7 = 2; i_7 < 15; i_7 += 3) 
            {
                {
                    arr_35 [i_2] [i_6] [i_7] = ((((/* implicit */_Bool) arr_32 [i_2 - 2] [i_2 + 2])) ? (((((/* implicit */_Bool) arr_13 [i_2 - 1] [i_2])) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_2]))))) : (((/* implicit */unsigned long long int) ((int) arr_19 [i_7 + 1] [i_6] [i_2] [i_2 + 1]))));
                    var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) arr_31 [i_6] [i_6] [i_6]))) : (var_8)))) && (((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (short)31228))) % (var_3))))));
                    var_17 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) var_5)) | (((/* implicit */int) var_0))))) ? ((-(-1362931502))) : (((/* implicit */int) ((unsigned char) arr_15 [i_7] [i_6] [i_2 - 1])))));
                }
            } 
        } 
    }
    var_18 = ((/* implicit */_Bool) ((((((long long int) (unsigned char)102)) + (var_2))) / (var_1)));
}
