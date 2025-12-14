/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179234
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179234 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179234
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
    var_14 = ((/* implicit */unsigned int) min((((((/* implicit */unsigned long long int) min((8593820027014797208LL), (-915581483401338106LL)))) % (((((/* implicit */_Bool) -573159378)) ? (((/* implicit */unsigned long long int) -2147483638)) : (8609287823679431509ULL))))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_5)))))));
    /* LoopSeq 3 */
    for (unsigned char i_0 = 1; i_0 < 10; i_0 += 4) 
    {
        var_15 = ((/* implicit */unsigned int) ((long long int) arr_2 [i_0 + 2]));
        arr_3 [i_0 + 2] [i_0 + 1] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */long long int) max((4294967269U), (((/* implicit */unsigned int) ((((/* implicit */long long int) 4294967276U)) != (6530760001325117841LL))))))) : (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_5)), (arr_1 [i_0 + 1])))) ? (arr_2 [i_0 + 2]) : (((((/* implicit */_Bool) arr_2 [i_0])) ? (8593820027014797213LL) : (((/* implicit */long long int) 4294967292U))))))));
    }
    for (long long int i_1 = 0; i_1 < 22; i_1 += 2) 
    {
        var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) (short)-29028))) ? (((/* implicit */int) arr_5 [i_1])) : (((/* implicit */int) arr_5 [i_1]))))) && (((/* implicit */_Bool) min((var_2), (((/* implicit */unsigned long long int) arr_5 [i_1])))))));
        var_17 -= ((/* implicit */signed char) ((_Bool) ((unsigned int) arr_4 [i_1])));
        var_18 = ((/* implicit */unsigned char) ((var_0) ? (((int) arr_4 [i_1])) : (((/* implicit */int) min((min((arr_4 [i_1]), (arr_4 [i_1]))), (arr_4 [i_1]))))));
        var_19 = ((/* implicit */unsigned short) (-(((/* implicit */int) ((((/* implicit */int) arr_5 [i_1])) >= (((/* implicit */int) arr_5 [i_1])))))));
    }
    for (long long int i_2 = 0; i_2 < 13; i_2 += 1) 
    {
        var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) min((((((/* implicit */_Bool) -6530760001325117841LL)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_4 [i_2])))), (((/* implicit */int) ((unsigned char) -5947064750775663059LL)))))) - (((((/* implicit */_Bool) arr_6 [i_2])) ? (((((/* implicit */_Bool) 4294967280U)) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (arr_2 [i_2]))) : (((/* implicit */long long int) min((((/* implicit */int) var_9)), (arr_7 [i_2] [i_2]))))))));
        var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_2])) ? (arr_1 [i_2]) : (((/* implicit */unsigned long long int) var_8))))) ? (((arr_2 [i_2]) / (((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_2]))) : (arr_2 [i_2]))))) : (((/* implicit */long long int) 0U))));
        var_22 = ((/* implicit */int) arr_6 [i_2]);
    }
    /* LoopNest 2 */
    for (long long int i_3 = 0; i_3 < 16; i_3 += 4) 
    {
        for (signed char i_4 = 0; i_4 < 16; i_4 += 3) 
        {
            {
                var_23 = ((/* implicit */unsigned short) ((unsigned int) min((((/* implicit */int) var_5)), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_14 [i_3] [i_3])) : (((/* implicit */int) var_9)))))));
                var_24 = ((/* implicit */int) min((((/* implicit */long long int) (_Bool)1)), (((((var_6) < (((/* implicit */int) var_1)))) ? (max((((/* implicit */long long int) arr_12 [i_3] [i_4] [i_3])), (6530760001325117850LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_10 [i_3])) ? (((/* implicit */int) arr_9 [i_3])) : (((/* implicit */int) arr_11 [i_3] [i_4])))))))));
                arr_16 [i_3] [i_4] [i_4] = ((/* implicit */unsigned int) arr_15 [i_3]);
                /* LoopSeq 1 */
                /* vectorizable */
                for (int i_5 = 1; i_5 < 13; i_5 += 2) 
                {
                    arr_20 [i_3] [i_4] [i_4] &= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_3] [i_5])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_9 [i_5]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_3]))))) : ((-(((/* implicit */int) (unsigned short)52027))))));
                    var_25 = ((/* implicit */long long int) min((var_25), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_18 [i_5 - 1] [i_5 + 1] [i_5])) ? (((/* implicit */int) arr_18 [i_5] [i_5 + 2] [i_5])) : (((/* implicit */int) arr_18 [i_5] [i_5 + 2] [i_5])))))));
                }
            }
        } 
    } 
    var_26 = ((/* implicit */_Bool) var_13);
    var_27 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned short) (-(((/* implicit */int) var_10)))))) ? (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_12)) : (var_6)))), (min((((/* implicit */unsigned long long int) (short)18475)), (0ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) min((var_6), (((/* implicit */int) var_12))))) || (((/* implicit */_Bool) var_4))))))));
}
