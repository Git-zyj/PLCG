/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1544
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1544 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1544
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
    var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) ((1258391846397497879LL) == (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0)))))), (var_3)))) ? (var_16) : (((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1)))))));
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        var_20 = ((/* implicit */int) arr_0 [i_0]);
        var_21 = ((/* implicit */long long int) arr_1 [(_Bool)0]);
        var_22 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [12]))) : (arr_0 [i_0])))) ? ((-(((/* implicit */int) arr_2 [i_0] [i_0])))) : (((/* implicit */int) arr_2 [i_0] [i_0])))))));
    }
    for (unsigned int i_1 = 4; i_1 < 24; i_1 += 4) 
    {
        var_23 = ((/* implicit */unsigned int) ((((long long int) min((((/* implicit */unsigned short) arr_3 [i_1])), (arr_4 [i_1 - 1] [i_1 - 2])))) >= (-1258391846397497879LL)));
        var_24 = max((((-1258391846397497880LL) - (((/* implicit */long long int) ((/* implicit */int) (short)21480))))), (((/* implicit */long long int) ((arr_6 [i_1 - 2]) ? (((/* implicit */int) arr_6 [i_1 - 4])) : (((/* implicit */int) arr_6 [i_1 - 3]))))));
    }
    /* LoopSeq 3 */
    for (long long int i_2 = 0; i_2 < 19; i_2 += 3) 
    {
        var_25 = ((/* implicit */signed char) ((((arr_6 [i_2]) ? (((/* implicit */int) arr_10 [i_2] [i_2])) : (((/* implicit */int) arr_10 [6U] [i_2])))) - ((+(((/* implicit */int) arr_6 [i_2]))))));
        var_26 = ((/* implicit */_Bool) ((unsigned int) (short)9910));
    }
    for (int i_3 = 0; i_3 < 21; i_3 += 4) 
    {
        var_27 += ((/* implicit */unsigned int) arr_6 [i_3]);
        var_28 = ((/* implicit */long long int) (-(min((arr_12 [12LL]), (((int) (_Bool)1))))));
    }
    for (short i_4 = 0; i_4 < 25; i_4 += 4) 
    {
        var_29 = ((/* implicit */_Bool) max((((/* implicit */int) max((arr_4 [i_4] [i_4]), (arr_4 [i_4] [i_4])))), (((((/* implicit */int) arr_3 [i_4])) & (((/* implicit */int) arr_3 [i_4]))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (long long int i_5 = 0; i_5 < 25; i_5 += 4) /* same iter space */
        {
            var_30 -= ((/* implicit */int) var_12);
            var_31 = ((/* implicit */long long int) arr_17 [i_4] [i_5] [i_4]);
            var_32 = ((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_4])) ? (-1864044876368978884LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-9911)))));
        }
        for (long long int i_6 = 0; i_6 < 25; i_6 += 4) /* same iter space */
        {
            var_33 = ((/* implicit */int) arr_14 [i_6]);
            var_34 &= ((/* implicit */signed char) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_19 [i_4])) ? (arr_20 [i_4] [i_4]) : (arr_20 [i_6] [i_4])))) > (max((((/* implicit */long long int) arr_4 [i_4] [i_6])), (-2624559263855928704LL)))));
        }
    }
    var_35 |= ((/* implicit */int) ((long long int) max((((/* implicit */short) ((unsigned char) var_10))), (((short) (short)5915)))));
}
