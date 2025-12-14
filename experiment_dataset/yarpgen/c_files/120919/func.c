/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120919
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120919 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120919
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
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(-357576681)))) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0]))));
        var_18 = ((/* implicit */short) ((unsigned short) ((((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) arr_0 [i_0])))) - (((/* implicit */int) arr_0 [i_0])))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 10; i_3 += 2) 
                {
                    {
                        arr_13 [i_0] [i_0] [8LL] = ((/* implicit */short) (((+(((/* implicit */int) arr_11 [i_0])))) & (((/* implicit */int) arr_4 [4] [i_1]))));
                        var_19 = ((/* implicit */unsigned short) arr_12 [i_3] [i_2] [(signed char)1] [i_0]);
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 10; i_4 += 3) 
                        {
                            var_20 ^= ((/* implicit */short) ((((/* implicit */int) arr_0 [i_4])) & (((/* implicit */int) arr_0 [i_0]))));
                            var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_3 [i_1])) && (((/* implicit */_Bool) arr_0 [i_2])))) ? (((((arr_16 [0LL] [i_0] [i_1] [i_0]) + (2147483647))) << (((((/* implicit */int) arr_3 [i_3])) - (72))))) : (((/* implicit */int) ((_Bool) arr_15 [i_0] [(signed char)8] [i_0] [i_0] [6ULL]))))))));
                            arr_17 [i_2] [i_4] [(unsigned short)3] [i_3] [i_2] [i_2] [i_4] = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_9 [i_0] [i_0] [i_1] [i_0] [3] [i_4]))));
                            arr_18 [(short)7] [i_1] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_11 [i_0])) ^ (((/* implicit */int) arr_11 [i_3]))));
                        }
                        /* vectorizable */
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            arr_21 [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_8 [i_2]) - (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_2])))))) ? (arr_19 [i_0] [i_5]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_20 [i_0] [(unsigned char)4] [(unsigned short)4] [i_0] [1]))))))));
                            arr_22 [i_0] [(_Bool)1] [7ULL] [i_3] [i_5] = ((arr_14 [i_0] [i_1] [i_2] [i_3] [9]) ? (((/* implicit */int) arr_20 [i_0] [i_1] [i_2] [i_3] [i_5])) : (((/* implicit */int) arr_20 [i_5] [i_3] [i_2] [i_1] [i_0])));
                        }
                        arr_23 [i_0] [(_Bool)1] [(unsigned char)5] [i_2] [8LL] = ((/* implicit */unsigned char) (+((~(((/* implicit */int) arr_6 [i_2] [(unsigned short)6]))))));
                        var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (((+(((/* implicit */int) arr_1 [i_0] [i_3])))) / ((-(arr_16 [2ULL] [2ULL] [i_1] [i_1])))))) ? (((/* implicit */int) ((unsigned short) arr_16 [i_3] [i_1] [i_2] [5]))) : ((+(((/* implicit */int) arr_9 [i_0] [i_1] [(unsigned short)8] [i_1] [i_2] [(unsigned short)8])))))))));
                    }
                } 
            } 
        } 
        arr_24 [(_Bool)1] [i_0] = ((((/* implicit */int) ((((((/* implicit */_Bool) arr_12 [i_0] [i_0] [(_Bool)1] [(unsigned char)2])) ? (arr_8 [i_0]) : (((/* implicit */long long int) arr_5 [i_0])))) > (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) arr_5 [i_0])) >= (arr_15 [i_0] [i_0] [i_0] [i_0] [i_0])))))))) << (((((((/* implicit */_Bool) (unsigned short)0)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)188))))) - (160U))));
    }
    var_23 = ((/* implicit */int) (((~(((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) | (var_14))))) * (((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_2))))))))));
    var_24 = ((/* implicit */int) ((((var_3) ? (((((/* implicit */_Bool) (short)-32759)) ? (((/* implicit */int) (unsigned short)41370)) : (-1152299923))) : (((int) var_9)))) <= (((/* implicit */int) var_8))));
    var_25 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) ((((var_4) / (((/* implicit */int) var_6)))) > (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_5)))))))) % (((((/* implicit */_Bool) 5879663894985856344LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)1314))) : (133002542096903797LL)))));
}
