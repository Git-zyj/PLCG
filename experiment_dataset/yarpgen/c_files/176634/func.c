/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176634
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176634 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176634
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
    var_12 = ((/* implicit */unsigned int) (~(((((-85614031) - (((/* implicit */int) var_4)))) & (((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))))));
    var_13 = ((/* implicit */long long int) (~(((/* implicit */int) ((signed char) (-(-8358967642789504525LL)))))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 1; i_0 < 20; i_0 += 3) /* same iter space */
    {
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_14 = ((int) min((((/* implicit */signed char) arr_2 [i_1])), (((signed char) arr_2 [i_0]))));
            /* LoopSeq 1 */
            for (int i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                arr_7 [i_0] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (short)2047))))))))));
                var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) max(((unsigned short)9529), (((/* implicit */unsigned short) (signed char)116))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1))))) : ((+(((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [6U]))) / (7U)))))));
            }
            arr_8 [i_0] = ((/* implicit */_Bool) (+(((unsigned long long int) arr_6 [i_0 + 1] [i_0] [i_0] [i_1]))));
        }
        arr_9 [i_0] [i_0] = ((/* implicit */_Bool) (+(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0 + 1]))) % ((~(arr_6 [5U] [i_0] [i_0] [i_0])))))));
        arr_10 [i_0] = ((/* implicit */signed char) ((max((((((/* implicit */_Bool) (unsigned char)153)) ? (5963522657506502128LL) : (((/* implicit */long long int) 3857877557U)))), (((/* implicit */long long int) (-(4148665906U)))))) % (((/* implicit */long long int) ((int) ((((/* implicit */_Bool) (unsigned char)34)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)44))) : (arr_6 [i_0] [5U] [i_0] [i_0])))))));
    }
    for (unsigned char i_3 = 1; i_3 < 20; i_3 += 3) /* same iter space */
    {
        var_16 = ((((/* implicit */_Bool) ((signed char) arr_5 [i_3 + 1] [i_3] [i_3 + 1] [i_3]))) ? (((/* implicit */int) (!(((/* implicit */_Bool) max((-361822171636281675LL), (((/* implicit */long long int) (signed char)-119)))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-48)))))))));
        arr_13 [i_3] [i_3 + 2] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) (signed char)124)) ? (-1010671501) : ((+(((/* implicit */int) arr_12 [i_3])))))), (((/* implicit */int) ((unsigned char) arr_1 [i_3 - 1] [i_3])))));
        /* LoopSeq 2 */
        for (int i_4 = 0; i_4 < 22; i_4 += 3) 
        {
            arr_16 [i_3] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -4193508778416295764LL)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 2039341025797568937LL)) ? (63) : (((/* implicit */int) (_Bool)1))))) : (((long long int) ((unsigned long long int) 2147483645)))));
            var_17 -= ((/* implicit */unsigned char) (~((~(((/* implicit */int) arr_3 [14] [i_3 + 2] [4U]))))));
        }
        for (int i_5 = 1; i_5 < 21; i_5 += 2) 
        {
            arr_20 [i_3] = ((/* implicit */_Bool) ((max((arr_5 [i_5 + 1] [i_3] [i_3] [i_3 + 1]), (arr_5 [i_3] [i_3] [i_5] [i_5]))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 3613161692433590744LL)) ? (arr_15 [i_3 + 1] [i_5 - 1] [i_5]) : (arr_15 [i_3 + 1] [i_5 + 1] [i_5])))) : (((long long int) (+(arr_4 [i_3] [i_5] [i_3]))))));
            arr_21 [i_3] [i_5] = ((/* implicit */signed char) (-((+(((((/* implicit */int) (unsigned short)53208)) + (((/* implicit */int) (unsigned short)58385))))))));
            arr_22 [i_3] [i_3] = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) max((arr_19 [i_3]), (((/* implicit */unsigned int) (_Bool)1))))) ? ((-(6685366613435451025LL))) : (((/* implicit */long long int) (-(((/* implicit */int) arr_14 [15] [i_3] [i_3])))))))));
        }
        arr_23 [i_3] [(short)6] &= max((((/* implicit */int) ((((((/* implicit */int) arr_14 [6ULL] [(short)12] [i_3])) / (arr_11 [i_3 + 2]))) == (arr_4 [i_3 + 1] [i_3 + 1] [(signed char)18])))), (475323706));
    }
}
