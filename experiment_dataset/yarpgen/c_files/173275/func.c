/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173275
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173275 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173275
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
    var_10 ^= ((/* implicit */signed char) (-(max((((var_4) - (var_6))), (((/* implicit */long long int) var_5))))));
    var_11 = ((/* implicit */unsigned int) var_2);
    /* LoopSeq 1 */
    for (unsigned short i_0 = 1; i_0 < 14; i_0 += 1) 
    {
        var_12 = ((/* implicit */unsigned short) max((var_12), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) var_2)) ? (arr_2 [i_0 + 4]) : (((/* implicit */unsigned int) arr_1 [i_0 + 4])))) : (((/* implicit */unsigned int) arr_1 [i_0 + 4])))))));
        arr_4 [i_0] = ((/* implicit */long long int) ((arr_2 [i_0 + 1]) << (((/* implicit */int) (!(arr_0 [i_0]))))));
        var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) (~(((/* implicit */int) (short)15883))))) ? (arr_3 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-15883))) != (3270958231U))))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((unsigned long long int) arr_0 [i_0])) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))))));
        var_14 = ((((((/* implicit */_Bool) ((int) (short)-15883))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-15884))) : (arr_3 [i_0])))) : (((((/* implicit */unsigned long long int) arr_2 [i_0])) | (var_0))))) == (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0])))))) <= (1399981675U))))));
        /* LoopSeq 2 */
        for (unsigned int i_1 = 1; i_1 < 16; i_1 += 4) 
        {
            var_15 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_0 [6])), (arr_5 [6U])))) ? (((/* implicit */long long int) (~(((/* implicit */int) arr_6 [i_1 + 1] [i_1 - 1]))))) : ((~(max((((/* implicit */long long int) var_8)), (var_6)))))));
            var_16 = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)3)) / ((+(((/* implicit */int) ((signed char) arr_2 [(short)12])))))));
            arr_7 [i_0] [i_0] = ((/* implicit */signed char) ((unsigned int) ((((/* implicit */_Bool) max((var_4), (((/* implicit */long long int) arr_2 [i_1]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) : (max((arr_2 [(short)7]), (1399981675U))))));
        }
        for (short i_2 = 2; i_2 < 15; i_2 += 2) 
        {
            var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_2 + 2])) ? (arr_2 [i_2 - 1]) : (arr_2 [i_2 - 2])))) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) (short)15882)))) : (((long long int) arr_2 [i_2 + 1])))))));
            /* LoopNest 3 */
            for (short i_3 = 3; i_3 < 15; i_3 += 4) 
            {
                for (unsigned int i_4 = 0; i_4 < 18; i_4 += 3) 
                {
                    for (unsigned int i_5 = 0; i_5 < 18; i_5 += 1) 
                    {
                        {
                            var_18 = ((/* implicit */int) ((((((/* implicit */int) (unsigned char)87)) + (((((/* implicit */int) (signed char)53)) + (((/* implicit */int) arr_12 [(signed char)2] [i_3 + 3] [7LL] [(short)13])))))) > (((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_11 [i_2] [i_3 + 3] [i_5])) : (((/* implicit */int) arr_12 [i_0 + 4] [(short)13] [(short)13] [i_4])))) << (((arr_2 [i_2 + 1]) - (822694183U)))))));
                            arr_17 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) var_8);
                            var_19 ^= ((/* implicit */int) ((((/* implicit */_Bool) (short)15882)) ? (max((((((/* implicit */_Bool) arr_10 [i_5] [i_2] [i_2] [i_2 + 3])) ? (2894985646U) : (((/* implicit */unsigned int) arr_15 [i_0 + 4] [i_0 + 4] [i_0 + 4] [i_3 - 2] [i_3] [i_4] [i_5])))), (((/* implicit */unsigned int) max((((/* implicit */unsigned short) (_Bool)1)), (arr_11 [i_4] [3] [i_0])))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_3 - 2] [i_2 - 1] [i_0 - 1]))))))));
                        }
                    } 
                } 
            } 
            var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) (~(((/* implicit */int) var_7)))))));
            /* LoopNest 2 */
            for (long long int i_6 = 0; i_6 < 18; i_6 += 1) 
            {
                for (unsigned char i_7 = 1; i_7 < 17; i_7 += 4) 
                {
                    {
                        arr_24 [i_0] [i_0] = (~((~(((/* implicit */int) arr_23 [i_2] [i_0] [i_7 - 1] [(_Bool)1])))));
                        arr_25 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_0] [i_2 - 2] [i_0] [i_7])) ? ((+(((/* implicit */int) var_5)))) : ((-(((/* implicit */int) arr_23 [i_0] [i_0] [i_0] [i_0]))))))) ? (((/* implicit */long long int) ((((/* implicit */int) var_3)) / (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_23 [i_7] [i_0] [i_0] [i_0])) : (((/* implicit */int) var_2))))))) : (((((/* implicit */_Bool) arr_18 [i_7 - 1] [i_6] [i_2 + 3])) ? (arr_18 [i_7 + 1] [i_2 - 1] [i_2 + 2]) : (arr_18 [i_7 - 1] [i_6] [i_2 + 2])))));
                        var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) (((-(((/* implicit */int) arr_0 [i_2])))) ^ (((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */int) (short)-15880)) - (((/* implicit */int) (short)-15857))))) > (arr_18 [i_7] [i_7 + 1] [i_7 - 1])))))))));
                        var_22 = ((/* implicit */short) ((((/* implicit */_Bool) arr_22 [12LL] [i_6] [i_0])) ? (((unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)87))) : (arr_2 [i_0])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_2 + 2] [i_2 + 3] [i_0] [i_2 + 1]))))))));
                    }
                } 
            } 
        }
    }
    var_23 = ((/* implicit */unsigned short) var_5);
}
