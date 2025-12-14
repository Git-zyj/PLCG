/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152473
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152473 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152473
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
    var_18 = ((/* implicit */short) (+(((/* implicit */int) (!((!(((/* implicit */_Bool) var_4)))))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        var_19 = ((/* implicit */int) var_5);
        /* LoopSeq 2 */
        for (short i_1 = 0; i_1 < 19; i_1 += 4) /* same iter space */
        {
            var_20 -= ((/* implicit */_Bool) (+(max((arr_0 [i_0]), (((/* implicit */unsigned long long int) ((int) arr_3 [i_1] [i_1] [(unsigned char)7])))))));
            arr_4 [i_0] [i_1] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((min((((/* implicit */unsigned short) var_16)), (arr_1 [i_1] [i_0]))), (((/* implicit */unsigned short) ((signed char) var_5)))))) ? (((/* implicit */unsigned long long int) ((long long int) (!(((/* implicit */_Bool) arr_3 [(unsigned char)10] [i_1] [i_0])))))) : (((6975294988276923608ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
            arr_5 [i_0] &= ((/* implicit */unsigned char) var_2);
            /* LoopSeq 1 */
            for (unsigned char i_2 = 3; i_2 < 15; i_2 += 2) 
            {
                var_21 = ((/* implicit */unsigned int) arr_1 [i_0] [(unsigned char)9]);
                var_22 = max(((+(max((arr_6 [i_1] [i_1] [i_0]), (((/* implicit */unsigned long long int) (short)3863)))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (signed char)31))))));
                var_23 = ((/* implicit */unsigned int) ((long long int) ((unsigned long long int) arr_7 [i_1] [i_1] [i_2 - 2] [i_1])));
            }
        }
        for (short i_3 = 0; i_3 < 19; i_3 += 4) /* same iter space */
        {
            /* LoopSeq 1 */
            for (int i_4 = 3; i_4 < 18; i_4 += 2) 
            {
                arr_14 [i_4] [i_4] [i_4] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_3] [i_3] [(unsigned char)10] [i_3])) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_8)) * (((/* implicit */int) (_Bool)1))))) : (arr_7 [i_4 - 3] [i_4 - 3] [i_4 + 1] [i_4 - 3])))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_4] [i_4 - 1] [i_4])))))) : (((((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) ^ (var_3))) + (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_4] [i_0]))))));
                var_24 *= ((/* implicit */signed char) arr_6 [i_0] [i_0] [i_0]);
                arr_15 [i_0] [i_3] [i_4] = ((/* implicit */_Bool) ((max((((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_3] [i_4])) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : (var_0))), (((/* implicit */long long int) var_6)))) + (((/* implicit */long long int) (~(((/* implicit */int) ((18446744073709551615ULL) > (var_12)))))))));
            }
            arr_16 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (_Bool)1);
        }
        var_25 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) + ((((_Bool)1) ? (((/* implicit */unsigned long long int) var_0)) : (max((var_9), (14067214191917877879ULL)))))));
        arr_17 [i_0] [i_0] = ((/* implicit */unsigned char) arr_1 [(unsigned char)5] [i_0]);
        var_26 = ((/* implicit */_Bool) max((((/* implicit */long long int) (short)8128)), (-4023393365736797996LL)));
    }
}
