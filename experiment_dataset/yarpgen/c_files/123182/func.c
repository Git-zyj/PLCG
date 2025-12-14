/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123182
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123182 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123182
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
    var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (var_11)))) ? (((((/* implicit */_Bool) var_5)) ? (-4378443793561900900LL) : (((/* implicit */long long int) ((/* implicit */int) var_7))))) : (((/* implicit */long long int) ((((/* implicit */int) var_7)) % (((/* implicit */int) (unsigned char)215)))))))) && (var_8)));
    var_14 = ((/* implicit */short) min((var_11), (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)48))) | (var_11)))));
    var_15 = ((/* implicit */long long int) ((((((/* implicit */_Bool) ((17543243275410267086ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))) && (((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)9)) * (((/* implicit */int) var_1))))))) ? (var_10) : (var_10)));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 10; i_2 += 3) 
            {
                {
                    var_16 = ((/* implicit */int) arr_6 [i_0] [i_1] [i_2]);
                    arr_8 [i_2] [i_1] = ((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */int) arr_6 [i_2] [i_1] [i_0])) / (arr_0 [i_1])))), ((-(arr_5 [i_0] [i_1])))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (int i_4 = 0; i_4 < 10; i_4 += 1) 
                        {
                            {
                                arr_13 [i_0] [i_1] [i_2] [i_3] [i_3] [i_2] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 50331648)) ? (((/* implicit */int) arr_4 [i_1] [i_3] [i_4])) : (-2064108683))) / (((((/* implicit */_Bool) (-(((/* implicit */int) var_3))))) ? (((/* implicit */int) min((((/* implicit */short) arr_2 [i_1])), ((short)(-32767 - 1))))) : (((/* implicit */int) (signed char)104))))));
                                var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */int) arr_2 [i_3])) : (((/* implicit */int) arr_2 [i_0])))) : (((((((/* implicit */_Bool) var_10)) ? (arr_0 [i_0]) : (((/* implicit */int) var_8)))) & (((/* implicit */int) arr_6 [i_0] [i_1] [i_0])))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_5 = 2; i_5 < 9; i_5 += 3) 
                    {
                        for (signed char i_6 = 0; i_6 < 10; i_6 += 1) 
                        {
                            {
                                var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) ((((((/* implicit */_Bool) min((903500798299284530ULL), (((/* implicit */unsigned long long int) 1023122583))))) ? (((((/* implicit */_Bool) (unsigned char)246)) ? (arr_1 [i_0]) : (((/* implicit */unsigned long long int) arr_5 [i_0] [i_0])))) : (((/* implicit */unsigned long long int) ((3482236258297293635LL) ^ (((/* implicit */long long int) ((/* implicit */int) var_3)))))))) == (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1115345014)) ? (((((/* implicit */_Bool) 458687876U)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (signed char)-1)))) : (((/* implicit */int) arr_6 [i_0] [(signed char)1] [i_5 - 2]))))))))));
                                arr_20 [i_0] [i_5 - 2] [i_2] [i_2] [i_0] [i_0] [i_6] = ((/* implicit */short) (~(((((/* implicit */_Bool) arr_16 [i_5 + 1] [i_5 + 1] [i_5] [i_5 - 2] [i_5 - 2])) ? (max((arr_5 [i_0] [i_1]), (((/* implicit */long long int) (_Bool)0)))) : (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_0] [0] [(_Bool)1] [i_5 - 2] [i_6] [i_2] [i_5 - 2])))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
