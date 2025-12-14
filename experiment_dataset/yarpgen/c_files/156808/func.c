/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156808
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156808 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156808
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
    var_10 = (-(((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (-1LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) >= ((-(var_2)))))));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        var_11 = ((/* implicit */_Bool) ((unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((7904138877569662031ULL) <= (((/* implicit */unsigned long long int) arr_1 [(_Bool)1])))))) > ((-(7955273098373273584ULL))))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_3)) ? ((-(((/* implicit */int) var_7)))) : ((+(((/* implicit */int) (_Bool)0))))));
            var_13 = ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */_Bool) (unsigned short)0)) && ((_Bool)1))));
            arr_5 [i_0] [i_0] [i_1] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))) : (11698510056664396717ULL)))) ? (((/* implicit */int) ((_Bool) (unsigned char)0))) : (var_1)));
            var_14 |= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) / (626633040628212316ULL)));
        }
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            var_15 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)250))))) || (((/* implicit */_Bool) (unsigned short)65285))))), (((((/* implicit */_Bool) max(((unsigned short)65510), ((unsigned short)10860)))) ? (10721526572109602697ULL) : (((/* implicit */unsigned long long int) (-(4294967292U))))))));
            /* LoopSeq 1 */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                arr_12 [i_0] [i_2] [i_3] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)11634)) ? (-15LL) : (-2905139973399935123LL)));
                var_16 = ((/* implicit */unsigned char) max(((((-(((/* implicit */int) (_Bool)0)))) * (((((/* implicit */int) (unsigned short)65535)) / (((/* implicit */int) (unsigned short)28161)))))), (var_6)));
                var_17 ^= ((/* implicit */unsigned long long int) arr_8 [i_3] [i_2]);
            }
            var_18 += ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) arr_0 [i_0] [i_2])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_0 [i_0] [i_2]))))));
        }
        /* vectorizable */
        for (unsigned char i_4 = 2; i_4 < 22; i_4 += 3) 
        {
            arr_17 [i_0] [i_4 + 2] = ((/* implicit */unsigned char) ((((((/* implicit */int) var_5)) - (((/* implicit */int) (unsigned short)10851)))) > ((+(((/* implicit */int) (unsigned short)65285))))));
            var_19 = ((/* implicit */long long int) arr_0 [i_0] [i_0]);
        }
    }
    var_20 = ((/* implicit */int) ((((/* implicit */_Bool) ((min((var_3), (16512907049267630227ULL))) - (max((((/* implicit */unsigned long long int) (_Bool)0)), (6029072008027774758ULL)))))) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))));
    var_21 += ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)0))))) ? (var_2) : (((/* implicit */unsigned long long int) -6279622111755523748LL))))) ? (((/* implicit */long long int) (+(((/* implicit */int) ((unsigned char) var_1)))))) : (min((var_9), (((/* implicit */long long int) var_1))))));
}
