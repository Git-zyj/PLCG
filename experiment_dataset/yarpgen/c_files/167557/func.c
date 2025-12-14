/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167557
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167557 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167557
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
    var_19 = ((/* implicit */signed char) var_15);
    var_20 = ((/* implicit */unsigned char) 1461103306);
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 14; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            for (short i_2 = 1; i_2 < 15; i_2 += 3) 
            {
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (long long int i_3 = 0; i_3 < 17; i_3 += 3) /* same iter space */
                    {
                        arr_11 [i_0] [i_2] [i_1] [i_0] = ((/* implicit */long long int) -5196097);
                        /* LoopSeq 1 */
                        for (unsigned char i_4 = 0; i_4 < 17; i_4 += 1) 
                        {
                            var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) 4398038122496ULL)) ? ((~(-5196097))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) 0LL)) == (arr_3 [i_2] [i_4]))))));
                            var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) (+(var_1))))));
                            var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) (!(((/* implicit */_Bool) (-(18446739675671429119ULL)))))))));
                        }
                        arr_14 [i_0] = ((/* implicit */int) (unsigned char)37);
                        var_24 |= (((!(((/* implicit */_Bool) (short)-13279)))) ? (((/* implicit */unsigned long long int) -3542015712492287280LL)) : (4398038122496ULL));
                    }
                    /* vectorizable */
                    for (long long int i_5 = 0; i_5 < 17; i_5 += 3) /* same iter space */
                    {
                        arr_18 [(signed char)15] [i_0] [i_0] [i_5] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0] [i_5])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -107675146)))))) : (33554176ULL)));
                        var_25 &= ((/* implicit */long long int) -1);
                    }
                    /* LoopNest 2 */
                    for (short i_6 = 0; i_6 < 17; i_6 += 3) 
                    {
                        for (signed char i_7 = 0; i_7 < 17; i_7 += 1) 
                        {
                            {
                                var_26 = ((/* implicit */short) var_7);
                                var_27 = ((/* implicit */long long int) max((-1461103307), (((/* implicit */int) arr_22 [i_0] [i_1] [i_1] [i_0] [i_0]))));
                            }
                        } 
                    } 
                    var_28 = ((/* implicit */unsigned long long int) (short)31781);
                    /* LoopSeq 1 */
                    for (unsigned long long int i_8 = 0; i_8 < 17; i_8 += 3) 
                    {
                        arr_27 [16LL] &= ((/* implicit */signed char) max((((/* implicit */long long int) -5196075)), (((long long int) (signed char)0))));
                        var_29 = ((/* implicit */short) min((var_29), (((/* implicit */short) -1681883990103192422LL))));
                    }
                    var_30 = ((/* implicit */unsigned char) min((var_30), (((/* implicit */unsigned char) (short)2709))));
                }
            } 
        } 
    } 
    var_31 = ((/* implicit */long long int) (+((+(((unsigned long long int) -9052720660790108099LL))))));
    var_32 = ((/* implicit */short) (signed char)31);
}
