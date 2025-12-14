/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123189
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123189 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123189
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
    var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (signed char)-34)) : (((((/* implicit */_Bool) (~(15819534787202243384ULL)))) ? (((/* implicit */int) max(((signed char)-16), (var_4)))) : (((/* implicit */int) ((unsigned char) var_9)))))));
    var_20 = ((/* implicit */short) var_16);
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (unsigned char i_1 = 3; i_1 < 23; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 25; i_2 += 2) 
            {
                {
                    /* LoopSeq 2 */
                    for (signed char i_3 = 1; i_3 < 22; i_3 += 2) /* same iter space */
                    {
                        var_21 = ((/* implicit */int) arr_6 [i_1] [i_1] [i_3 + 1]);
                        var_22 = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */int) arr_10 [i_1] [i_3 + 2])) != (((/* implicit */int) arr_10 [i_1] [i_3 + 3]))))) != (((/* implicit */int) max((arr_10 [i_1] [i_3 + 2]), (arr_10 [i_1] [i_3 + 1]))))));
                        var_23 = ((/* implicit */int) ((long long int) ((((((/* implicit */unsigned long long int) 3879781021U)) | (arr_4 [i_1 + 2] [i_3]))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_2] [i_1] [i_2] [i_2] [i_3]))))));
                        arr_11 [i_0] [i_0] [i_1] [i_0] [i_0] = ((/* implicit */signed char) -860803412);
                        var_24 = ((/* implicit */short) min((((arr_1 [i_1 - 2] [i_3 + 3]) & (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))), (((((/* implicit */_Bool) arr_1 [i_1 - 2] [i_3 + 3])) ? (((/* implicit */long long int) arr_3 [i_1 - 2] [i_3 + 3])) : (arr_1 [i_1 - 2] [i_3 + 3])))));
                    }
                    for (signed char i_4 = 1; i_4 < 22; i_4 += 2) /* same iter space */
                    {
                        arr_16 [i_4] [i_1] [i_1] = ((max((((/* implicit */int) arr_14 [(_Bool)1] [i_4 + 2] [i_4 - 1] [i_4] [i_4 + 2] [i_4 + 3])), (-39160218))) / (((((/* implicit */_Bool) arr_14 [i_4] [i_4 + 2] [i_4 - 1] [i_4 - 1] [i_4 + 2] [i_4 + 1])) ? (((/* implicit */int) arr_14 [i_4] [i_4 + 2] [i_4 - 1] [24] [i_4 + 2] [(unsigned char)19])) : (((/* implicit */int) arr_14 [i_4] [i_4 + 2] [i_4 - 1] [i_4] [i_4 + 2] [i_4 - 1])))));
                        var_25 |= ((((/* implicit */_Bool) var_3)) ? (min((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)62)) << (((((/* implicit */int) (unsigned short)30594)) - (30594)))))), (min((((/* implicit */unsigned int) (signed char)-34)), (var_6))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_2] [i_1 - 2] [i_1 - 1] [i_1] [i_4 + 3])))))));
                    }
                    arr_17 [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) max((((/* implicit */int) ((((/* implicit */int) arr_6 [i_0] [i_1] [i_2])) == (((/* implicit */int) var_18))))), (max((2060591038), (((/* implicit */int) (signed char)99))))))) & (((((/* implicit */_Bool) -1924703097639521594LL)) ? (((var_8) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_1] [(_Bool)1]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_1])))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 0; i_5 < 25; i_5 += 1) 
                    {
                        for (unsigned short i_6 = 0; i_6 < 25; i_6 += 2) 
                        {
                            {
                                var_26 = ((/* implicit */int) ((((/* implicit */long long int) (~(((/* implicit */int) ((_Bool) var_13)))))) / (max((((/* implicit */long long int) (signed char)-30)), (((((/* implicit */long long int) ((/* implicit */int) var_9))) | (arr_1 [i_1] [i_6])))))));
                                var_27 = ((/* implicit */signed char) max((var_27), (((/* implicit */signed char) ((max((min((860803413), (((/* implicit */int) var_12)))), (((/* implicit */int) var_15)))) + (((/* implicit */int) min(((short)-20937), (((/* implicit */short) (signed char)-85))))))))));
                                var_28 ^= ((/* implicit */_Bool) ((((/* implicit */long long int) -463683105)) / (7362596196893383258LL)));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
