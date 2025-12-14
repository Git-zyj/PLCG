/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156839
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156839 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156839
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
    var_15 = ((/* implicit */unsigned int) (-((-((-(((/* implicit */int) var_6))))))));
    var_16 = ((/* implicit */unsigned short) ((var_8) >> ((((~(((((((/* implicit */int) var_5)) + (2147483647))) >> (((var_3) - (1419810152))))))) + (39)))));
    var_17 = ((/* implicit */unsigned long long int) (+(min(((+(9145286582973911572LL))), (((/* implicit */long long int) ((signed char) -22)))))));
    var_18 = ((/* implicit */unsigned short) 5252914997120249710LL);
    /* LoopSeq 4 */
    for (long long int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        var_19 = -5252914997120249720LL;
        arr_2 [i_0] = ((/* implicit */signed char) 0U);
        var_20 = ((/* implicit */int) (signed char)76);
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            var_21 = ((/* implicit */long long int) (_Bool)1);
            var_22 += ((/* implicit */unsigned char) var_8);
        }
    }
    /* vectorizable */
    for (unsigned int i_2 = 0; i_2 < 12; i_2 += 1) 
    {
        var_23 &= ((/* implicit */long long int) ((1231781661U) / (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_2] [i_2])))));
        arr_8 [i_2] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) ((5245941482791746227ULL) * (((/* implicit */unsigned long long int) 3063185635U))))) ? (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)108))) : (var_11)))) : ((~(6633045002994258847LL)))));
        var_24 += ((/* implicit */long long int) (((+(-1253930029))) * (((/* implicit */int) (!(((/* implicit */_Bool) 4294967289U)))))));
    }
    for (unsigned short i_3 = 0; i_3 < 16; i_3 += 3) 
    {
        var_25 = ((/* implicit */unsigned int) min((var_25), (((/* implicit */unsigned int) min(((-((-(-5252914997120249720LL))))), (((5252914997120249721LL) / (((/* implicit */long long int) -22)))))))));
        var_26 = ((/* implicit */int) (~(5252914997120249720LL)));
        arr_12 [i_3] [i_3] = ((/* implicit */unsigned int) ((long long int) ((3063185635U) * (((/* implicit */unsigned int) arr_11 [i_3])))));
    }
    for (long long int i_4 = 3; i_4 < 22; i_4 += 2) 
    {
        arr_15 [5ULL] [i_4] = ((/* implicit */unsigned int) (~((~((~(((/* implicit */int) (short)-1))))))));
        /* LoopSeq 2 */
        for (long long int i_5 = 3; i_5 < 22; i_5 += 4) 
        {
            var_27 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)15))) >= (var_8)));
            arr_18 [i_4] = (+((+(((/* implicit */int) arr_16 [i_5 - 3] [i_5] [i_5 + 2])))));
        }
        for (signed char i_6 = 1; i_6 < 23; i_6 += 3) 
        {
            arr_21 [(_Bool)1] [i_4] [i_4] = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) min((((/* implicit */long long int) arr_17 [i_4] [i_6] [20U])), (5252914997120249710LL)))) ? (arr_14 [i_6 + 1] [i_6]) : (((/* implicit */unsigned int) ((((((/* implicit */int) (short)-29245)) + (2147483647))) << (((/* implicit */int) arr_17 [i_4] [i_6] [i_6])))))))));
            /* LoopNest 3 */
            for (unsigned short i_7 = 2; i_7 < 22; i_7 += 4) 
            {
                for (unsigned long long int i_8 = 3; i_8 < 21; i_8 += 4) 
                {
                    for (long long int i_9 = 0; i_9 < 24; i_9 += 4) 
                    {
                        {
                            var_28 += ((/* implicit */unsigned char) 1160448503);
                            var_29 = ((/* implicit */long long int) min((var_29), (((/* implicit */long long int) 4294967259U))));
                        }
                    } 
                } 
            } 
            var_30 = ((/* implicit */_Bool) min(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) ((((/* implicit */_Bool) (-(var_10)))) ? (min((((/* implicit */unsigned int) (unsigned char)216)), (var_11))) : (((/* implicit */unsigned int) 1073737728)))))));
        }
        var_31 = ((/* implicit */unsigned int) max((var_31), (arr_19 [i_4] [i_4])));
        var_32 = ((/* implicit */unsigned short) max((var_32), (((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) (~(var_10)))) ^ (((((/* implicit */_Bool) -22)) ? (((/* implicit */unsigned long long int) max((12LL), (5252914997120249710LL)))) : (7617911567371772210ULL))))))));
    }
}
