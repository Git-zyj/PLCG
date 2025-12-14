/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167330
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167330 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167330
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
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        var_19 = ((/* implicit */unsigned int) (-((+(((/* implicit */int) ((signed char) arr_0 [i_0] [i_0])))))));
        var_20 = ((/* implicit */short) (~(var_16)));
    }
    for (unsigned int i_1 = 0; i_1 < 23; i_1 += 4) 
    {
        arr_5 [i_1] [i_1] = ((/* implicit */int) max((((long long int) arr_4 [i_1] [i_1])), (min((((/* implicit */long long int) (!(((/* implicit */_Bool) arr_2 [i_1] [i_1]))))), (((((/* implicit */_Bool) 5085798862029668751LL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-5636906572147684613LL)))))));
        var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) (~(max((arr_4 [i_1] [i_1]), (arr_4 [i_1] [i_1]))))))));
        var_22 = ((/* implicit */unsigned short) var_7);
    }
    for (short i_2 = 3; i_2 < 9; i_2 += 3) 
    {
        arr_9 [i_2] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned char) var_8))) ? (((((/* implicit */_Bool) (((_Bool)1) ? (6824853065716588404LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-116)))))) ? (((((/* implicit */_Bool) -5085798862029668752LL)) ? (var_4) : (((/* implicit */int) var_17)))) : ((-(((/* implicit */int) var_18)))))) : ((~(((/* implicit */int) var_10))))));
        arr_10 [i_2] = ((/* implicit */short) min((min((arr_2 [i_2 + 2] [5LL]), (arr_2 [i_2 + 1] [(unsigned short)22]))), (max((((/* implicit */long long int) ((signed char) 67108856))), (-5085798862029668751LL)))));
        /* LoopNest 3 */
        for (unsigned int i_3 = 0; i_3 < 11; i_3 += 1) 
        {
            for (unsigned short i_4 = 0; i_4 < 11; i_4 += 4) 
            {
                for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
                {
                    {
                        var_23 |= ((/* implicit */short) (-(((/* implicit */int) (signed char)(-127 - 1)))));
                        arr_18 [i_2] [i_2] = ((/* implicit */int) min((min((((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (_Bool)1))))), (6824853065716588404LL))), (((/* implicit */long long int) (_Bool)1))));
                    }
                } 
            } 
        } 
        arr_19 [i_2] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned short) (+(337871148))))) << ((+(((/* implicit */int) (unsigned short)2))))));
        var_24 = ((/* implicit */unsigned short) ((((/* implicit */long long int) var_3)) > (min((max((5085798862029668747LL), (((/* implicit */long long int) var_9)))), (((/* implicit */long long int) ((6824853065716588390LL) > (-6824853065716588405LL))))))));
    }
    var_25 = ((_Bool) (+(((((/* implicit */unsigned long long int) 5085798862029668764LL)) - (7666889332410656182ULL)))));
}
