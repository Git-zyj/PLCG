/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160534
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160534 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160534
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
    var_13 &= max((((min((18446744073709551609ULL), (((/* implicit */unsigned long long int) (_Bool)1)))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))), (((((/* implicit */_Bool) -3956107398506688801LL)) || (((/* implicit */_Bool) var_12)))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        {
                            var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) ((((/* implicit */int) ((max((13510798882111488LL), (((/* implicit */long long int) var_10)))) >= (-3956107398506688782LL)))) | (((((/* implicit */int) max((var_1), (var_8)))) + (((/* implicit */int) ((((/* implicit */int) var_8)) >= (((/* implicit */int) (_Bool)1))))))))))));
                            arr_10 [(short)18] [i_0] [i_2] = var_8;
                        }
                    } 
                } 
                var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) min((((/* implicit */long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) var_7))) | (var_12))) & (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))), (((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)43512))))) ? (min((arr_6 [(short)3] [(signed char)12] [(signed char)12] [i_0]), (((/* implicit */long long int) (signed char)(-127 - 1))))) : (-1LL))))))));
                var_16 |= ((/* implicit */unsigned long long int) var_10);
                var_17 = ((/* implicit */long long int) var_4);
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) ((((/* implicit */int) (signed char)-102)) < (((((/* implicit */int) ((var_2) == (((/* implicit */long long int) ((/* implicit */int) var_7)))))) - (((/* implicit */int) (signed char)4)))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_4 = 0; i_4 < 13; i_4 += 1) 
    {
        var_19 ^= ((/* implicit */_Bool) ((((((/* implicit */_Bool) var_6)) ? (13LL) : (((/* implicit */long long int) ((/* implicit */int) var_5))))) >> ((((~(((/* implicit */int) var_9)))) + (24248)))));
        arr_14 [i_4] = var_9;
    }
    var_20 *= ((/* implicit */signed char) var_0);
}
