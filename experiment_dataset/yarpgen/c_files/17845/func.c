/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17845
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17845 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17845
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
    var_18 = ((/* implicit */_Bool) min((var_18), (((min((13614346101475092046ULL), (1122742988844571351ULL))) >= (((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_7))))))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (signed char i_1 = 2; i_1 < 23; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned char i_2 = 0; i_2 < 25; i_2 += 3) 
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 1; i_3 < 24; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 25; i_4 += 4) 
                        {
                            {
                                arr_13 [i_2] [i_3] [i_2] [16ULL] [i_2] = ((/* implicit */signed char) arr_0 [i_0]);
                                var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((4832397972234459552ULL), (((/* implicit */unsigned long long int) (unsigned short)31))))) ? (arr_5 [i_4] [i_3 + 1] [i_1]) : (((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_11 [i_4] [i_4] [i_3] [i_2] [i_2] [i_1] [i_0])) : (arr_5 [i_0] [i_0] [18ULL])))));
                                var_20 -= ((arr_7 [10ULL] [i_2] [i_1] [i_0]) >> (((((/* implicit */unsigned long long int) -10)) / (13051273813527976838ULL))));
                                var_21 = arr_9 [2] [i_1] [i_1] [(_Bool)1] [i_1];
                                var_22 = ((/* implicit */unsigned int) arr_4 [i_1]);
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 13614346101475092046ULL)) ? (13614346101475092057ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))))) ? (4762140500338503858ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) % (((17113948772000799527ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
                }
                var_24 = (~((+(((/* implicit */int) min((arr_4 [(signed char)17]), (arr_3 [(signed char)7])))))));
            }
        } 
    } 
    var_25 = ((/* implicit */signed char) (~(((((/* implicit */unsigned int) 712905132)) + (var_7)))));
}
