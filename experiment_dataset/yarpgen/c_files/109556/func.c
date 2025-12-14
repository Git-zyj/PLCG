/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109556
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109556 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109556
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
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        var_10 = ((/* implicit */short) min((var_10), (((/* implicit */short) ((((var_1) && (((/* implicit */_Bool) arr_0 [i_0])))) || (((/* implicit */_Bool) arr_0 [i_0])))))));
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            var_11 = ((/* implicit */unsigned int) min((var_11), (((/* implicit */unsigned int) ((((unsigned int) arr_1 [i_0] [i_1])) < (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_1]))))))));
            var_12 = ((/* implicit */int) min((var_12), (((/* implicit */int) ((((/* implicit */_Bool) (~(var_9)))) ? (((unsigned long long int) (+(((/* implicit */int) var_4))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))))));
            arr_5 [(signed char)6] [i_0] [i_0] = ((/* implicit */short) var_4);
            var_13 |= ((/* implicit */unsigned char) ((((min((-5453477224842529540LL), (((/* implicit */long long int) (short)0)))) + (9223372036854775807LL))) >> (((/* implicit */int) (!(((/* implicit */_Bool) ((int) (signed char)-105))))))));
            var_14 = ((/* implicit */long long int) max((((/* implicit */short) ((var_7) < (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_1])))))), (max((arr_2 [i_0] [i_1]), (arr_2 [i_0] [i_1])))));
        }
        for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
        {
            arr_9 [i_2] [i_2 + 1] = ((/* implicit */unsigned int) (+(-9012194020965160840LL)));
            /* LoopNest 2 */
            for (signed char i_3 = 0; i_3 < 19; i_3 += 4) 
            {
                for (int i_4 = 0; i_4 < 19; i_4 += 2) 
                {
                    {
                        var_15 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) var_2))))) & (((((/* implicit */_Bool) arr_4 [i_2 + 1])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (signed char)81)))))))));
                        arr_15 [i_2] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_3] [i_4] [i_3] [i_2] [i_2] [i_4])) ? (((/* implicit */int) ((unsigned short) -903836243))) : (((/* implicit */int) arr_14 [i_2] [i_2 + 1] [i_2 + 1]))))) || (arr_8 [i_3] [i_3] [i_2]));
                    }
                } 
            } 
            var_16 &= ((/* implicit */unsigned char) var_3);
        }
        var_17 ^= ((/* implicit */unsigned int) ((min((((((/* implicit */_Bool) var_4)) ? (var_2) : (((/* implicit */int) var_6)))), (((((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) (signed char)108)) : (((/* implicit */int) var_1)))))) & (((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_6)), (arr_12 [0ULL] [0ULL])))) ? (((/* implicit */int) max(((signed char)100), ((signed char)81)))) : (min((((/* implicit */int) var_6)), (var_2)))))));
    }
    var_18 = ((/* implicit */short) var_0);
}
