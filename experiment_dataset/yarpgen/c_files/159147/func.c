/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159147
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159147 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159147
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
    var_17 = ((/* implicit */unsigned char) var_3);
    var_18 = ((/* implicit */unsigned char) ((((((((/* implicit */_Bool) var_11)) ? (var_5) : (((/* implicit */unsigned long long int) var_11)))) % (7003272671394450718ULL))) << (((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (1599656385336486219ULL) : (((/* implicit */unsigned long long int) var_11))))) ? ((+(var_7))) : (((/* implicit */unsigned long long int) var_14)))) - (4149382393487422126ULL)))));
    /* LoopSeq 2 */
    for (int i_0 = 1; i_0 < 14; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((var_4) & (16847087688373065388ULL)))) ? (var_9) : ((+(16847087688373065396ULL)))));
        arr_3 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((((arr_1 [i_0]) + (arr_1 [i_0]))) / (((/* implicit */int) arr_0 [i_0]))))) ? (((/* implicit */unsigned long long int) arr_1 [i_0])) : (max((0ULL), (1599656385336486215ULL)))));
    }
    for (int i_1 = 0; i_1 < 25; i_1 += 3) 
    {
        arr_7 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */int) (unsigned char)255)) : (var_11)))) || (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3136076476321245390ULL)) || (((/* implicit */_Bool) (-2147483647 - 1)))))), (9100486486878760306ULL))))));
        var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */int) max((((/* implicit */unsigned char) ((((/* implicit */_Bool) 1599656385336486216ULL)) || (((/* implicit */_Bool) arr_5 [i_1]))))), (((unsigned char) 2107377363))))) == (((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */int) var_6)) : (arr_4 [i_1])))));
    }
    var_20 = ((/* implicit */unsigned long long int) (unsigned char)226);
    var_21 = ((((/* implicit */_Bool) ((int) (unsigned char)0))) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!((!(((/* implicit */_Bool) var_14)))))))));
}
