/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174837
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174837 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174837
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
    for (long long int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            for (signed char i_2 = 1; i_2 < 12; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 2; i_3 < 12; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 13; i_4 += 4) 
                        {
                            {
                                arr_16 [i_0] [i_0] [i_1] [(unsigned char)9] [i_3] [i_0] = ((/* implicit */int) max((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) (signed char)127))))) ? (((((/* implicit */int) (short)12654)) | (((/* implicit */int) arr_13 [i_0] [(short)8] [(signed char)2])))) : (((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_4])) ? (((/* implicit */int) arr_12 [i_0])) : (((/* implicit */int) var_9))))))), ((-(((((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0]))) | (arr_15 [i_4] [i_3] [i_3] [i_2 + 1] [(signed char)11] [i_0])))))));
                                var_20 = ((/* implicit */short) (~(((((/* implicit */_Bool) arr_5 [(unsigned short)10] [i_1])) ? (arr_6 [(short)2] [i_2 + 1] [(_Bool)1]) : (((((/* implicit */int) (signed char)(-127 - 1))) - (var_10)))))));
                                arr_17 [i_2] [i_1] [i_2] [(short)9] [i_4] [i_4] [i_4] = ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */int) (signed char)107)) : (((/* implicit */int) var_19))))) ? (((/* implicit */long long int) ((/* implicit */int) ((arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) == (((/* implicit */long long int) arr_14 [i_4] [i_2] [(unsigned short)12])))))) : (arr_10 [i_3 - 1] [i_3] [i_3 - 2] [i_3] [i_3 - 2] [i_3 + 1]))) & (((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)0))))));
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0]))) > (arr_11 [(_Bool)1] [i_2] [i_2 - 1] [i_2 + 1]))))) * (((5540921228699179687ULL) << (((((/* implicit */int) (signed char)127)) - (125)))))));
                    arr_18 [i_0] [i_1] = ((/* implicit */short) (((((-(((/* implicit */int) (_Bool)1)))) == (((((/* implicit */int) (signed char)-34)) % (((/* implicit */int) arr_12 [(unsigned short)7])))))) ? (((/* implicit */int) (unsigned short)7)) : (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) ((unsigned short) (_Bool)1))))))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */unsigned short) ((signed char) max(((((_Bool)1) ? (1669012756U) : (((/* implicit */unsigned int) -1071255583)))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (_Bool)1)) : (2147483647)))))));
}
