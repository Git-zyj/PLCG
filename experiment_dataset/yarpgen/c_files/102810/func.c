/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102810
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102810 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102810
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
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            {
                arr_4 [i_0] [i_0] [i_0] &= ((/* implicit */unsigned short) ((min((max((-2407845119472873427LL), (((/* implicit */long long int) 1040384U)))), (((/* implicit */long long int) ((_Bool) (short)4064))))) / (((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) 1040384U)) ? (991789935U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-16751)))))))));
                var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) (_Bool)1))));
                var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) 4857747310144420488ULL)) ? (568958793U) : (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)26265)))))))))));
                arr_5 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)232))))) ? (max((((int) (short)4065)), (((/* implicit */int) (signed char)-121)))) : (((int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)41668)))))));
            }
        } 
    } 
    var_20 |= ((/* implicit */unsigned int) ((int) ((unsigned long long int) ((((/* implicit */_Bool) 4293926912U)) ? (((/* implicit */int) (unsigned char)56)) : (((/* implicit */int) (unsigned short)23867))))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (int i_2 = 1; i_2 < 15; i_2 += 1) 
    {
        arr_9 [i_2] = ((/* implicit */unsigned int) ((int) 181207201));
        arr_10 [i_2] = ((/* implicit */short) ((int) (unsigned char)149));
        var_21 = ((/* implicit */unsigned short) ((signed char) (_Bool)1));
    }
    for (short i_3 = 0; i_3 < 13; i_3 += 4) /* same iter space */
    {
        var_22 = ((/* implicit */_Bool) ((unsigned int) ((unsigned int) ((signed char) (_Bool)1))));
        var_23 = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) ((short) 18234431153066244382ULL))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)39037)) ? (((/* implicit */int) (unsigned char)100)) : (-396425093)))) ? (4163685266U) : (max((((/* implicit */unsigned int) (unsigned char)137)), (3726008496U)))))));
        arr_15 [(unsigned short)2] &= ((int) max((568958793U), (((/* implicit */unsigned int) (unsigned char)79))));
    }
    for (short i_4 = 0; i_4 < 13; i_4 += 4) /* same iter space */
    {
        var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) ((long long int) ((((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)115))) : (1040376U))) & (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)42658)) <= (((/* implicit */int) (unsigned char)137))))))))))));
        var_25 = ((/* implicit */int) max((((/* implicit */long long int) ((((/* implicit */_Bool) 860981312)) ? (max((((/* implicit */int) (_Bool)1)), (-616087872))) : (((/* implicit */int) max((((/* implicit */short) (unsigned char)156)), ((short)30935))))))), (((((/* implicit */_Bool) 1267516792)) ? (-3527936606218183145LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)152)))))));
    }
    /* vectorizable */
    for (short i_5 = 0; i_5 < 13; i_5 += 4) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned char i_6 = 4; i_6 < 9; i_6 += 2) 
        {
            var_26 = ((/* implicit */short) ((signed char) (unsigned char)87));
            arr_25 [i_5] = ((/* implicit */unsigned short) ((int) 1493526234U));
            var_27 -= 1040384U;
        }
        arr_26 [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 568958793U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)0))) : (18446744073709551615ULL)));
    }
    var_28 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) 905166446)), (max((((/* implicit */unsigned long long int) max((568958788U), (((/* implicit */unsigned int) (unsigned short)42659))))), (((((/* implicit */_Bool) (signed char)87)) ? (13677257431541531201ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65045)))))))));
    var_29 = ((/* implicit */signed char) var_6);
}
