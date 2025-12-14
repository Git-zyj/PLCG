/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180424
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180424 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180424
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
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            var_11 = ((/* implicit */long long int) max((max((((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_1]))) > (1682111025U)))), (arr_2 [i_0] [i_0] [i_0]))), (arr_2 [i_0] [i_0] [i_1])));
            var_12 = (-(1090251169917121989LL));
            var_13 = ((/* implicit */unsigned int) ((var_8) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_3))))) : (((/* implicit */int) var_9))));
            arr_6 [i_1] [i_1] [10ULL] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((var_8) ? (arr_4 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned char)87), (((/* implicit */unsigned char) arr_1 [i_1] [i_0])))))))))));
            var_14 &= ((/* implicit */unsigned long long int) ((unsigned char) (unsigned char)87));
        }
        var_15 |= ((max((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)169)) >= (((/* implicit */int) (unsigned char)96))))), (max((var_10), (((/* implicit */unsigned long long int) arr_0 [i_0] [i_0])))))) / (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)165))));
        arr_7 [i_0] = ((/* implicit */long long int) (+(((/* implicit */int) ((_Bool) (-(((/* implicit */int) arr_2 [i_0] [3U] [7U]))))))));
        var_16 ^= ((/* implicit */_Bool) arr_4 [i_0]);
        arr_8 [(_Bool)1] &= ((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */int) arr_5 [(signed char)8])) < (((/* implicit */int) arr_5 [(_Bool)1])))))));
    }
    var_17 = var_3;
    /* LoopNest 2 */
    for (unsigned long long int i_2 = 3; i_2 < 12; i_2 += 4) 
    {
        for (short i_3 = 0; i_3 < 15; i_3 += 1) 
        {
            {
                arr_16 [(_Bool)1] [i_3] = max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_13 [i_2 - 3]))))), (var_10));
                var_18 *= ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) arr_9 [i_2 + 1])))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)186))) : ((~(((long long int) (unsigned char)169))))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) var_5))));
    var_20 *= ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) min((((/* implicit */int) var_8)), ((-(var_2)))))), (var_4)));
}
