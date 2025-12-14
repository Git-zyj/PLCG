/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140952
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140952 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140952
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
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_12 = (~(10ULL));
                var_13 = ((/* implicit */_Bool) min((var_13), (((/* implicit */_Bool) (~(((((/* implicit */int) var_10)) % (arr_2 [i_0]))))))));
                arr_6 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)240))) % (9061890944885719540ULL)));
                arr_7 [i_1] [i_1] = ((/* implicit */int) arr_1 [i_0]);
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_2 = 0; i_2 < 11; i_2 += 1) 
    {
        for (unsigned short i_3 = 2; i_3 < 10; i_3 += 1) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                {
                    for (signed char i_5 = 1; i_5 < 10; i_5 += 3) 
                    {
                        {
                            arr_19 [i_2] = ((/* implicit */_Bool) 322127300);
                            var_14 = ((/* implicit */short) ((((/* implicit */_Bool) arr_15 [(unsigned short)8] [i_4] [i_3] [9LL])) ? (((long long int) min((arr_11 [i_2] [i_2]), (((/* implicit */long long int) (signed char)-63))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_3 [(_Bool)1] [i_3 - 1] [i_4 - 1])) || (((/* implicit */_Bool) arr_12 [i_5 - 1] [i_2] [i_5 + 1]))))))));
                            var_15 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned char)242), (arr_0 [i_2]))))) & (((((/* implicit */_Bool) (unsigned char)253)) ? (var_6) : (((/* implicit */unsigned long long int) arr_18 [i_2] [i_2] [i_3 - 1] [0ULL] [i_4] [i_5 + 1]))))));
                        }
                    } 
                } 
                var_16 |= ((/* implicit */int) min(((unsigned short)15649), (((/* implicit */unsigned short) (_Bool)1))));
                var_17 = ((/* implicit */signed char) arr_18 [i_2] [i_2] [i_2] [i_3 - 2] [i_2] [i_3]);
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned char) var_3);
}
