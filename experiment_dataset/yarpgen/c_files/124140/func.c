/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124140
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124140 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124140
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
    for (long long int i_0 = 1; i_0 < 15; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 16; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 16; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 2; i_4 < 15; i_4 += 4) 
                        {
                            {
                                var_11 = ((/* implicit */_Bool) max((((/* implicit */int) min((arr_0 [i_0 - 1]), (arr_0 [i_0 + 1])))), (((((/* implicit */_Bool) arr_0 [i_0 + 1])) ? (((/* implicit */int) arr_0 [i_0 + 1])) : (((/* implicit */int) (unsigned short)11774))))));
                                var_12 = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_8)) : (750363348)))) > (((((/* implicit */_Bool) (short)-2048)) ? (9079256848778919936LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-18722)))))))) < ((~(((/* implicit */int) (unsigned short)65534))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_5 = 3; i_5 < 15; i_5 += 2) 
                    {
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            {
                                var_13 = ((/* implicit */int) arr_17 [i_0 - 1] [i_1] [14ULL] [(signed char)13] [i_1] [i_6]);
                                arr_20 [i_1] [(unsigned short)1] [7LL] [(signed char)8] [i_1] = min((((/* implicit */int) var_1)), (((((/* implicit */_Bool) arr_13 [i_5 - 1] [i_0 + 1] [i_2] [i_5 + 1])) ? (((/* implicit */int) arr_7 [i_1])) : (((/* implicit */int) arr_2 [i_5 - 1])))));
                                var_14 = ((/* implicit */unsigned short) var_7);
                            }
                        } 
                    } 
                    var_15 = min((((/* implicit */short) arr_13 [i_0 - 1] [i_0 - 1] [i_0 + 1] [(signed char)0])), (min((((/* implicit */short) arr_13 [9LL] [i_1] [(_Bool)1] [(unsigned short)0])), (var_7))));
                    var_16 = ((/* implicit */long long int) ((((/* implicit */int) ((unsigned short) min((arr_18 [i_0] [9ULL] [i_0 + 1] [13ULL] [(signed char)1] [i_2] [(signed char)9]), (((/* implicit */long long int) (unsigned short)39382)))))) >= (((/* implicit */int) var_9))));
                    var_17 *= ((/* implicit */unsigned short) min(((~(((/* implicit */int) (short)-18722)))), ((-(((/* implicit */int) (unsigned short)39382))))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) var_9))));
    var_19 = ((signed char) (signed char)-31);
    var_20 -= ((/* implicit */unsigned char) var_1);
}
