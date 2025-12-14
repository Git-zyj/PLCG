/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183316
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183316 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183316
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
    for (signed char i_0 = 1; i_0 < 20; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                {
                    arr_6 [i_2] = ((/* implicit */short) ((((_Bool) arr_1 [(signed char)8])) ? (((/* implicit */unsigned int) max((arr_0 [i_1]), (((/* implicit */int) arr_1 [i_0 + 1]))))) : (min((((/* implicit */unsigned int) var_4)), (arr_5 [i_0 + 2] [i_0 + 2] [i_0 - 1])))));
                    var_10 += ((signed char) var_1);
                    var_11 = ((/* implicit */signed char) ((((/* implicit */_Bool) 4294967294U)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned short)28414))))) ? (max((((/* implicit */unsigned int) (signed char)83)), (arr_4 [i_0 + 1] [i_0]))) : (((/* implicit */unsigned int) ((/* implicit */int) max(((unsigned short)61440), (((/* implicit */unsigned short) var_5)))))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0])))));
                }
            } 
        } 
    } 
    var_12 = ((/* implicit */unsigned int) var_2);
    /* LoopNest 2 */
    for (signed char i_3 = 2; i_3 < 15; i_3 += 1) 
    {
        for (signed char i_4 = 1; i_4 < 16; i_4 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_5 = 0; i_5 < 17; i_5 += 2) 
                {
                    for (long long int i_6 = 0; i_6 < 17; i_6 += 2) 
                    {
                        {
                            arr_18 [i_3] [i_4] [i_5] [i_6] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((var_8), (arr_5 [i_3 + 1] [i_3 + 2] [i_3 + 1])))) ? (((/* implicit */int) ((signed char) -7135618715537007833LL))) : (((((/* implicit */_Bool) arr_4 [i_3 + 2] [i_3 + 1])) ? (((/* implicit */int) (unsigned short)61454)) : (((/* implicit */int) (short)-1083))))));
                            var_13 += ((/* implicit */unsigned int) (((((+(((/* implicit */int) (signed char)-87)))) / (((/* implicit */int) (signed char)-87)))) / (((/* implicit */int) arr_12 [i_3] [i_3] [i_3] [i_3]))));
                            arr_19 [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) max(((signed char)-90), (var_6))))) * (((unsigned int) (signed char)-64))))) ? (((((/* implicit */int) max((var_5), ((signed char)-54)))) ^ (((/* implicit */int) (unsigned short)61430)))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_3] [i_3 + 1])))))));
                            arr_20 [i_3] [i_3 + 1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 1493634984U))));
                        }
                    } 
                } 
                var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) min((((((/* implicit */_Bool) max(((signed char)-85), (arr_1 [i_4])))) ? (((((/* implicit */unsigned int) ((/* implicit */int) (short)-1083))) / (arr_15 [i_3] [i_3 - 2] [i_3 - 2] [i_3 - 2]))) : (((((/* implicit */unsigned int) ((/* implicit */int) (short)-24305))) / (arr_16 [i_3] [i_4 + 1] [i_4 + 1]))))), (((/* implicit */unsigned int) arr_11 [i_3])))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (long long int i_7 = 2; i_7 < 15; i_7 += 4) 
                {
                    var_15 = ((/* implicit */unsigned int) ((_Bool) arr_11 [i_3 + 2]));
                    arr_24 [i_3 - 2] [i_7 - 1] = ((/* implicit */long long int) (+(((/* implicit */int) (signed char)36))));
                }
            }
        } 
    } 
}
