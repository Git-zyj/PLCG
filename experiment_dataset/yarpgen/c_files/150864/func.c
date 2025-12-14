/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150864
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150864 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150864
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
    var_20 = (~((+((+(126100789566373888LL))))));
    /* LoopSeq 4 */
    for (long long int i_0 = 3; i_0 < 14; i_0 += 2) 
    {
        var_21 *= ((/* implicit */long long int) (!(((/* implicit */_Bool) (-((-(var_6))))))));
        var_22 = ((/* implicit */short) (!(((/* implicit */_Bool) (-((+(-307286115612285991LL))))))));
    }
    for (short i_1 = 2; i_1 < 18; i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] = (-((~((+(arr_5 [i_1] [i_1 + 1]))))));
        arr_7 [i_1] &= ((/* implicit */long long int) (!(((/* implicit */_Bool) (+((~(var_15))))))));
        arr_8 [i_1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) 7152798694697852195LL))))))))));
    }
    for (short i_2 = 2; i_2 < 18; i_2 += 1) /* same iter space */
    {
        var_23 -= ((/* implicit */short) (-(((/* implicit */int) (!(((/* implicit */_Bool) (~(-1814342153126871253LL)))))))));
        var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) (~((~((~(((/* implicit */int) var_13)))))))))));
        arr_13 [i_2] &= ((/* implicit */long long int) (+(((/* implicit */int) (!((!(((/* implicit */_Bool) 1502776078454522984LL)))))))));
    }
    for (short i_3 = 2; i_3 < 18; i_3 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (long long int i_4 = 2; i_4 < 19; i_4 += 1) 
        {
            arr_20 [i_3] [i_3] = ((/* implicit */short) (~((~(((/* implicit */int) var_13))))));
            var_25 = ((/* implicit */short) (!(((/* implicit */_Bool) -1502776078454522993LL))));
            var_26 = (-(-2187450207352292755LL));
            var_27 ^= ((/* implicit */long long int) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_12 [i_4])))))));
            var_28 = ((/* implicit */short) (~((+(((/* implicit */int) (short)16121))))));
        }
        var_29 = ((/* implicit */long long int) min((var_29), ((~((~((+(6022943930357005163LL)))))))));
        var_30 &= ((/* implicit */long long int) (+((~(((/* implicit */int) (!(((/* implicit */_Bool) -2203051615768183388LL)))))))));
    }
    /* LoopNest 3 */
    for (long long int i_5 = 3; i_5 < 9; i_5 += 3) 
    {
        for (long long int i_6 = 0; i_6 < 11; i_6 += 3) 
        {
            for (short i_7 = 1; i_7 < 10; i_7 += 3) 
            {
                {
                    arr_31 [i_6] [i_6] [i_6] [i_7] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) 549755813887LL))))))))));
                    /* LoopNest 2 */
                    for (long long int i_8 = 0; i_8 < 11; i_8 += 1) 
                    {
                        for (short i_9 = 4; i_9 < 10; i_9 += 4) 
                        {
                            {
                                arr_37 [i_5] [i_5] [i_5] [i_6] [i_5] = ((/* implicit */short) (!((!(((/* implicit */_Bool) (+(((/* implicit */int) (short)32767)))))))));
                                var_31 = ((/* implicit */long long int) min((var_31), ((~(8511521440516146508LL)))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_10 = 0; i_10 < 11; i_10 += 1) 
                    {
                        for (long long int i_11 = 0; i_11 < 11; i_11 += 2) 
                        {
                            {
                                var_32 = ((/* implicit */long long int) max((var_32), (((/* implicit */long long int) (!(((/* implicit */_Bool) (+((+(arr_32 [i_5] [i_6] [i_11] [i_5])))))))))));
                                arr_44 [i_5 + 1] [i_5] [i_5] [i_6] [i_5 - 2] = ((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) (+(arr_33 [i_11] [i_6] [i_11] [i_10])))))))));
                                arr_45 [i_5] [i_5] [(short)10] [i_6] [i_7 - 1] [i_6] = ((/* implicit */short) (+(-1227552917211382324LL)));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_33 = (~((+(7890790276427199192LL))));
}
