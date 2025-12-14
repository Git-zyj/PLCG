/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125948
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125948 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125948
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
    var_10 = ((/* implicit */unsigned short) max((var_10), (((/* implicit */unsigned short) var_1))));
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        var_11 = ((/* implicit */unsigned long long int) max((var_11), (((/* implicit */unsigned long long int) 2974355684855922751LL))));
        var_12 &= ((/* implicit */unsigned char) arr_0 [i_0] [(_Bool)0]);
        var_13 *= ((((/* implicit */_Bool) min((min((((/* implicit */long long int) (short)-7175)), (-6574623277390074183LL))), (((/* implicit */long long int) (unsigned char)0))))) && (((/* implicit */_Bool) var_6)));
        arr_2 [i_0] = ((/* implicit */_Bool) 829246999);
    }
    for (signed char i_1 = 0; i_1 < 11; i_1 += 4) 
    {
        var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) (((((_Bool)1) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (signed char)0)))) | (((/* implicit */int) (unsigned char)25))))) ? (((((((/* implicit */_Bool) arr_0 [i_1] [i_1])) ? (((/* implicit */int) (short)-7175)) : (((/* implicit */int) (short)(-32767 - 1))))) + (((/* implicit */int) (signed char)48)))) : (-486662265)));
        arr_5 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) (signed char)-105)) ? (-5061479585217449658LL) : (7905783055437454081LL))), (((/* implicit */long long int) var_1))))) ? (((/* implicit */int) ((((/* implicit */int) arr_1 [i_1])) > (((((/* implicit */int) arr_1 [i_1])) + (((/* implicit */int) (signed char)-105))))))) : (((/* implicit */int) ((signed char) (-9223372036854775807LL - 1LL))))));
        var_15 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) var_5)) & (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_4 [i_1])))))))) : (((/* implicit */int) var_9))));
        var_16 = ((/* implicit */signed char) arr_3 [i_1] [i_1]);
    }
    for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 1) 
    {
        var_17 = ((/* implicit */short) ((((/* implicit */int) ((unsigned char) (short)(-32767 - 1)))) | (((/* implicit */int) arr_1 [i_2]))));
        var_18 ^= ((/* implicit */unsigned short) max((((9223372036854775807LL) - (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_2])) ? (-6108782340263756389LL) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_2])))))) ? (((/* implicit */long long int) ((/* implicit */int) min(((short)-7175), (((/* implicit */short) (_Bool)1)))))) : (arr_6 [i_2])))));
    }
    /* LoopNest 2 */
    for (long long int i_3 = 0; i_3 < 20; i_3 += 4) 
    {
        for (unsigned long long int i_4 = 0; i_4 < 20; i_4 += 2) 
        {
            {
                var_19 = ((/* implicit */long long int) min((var_19), (max((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) var_0)) : (((((/* implicit */_Bool) arr_13 [i_3] [10LL] [i_4])) ? (((/* implicit */int) arr_10 [(signed char)13])) : (((/* implicit */int) arr_11 [i_3]))))))), (((((/* implicit */_Bool) var_7)) ? (-9223372036854775807LL) : (143974450587500544LL)))))));
                var_20 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) arr_1 [i_3])))) ? (((/* implicit */int) max((((/* implicit */unsigned short) arr_10 [i_4])), ((unsigned short)34050)))) : ((~(((/* implicit */int) (unsigned short)228))))));
            }
        } 
    } 
    var_21 = ((/* implicit */_Bool) min((var_6), (((/* implicit */long long int) (short)18511))));
}
