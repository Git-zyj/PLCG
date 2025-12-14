/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167666
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167666 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167666
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
    for (unsigned char i_0 = 2; i_0 < 20; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                {
                    var_18 &= ((/* implicit */signed char) ((max((((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1] [i_2 + 1]))) & (arr_4 [(_Bool)0] [(_Bool)0] [i_1]))), (((/* implicit */long long int) ((arr_2 [i_0]) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))))) > (((/* implicit */long long int) var_9))));
                    var_19 &= ((/* implicit */unsigned long long int) 895842394);
                    var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) ((((arr_2 [i_1]) >= (((/* implicit */unsigned long long int) ((((/* implicit */int) var_3)) ^ (((/* implicit */int) arr_0 [i_0 + 1]))))))) ? ((((~(((/* implicit */int) arr_0 [i_2 + 1])))) | (((arr_5 [i_0] [i_1] [i_1]) ^ (((/* implicit */int) arr_0 [i_1])))))) : ((~(-895842405))))))));
                    /* LoopSeq 3 */
                    for (long long int i_3 = 2; i_3 < 21; i_3 += 1) 
                    {
                        var_21 = ((/* implicit */_Bool) ((unsigned int) ((((arr_5 [i_1] [i_1] [i_2]) & (((/* implicit */int) arr_7 [i_0 + 1] [i_0] [(signed char)7] [(signed char)7])))) - (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_3))) < (6473935590829957967LL)))))));
                        arr_9 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */long long int) arr_7 [i_0] [i_0] [i_2] [i_3 - 2]);
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 22; i_4 += 2) 
                    {
                        var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) ((arr_2 [(_Bool)1]) + (((/* implicit */unsigned long long int) ((-895842400) / (arr_10 [i_0] [9ULL] [9ULL] [i_1] [i_4])))))))));
                        var_23 -= ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) var_10))) % (arr_6 [i_2 + 1] [i_2 + 1] [i_2] [2LL])));
                    }
                    for (long long int i_5 = 0; i_5 < 22; i_5 += 1) 
                    {
                        var_24 = ((/* implicit */unsigned long long int) ((signed char) max((((((/* implicit */int) arr_3 [i_0])) & (((/* implicit */int) arr_0 [i_5])))), (((/* implicit */int) min((var_4), (arr_3 [i_1])))))));
                        var_25 = ((/* implicit */unsigned char) min((var_25), (((/* implicit */unsigned char) ((((long long int) (-(arr_12 [i_0 - 2] [i_0 - 2] [i_0 - 2])))) + (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (+(arr_12 [i_1] [(unsigned char)18] [i_5])))))))))))));
                    }
                }
            } 
        } 
    } 
    var_26 = ((/* implicit */int) max((var_26), (((((/* implicit */_Bool) 1431664425649131960LL)) ? (-895842392) : (((/* implicit */int) (unsigned char)115))))));
}
