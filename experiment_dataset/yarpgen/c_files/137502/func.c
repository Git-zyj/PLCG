/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137502
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137502 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137502
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
    for (long long int i_0 = 1; i_0 < 21; i_0 += 4) 
    {
        arr_4 [i_0] [i_0] = ((((long long int) min((-4893497321086076938LL), (0LL)))) & (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) max((6541871669591980112LL), (-6541871669591980112LL)))))))));
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 22; i_2 += 1) 
            {
                {
                    arr_9 [i_2] [i_0] [i_2] [17LL] = 7830428895269699080LL;
                    arr_10 [i_1] [i_1] [i_1] [i_0] = max((((arr_5 [i_0 - 1] [i_0 - 1]) / (-6541871669591980112LL))), (((((/* implicit */_Bool) arr_8 [i_0] [i_0])) ? (((((/* implicit */_Bool) -8150155138880915978LL)) ? (arr_2 [i_0]) : (var_1))) : (-5174254278560699204LL))));
                    var_12 = ((/* implicit */long long int) (!(((/* implicit */_Bool) min((((var_0) & (var_0))), (arr_8 [i_0 + 1] [i_0]))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (long long int i_3 = 3; i_3 < 21; i_3 += 4) 
        {
            for (long long int i_4 = 0; i_4 < 22; i_4 += 2) 
            {
                {
                    var_13 = ((/* implicit */long long int) max((var_13), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_2), (9164276114367803216LL)))) ? (arr_2 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_3))))))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))) : (var_9)))))))));
                    arr_15 [i_0] = ((((long long int) 8150155138880915977LL)) & (max((((arr_5 [i_4] [i_0]) ^ (var_11))), (arr_12 [i_3 - 2] [i_0] [i_3 - 2]))));
                    arr_16 [i_0] = (-(min((((arr_6 [i_0] [i_0]) ^ (arr_8 [1LL] [i_0]))), (var_3))));
                }
            } 
        } 
    }
    /* LoopNest 3 */
    for (long long int i_5 = 0; i_5 < 25; i_5 += 4) 
    {
        for (long long int i_6 = 0; i_6 < 25; i_6 += 4) 
        {
            for (long long int i_7 = 1; i_7 < 24; i_7 += 3) 
            {
                {
                    var_14 = ((/* implicit */long long int) min((var_14), ((~(arr_26 [i_5] [i_6] [i_5] [i_6])))));
                    /* LoopNest 2 */
                    for (long long int i_8 = 0; i_8 < 25; i_8 += 2) 
                    {
                        for (long long int i_9 = 0; i_9 < 25; i_9 += 1) 
                        {
                            {
                                var_15 = ((((/* implicit */_Bool) 3517859046733596114LL)) ? (arr_30 [i_5] [i_5] [i_5] [i_8] [i_5]) : (arr_25 [i_5] [i_5] [i_9] [i_8]));
                                var_16 = (~(max((-256LL), (((((/* implicit */_Bool) -4906816458796129016LL)) ? (var_6) : (-8423253968802501764LL))))));
                                var_17 = (~(65528LL));
                                arr_33 [i_5] [i_6] [0LL] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_27 [i_7 + 1] [22LL] [i_7] [i_8])) ? (6541871669591980106LL) : (arr_25 [i_7 - 1] [i_6] [i_5] [i_9]))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
