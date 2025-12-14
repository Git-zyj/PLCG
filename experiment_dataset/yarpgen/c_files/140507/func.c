/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140507
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140507 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140507
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
    for (int i_0 = 1; i_0 < 11; i_0 += 2) 
    {
        for (signed char i_1 = 4; i_1 < 13; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 4; i_2 < 13; i_2 += 1) 
                {
                    for (int i_3 = 0; i_3 < 14; i_3 += 4) 
                    {
                        {
                            var_12 = ((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) (unsigned short)63)) ? (((/* implicit */unsigned long long int) arr_2 [i_0 - 1] [i_0 - 1])) : (var_5))));
                            var_13 += ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-55)) - (((/* implicit */int) min(((unsigned char)0), (((/* implicit */unsigned char) arr_9 [(signed char)1] [1ULL] [1ULL] [i_3])))))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (+(496786124U)))) ? (((((/* implicit */_Bool) 496786124U)) ? (var_3) : (((/* implicit */unsigned long long int) 2U)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_1 [i_0] [i_0]) < (((/* implicit */unsigned long long int) 496786116U)))))))))));
                            arr_10 [i_0] = ((/* implicit */long long int) ((unsigned char) ((((/* implicit */_Bool) arr_6 [i_0] [10LL] [i_2] [i_0])) ? (1614727571U) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_5)))))));
                        }
                    } 
                } 
                var_14 = ((/* implicit */int) (((~(((long long int) var_11)))) != (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0 - 1] [7LL] [(unsigned char)0] [i_0 - 1])))));
                var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) -57209861))));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned int) min((var_9), ((-(((/* implicit */int) ((3499243183048149529ULL) <= (((/* implicit */unsigned long long int) 4710642565719283414LL)))))))));
}
