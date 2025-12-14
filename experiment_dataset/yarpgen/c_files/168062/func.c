/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168062
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168062 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168062
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
    var_19 *= ((/* implicit */short) ((unsigned char) ((3U) ^ (0U))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 18; i_2 += 1) 
            {
                {
                    var_20 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) ((arr_7 [(_Bool)1] [(unsigned char)17] [(unsigned char)17] [i_0]) ? (((/* implicit */unsigned int) arr_2 [i_1])) : (26U)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_0 [i_0]) : (((/* implicit */int) (unsigned short)63))))) : (arr_3 [i_0])))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 18; i_3 += 1) 
                    {
                        for (int i_4 = 1; i_4 < 15; i_4 += 1) 
                        {
                            {
                                var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) ((((((/* implicit */int) (signed char)-58)) & ((-(((/* implicit */int) (signed char)-102)))))) << (((((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) 6081774851301650278ULL)) ? (arr_3 [i_0]) : (6081774851301650283ULL))))) - (26))))))));
                                arr_12 [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -776955206)) ? (((/* implicit */int) (unsigned short)60983)) : (((/* implicit */int) (short)-31962))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_2 [i_1]) / (arr_2 [i_4])))) ? (((((/* implicit */int) (unsigned char)185)) / (((/* implicit */int) (signed char)-1)))) : (((/* implicit */int) (_Bool)1))))) : (((arr_8 [i_4 - 1] [(short)6] [i_4 + 1] [i_4 - 1] [i_4] [i_4 - 1]) * (((/* implicit */unsigned int) ((1343970953) / (1298068782))))))));
                                arr_13 [i_1] [i_1] = ((/* implicit */unsigned short) (-(((/* implicit */int) (signed char)86))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
