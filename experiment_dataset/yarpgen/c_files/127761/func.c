/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127761
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127761 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127761
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
    var_13 = ((/* implicit */unsigned char) max((((((((/* implicit */_Bool) (unsigned short)24965)) ? (var_9) : (((/* implicit */unsigned long long int) var_8)))) / (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_0))))))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */int) var_6)) < (((/* implicit */int) var_2))))))))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 15; i_0 += 3) 
    {
        for (short i_1 = 3; i_1 < 16; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 4; i_2 < 16; i_2 += 2) 
                {
                    for (long long int i_3 = 2; i_3 < 15; i_3 += 3) 
                    {
                        {
                            arr_10 [i_0] [i_2] [i_1] [i_0] = ((/* implicit */short) max(((((-(var_12))) | (((/* implicit */long long int) ((/* implicit */int) ((var_5) > (((/* implicit */int) (_Bool)1)))))))), (((/* implicit */long long int) var_4))));
                            var_14 = ((/* implicit */short) ((max((((/* implicit */long long int) ((var_3) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_1 [i_0]))))), (max((((/* implicit */long long int) var_4)), (9223372036854775807LL))))) == (((/* implicit */long long int) ((((/* implicit */_Bool) (-(255983330)))) ? (((/* implicit */int) var_11)) : ((+(-255983331))))))));
                            var_15 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-120))) == (13069211982794211019ULL)))) - (((((/* implicit */int) var_10)) | (255983330)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_9)))) : (((((/* implicit */_Bool) max((arr_7 [i_0] [i_1] [i_2]), (5377532090915340596ULL)))) ? (max((-7917598497645249128LL), (((/* implicit */long long int) arr_6 [i_0] [i_1] [i_2] [i_3])))) : (((/* implicit */long long int) ((/* implicit */int) var_3)))))));
                        }
                    } 
                } 
                var_16 = max((((((/* implicit */_Bool) arr_8 [i_0 + 1] [i_0] [i_0 + 1])) ? (((/* implicit */int) var_0)) : (arr_8 [i_1 - 1] [i_0] [i_0 - 1]))), ((~(-1096309548))));
            }
        } 
    } 
}
