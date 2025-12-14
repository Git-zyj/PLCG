/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100223
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100223 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100223
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
    var_19 = ((/* implicit */unsigned char) -2060422028);
    /* LoopSeq 3 */
    for (signed char i_0 = 3; i_0 < 11; i_0 += 3) /* same iter space */
    {
        arr_2 [i_0] [i_0] = ((/* implicit */long long int) 1853395591);
        arr_3 [i_0] = max((((/* implicit */long long int) (signed char)-30)), (2557468771850036300LL));
        var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) max((((/* implicit */short) (signed char)-127)), (((short) ((((/* implicit */_Bool) arr_1 [i_0])) ? (var_17) : (((/* implicit */int) (signed char)110))))))))));
    }
    for (signed char i_1 = 3; i_1 < 11; i_1 += 3) /* same iter space */
    {
        arr_7 [i_1] = ((((/* implicit */_Bool) -6320254766552027086LL)) ? (((/* implicit */long long int) ((/* implicit */int) (((-(-132062400))) == (((/* implicit */int) (signed char)127)))))) : (2557468771850036300LL));
        var_21 = ((/* implicit */long long int) ((((/* implicit */int) arr_5 [i_1])) / (((/* implicit */int) ((((/* implicit */_Bool) 2110335729084252528ULL)) || (((/* implicit */_Bool) 7673588778977198801LL)))))));
        arr_8 [i_1] = ((/* implicit */long long int) min(((short)9106), (((/* implicit */short) (signed char)-127))));
    }
    /* vectorizable */
    for (signed char i_2 = 3; i_2 < 11; i_2 += 3) /* same iter space */
    {
        /* LoopSeq 1 */
        for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
        {
            var_22 -= ((/* implicit */_Bool) arr_9 [i_2]);
            var_23 ^= ((/* implicit */int) ((arr_9 [i_2 + 3]) > (arr_9 [i_2 - 1])));
            var_24 = ((/* implicit */unsigned short) ((short) (signed char)-1));
            /* LoopSeq 1 */
            for (unsigned long long int i_4 = 4; i_4 < 13; i_4 += 1) 
            {
                arr_19 [i_4] [i_3] [4ULL] = ((/* implicit */unsigned short) ((((/* implicit */long long int) (+(var_13)))) - (arr_15 [i_4 - 2] [i_4 - 2] [i_4 - 2] [i_4 + 1])));
                var_25 = ((/* implicit */signed char) arr_13 [i_3 + 1] [i_3 + 1]);
            }
            arr_20 [i_2] [i_3 + 1] = ((/* implicit */unsigned long long int) (((+(var_17))) != (1012777099)));
        }
        /* LoopSeq 3 */
        for (unsigned short i_5 = 4; i_5 < 12; i_5 += 4) 
        {
            arr_23 [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)14)) ? (2901330527U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_5 - 1] [i_2 + 2] [9LL])))));
            var_26 = ((/* implicit */int) (-(0LL)));
            var_27 ^= ((/* implicit */short) ((((((/* implicit */_Bool) (signed char)-127)) && (var_3))) ? (((/* implicit */long long int) ((int) -7814187833216412896LL))) : ((~(0LL)))));
        }
        for (long long int i_6 = 0; i_6 < 14; i_6 += 1) 
        {
            arr_27 [i_2] [i_6] [i_6] = ((/* implicit */unsigned short) var_14);
            var_28 = ((/* implicit */short) arr_12 [i_2]);
        }
        for (int i_7 = 0; i_7 < 14; i_7 += 1) 
        {
            var_29 = ((/* implicit */long long int) ((unsigned int) arr_16 [i_2] [i_2 + 3]));
            var_30 = ((((/* implicit */_Bool) ((unsigned int) arr_28 [i_7]))) ? (((/* implicit */long long int) (+(arr_12 [i_2])))) : (-7814187833216412896LL));
            var_31 = ((/* implicit */signed char) min((var_31), (((/* implicit */signed char) ((((/* implicit */int) ((short) arr_26 [i_2] [i_2 + 1] [i_7]))) | (((/* implicit */int) arr_22 [i_2 - 2])))))));
            var_32 = ((/* implicit */unsigned short) (((~(((/* implicit */int) (_Bool)1)))) == (((/* implicit */int) (!(((/* implicit */_Bool) 6842008251981769530LL)))))));
        }
        arr_30 [i_2] [i_2 - 1] = ((/* implicit */short) ((long long int) ((long long int) -132062395)));
        var_33 = ((/* implicit */short) ((((/* implicit */unsigned int) arr_6 [i_2 + 1])) * (arr_28 [i_2 + 1])));
        arr_31 [6U] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) -879324212))));
    }
    var_34 = ((/* implicit */signed char) ((((_Bool) 9274505359944609698ULL)) ? (-1LL) : (min((((/* implicit */long long int) max((var_14), (var_14)))), ((-(2722967765970254060LL)))))));
    var_35 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) var_10)) == (((/* implicit */int) var_18))))) & (((/* implicit */int) ((_Bool) max((((/* implicit */unsigned long long int) (unsigned char)41)), (0ULL)))))));
}
