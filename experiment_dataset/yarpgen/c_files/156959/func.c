/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156959
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156959 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156959
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
    var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (signed char)-37)) : ((~((+(((/* implicit */int) (signed char)37))))))));
    var_21 = ((/* implicit */signed char) ((unsigned char) ((long long int) (~(var_1)))));
    /* LoopSeq 1 */
    for (short i_0 = 2; i_0 < 22; i_0 += 3) 
    {
        var_22 = ((/* implicit */unsigned int) (signed char)-37);
        var_23 = ((/* implicit */unsigned int) ((_Bool) (-((-(4762567456991615926LL))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (signed char i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            var_24 = ((/* implicit */unsigned int) (+(((-4762567456991615928LL) + (8989197016238731104LL)))));
            arr_6 [i_0] [i_0] [i_0 + 3] = ((/* implicit */unsigned char) arr_0 [i_1]);
        }
        for (short i_2 = 1; i_2 < 24; i_2 += 2) 
        {
            /* LoopSeq 2 */
            for (short i_3 = 0; i_3 < 25; i_3 += 3) 
            {
                var_25 = ((/* implicit */unsigned int) var_3);
                /* LoopSeq 1 */
                for (signed char i_4 = 3; i_4 < 24; i_4 += 1) 
                {
                    var_26 = ((/* implicit */_Bool) (-(-4762567456991615926LL)));
                    var_27 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_4 - 3] [i_4 + 1] [i_4] [i_4 + 1])) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_5))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_13))))) : (((((/* implicit */unsigned long long int) 2929043153U)) / (var_4)))));
                    arr_14 [i_0] [i_2] [i_4] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4762567456991615918LL)) ? (((/* implicit */int) (short)32766)) : (arr_8 [i_0 + 3] [i_2 + 1])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) -1875257537))))) : ((~(((/* implicit */int) (signed char)-39))))));
                }
            }
            for (int i_5 = 1; i_5 < 22; i_5 += 2) 
            {
                arr_17 [i_0] [i_0] [i_5] [i_0] = ((/* implicit */long long int) ((((_Bool) -4762567456991615928LL)) ? (((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (!(arr_13 [i_0 - 2] [i_5 + 3] [i_5] [i_2] [i_5 - 1])))) : ((~(((/* implicit */int) var_5))))))) : (((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)63830))) + (arr_11 [i_0] [i_0] [i_5] [i_5 + 1]))) - (min((((/* implicit */unsigned int) (signed char)38)), (31U)))))));
                arr_18 [i_5] = (!((!(((/* implicit */_Bool) arr_5 [i_5] [i_5] [i_5])))));
            }
            var_28 = ((/* implicit */int) (!(((/* implicit */_Bool) 4762567456991615904LL))));
            arr_19 [i_0 - 1] = ((/* implicit */unsigned char) var_4);
        }
    }
}
