/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15769
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15769 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15769
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
    var_17 |= ((/* implicit */long long int) (!(((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_13)) ? (var_15) : (((/* implicit */long long int) 9U)))))))));
    var_18 = ((/* implicit */long long int) var_8);
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        var_19 = ((/* implicit */_Bool) (unsigned char)9);
        arr_3 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) (unsigned short)18081)) ? (var_15) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)47455))))), (((/* implicit */long long int) var_8))))) ? (((arr_1 [i_0]) | (arr_1 [i_0]))) : (arr_0 [i_0])));
        /* LoopSeq 1 */
        for (unsigned int i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            /* LoopNest 3 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (unsigned int i_3 = 0; i_3 < 23; i_3 += 3) 
                {
                    for (long long int i_4 = 0; i_4 < 23; i_4 += 3) 
                    {
                        {
                            var_20 ^= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (unsigned short)18081)), (arr_12 [i_0] [(_Bool)1])))) | (((((/* implicit */unsigned long long int) min((1090186037U), (3413273012U)))) ^ (min((((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))), (arr_6 [i_0])))))));
                            var_21 -= ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) (-(3814426417031321427LL)))) ? (var_3) : ((-(1786273932)))))));
                            var_22 -= ((/* implicit */unsigned int) ((3682529899998660482ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))));
                            var_23 -= ((/* implicit */int) (((!(((((/* implicit */_Bool) 3682529899998660499ULL)) && (((/* implicit */_Bool) arr_5 [i_0] [i_1])))))) ? (max((7690614300928636609ULL), (((/* implicit */unsigned long long int) arr_10 [i_0] [i_1] [14U] [i_3] [i_0])))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((14764214173710891116ULL), (((/* implicit */unsigned long long int) 9223372036854775807LL))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (((arr_0 [i_0]) * (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)160))))))))));
                        }
                    } 
                } 
            } 
            var_24 = ((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) -2951344062361428516LL)) ? (arr_11 [i_1] [i_1] [i_1] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)201))))));
        }
    }
    for (short i_5 = 3; i_5 < 20; i_5 += 3) 
    {
        var_25 = ((/* implicit */signed char) ((unsigned short) (~(((/* implicit */int) var_2)))));
        var_26 = ((/* implicit */long long int) ((unsigned long long int) max((1921812133753666105LL), (((/* implicit */long long int) -666718117)))));
    }
}
