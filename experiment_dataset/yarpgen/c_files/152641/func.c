/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152641
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152641 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152641
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
    var_13 = ((/* implicit */unsigned long long int) ((unsigned int) var_8));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 21; i_1 += 4) 
        {
            for (signed char i_2 = 4; i_2 < 19; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 23; i_3 += 2) 
                    {
                        for (signed char i_4 = 2; i_4 < 21; i_4 += 2) 
                        {
                            {
                                arr_12 [i_0] [i_1] [i_2] [i_4 + 1] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)-1)) ? ((~(((/* implicit */int) (short)-29409)))) : (max((((((/* implicit */int) (signed char)77)) << (((((/* implicit */int) (unsigned char)26)) - (19))))), (((/* implicit */int) (short)-4))))));
                                arr_13 [i_0] [i_0] [3ULL] [i_2] [(unsigned char)5] [(signed char)19] = ((/* implicit */long long int) max(((~(((8925557609184435020ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) min((arr_9 [i_0] [(_Bool)1] [(_Bool)1] [i_3] [13ULL] [i_3]), (var_11)))))))));
                            }
                        } 
                    } 
                    var_14 -= ((/* implicit */short) (~(var_5)));
                    arr_14 [15U] [i_1] [i_0] [i_1] = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) (signed char)5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 4294967293U)))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_2]))) % (8162984056332192963ULL)))))));
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 0; i_5 < 23; i_5 += 3) 
                    {
                        for (signed char i_6 = 1; i_6 < 22; i_6 += 2) 
                        {
                            {
                                var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) (~(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 6460110548043066909LL)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_1] [i_1]))))))))))))));
                                var_16 -= ((/* implicit */unsigned long long int) (~(min((((/* implicit */long long int) ((((/* implicit */int) arr_18 [i_0] [(short)2] [(signed char)6] [i_1] [i_0] [i_0] [12U])) | (((/* implicit */int) arr_11 [i_1]))))), (max((((/* implicit */long long int) arr_0 [(signed char)2])), (var_5)))))));
                                arr_22 [i_0] [i_5] [17ULL] [16ULL] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) (signed char)-76)) <= (((/* implicit */int) (signed char)-60))));
                                arr_23 [i_0] [i_0] [i_2 - 2] [i_5] [i_6] = ((/* implicit */long long int) max((((arr_21 [i_0] [i_1] [i_2 + 4] [19U] [10U]) - (arr_21 [i_0] [i_0] [22ULL] [i_0] [i_0]))), (((/* implicit */unsigned long long int) ((var_12) / (((/* implicit */long long int) ((/* implicit */int) (signed char)76))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
