/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11076
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11076 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11076
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
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 15; i_2 += 4) 
            {
                {
                    var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)47461)) && (((/* implicit */_Bool) (unsigned short)18050))))) % (((/* implicit */int) (unsigned short)65535)))))));
                    var_17 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)18075))))) ? (((/* implicit */unsigned long long int) max((var_6), (var_6)))) : (((((/* implicit */_Bool) (unsigned char)3)) ? (((/* implicit */unsigned long long int) 0U)) : (2227645969389176600ULL)))))));
                    arr_7 [i_0] [i_2] [i_2] &= ((/* implicit */short) ((_Bool) min((((/* implicit */unsigned int) (short)0)), (var_10))));
                    var_18 = ((/* implicit */long long int) (unsigned short)18075);
                    var_19 += ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */int) (signed char)-102)) > (((/* implicit */int) (short)18289))))) ^ (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)62974))) == (2400518604U))))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-18301)) ? (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)164)), (max(((unsigned short)18074), (((/* implicit */unsigned short) (short)10)))))))) : ((+(min((var_6), (((/* implicit */long long int) var_7))))))));
    /* LoopSeq 3 */
    for (long long int i_3 = 0; i_3 < 24; i_3 += 2) 
    {
        arr_10 [i_3] = ((/* implicit */short) ((((/* implicit */int) (short)-11)) <= (((/* implicit */int) (unsigned short)47463))));
        arr_11 [i_3] = (!(((/* implicit */_Bool) ((signed char) (unsigned char)164))));
    }
    for (signed char i_4 = 1; i_4 < 18; i_4 += 1) /* same iter space */
    {
        var_21 = ((/* implicit */unsigned long long int) (-(max((((/* implicit */int) ((_Bool) 1056135032075203186ULL))), ((~(((/* implicit */int) (unsigned short)18075))))))));
        arr_14 [i_4 - 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)-18306)) ? (((/* implicit */int) (short)16797)) : (((/* implicit */int) (unsigned short)18075))));
        var_22 = min((((((/* implicit */_Bool) (unsigned char)226)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)47461))) : (2382787083U))), (((unsigned int) (short)-7802)));
        var_23 = ((/* implicit */signed char) max((min((((/* implicit */long long int) ((signed char) var_7))), (max((((/* implicit */long long int) var_10)), (-8032465780080430305LL))))), (((-8032465780080430305LL) & (-8032465780080430305LL)))));
    }
    for (signed char i_5 = 1; i_5 < 18; i_5 += 1) /* same iter space */
    {
        var_24 = ((/* implicit */unsigned int) min((var_24), (((/* implicit */unsigned int) ((long long int) min(((unsigned short)18098), (((/* implicit */unsigned short) (short)18267))))))));
        arr_19 [i_5] = ((/* implicit */long long int) ((unsigned short) (signed char)28));
        var_25 = ((/* implicit */long long int) min((var_25), (((/* implicit */long long int) (unsigned short)61481))));
        var_26 = ((/* implicit */long long int) max((var_26), (((((/* implicit */_Bool) var_10)) ? (max((-1LL), (((/* implicit */long long int) (short)18296)))) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) (signed char)59))))))));
    }
}
