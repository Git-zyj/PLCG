/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158796
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158796 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158796
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
    var_15 ^= ((/* implicit */long long int) ((unsigned char) max((((14148712303438043326ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)186))))), (((/* implicit */unsigned long long int) var_4)))));
    var_16 *= ((/* implicit */unsigned short) (((+(((/* implicit */int) var_11)))) > (((/* implicit */int) ((((((/* implicit */_Bool) (unsigned char)69)) || (var_12))) || (((((/* implicit */_Bool) -2791048310838229390LL)) && (((/* implicit */_Bool) 892389375)))))))));
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned int) (+(((/* implicit */int) ((_Bool) (unsigned char)186)))));
        var_17 &= ((_Bool) ((((((/* implicit */_Bool) (unsigned short)65527)) && (((/* implicit */_Bool) var_3)))) || (((/* implicit */_Bool) max((-4089609392057888792LL), (((/* implicit */long long int) 892389375)))))));
    }
    for (unsigned char i_1 = 1; i_1 < 19; i_1 += 4) 
    {
        var_18 -= ((/* implicit */_Bool) (+((((+(-1265110449))) / (((/* implicit */int) max((arr_5 [i_1 + 1]), (var_9))))))));
        var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) (+(((/* implicit */int) arr_0 [i_1 - 1])))))));
        var_20 = ((/* implicit */unsigned int) ((((/* implicit */int) min((((/* implicit */unsigned char) arr_6 [i_1 - 1] [i_1 + 1])), ((unsigned char)255)))) & (((/* implicit */int) (short)-1))));
    }
}
