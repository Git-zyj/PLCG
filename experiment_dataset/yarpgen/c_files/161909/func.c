/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161909
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161909 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161909
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
    for (signed char i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        var_12 = ((/* implicit */int) arr_0 [i_0]);
        arr_2 [i_0] = ((/* implicit */_Bool) max((max((arr_1 [4U] [i_0]), (((/* implicit */unsigned int) max((((/* implicit */signed char) var_7)), (arr_0 [i_0])))))), (((/* implicit */unsigned int) -787361074))));
    }
    for (unsigned char i_1 = 0; i_1 < 25; i_1 += 2) 
    {
        var_13 |= ((/* implicit */_Bool) (signed char)-111);
        /* LoopSeq 1 */
        for (signed char i_2 = 3; i_2 < 24; i_2 += 1) 
        {
            var_14 ^= (!(((/* implicit */_Bool) min((arr_3 [i_2 - 1] [i_2 - 3]), (arr_3 [i_2 - 1] [i_2 - 1])))));
            /* LoopSeq 1 */
            for (unsigned int i_3 = 0; i_3 < 25; i_3 += 2) 
            {
                var_15 = ((/* implicit */short) ((((/* implicit */_Bool) 3936345173U)) ? (0LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                var_16 = ((/* implicit */long long int) (+(((/* implicit */int) arr_4 [i_3]))));
                var_17 = ((/* implicit */unsigned short) max((((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_1] [i_3]))))), ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))));
            }
            var_18 ^= ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned short) (+(((/* implicit */int) var_6)))))) ? (((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */int) ((((/* implicit */int) (short)-22204)) <= (((/* implicit */int) (signed char)80))))) : (((/* implicit */int) var_1)))) : ((~(((/* implicit */int) var_6))))));
            arr_11 [i_2] [i_2] [i_2] = ((/* implicit */short) min((((/* implicit */unsigned int) min(((short)-22212), (((/* implicit */short) (_Bool)1))))), (arr_5 [i_2])));
        }
    }
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        var_19 += ((/* implicit */unsigned int) max((((((/* implicit */int) (short)22217)) / (((/* implicit */int) (short)-22187)))), (((/* implicit */int) ((_Bool) arr_3 [i_4] [i_4])))));
        var_20 = ((/* implicit */unsigned char) (+(((/* implicit */int) ((max((((/* implicit */int) arr_12 [i_4] [(_Bool)1])), (arr_3 [i_4] [i_4]))) != (((/* implicit */int) arr_6 [i_4])))))));
        var_21 = ((/* implicit */unsigned char) (+(((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) arr_12 [i_4] [i_4])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (unsigned short)5))))))));
        var_22 = ((/* implicit */_Bool) min((((/* implicit */int) arr_4 [i_4])), ((+(((/* implicit */int) max(((signed char)0), ((signed char)0))))))));
    }
    var_23 = ((/* implicit */short) min((((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)20))))) ? ((+(4435087398810106895ULL))) : ((~(4435087398810106874ULL))))), (((/* implicit */unsigned long long int) max((var_9), (((/* implicit */unsigned short) ((var_0) >= (((/* implicit */int) (_Bool)1))))))))));
    var_24 |= ((var_0) < (((/* implicit */int) ((var_7) || (((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)0)))))))));
}
