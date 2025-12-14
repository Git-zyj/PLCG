/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126091
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126091 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126091
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
    var_16 = ((/* implicit */unsigned char) max((var_16), (((unsigned char) (((~(2041541886U))) <= (((/* implicit */unsigned int) ((/* implicit */int) var_10))))))));
    /* LoopSeq 3 */
    for (long long int i_0 = 2; i_0 < 17; i_0 += 3) /* same iter space */
    {
        arr_2 [(signed char)5] = (signed char)-58;
        /* LoopSeq 2 */
        for (signed char i_1 = 3; i_1 < 18; i_1 += 1) 
        {
            var_17 -= ((/* implicit */unsigned char) ((unsigned int) ((int) arr_4 [i_0 - 1] [i_0 + 1] [i_0 + 1])));
            var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) 1427779094U))));
            var_19 = ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0 + 2]))) / (2253425410U)))) ? (arr_4 [i_0] [i_0] [(short)14]) : (((/* implicit */unsigned int) (+(((/* implicit */int) arr_3 [i_1]))))));
        }
        for (signed char i_2 = 3; i_2 < 18; i_2 += 4) 
        {
            var_20 = ((((/* implicit */int) ((unsigned short) 8447471128762953681LL))) ^ (((/* implicit */int) ((signed char) ((((/* implicit */int) var_0)) - (((/* implicit */int) arr_6 [(_Bool)1] [12LL])))))));
            var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) ((((/* implicit */_Bool) ((signed char) (signed char)(-127 - 1)))) ? (((-8447471128762953683LL) / (((/* implicit */long long int) 507207674U)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-14)) ? (((/* implicit */int) (signed char)-6)) : (((/* implicit */int) var_5))))))))));
        }
    }
    for (long long int i_3 = 2; i_3 < 17; i_3 += 3) /* same iter space */
    {
        arr_14 [(signed char)12] |= ((/* implicit */unsigned char) var_2);
        /* LoopNest 2 */
        for (short i_4 = 0; i_4 < 19; i_4 += 3) 
        {
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                {
                    var_22 = ((/* implicit */int) var_4);
                    var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(1427779112U)))) ? (((/* implicit */int) ((_Bool) var_13))) : ((-(((/* implicit */int) (unsigned char)180))))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (long long int i_6 = 2; i_6 < 17; i_6 += 3) /* same iter space */
    {
        arr_22 [7U] [(unsigned short)5] |= (-(((/* implicit */int) var_5)));
        var_24 = ((/* implicit */unsigned int) ((signed char) var_1));
    }
    var_25 = ((/* implicit */short) var_12);
}
