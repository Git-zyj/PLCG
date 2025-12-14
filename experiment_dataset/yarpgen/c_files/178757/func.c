/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178757
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178757 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178757
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
    var_17 = ((/* implicit */short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) % (var_5))) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            for (unsigned int i_2 = 1; i_2 < 23; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 24; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 24; i_4 += 3) 
                        {
                            {
                                arr_16 [i_0] [1ULL] [1ULL] [i_0] [1ULL] = ((/* implicit */unsigned char) ((((/* implicit */int) (((-(3188252111U))) < (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))) < (((/* implicit */int) ((signed char) ((((/* implicit */unsigned int) var_6)) * (0U)))))));
                                arr_17 [i_0] [i_0] = ((/* implicit */signed char) max((max((((/* implicit */long long int) (!(((/* implicit */_Bool) arr_5 [i_0]))))), (((long long int) arr_14 [i_0] [i_1] [i_1] [i_3] [i_0])))), (((/* implicit */long long int) ((((((/* implicit */_Bool) 4294967285U)) ? (12U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [(signed char)10] [i_0]))))) < (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_2 - 1] [i_2 - 1] [(signed char)15] [i_2 + 1] [i_2 - 1] [i_0]))))))));
                                var_18 = ((/* implicit */unsigned long long int) (!(((-2126196876) < (2126196883)))));
                                var_19 = ((/* implicit */short) (((~(((/* implicit */int) (unsigned char)242)))) * (((((/* implicit */_Bool) -5491469246484284595LL)) ? (((/* implicit */int) (_Bool)0)) : (1240009332)))));
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((arr_7 [i_0] [i_0] [i_2 - 1] [i_2]) % (((/* implicit */int) arr_6 [7ULL] [i_0]))))))))) < (max((arr_5 [i_0]), (max((arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]), (((/* implicit */unsigned int) arr_10 [(unsigned short)6] [i_1] [i_2] [(unsigned short)6] [i_0]))))))));
                    var_21 = ((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) var_16)) : ((~(arr_1 [i_2 + 1]))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */int) ((min(((-(2126196887))), (((/* implicit */int) var_13)))) < ((((+(((/* implicit */int) var_12)))) % ((~(((/* implicit */int) var_15))))))));
}
