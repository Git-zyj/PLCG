/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116454
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116454 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116454
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
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 1; i_2 < 13; i_2 += 4) 
                {
                    for (unsigned long long int i_3 = 1; i_3 < 14; i_3 += 3) 
                    {
                        {
                            var_11 = ((/* implicit */signed char) ((min((((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) * (1355239567018898716ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_5)) % (arr_8 [3ULL] [i_1] [i_1] [i_1] [(signed char)14] [i_1])))))) < (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (!(((/* implicit */_Bool) var_9)))))))));
                            arr_12 [i_2] [i_2] [i_0] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (short)11756)) >> (((17091504506690652904ULL) - (17091504506690652880ULL)))))) * (((arr_3 [i_1] [i_1] [i_1]) | (((/* implicit */unsigned long long int) arr_8 [i_2 - 1] [i_2 + 1] [i_2 + 1] [(_Bool)1] [i_2] [i_2]))))));
                        }
                    } 
                } 
                var_12 = ((/* implicit */short) ((((/* implicit */_Bool) ((min((((/* implicit */unsigned long long int) var_4)), (arr_5 [i_0] [i_0] [i_0]))) << (((/* implicit */int) ((var_8) == (((/* implicit */unsigned int) 403452813)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) var_3)) / (arr_10 [(unsigned char)5] [i_1] [i_0] [i_0])))) <= (min((var_1), (((/* implicit */unsigned long long int) arr_4 [i_0] [i_0])))))))) : (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) var_3))))), (min((arr_5 [(short)5] [i_1] [i_1]), (((/* implicit */unsigned long long int) arr_8 [i_0] [i_1] [i_0] [i_1] [i_1] [i_1]))))))));
            }
        } 
    } 
    var_13 = ((/* implicit */_Bool) min((-418740151), (((/* implicit */int) (_Bool)1))));
    var_14 = ((/* implicit */int) ((((var_7) | (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-54))))) == (((/* implicit */unsigned long long int) -418740176))));
}
