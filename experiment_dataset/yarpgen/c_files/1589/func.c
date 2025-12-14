/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1589
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1589 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1589
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
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        var_18 ^= ((/* implicit */unsigned int) ((((/* implicit */int) arr_1 [i_0] [i_0])) + (((/* implicit */int) arr_0 [i_0] [(_Bool)1]))));
        var_19 = ((/* implicit */unsigned int) (signed char)-20);
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 10; i_1 += 1) 
        {
            for (signed char i_2 = 4; i_2 < 10; i_2 += 1) 
            {
                for (short i_3 = 2; i_3 < 8; i_3 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned short i_4 = 0; i_4 < 12; i_4 += 1) 
                        {
                            arr_14 [i_0] [i_0] [i_2] [i_3] [i_4] = ((/* implicit */short) min(((signed char)-118), ((signed char)117)));
                            var_20 = ((/* implicit */unsigned long long int) var_12);
                        }
                        var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) ((signed char) 5610390705491056500LL)))))) ? (((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-120))) : (arr_10 [8ULL] [i_2 + 2] [i_3]))) : (((/* implicit */unsigned int) arr_12 [i_2]))));
                        var_22 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)65521)) ? (((/* implicit */int) (signed char)118)) : (((/* implicit */int) (_Bool)1))));
                    }
                } 
            } 
        } 
    }
    var_23 = ((/* implicit */signed char) max((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)208))) ^ (var_13))), (((/* implicit */unsigned int) (short)15358))));
    var_24 = ((/* implicit */short) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) var_17))) : (var_11)));
}
