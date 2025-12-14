/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158286
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158286 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158286
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
    var_11 = ((/* implicit */signed char) var_5);
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_12 = ((/* implicit */unsigned short) ((signed char) var_6));
        /* LoopSeq 2 */
        for (long long int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            arr_5 [i_0] [i_0] [i_1] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((2549155460414768187LL), (((/* implicit */long long int) 2147483647))))) ? (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) (unsigned short)13367)) : (((/* implicit */int) (signed char)(-127 - 1))))) : (((((/* implicit */_Bool) (signed char)108)) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) (signed char)122))))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((((/* implicit */int) (signed char)(-127 - 1))) == (((/* implicit */int) (signed char)122)))))))) : (((((/* implicit */_Bool) (unsigned short)55770)) ? (((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_0 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-123))))) : (((/* implicit */long long int) ((/* implicit */int) min((var_7), (var_7))))))));
            var_13 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */int) (signed char)-123)) : (((/* implicit */int) arr_3 [i_0])))), (((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-113)) - (((/* implicit */int) (signed char)22))))) ? (((/* implicit */int) max((((/* implicit */short) (signed char)119)), (arr_4 [i_0])))) : (((((/* implicit */int) arr_3 [i_0])) & (((/* implicit */int) (_Bool)1))))))));
            var_14 &= ((/* implicit */unsigned short) (((_Bool)1) ? (((/* implicit */int) (signed char)20)) : (((/* implicit */int) min(((signed char)1), (((/* implicit */signed char) (!((_Bool)1)))))))));
        }
        for (long long int i_2 = 1; i_2 < 19; i_2 += 1) 
        {
            var_15 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-9)) ? (((((-114392883977226062LL) <= (2546853952652626550LL))) ? (((/* implicit */int) (signed char)-78)) : (((/* implicit */int) arr_4 [(signed char)12])))) : (((/* implicit */int) (((~(arr_0 [(signed char)16]))) > (((long long int) var_1)))))));
            arr_9 [i_0] = ((/* implicit */unsigned int) max(((((!(((/* implicit */_Bool) arr_3 [i_2])))) ? (((/* implicit */int) (unsigned char)208)) : (((((/* implicit */int) (signed char)-109)) - (((/* implicit */int) var_9)))))), (((/* implicit */int) (unsigned short)0))));
            var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) ((((((((/* implicit */_Bool) arr_4 [4LL])) ? (((/* implicit */int) arr_7 [(_Bool)1])) : (((/* implicit */int) (signed char)-101)))) <= (((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) (signed char)-117)))))) ? (((/* implicit */int) (!(arr_8 [i_2 - 1])))) : (((/* implicit */int) ((unsigned short) min((((/* implicit */unsigned int) (signed char)-122)), (1763891996U))))))))));
            var_17 = ((((arr_8 [i_0]) ? (((/* implicit */int) arr_8 [i_0])) : (((/* implicit */int) (signed char)37)))) >= (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-94))) > (3288566114989266159ULL)))));
            arr_10 [i_0] = (i_0 % 2 == zero) ? (((/* implicit */signed char) ((((((/* implicit */_Bool) arr_2 [i_2])) ? (((((((/* implicit */int) arr_4 [i_0])) + (2147483647))) << (((((/* implicit */int) (_Bool)1)) - (1))))) : ((+(((/* implicit */int) arr_1 [i_0])))))) <= (((/* implicit */int) (_Bool)0))))) : (((/* implicit */signed char) ((((((/* implicit */_Bool) arr_2 [i_2])) ? (((((((((/* implicit */int) arr_4 [i_0])) - (2147483647))) + (2147483647))) << (((((/* implicit */int) (_Bool)1)) - (1))))) : ((+(((/* implicit */int) arr_1 [i_0])))))) <= (((/* implicit */int) (_Bool)0)))));
        }
        var_18 = ((/* implicit */signed char) ((((/* implicit */int) (signed char)127)) != (((/* implicit */int) (short)-22863))));
        var_19 = ((/* implicit */signed char) arr_6 [i_0]);
    }
}
