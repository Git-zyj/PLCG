/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138144
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138144 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138144
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
    var_12 = ((/* implicit */signed char) (-(((int) (+(((/* implicit */int) (unsigned char)0)))))));
    var_13 *= ((/* implicit */unsigned short) -901515415);
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        var_14 = ((/* implicit */unsigned int) ((unsigned char) var_1));
        /* LoopSeq 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            arr_5 [i_0] = ((/* implicit */int) ((_Bool) var_4));
            var_15 = ((/* implicit */int) max((var_15), ((+((+(((((/* implicit */_Bool) var_10)) ? (var_4) : (((/* implicit */int) var_10))))))))));
            arr_6 [i_0] = ((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) -776580956)) ? ((~(var_4))) : ((+(((/* implicit */int) var_6)))))) : ((+(var_3))));
        }
        for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 1) 
        {
            var_16 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -901515399)) ? (901515393) : (901515414)))) ? (((((/* implicit */_Bool) var_7)) ? (-3086844438719543546LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)49))))) : (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) var_11)) : (901515393))))));
            arr_9 [i_0] [i_2] [i_2] = ((unsigned long long int) ((_Bool) ((int) (_Bool)1)));
            var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((_Bool) var_11))))))))));
        }
        for (int i_3 = 0; i_3 < 19; i_3 += 1) 
        {
            var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? ((+(((unsigned long long int) var_0)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(var_7)))) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) 3783331469001705976LL)))) : (((long long int) -901515415))))))))));
            var_19 &= ((/* implicit */short) (((!(((/* implicit */_Bool) (unsigned short)22)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) var_4)) : (var_5)))) ? (((/* implicit */int) ((unsigned char) var_8))) : ((((_Bool)1) ? (((/* implicit */int) (short)31501)) : (((/* implicit */int) (unsigned char)223))))))) : (((((/* implicit */_Bool) ((long long int) var_11))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_6))))) : (((((/* implicit */_Bool) var_4)) ? (var_0) : (((/* implicit */unsigned long long int) -1264179755))))))));
        }
    }
}
