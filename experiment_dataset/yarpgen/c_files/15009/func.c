/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15009
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15009 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15009
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
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        arr_2 [12LL] |= max((max((-4726772223829163470LL), (((/* implicit */long long int) arr_1 [(unsigned short)0])))), (((long long int) arr_1 [(short)2])));
        var_15 ^= ((/* implicit */long long int) 240550032656949572ULL);
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_2 = 1; i_2 < 23; i_2 += 1) 
        {
            /* LoopSeq 1 */
            for (short i_3 = 0; i_3 < 25; i_3 += 4) 
            {
                arr_9 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (arr_7 [i_1]) : (4161038840800802522LL)))) ? (((((/* implicit */_Bool) 18014398509481952LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (var_0))) : (((/* implicit */unsigned long long int) 5030831682848817290LL))));
                var_16 = ((/* implicit */unsigned long long int) max((var_16), (((((/* implicit */_Bool) arr_3 [i_2 + 1])) ? (arr_8 [i_1] [i_1] [i_1]) : (((/* implicit */unsigned long long int) arr_5 [i_3] [i_2 + 1]))))));
            }
            var_17 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 11054370975869773382ULL))));
        }
        arr_10 [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-2131)) ? (-4161038840800802532LL) : (((/* implicit */long long int) -203007071))));
        arr_11 [(unsigned short)16] [i_1] = ((/* implicit */_Bool) ((long long int) arr_7 [i_1]));
        var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) -1400414183)) ? (-5030831682848817286LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535)))));
        var_19 = ((/* implicit */unsigned char) ((int) arr_4 [i_1]));
    }
    var_20 = ((unsigned char) max((max((var_9), (((/* implicit */unsigned short) var_13)))), (var_4)));
    var_21 &= ((/* implicit */short) ((_Bool) max((var_1), ((+(((/* implicit */int) var_4)))))));
}
