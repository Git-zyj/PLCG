/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169951
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169951 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169951
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
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (long long int i_1 = 2; i_1 < 13; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 15; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 15; i_3 += 2) 
                    {
                        for (short i_4 = 0; i_4 < 15; i_4 += 3) 
                        {
                            {
                                var_10 = ((/* implicit */int) arr_6 [i_0] [i_1] [i_0] [i_3]);
                                arr_13 [1] [i_0] [8ULL] [i_3] [i_0] = ((/* implicit */unsigned long long int) (unsigned short)30);
                                arr_14 [i_0] [i_4] = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */int) (unsigned short)30)) % (((/* implicit */int) (unsigned short)30))))) < (((((/* implicit */_Bool) var_1)) ? (arr_9 [i_0] [i_3] [(signed char)5] [i_1 - 2] [i_0] [(unsigned char)4]) : (arr_9 [i_0] [2LL] [(signed char)14] [(signed char)14] [i_4] [(signed char)14]))))))) ^ (((((/* implicit */_Bool) var_4)) ? ((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)35917))) : (var_1))) : (min((((/* implicit */unsigned int) (unsigned char)126)), (arr_8 [i_3] [i_0] [i_0] [i_3] [i_0] [i_3])))))));
                                var_11 += ((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_9) + (((/* implicit */unsigned int) ((/* implicit */int) (signed char)108)))))) ? (((var_0) ? (arr_11 [i_4] [i_3] [i_1] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) var_6))))) : (((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1))))))))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (signed char i_5 = 0; i_5 < 15; i_5 += 1) 
                    {
                        arr_18 [i_0] [i_0] [i_2] [i_5] [i_5] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_0])) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_2))))) : (min((1120308819), (((/* implicit */int) (_Bool)0))))))) ? (((/* implicit */int) ((((var_3) & (((/* implicit */long long int) ((/* implicit */int) (signed char)-2))))) != (((/* implicit */long long int) var_1))))) : (((/* implicit */int) arr_12 [(signed char)11] [(signed char)11] [i_0]))));
                        var_12 += ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_4 [i_1 + 1] [4ULL] [4ULL] [i_1 - 2])) ? (((((/* implicit */_Bool) arr_17 [i_0] [i_1 + 1] [i_2] [i_2] [i_1 + 1])) ? (arr_16 [(_Bool)1]) : (((/* implicit */unsigned long long int) var_2)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_7))) < (arr_9 [i_5] [i_1] [i_5] [i_1] [1LL] [i_2]))))))) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 9943054232529925869ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)65535)))))));
                    }
                    var_13 = ((/* implicit */signed char) min((arr_8 [i_0] [i_0] [i_0] [i_1] [i_1 - 1] [i_1 - 1]), (((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)129)) || (((/* implicit */_Bool) (signed char)28))))))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_6 = 0; i_6 < 15; i_6 += 4) 
    {
        for (unsigned long long int i_7 = 0; i_7 < 15; i_7 += 1) 
        {
            {
                var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) var_5))));
                var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 4795193078270579048LL)) ? (14958246527148594788ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)57)))));
                arr_24 [i_6] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)128)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))) : (9943054232529925869ULL)));
                var_16 ^= ((/* implicit */unsigned char) var_3);
            }
        } 
    } 
}
