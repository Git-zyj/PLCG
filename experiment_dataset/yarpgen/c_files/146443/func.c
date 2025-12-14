/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146443
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146443 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146443
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
    for (long long int i_0 = 1; i_0 < 22; i_0 += 2) 
    {
        for (long long int i_1 = 1; i_1 < 24; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 25; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 25; i_3 += 3) 
                    {
                        for (long long int i_4 = 0; i_4 < 25; i_4 += 3) 
                        {
                            {
                                var_18 |= ((/* implicit */_Bool) ((unsigned char) -6674369761045606058LL));
                                var_19 += ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0]))) < (((((/* implicit */_Bool) (((_Bool)1) ? (6674369761045606063LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) ? (-6674369761045606058LL) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)19299)) >= (((/* implicit */int) (_Bool)1))))))))));
                                var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((((/* implicit */int) max(((unsigned short)46237), (((/* implicit */unsigned short) (_Bool)1))))) >= (((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_3] [(signed char)6] [i_0])))))))), (max((((/* implicit */unsigned long long int) ((((/* implicit */int) var_15)) >= (((/* implicit */int) (short)9051))))), (min((16713084694336313255ULL), (((/* implicit */unsigned long long int) (unsigned char)94)))))))))));
                                var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned short)19299)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)84))) : (max((((/* implicit */long long int) (short)9047)), (-6674369761045606057LL))))) | (((/* implicit */long long int) ((((/* implicit */int) (signed char)95)) ^ (((/* implicit */int) var_6))))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_5 = 0; i_5 < 25; i_5 += 2) 
                    {
                        for (unsigned short i_6 = 0; i_6 < 25; i_6 += 2) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned char) min((arr_16 [i_1] [(short)12] [(short)12] [i_6]), (((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0] [i_1] [i_0] [i_1 - 1] [i_5]))) >= (16713084694336313257ULL))))) * (max((((/* implicit */unsigned long long int) (signed char)-95)), (1733659379373238360ULL)))))));
                                var_23 = ((/* implicit */short) max((((/* implicit */long long int) (unsigned short)19299)), (min((min((-6674369761045606050LL), (((/* implicit */long long int) (short)9074)))), (((/* implicit */long long int) var_13))))));
                                var_24 |= ((/* implicit */signed char) (+(((/* implicit */int) (short)9043))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_25 = ((/* implicit */long long int) var_14);
}
