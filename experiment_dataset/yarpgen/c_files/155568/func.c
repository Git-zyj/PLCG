/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155568
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155568 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155568
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
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            {
                var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) ((((((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_1]))))) != (((/* implicit */int) min(((short)18872), (((/* implicit */short) var_19))))))) ? (((/* implicit */long long int) (~((~(((/* implicit */int) arr_5 [i_0]))))))) : (((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_1 [i_1]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)41029))))))))));
                /* LoopSeq 1 */
                for (long long int i_2 = 1; i_2 < 11; i_2 += 1) 
                {
                    var_21 = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_2 [i_2 - 1] [i_2 - 1] [i_2])) && (((/* implicit */_Bool) var_8)))) ? (((/* implicit */int) arr_2 [i_2 + 2] [i_2 + 1] [i_2])) : (((/* implicit */int) ((((/* implicit */int) (short)18872)) >= (((/* implicit */int) (signed char)-102)))))));
                    arr_8 [i_0] [10ULL] [i_0] = ((/* implicit */unsigned char) var_8);
                }
                arr_9 [(_Bool)1] [(_Bool)1] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */_Bool) -23LL)) || ((_Bool)1))))));
                arr_10 [i_0] = ((/* implicit */int) (-((~(33LL)))));
                var_22 *= ((/* implicit */short) ((((/* implicit */_Bool) ((signed char) arr_4 [i_0]))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_0] [i_0])) && (((((/* implicit */_Bool) -5943754084806278293LL)) || (((/* implicit */_Bool) (unsigned short)24484))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)182)))))));
            }
        } 
    } 
    var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) 17LL)) && (((/* implicit */_Bool) (unsigned short)41024)))) ? (7750489790425444490LL) : (((((/* implicit */_Bool) (short)13179)) ? (var_11) : (((/* implicit */long long int) var_6))))))) || ((!(((/* implicit */_Bool) (short)32767))))));
    var_24 = ((/* implicit */_Bool) (-(var_4)));
}
