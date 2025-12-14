/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119291
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119291 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119291
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
    var_16 = ((/* implicit */_Bool) min((((((/* implicit */int) (unsigned short)65535)) / (((/* implicit */int) var_3)))), (min(((~(-157028592))), (((/* implicit */int) ((var_6) > (((/* implicit */int) (unsigned short)4)))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 3; i_0 < 12; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (signed char i_2 = 0; i_2 < 13; i_2 += 2) 
                {
                    for (int i_3 = 2; i_3 < 11; i_3 += 2) 
                    {
                        for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                        {
                            {
                                arr_15 [i_0] [(_Bool)1] [(signed char)10] [9U] = ((/* implicit */unsigned short) arr_8 [i_0 - 1] [i_0]);
                                arr_16 [i_0] [i_2] [i_1] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((max((arr_6 [(_Bool)1] [i_0] [i_2]), (((/* implicit */unsigned int) arr_9 [12ULL] [i_1] [i_2] [i_3 + 1] [i_4])))), (((/* implicit */unsigned int) (unsigned short)41173))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_0] [i_0] [i_2])) ^ (((/* implicit */int) arr_0 [(unsigned short)6]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65525))) : (((((/* implicit */_Bool) arr_9 [(signed char)11] [i_1] [12LL] [12LL] [6U])) ? (arr_7 [i_0] [i_4] [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_0] [(unsigned char)6] [i_0] [(unsigned short)10]))))))) : (((/* implicit */unsigned long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_0]))) == (1076855398U))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)-106))))) : (((((/* implicit */_Bool) arr_9 [3U] [i_1] [i_2] [i_3] [i_4 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)9))) : (var_8))))))));
                            }
                        } 
                    } 
                } 
                arr_17 [i_0] [i_1] [i_1] = ((/* implicit */_Bool) max(((-(((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (short)32134)) : (((/* implicit */int) (unsigned short)11)))))), ((((((_Bool)1) ? (((/* implicit */int) arr_11 [i_0 - 1] [i_0 - 1] [10U] [i_1])) : (arr_2 [i_0]))) - (((((/* implicit */_Bool) var_12)) ? (1697373532) : (((/* implicit */int) var_11))))))));
            }
        } 
    } 
    var_17 *= ((/* implicit */_Bool) ((((var_10) != (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_14)) : (var_2))))) ? ((+(max((var_5), (((/* implicit */int) (short)-32132)))))) : (((/* implicit */int) ((((/* implicit */int) var_14)) != (((/* implicit */int) (!(((/* implicit */_Bool) var_7))))))))));
    var_18 &= ((/* implicit */unsigned short) var_3);
}
