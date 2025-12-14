/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111646
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111646 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111646
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
    var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-1)) ? ((+(((/* implicit */int) var_6)))) : (((/* implicit */int) var_15))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 18; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 2; i_2 < 17; i_2 += 1) 
                {
                    for (short i_3 = 3; i_3 < 17; i_3 += 1) 
                    {
                        {
                            var_18 &= ((/* implicit */_Bool) min(((~(var_13))), (((/* implicit */long long int) (+(arr_6 [i_0 - 1]))))));
                            var_19 = ((/* implicit */unsigned short) ((((arr_5 [i_3] [i_3 + 2] [i_3] [i_3]) / (arr_5 [i_0] [i_3 + 2] [i_3 + 2] [i_3 - 1]))) != ((-(((/* implicit */int) var_16))))));
                            var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) 1040185343422147689ULL)) && ((!(var_7)))));
                            var_21 = ((/* implicit */long long int) (-((+(((((/* implicit */int) (signed char)119)) * (((/* implicit */int) arr_9 [i_2] [10ULL]))))))));
                        }
                    } 
                } 
                var_22 |= min((((/* implicit */unsigned long long int) ((((((/* implicit */int) (_Bool)1)) / (arr_5 [i_0 - 1] [i_0 + 1] [(unsigned short)14] [(unsigned short)3]))) | (((/* implicit */int) max((arr_3 [(signed char)13]), (arr_9 [i_0] [i_1]))))))), (max((((((/* implicit */_Bool) 8599348698777944932ULL)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))), (arr_4 [i_0 - 1] [i_0 + 1]))));
                var_23 = ((/* implicit */int) max((var_23), (((/* implicit */int) arr_3 [i_0 - 1]))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned short i_4 = 0; i_4 < 17; i_4 += 2) 
    {
        for (unsigned long long int i_5 = 0; i_5 < 17; i_5 += 1) 
        {
            for (unsigned long long int i_6 = 2; i_6 < 16; i_6 += 3) 
            {
                {
                    var_24 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_18 [(_Bool)1]))));
                    var_25 -= ((/* implicit */unsigned char) ((((/* implicit */int) min((var_1), (((/* implicit */short) arr_14 [i_6] [i_6 - 1] [i_6 - 1]))))) | (((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_10)), (0ULL)))))))));
                }
            } 
        } 
    } 
}
